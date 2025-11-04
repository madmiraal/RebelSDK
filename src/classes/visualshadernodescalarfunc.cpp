// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodescalarfunc.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeScalarFunc::Function VisualShaderNodeScalarFunc::get_function() const {
    return (VisualShaderNodeScalarFunc::Function)rebel_icall_int(
        method_bindings.mb_get_function,
        (const Object*)this
    );
}

void VisualShaderNodeScalarFunc::set_function(const int64_t func) {
    rebel_icall_void_int(
        method_bindings.mb_set_function,
        (const Object*)this,
        func
    );
}

VisualShaderNodeScalarFunc* VisualShaderNodeScalarFunc::create() {
    return (VisualShaderNodeScalarFunc*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeScalarFunc")()
         );
}

void VisualShaderNodeScalarFunc::init_method_bindings() {
    method_bindings.mb_get_function =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeScalarFunc",
            "get_function"
        );
    method_bindings.mb_set_function =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeScalarFunc",
            "set_function"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeScalarFunc");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeScalarFunc::MethodBindings VisualShaderNodeScalarFunc::method_bindings = {};
void* VisualShaderNodeScalarFunc::class_tag = nullptr;
} // namespace Rebel
