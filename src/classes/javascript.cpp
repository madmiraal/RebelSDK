// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/javascript.h"

#include "classes/icalls.h"
#include "classes/javascriptobject.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<JavaScriptObject> JavaScript::create_callback(const Object* object, const String method) {
    return Ref<JavaScriptObject>::create_ref(rebel_icall_object_object_string(
        method_bindings.mb_create_callback,
        (const Object*)this,
        object,
        method
    ));
}

Variant JavaScript::create_object(const String object, const Array& args) {
    size_t arg_count = 1 + args.size();
    Variant arg_values[1];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = object;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    for (int i = 0; i < args.size(); i++) {
        var_args[1 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_create_object,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
    return result;
}

void JavaScript::download_buffer(const PoolByteArray buffer, const String name, const String mime) {
    rebel_icall_void_poolbytearray_string_string(
        method_bindings.mb_download_buffer,
        (const Object*)this,
        buffer,
        name,
        mime
    );
}

Variant JavaScript::eval(const String code, const bool use_global_execution_context) {
    return rebel_icall_variant_string_bool(
        method_bindings.mb_eval,
        (const Object*)this,
        code,
        use_global_execution_context
    );
}

Ref<JavaScriptObject> JavaScript::get_interface(const String interface) {
    return Ref<JavaScriptObject>::create_ref(rebel_icall_object_string(
        method_bindings.mb_get_interface,
        (const Object*)this,
        interface
    ));
}

JavaScript* JavaScript::singleton = nullptr;

JavaScript::JavaScript() {
    owner = api->rebel_global_get_singleton((char*) "JavaScript");
}

void JavaScript::init_method_bindings() {
    method_bindings.mb_create_callback =
        api->rebel_method_bind_get_method(
            "JavaScript",
            "create_callback"
        );
    method_bindings.mb_create_object =
        api->rebel_method_bind_get_method(
            "JavaScript",
            "create_object"
        );
    method_bindings.mb_download_buffer =
        api->rebel_method_bind_get_method(
            "JavaScript",
            "download_buffer"
        );
    method_bindings.mb_eval =
        api->rebel_method_bind_get_method(
            "JavaScript",
            "eval"
        );
    method_bindings.mb_get_interface =
        api->rebel_method_bind_get_method(
            "JavaScript",
            "get_interface"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "JavaScript");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

JavaScript::MethodBindings JavaScript::method_bindings = {};
void* JavaScript::class_tag = nullptr;
} // namespace Rebel
