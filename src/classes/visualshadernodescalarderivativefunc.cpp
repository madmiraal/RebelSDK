// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodescalarderivativefunc.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeScalarDerivativeFunc::Function VisualShaderNodeScalarDerivativeFunc::get_function() const {
    return (VisualShaderNodeScalarDerivativeFunc::Function)rebel_icall_int(
        method_bindings.mb_get_function,
        (const Object*)this
    );
}

void VisualShaderNodeScalarDerivativeFunc::set_function(const int64_t func) {
    rebel_icall_void_int(
        method_bindings.mb_set_function,
        (const Object*)this,
        func
    );
}

VisualShaderNodeScalarDerivativeFunc* VisualShaderNodeScalarDerivativeFunc::create() {
    return (VisualShaderNodeScalarDerivativeFunc*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeScalarDerivativeFunc")()
         );
}

void VisualShaderNodeScalarDerivativeFunc::init_method_bindings() {
    method_bindings.mb_get_function =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeScalarDerivativeFunc",
            "get_function"
        );
    method_bindings.mb_set_function =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeScalarDerivativeFunc",
            "set_function"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeScalarDerivativeFunc");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeScalarDerivativeFunc::MethodBindings VisualShaderNodeScalarDerivativeFunc::method_bindings = {};
void* VisualShaderNodeScalarDerivativeFunc::class_tag = nullptr;
} // namespace Rebel
