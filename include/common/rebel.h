// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_H
#define REBEL_H

#include "api/gdnative_api_struct.gen.h"
#include "common/rebelglobal.h"
#include "common/tagdb.h"
#include "common/variant.h"

#include <cstdlib>
#include <cstring>
#include <type_traits>
#include <typeinfo>

namespace Rebel {
class Object;

template <class T>
T* get_wrapper(rebel_object* object) {
    return static_cast<T*>(
        nativescript_1_1_api->rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            object
        )
    );
}

template <class T>
T* get_custom_class_instance(const Object* object) {
    if (!object) {
        return nullptr;
    }
    return static_cast<T*>(
        nativescript_api->rebel_nativescript_get_userdata(object->owner)
    );
}

template <class T>
T* create_custom_class_instance() {
    // See https://github.com/godotengine/godot/issues/39181
    static_assert(
        T::CUSTOM_CLASS,
        "This function must only be used with custom classes."
    );
    static rebel_class_constructor script_constructor =
        api->rebel_get_class_constructor("NativeScript");
    static rebel_method_bind* set_library =
        api->rebel_method_bind_get_method("NativeScript", "set_library");
    static rebel_method_bind* set_class_name =
        api->rebel_method_bind_get_method("NativeScript", "set_class_name");
    rebel_object* script = script_constructor();
    {
        const void* args[] = {gdnlib};
        api->rebel_method_bind_ptrcall(set_library, script, args, nullptr);
    }
    {
        const String class_name = T::_get_class_name();
        const void* args[]      = {&class_name};
        api->rebel_method_bind_ptrcall(set_class_name, script, args, nullptr);
    }
    static rebel_class_constructor base_constructor =
        api->rebel_get_class_constructor(T::get_rebel_class_name());
    static rebel_method_bind* set_script =
        api->rebel_method_bind_get_method("Object", "set_script");
    rebel_object* base_object = base_constructor();
    {
        const void* args[] = {script};
        api->rebel_method_bind_ptrcall(set_script, base_object, args, nullptr);
    }
    return static_cast<T*>(
        nativescript_api->rebel_nativescript_get_userdata(base_object)
    );
}

// REBEL_CLASS(Name, Base)
// Defines standard methods for custom classes.
// Name: Name of the custom class; without namespace.
// Base: Name of the direct base class; with namespace if necessary.
//
// _get_class_name:      Returns the name of the custom class.
// get_base_class_name:  Returns the name of the direct base class.
// get_rebel_class_name: Returns the name of the Rebel base class this class
//                       inherits from i.e. may not be the direct base class.
// create:               Creates a new instance of the class.
// get_class_tag:        Returns the unique ID of the class.
// get_base_tag:         Returns the unique ID of the direct base class.
// from_variant:         Converts a Variant into an Object*.
#define REBEL_CLASS(Name, Base)                                                \
                                                                               \
public:                                                                        \
    static constexpr bool CUSTOM_CLASS = true;                                 \
                                                                               \
    static const char* _get_class_name() {                                     \
        return #Name;                                                          \
    }                                                                          \
    static const char* get_base_class_name() {                                 \
        return Base::_get_class_name();                                        \
    }                                                                          \
    static const char* get_rebel_class_name() {                                \
        return Base::get_rebel_class_name();                                   \
    }                                                                          \
    static Name* create() {                                                    \
        return create_custom_class_instance<Name>();                           \
    }                                                                          \
    static size_t get_class_tag() {                                            \
        return typeid(Name).hash_code();                                       \
    }                                                                          \
    static size_t get_base_tag() {                                             \
        return Base::get_class_tag();                                          \
    }                                                                          \
    static Object* from_variant(Variant variant) {                             \
        return static_cast<Object*>(                                           \
            get_custom_class_instance<Name>(Object::from_variant(variant))     \
        );                                                                     \
    }                                                                          \
                                                                               \
private:

template <class T>
struct Cast {
    static T arguments(Variant variant) {
        return variant;
    }
};

template <class T>
struct Cast<T*> {
    static T* arguments(Variant variant) {
        return static_cast<T*>(T::from_variant(variant));
    }
};

template <>
struct Cast<Variant> {
    static Variant arguments(const Variant& variant) {
        return variant;
    }
};

template <class T>
void* custom_class_create_function(rebel_object* object, void*) {
    T* new_object        = new T();
    new_object->owner    = object;
    new_object->type_tag = typeid(T).hash_code();
    new_object->init();
    return new_object;
}

template <class T>
void custom_class_destroy_function(rebel_object*, void*, void* data) {
    const T* object = static_cast<T*>(data);
    delete object;
}

template <class T>
void register_class() {
    static_assert(
        T::CUSTOM_CLASS,
        "This function must only be used with custom classes."
    );
    rebel_instance_create_func create;
    create.create_func = custom_class_create_function<T>;
    rebel_instance_destroy_func destroy;
    destroy.destroy_func = custom_class_destroy_function<T>;
    TagDB::register_type(T::get_class_tag(), T::get_base_tag());
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
        T::CUSTOM_CLASS,
        "This function must only be used with custom classes."
    );
    rebel_instance_create_func create;
    create.create_func = custom_class_create_function<T>;
    rebel_instance_destroy_func destroy;
    destroy.destroy_func = custom_class_destroy_function<T>;
    TagDB::register_type(T::get_class_tag(), T::get_base_tag());
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

template <class T, class R, class... args>
const char* get_method_class_name(R (T::*method)(args... arguments)) {
    static_assert(
        T::CUSTOM_CLASS,
        "This function must only be used with custom classes."
    );
    // `method` is required for template matching.
    (void)method;
    return T::_get_class_name();
}

// `const` methods.
template <class T, class R, class... args>
const char* get_method_class_name(R (T::*method)(args... arguments) const) {
    static_assert(
        T::CUSTOM_CLASS,
        "This function must only be used with custom classes."
    );
    (void)method;
    return T::_get_class_name();
}

template <int... I>
struct Sequence {};

template <int N, int... I>
struct create_sequence {
    using type = typename create_sequence<N - 1, N - 1, I...>::type;
};

template <int... I>
struct create_sequence<0, I...> {
    using type = Sequence<I...>;
};

template <class T, class R, class... Args>
struct WrappedMethod {
    R (T::*method)(Args...);

    template <int... I>
    void
    apply(Variant* result, T* object, Variant** arguments, Sequence<I...>) {
        *result = (object->*method)(Cast<Args>::arguments(*arguments[I])...);
    }
};

template <class T, class... Args>
struct WrappedMethod<T, void, Args...> {
    void (T::*method)(Args...);

    template <int... I>
    void apply(Variant*, T* object, Variant** args, Sequence<I...>) {
        (object->*method)(Cast<Args>::arguments(*args[I])...);
    }
};

typedef rebel_variant (*rebel_wrapped_method)(rebel_object*, void*, void*, int, rebel_variant**);

template <class T, class R, class... Args>
rebel_variant call_wrapped_method(
    rebel_object*,
    void* method_data,
    void* user_data,
    int,
    rebel_variant** arguments
) {
    rebel_variant result;
    api->rebel_variant_new_nil(&result);
    auto* method = static_cast<WrappedMethod<T, R, Args...>*>(method_data);
    method->apply(
        reinterpret_cast<Variant*>(&result),
        static_cast<T*>(user_data),
        reinterpret_cast<Variant**>(arguments),
        typename create_sequence<sizeof...(Args)>::type{}
    );
    return result;
}

template <class T, class R, class... Args>
rebel_wrapped_method get_wrapped_method(R (T::*)(Args...)) {
    return &call_wrapped_method<T, R, Args...>;
}

// `const` methods.
template <class T, class R, class... Args>
rebel_wrapped_method get_wrapped_method(R (T::*method)(Args...) const) {
    return get_wrapped_method((R(T::*)(Args...))method);
}

template <class T, class R, class... Args>
void* make_wrapped_method(R (T::*method)(Args...)) {
    auto* wrapped_method = static_cast<WrappedMethod<T, R, Args...>*>(
        api->rebel_alloc(sizeof(WrappedMethod<T, R, Args...>))
    );
    wrapped_method->method = method;
    return static_cast<void*>(wrapped_method);
}

// `const` methods.
template <class T, class R, class... Args>
void* make_wrapped_method(R (T::*method)(Args...) const) {
    return make_wrapped_method((R(T::*)(Args...))method);
}

template <class Method>
void register_method(
    const char* name,
    Method method,
    const rebel_method_rpc_mode rpc_mode = REBEL_METHOD_RPC_MODE_DISABLED
) {
    rebel_instance_method rebel_method;
    rebel_method.method_data = make_wrapped_method(method);
    rebel_method.free_func   = api->rebel_free;
    rebel_method.method      = get_wrapped_method(method);
    rebel_method_attributes attributes;
    attributes.rpc_type = rpc_mode;
    nativescript_api->rebel_nativescript_register_method(
        RegisterState::nativescript_handle,
        get_method_class_name(method),
        name,
        attributes,
        rebel_method
    );
}

template <class D, class B, class R, class... Args>
void register_method_explicit(
    const char* name,
    R (B::*method)(Args...),
    rebel_method_rpc_mode rpc_mode = REBEL_METHOD_RPC_MODE_DISABLED
) {
    static_assert(
        std::is_base_of<B, D>::value,
        "Explicit class must derive from method class."
    );
    register_method(name, static_cast<R (D::*)(Args...)>(method), rpc_mode);
}

template <class T, class P>
struct PropertySetMethod {
    void (T::*method)(P);

    static void wrapped_setter(
        rebel_object*,
        void* method_data,
        void* user_data,
        rebel_variant* value
    ) {
        auto* set_method = static_cast<PropertySetMethod*>(method_data);
        T* object        = static_cast<T*>(user_data);
        auto* variant    = reinterpret_cast<Variant*>(value);
        (object->*set_method->method)(Cast<P>::arguments(*variant));
    }
};

template <class T, class P>
struct PropertyGetMethod {
    P (T::*method)();

    static rebel_variant wrapped_getter(
        rebel_object*,
        void* method_data,
        void* user_data
    ) {
        auto* get_method = static_cast<PropertyGetMethod*>(method_data);
        T* object        = static_cast<T*>(user_data);
        rebel_variant variant;
        api->rebel_variant_new_nil(&variant);
        auto* result = reinterpret_cast<Variant*>(&variant);
        *result      = (object->*get_method->method)();
        return variant;
    }
};

template <class T, class P>
struct PropertyDefaultSetMethod {
    P(T::*f);

    static void wrapped_setter(
        rebel_object*,
        void* method_data,
        void* user_data,
        rebel_variant* value
    ) {
        auto* set_method = static_cast<PropertyDefaultSetMethod*>(method_data);
        T* object        = static_cast<T*>(user_data);
        auto* variant    = reinterpret_cast<Variant*>(value);
        object->*set_method->method = Cast<P>::arguments(*variant);
    }
};

template <class T, class P>
struct PropertyDefaultGetMethod {
    P(T::*method);

    static rebel_variant wrapped_getter(
        rebel_object*,
        void* method_data,
        void* user_data
    ) {
        auto* get_method = static_cast<PropertyDefaultGetMethod*>(method_data);
        T* object        = static_cast<T*>(user_data);
        rebel_variant result;
        api->rebel_variant_new_nil(&result);
        auto* variant = reinterpret_cast<Variant*>(&result);
        *variant      = object->*get_method->method;
        return result;
    }
};

template <class T, class P>
void register_property(
    const char* name,
    P(T::*value),
    P default_value,
    const rebel_method_rpc_mode rpc_mode = REBEL_METHOD_RPC_MODE_DISABLED,
    rebel_property_usage_flags usage     = REBEL_PROPERTY_USAGE_DEFAULT,
    rebel_property_hint hint             = REBEL_PROPERTY_HINT_NONE,
    String hint_string                   = ""
) {
    static_assert(
        T::CUSTOM_CLASS,
        "This function must only be used with custom classes."
    );
    Variant variant_default_value = default_value;
    usage                         = static_cast<rebel_property_usage_flags>(
        static_cast<int>(usage) | REBEL_PROPERTY_USAGE_SCRIPT_VARIABLE
    );
    if (variant_default_value.get_type() == Variant::OBJECT) {
        const auto* object =
            get_wrapper<Object>(variant_default_value.operator rebel_object*());
        if (object && object->is_class("Resource")) {
            hint = static_cast<rebel_property_hint>(
                static_cast<int>(hint) | REBEL_PROPERTY_HINT_RESOURCE_TYPE
            );
            hint_string = object->get_class();
        }
    }
    const rebel_string* rebel_hint_string =
        reinterpret_cast<rebel_string*>(&hint_string);
    rebel_property_attributes attributes;
    if (variant_default_value.get_type() == Variant::NIL) {
        attributes.type = Variant::OBJECT;
    } else {
        attributes.type = variant_default_value.get_type();
        attributes.default_value =
            *reinterpret_cast<rebel_variant*>(&variant_default_value);
    }
    attributes.hint        = hint;
    attributes.rset_type   = rpc_mode;
    attributes.usage       = usage;
    attributes.hint_string = *rebel_hint_string;
    auto* wrapped_set      = static_cast<PropertyDefaultSetMethod<T, P>*>(
        api->rebel_alloc(sizeof(PropertyDefaultSetMethod<T, P>))
    );
    wrapped_set->method = value;
    auto* wrapped_get   = static_cast<PropertyDefaultGetMethod<T, P>*>(
        api->rebel_alloc(sizeof(PropertyDefaultGetMethod<T, P>))
    );
    wrapped_get->method = value;
    rebel_property_set_func set_func;
    set_func.method_data = static_cast<void*>(wrapped_set);
    set_func.free_func   = api->rebel_free;
    set_func.set_func    = &PropertyDefaultSetMethod<T, P>::wrapped_setter;
    rebel_property_get_func get_func;
    get_func.method_data = static_cast<void*>(wrapped_get);
    get_func.free_func   = api->rebel_free;
    get_func.get_func    = &PropertyDefaultGetMethod<T, P>::wrapped_getter;
    nativescript_api->rebel_nativescript_register_property(
        RegisterState::nativescript_handle,
        T::_get_class_name(),
        name,
        &attributes,
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
    const rebel_method_rpc_mode rpc_mode   = REBEL_METHOD_RPC_MODE_DISABLED,
    const rebel_property_usage_flags usage = REBEL_PROPERTY_USAGE_DEFAULT,
    const rebel_property_hint hint         = REBEL_PROPERTY_HINT_NONE,
    String hint_string                     = ""
) {
    static_assert(
        T::CUSTOM_CLASS,
        "This function must only be used with custom classes."
    );
    Variant variant_default_value = default_value;
    const auto* rebel_hint_string =
        reinterpret_cast<rebel_string*>(&hint_string);
    rebel_property_attributes attributes;
    if (variant_default_value.get_type() == Variant::NIL) {
        attributes.type = Variant::OBJECT;
    } else {
        attributes.type = variant_default_value.get_type();
        attributes.default_value =
            *reinterpret_cast<rebel_variant*>(&variant_default_value);
    }
    attributes.hint        = hint;
    attributes.rset_type   = rpc_mode;
    attributes.usage       = usage;
    attributes.hint_string = *rebel_hint_string;
    auto* wrapped_set      = static_cast<PropertySetMethod<T, P>*>(
        api->rebel_alloc(sizeof(PropertySetMethod<T, P>))
    );
    wrapped_set->method = setter;
    auto* wrapped_get   = static_cast<PropertyGetMethod<T, P>*>(
        api->rebel_alloc(sizeof(PropertyGetMethod<T, P>))
    );
    wrapped_get->method = getter;
    rebel_property_set_func set_func;
    set_func.method_data = static_cast<void*>(wrapped_set);
    set_func.free_func   = api->rebel_free;
    set_func.set_func    = &PropertySetMethod<T, P>::wrapped_setter;
    rebel_property_get_func get_func;
    get_func.method_data = static_cast<void*>(wrapped_get);
    get_func.free_func   = api->rebel_free;
    get_func.get_func    = &PropertyGetMethod<T, P>::wrapped_getter;
    nativescript_api->rebel_nativescript_register_property(
        RegisterState::nativescript_handle,
        T::_get_class_name(),
        name,
        &attributes,
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
        static_cast<P (T::*)()>(getter),
        default_value,
        rpc_mode,
        usage,
        hint,
        hint_string
    );
}

template <class T>
void register_signal(String name, const Dictionary& arguments) {
    static_assert(
        T::CUSTOM_CLASS,
        "This function must only be used with custom classes."
    );
    rebel_signal signal;
    signal.name             = *reinterpret_cast<rebel_string*>(&name);
    signal.num_args         = arguments.size();
    signal.num_default_args = 0;
    if (signal.num_args != 0) {
        signal.args = static_cast<rebel_signal_argument*>(api->rebel_alloc(
            static_cast<int>(sizeof(rebel_signal_argument)) * signal.num_args
        ));
        memset(signal.args, 0, sizeof(rebel_signal_argument) * signal.num_args);
        for (int i = 0; i < signal.num_args; i++) {
            String key_string = arguments.keys()[i];
            const auto* key   = reinterpret_cast<rebel_string*>(&key_string);
            api->rebel_string_new_copy(&signal.args[i].name, key);
            signal.args[i].type = arguments.values()[i];
        }
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
void register_signal(const String name, Args... arguments) {
    register_signal<T>(name, Dictionary::make(arguments...));
}

template <class T>
void register_signal(String name) {
    static_assert(
        T::CUSTOM_CLASS,
        "This function must only be used with custom classes."
    );
    rebel_signal signal;
    signal.name = *reinterpret_cast<rebel_string*>(&name);
    nativescript_api->rebel_nativescript_register_signal(
        RegisterState::nativescript_handle,
        T::_get_class_name(),
        &signal
    );
}

#ifndef REBEL_CPP_NO_OBJECT_CAST
template <class T>
T* Object::cast_to(const Object* object) {
    if (!object) {
        return nullptr;
    }
    if (T::CUSTOM_CLASS) {
        auto tag = reinterpret_cast<size_t>(
            nativescript_1_1_api->rebel_nativescript_get_type_tag(object->owner)
        );
        if (tag) {
            if (!TagDB::is_type_known(tag)) {
                tag = 0;
            }
        }
        if (!tag) {
            tag = object->type_tag;
        }
        if (TagDB::is_type_compatible(T::get_class_tag(), tag)) {
            return get_custom_class_instance<T>(object);
        }
    } else {
        if (core_1_2_api->rebel_object_cast_to(
                object->owner,
                static_cast<void*>(T::get_class_tag())
            )) {
            return static_cast<T*>(object);
        }
    }
    return nullptr;
}
#endif // REBEL_CPP_NO_OBJECT_CAST
} // namespace Rebel

#endif // REBEL_H
