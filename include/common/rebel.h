// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_H
#define REBEL_H

#include "api/gdnative_api_struct.gen.h"
#include "api/nativescript/rebel_nativescript.h"
#include "common/commontypes.h"
#include "common/rebelglobal.h"
#include "common/ref.h"
#include "common/tagdb.h"
#include "common/variant.h"

#include <cstdlib>
#include <cstring>
#include <type_traits>
#include <typeinfo>

class Object;

namespace Rebel {
namespace detail {
// Rebel classes are wrapped by heap-allocated instances mimicking them through
// the C API. They all inherit `Wrapped`.
template <class T>
T* get_wrapper(rebel_object* obj) {
    return (T*)
        nativescript_1_1_api->rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            obj
        );
}

// Custom class instances are not obtainable by just casting the pointer to the
// base class they inherit, partly because in Rebel, scripts are not instances
// of the classes themselves, they are only attached to them. Yet we want to
// "fake" it as if they were the same entity.
template <class T>
T* get_custom_class_instance(const Object* obj) {
    return (obj)
             ? (T*)nativescript_api->rebel_nativescript_get_userdata(obj->owner)
             : nullptr;
}

template <class T>
inline T* create_custom_class_instance() {
    // Usually, script instances hold a reference to their NativeScript
    // resource. that resource is obtained from a `.gdns` file, which in turn
    // exists because of the resource system of Rebel. We can't cleanly hardcode
    // that here, so the easiest for now (though not really clean) is to create
    // new resource instances, individually attached to the script instances.

    // We cannot use wrappers because of
    // https://github.com/godotengine/godot/issues/39181
    //	NativeScript *script = NativeScript::_new();
    //	script->set_library(get_wrapper<GDNativeLibrary>((rebel_object
    //*)gdnlib)); 	script->set_class_name(T::_get_class_name());

    static_assert(
        T::CLASS_IS_SCRIPT,
        "This function must only be used on custom classes"
    );

    // So we use the C API directly.
    static rebel_class_constructor script_constructor =
        api->rebel_get_class_constructor("NativeScript");
    static rebel_method_bind* mb_set_library =
        api->rebel_method_bind_get_method("NativeScript", "set_library");
    static rebel_method_bind* mb_set_class_name =
        api->rebel_method_bind_get_method("NativeScript", "set_class_name");
    rebel_object* script = script_constructor();
    {
        const void* args[] = {gdnlib};
        api->rebel_method_bind_ptrcall(mb_set_library, script, args, nullptr);
    }
    {
        const String class_name = T::_get_class_name();
        const void* args[]      = {&class_name};
        api->rebel_method_bind_ptrcall(
            mb_set_class_name,
            script,
            args,
            nullptr
        );
    }

    // Now to instanciate T, we initially did this, however in case of Reference
    // it returns a variant with refcount already initialized, which woud cause
    // inconsistent behavior compared to other classes (we still have to return
    // a pointer).
    // Variant instance_variant = script->new_();
    // T *instance = get_custom_class_instance<T>(instance_variant);

    // So we should do this instead, however while convenient, it uses
    // unnecessary wrapper objects.
    //	Object *base_obj = T::___new_rebel_base();
    //	base_obj->set_script(script);
    //	return get_custom_class_instance<T>(base_obj);

    // Again using the C API to do exactly what we have to do.
    static rebel_class_constructor base_constructor =
        api->rebel_get_class_constructor(T::get_rebel_class_name());
    static rebel_method_bind* mb_set_script =
        api->rebel_method_bind_get_method("Object", "set_script");
    rebel_object* base_obj = base_constructor();
    {
        const void* args[] = {script};
        api->rebel_method_bind_ptrcall(mb_set_script, base_obj, args, nullptr);
    }

    return (T*)nativescript_api->rebel_nativescript_get_userdata(base_obj);
}
} // namespace detail

// Used in the definition of a custom class.
//
// Name:                       Name of your class, without namespace
// Base:                       Name of the direct base class, with namespace
//
// _get_class_name:            Name of your class.
// get_rebel_class_name:       Name of the Rebel base class this class inherits
// create:                     Creates a new instance of the class
// get_class_tag:              Gets the unique ID of the class.
// get_base_id:                Gets the ID of the direct base class
// get_base_class_name:        Name of the direct base class
// from_variant:               Converts a Variant into an Object*.
#define REBEL_CLASS(Name, Base)                                                \
                                                                               \
public:                                                                        \
    inline static const char* _get_class_name() {                              \
        return #Name;                                                          \
    }                                                                          \
    enum {                                                                     \
        CLASS_IS_SCRIPT = 1                                                    \
    };                                                                         \
    inline static const char* get_rebel_class_name() {                         \
        return Base::get_rebel_class_name();                                   \
    }                                                                          \
    inline static Name* create() {                                             \
        return detail::create_custom_class_instance<Name>();                   \
    }                                                                          \
    inline static size_t get_class_tag() {                                     \
        return typeid(Name).hash_code();                                       \
    }                                                                          \
    inline static size_t get_base_id() {                                       \
        return Base::get_class_tag();                                          \
    }                                                                          \
    inline static const char* get_base_class_name() {                          \
        return Base::_get_class_name();                                        \
    }                                                                          \
    inline static Object* from_variant(Variant a) {                            \
        return (Object*)detail::get_custom_class_instance<Name>(               \
            Object::from_variant(a)                                            \
        );                                                                     \
    }                                                                          \
                                                                               \
private:

// Legacy compatibility.
#define REBEL_SUBCLASS(Name, Base) REBEL_CLASS(Name, Base)

template <class T>
struct _ArgCast {
    static T _arg_cast(Variant a) {
        return a;
    }
};

template <class T>
struct _ArgCast<T*> {
    static T* _arg_cast(Variant a) {
        return (T*)T::from_variant(a);
    }
};

template <>
struct _ArgCast<Variant> {
    static Variant _arg_cast(Variant a) {
        return a;
    }
};

// instance and destroy funcs

template <class T>
void* _rebel_class_instance_func(rebel_object* p, void* /*method_data*/) {
    T* d        = new T();
    d->owner    = p;
    d->type_tag = typeid(T).hash_code();
    d->init();
    return d;
}

template <class T>
void _rebel_class_destroy_func(
    rebel_object* /*p*/,
    void* /*method_data*/,
    void* data
) {
    T* d = (T*)data;
    delete d;
}

template <class T>
void register_class() {
    static_assert(
        T::CLASS_IS_SCRIPT,
        "This function must only be used on custom classes"
    );

    rebel_instance_create_func create = {};
    create.create_func                = _rebel_class_instance_func<T>;

    rebel_instance_destroy_func destroy = {};
    destroy.destroy_func                = _rebel_class_destroy_func<T>;

    TagDB::register_type(T::get_class_tag(), T::___get_base_id());

    nativescript_api->rebel_nativescript_register_class(
        RegisterState::nativescript_handle,
        T::_get_class_name(),
        T::get_base_class_name(),
        create,
        destroy
    );

    nativescript_1_1_api->rebel_nativescript_set_type_tag(
        RegisterState::nativescript_handle,
        T::_get_class_name(),
        (const void*)T::get_class_tag()
    );

    T::register_methods();
}

template <class T>
void register_tool_class() {
    static_assert(
        T::CLASS_IS_SCRIPT,
        "This function must only be used on custom classes"
    );

    rebel_instance_create_func create = {};
    create.create_func                = _rebel_class_instance_func<T>;

    rebel_instance_destroy_func destroy = {};
    destroy.destroy_func                = _rebel_class_destroy_func<T>;

    TagDB::register_type(T::get_class_tag(), T::get_base_id());

    nativescript_api->rebel_nativescript_register_tool_class(
        RegisterState::nativescript_handle,
        T::_get_class_name(),
        T::get_base_class_name(),
        create,
        destroy
    );

    nativescript_1_1_api->rebel_nativescript_set_type_tag(
        RegisterState::nativescript_handle,
        T::_get_class_name(),
        (const void*)T::get_class_tag()
    );

    T::register_methods();
}

// method registering

typedef rebel_variant (*__rebel_wrapper_method)(rebel_object*, void*, void*, int, rebel_variant**);

template <class T, class R, class... args>
const char* ___get_method_class_name(R (T::*p)(args... a)) {
    static_assert(
        T::CLASS_IS_SCRIPT,
        "This function must only be used on custom classes"
    );
    (void)p; // To avoid "unused parameter" warnings. `p` is required for
             // template matching.
    return T::_get_class_name();
}

// This second version is also required to match constant functions
template <class T, class R, class... args>
const char* ___get_method_class_name(R (T::*p)(args... a) const) {
    static_assert(
        T::CLASS_IS_SCRIPT,
        "This function must only be used on custom classes"
    );
    (void)p; // To avoid "unused parameter" warnings. `p` is required for
             // template matching.
    return T::_get_class_name();
}

// Okay, time for some template magic.
// Many thanks to manpat from the GDL Discord Server.

// This is stuff that's available in C++14 I think, but whatever.

template <int... I>
struct __Sequence {};

template <int N, int... I>
struct __construct_sequence {
    using type = typename __construct_sequence<N - 1, N - 1, I...>::type;
};

template <int... I>
struct __construct_sequence<0, I...> {
    using type = __Sequence<I...>;
};

// Now the wrapping part.
template <class T, class R, class... As>
struct WrappedMethod {
    R(T::*f)
    (As...);

    template <int... I>
    void apply(Variant* ret, T* obj, Variant** args, __Sequence<I...>) {
        *ret = (obj->*f)(_ArgCast<As>::_arg_cast(*args[I])...);
    }
};

template <class T, class... As>
struct WrappedMethod<T, void, As...> {
    void (T::*f)(As...);

    template <int... I>
    void apply(Variant* /*ret*/, T* obj, Variant** args, __Sequence<I...>) {
        (obj->*f)(_ArgCast<As>::_arg_cast(*args[I])...);
    }
};

template <class T, class R, class... As>
rebel_variant __wrapped_method(
    rebel_object*,
    void* method_data,
    void* user_data,
    int /*num_args*/,
    rebel_variant** args
) {
    rebel_variant v;
    api->rebel_variant_new_nil(&v);

    T* obj = (T*)user_data;
    WrappedMethod<T, R, As...>* method =
        (WrappedMethod<T, R, As...>*)method_data;

    Variant* var  = (Variant*)&v;
    Variant** arg = (Variant**)args;

    method->apply(
        var,
        obj,
        arg,
        typename __construct_sequence<sizeof...(As)>::type{}
    );

    return v;
}

template <class T, class R, class... As>
void* ___make_wrapper_function(R (T::*f)(As...)) {
    using MethodType = WrappedMethod<T, R, As...>;
    MethodType* p    = (MethodType*)api->rebel_alloc(sizeof(MethodType));
    p->f             = f;
    return (void*)p;
}

template <class T, class R, class... As>
__rebel_wrapper_method ___get_wrapper_function(R (T::* /*f*/)(As...)) {
    return (__rebel_wrapper_method)&__wrapped_method<T, R, As...>;
}

template <class T, class R, class... A>
void* ___make_wrapper_function(R (T::*f)(A...) const) {
    return ___make_wrapper_function((R(T::*)(A...))f);
}

template <class T, class R, class... A>
__rebel_wrapper_method ___get_wrapper_function(R (T::*f)(A...) const) {
    return ___get_wrapper_function((R(T::*)(A...))f);
}

template <class M>
void register_method(
    const char* name,
    M method_ptr,
    rebel_method_rpc_mode rpc_type = REBEL_METHOD_RPC_MODE_DISABLED
) {
    rebel_instance_method method = {};
    method.method_data           = ___make_wrapper_function(method_ptr);
    method.free_func             = api->rebel_free;
    method.method = (__rebel_wrapper_method)___get_wrapper_function(method_ptr);

    rebel_method_attributes attr = {};
    attr.rpc_type                = rpc_type;

    nativescript_api->rebel_nativescript_register_method(
        RegisterState::nativescript_handle,
        ___get_method_class_name(method_ptr),
        name,
        attr,
        method
    );
}

// User can specify a derived class D to register the method for, instead of it
// being inferred.
template <class D, class B, class R, class... As>
void register_method_explicit(
    const char* name,
    R (B::*method_ptr)(As...),
    rebel_method_rpc_mode rpc_type = REBEL_METHOD_RPC_MODE_DISABLED
) {
    static_assert(
        std::is_base_of<B, D>::value,
        "Explicit class must derive from method class"
    );
    register_method(name, static_cast<R (D::*)(As...)>(method_ptr), rpc_type);
}

template <class T, class P>
struct _PropertySetFunc {
    void (T::*f)(P);

    static void _wrapped_setter(
        rebel_object* /*object*/,
        void* method_data,
        void* user_data,
        rebel_variant* value
    ) {
        _PropertySetFunc<T, P>* set_func = (_PropertySetFunc<T, P>*)method_data;
        T* obj                           = (T*)user_data;

        Variant* v = (Variant*)value;

        (obj->*(set_func->f))(_ArgCast<P>::_arg_cast(*v));
    }
};

template <class T, class P>
struct _PropertyGetFunc {
    P(T::*f)
    ();

    static rebel_variant _wrapped_getter(
        rebel_object* /*object*/,
        void* method_data,
        void* user_data
    ) {
        _PropertyGetFunc<T, P>* get_func = (_PropertyGetFunc<T, P>*)method_data;
        T* obj                           = (T*)user_data;

        rebel_variant var;
        api->rebel_variant_new_nil(&var);

        Variant* v = (Variant*)&var;

        *v = (obj->*(get_func->f))();

        return var;
    }
};

template <class T, class P>
struct _PropertyDefaultSetFunc {
    P(T::*f);

    static void _wrapped_setter(
        rebel_object* /*object*/,
        void* method_data,
        void* user_data,
        rebel_variant* value
    ) {
        _PropertyDefaultSetFunc<T, P>* set_func =
            (_PropertyDefaultSetFunc<T, P>*)method_data;
        T* obj = (T*)user_data;

        Variant* v = (Variant*)value;

        (obj->*(set_func->f)) = _ArgCast<P>::_arg_cast(*v);
    }
};

template <class T, class P>
struct _PropertyDefaultGetFunc {
    P(T::*f);

    static rebel_variant _wrapped_getter(
        rebel_object* /*object*/,
        void* method_data,
        void* user_data
    ) {
        _PropertyDefaultGetFunc<T, P>* get_func =
            (_PropertyDefaultGetFunc<T, P>*)method_data;
        T* obj = (T*)user_data;

        rebel_variant var;
        api->rebel_variant_new_nil(&var);

        Variant* v = (Variant*)&var;

        *v = (obj->*(get_func->f));

        return var;
    }
};

template <class T, class P>
void register_property(
    const char* name,
    P(T::*var),
    P default_value,
    rebel_method_rpc_mode rpc_mode   = REBEL_METHOD_RPC_MODE_DISABLED,
    rebel_property_usage_flags usage = REBEL_PROPERTY_USAGE_DEFAULT,
    rebel_property_hint hint         = REBEL_PROPERTY_HINT_NONE,
    String hint_string               = ""
) {
    static_assert(
        T::CLASS_IS_SCRIPT,
        "This function must only be used on custom classes"
    );

    Variant def_val = default_value;

    usage =
        (rebel_property_usage_flags)((int)usage
                                     | REBEL_PROPERTY_USAGE_SCRIPT_VARIABLE);

    if (def_val.get_type() == Variant::OBJECT) {
        Object* o =
            detail::get_wrapper<Object>(def_val.operator rebel_object*());
        if (o && o->is_class("Resource")) {
            hint        = (rebel_property_hint)((int)hint
                                         | REBEL_PROPERTY_HINT_RESOURCE_TYPE);
            hint_string = o->get_class();
        }
    }

    rebel_string* _hint_string = (rebel_string*)&hint_string;

    rebel_property_attributes attr = {};
    if (def_val.get_type() == Variant::NIL) {
        attr.type = Variant::OBJECT;
    } else {
        attr.type          = def_val.get_type();
        attr.default_value = *(rebel_variant*)&def_val;
    }

    attr.hint        = hint;
    attr.rset_type   = rpc_mode;
    attr.usage       = usage;
    attr.hint_string = *_hint_string;

    _PropertyDefaultSetFunc<T, P>* wrapped_set =
        (_PropertyDefaultSetFunc<T, P>*)api->rebel_alloc(
            sizeof(_PropertyDefaultSetFunc<T, P>)
        );
    wrapped_set->f = var;

    _PropertyDefaultGetFunc<T, P>* wrapped_get =
        (_PropertyDefaultGetFunc<T, P>*)api->rebel_alloc(
            sizeof(_PropertyDefaultGetFunc<T, P>)
        );
    wrapped_get->f = var;

    rebel_property_set_func set_func = {};
    set_func.method_data             = (void*)wrapped_set;
    set_func.free_func               = api->rebel_free;
    set_func.set_func = &_PropertyDefaultSetFunc<T, P>::_wrapped_setter;

    rebel_property_get_func get_func = {};
    get_func.method_data             = (void*)wrapped_get;
    get_func.free_func               = api->rebel_free;
    get_func.get_func = &_PropertyDefaultGetFunc<T, P>::_wrapped_getter;

    nativescript_api->rebel_nativescript_register_property(
        RegisterState::nativescript_handle,
        T::_get_class_name(),
        name,
        &attr,
        set_func,
        get_func
    );
}

template <class T, class P>
void register_property(
    const char* name,
    void (T::*setter)(P),
    P (T::*getter)(),
    P default_value,
    rebel_method_rpc_mode rpc_mode   = REBEL_METHOD_RPC_MODE_DISABLED,
    rebel_property_usage_flags usage = REBEL_PROPERTY_USAGE_DEFAULT,
    rebel_property_hint hint         = REBEL_PROPERTY_HINT_NONE,
    String hint_string               = ""
) {
    static_assert(
        T::CLASS_IS_SCRIPT,
        "This function must only be used on custom classes"
    );

    Variant def_val = default_value;

    rebel_string* _hint_string = (rebel_string*)&hint_string;

    rebel_property_attributes attr = {};
    if (def_val.get_type() == Variant::NIL) {
        attr.type = Variant::OBJECT;
    } else {
        attr.type          = def_val.get_type();
        attr.default_value = *(rebel_variant*)&def_val;
    }
    attr.hint        = hint;
    attr.rset_type   = rpc_mode;
    attr.usage       = usage;
    attr.hint_string = *_hint_string;

    _PropertySetFunc<T, P>* wrapped_set =
        (_PropertySetFunc<T, P>*)api->rebel_alloc(sizeof(_PropertySetFunc<T, P>)
        );
    wrapped_set->f = setter;

    _PropertyGetFunc<T, P>* wrapped_get =
        (_PropertyGetFunc<T, P>*)api->rebel_alloc(sizeof(_PropertyGetFunc<T, P>)
        );
    wrapped_get->f = getter;

    rebel_property_set_func set_func = {};
    set_func.method_data             = (void*)wrapped_set;
    set_func.free_func               = api->rebel_free;
    set_func.set_func                = &_PropertySetFunc<T, P>::_wrapped_setter;

    rebel_property_get_func get_func = {};
    get_func.method_data             = (void*)wrapped_get;
    get_func.free_func               = api->rebel_free;
    get_func.get_func                = &_PropertyGetFunc<T, P>::_wrapped_getter;

    nativescript_api->rebel_nativescript_register_property(
        RegisterState::nativescript_handle,
        T::_get_class_name(),
        name,
        &attr,
        set_func,
        get_func
    );
}

template <class T, class P>
void register_property(
    const char* name,
    void (T::*setter)(P),
    P (T::*getter)() const,
    P default_value,
    rebel_method_rpc_mode rpc_mode   = REBEL_METHOD_RPC_MODE_DISABLED,
    rebel_property_usage_flags usage = REBEL_PROPERTY_USAGE_DEFAULT,
    rebel_property_hint hint         = REBEL_PROPERTY_HINT_NONE,
    String hint_string               = ""
) {
    register_property(
        name,
        setter,
        (P(T::*)())getter,
        default_value,
        rpc_mode,
        usage,
        hint,
        hint_string
    );
}

template <class T>
void register_signal(String name, Dictionary args) {
    static_assert(
        T::CLASS_IS_SCRIPT,
        "This function must only be used on custom classes"
    );

    rebel_signal signal     = {};
    signal.name             = *(rebel_string*)&name;
    signal.num_args         = args.size();
    signal.num_default_args = 0;

    // Need to check because malloc(0) is platform-dependent. Zero arguments
    // will leave args to nullptr.
    if (signal.num_args != 0) {
        signal.args = (rebel_signal_argument*)api->rebel_alloc(
            sizeof(rebel_signal_argument) * signal.num_args
        );
        memset(
            (void*)signal.args,
            0,
            sizeof(rebel_signal_argument) * signal.num_args
        );
    }

    for (int i = 0; i < signal.num_args; i++) {
        // Array entry = args[i];
        // String name = entry[0];
        String name        = args.keys()[i];
        rebel_string* _key = (rebel_string*)&name;
        api->rebel_string_new_copy(&signal.args[i].name, _key);

        // if (entry.size() > 1) {
        // 	signal.args[i].type = entry[1];
        // }
        signal.args[i].type = args.values()[i];
    }

    nativescript_api->rebel_nativescript_register_signal(
        RegisterState::nativescript_handle,
        T::_get_class_name(),
        &signal
    );

    for (int i = 0; i < signal.num_args; i++) {
        api->rebel_string_destroy(&signal.args[i].name);
    }

    if (signal.args) {
        api->rebel_free(signal.args);
    }
}

template <class T, class... Args>
void register_signal(String name, Args... varargs) {
    register_signal<T>(name, Dictionary::make(varargs...));
}

template <class T>
void register_signal(String name) {
    static_assert(
        T::CLASS_IS_SCRIPT,
        "This function must only be used on custom classes"
    );

    rebel_signal signal = {};
    signal.name         = *(rebel_string*)&name;

    nativescript_api->rebel_nativescript_register_signal(
        RegisterState::nativescript_handle,
        T::_get_class_name(),
        &signal
    );
}

#ifndef REBEL_CPP_NO_OBJECT_CAST
template <class T>
T* Object::cast_to(const Object* obj) {
    if (!obj) {
        return nullptr;
    }

    if (T::CLASS_IS_SCRIPT) {
        size_t have_tag = (size_t
        )nativescript_1_1_api->rebel_nativescript_get_type_tag(obj->owner);
        if (have_tag) {
            if (!TagDB::is_type_known((size_t)have_tag)) {
                have_tag = 0;
            }
        }

        if (!have_tag) {
            have_tag = obj->type_tag;
        }

        if (TagDB::is_type_compatible(T::get_class_tag(), have_tag)) {
            return detail::get_custom_class_instance<T>(obj);
        }
    } else {
        if (core_1_2_api
                ->rebel_object_cast_to(obj->owner, (void*)T::get_class_tag())) {
            return (T*)obj;
        }
    }

    return nullptr;
}
#endif

} // namespace Rebel

#endif // REBEL_H
