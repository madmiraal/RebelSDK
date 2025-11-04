// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/funcref.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant FuncRef::call_func(const Array& args) {
    size_t arg_count = args.size();

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    for (int i = 0; i < args.size(); i++) {
        var_args[i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_call_func,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );
    return result;
}

Variant FuncRef::call_funcv(const Array arg_array) {
    return rebel_icall_variant_array(
        method_bindings.mb_call_funcv,
        (const Object*)this,
        arg_array
    );
}

String FuncRef::get_function() {
    return rebel_icall_string(
        method_bindings.mb_get_function,
        (const Object*)this
    );
}

bool FuncRef::is_valid() const {
    return rebel_icall_bool(
        method_bindings.mb_is_valid,
        (const Object*)this
    );
}

void FuncRef::set_function(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_function,
        (const Object*)this,
        name
    );
}

void FuncRef::set_instance(const Object* instance) {
    rebel_icall_void_object(
        method_bindings.mb_set_instance,
        (const Object*)this,
        instance
    );
}

FuncRef* FuncRef::create() {
    return (FuncRef*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"FuncRef")()
         );
}

void FuncRef::init_method_bindings() {
    method_bindings.mb_call_func =
        api->rebel_method_bind_get_method(
            "FuncRef",
            "call_func"
        );
    method_bindings.mb_call_funcv =
        api->rebel_method_bind_get_method(
            "FuncRef",
            "call_funcv"
        );
    method_bindings.mb_get_function =
        api->rebel_method_bind_get_method(
            "FuncRef",
            "get_function"
        );
    method_bindings.mb_is_valid =
        api->rebel_method_bind_get_method(
            "FuncRef",
            "is_valid"
        );
    method_bindings.mb_set_function =
        api->rebel_method_bind_get_method(
            "FuncRef",
            "set_function"
        );
    method_bindings.mb_set_instance =
        api->rebel_method_bind_get_method(
            "FuncRef",
            "set_instance"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "FuncRef");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

FuncRef::MethodBindings FuncRef::method_bindings = {};
void* FuncRef::class_tag = nullptr;
} // namespace Rebel
