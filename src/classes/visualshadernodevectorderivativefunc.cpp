// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodevectorderivativefunc.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeVectorDerivativeFunc::Function VisualShaderNodeVectorDerivativeFunc::get_function() const {
    return (VisualShaderNodeVectorDerivativeFunc::Function)rebel_icall_int(
        method_bindings.mb_get_function,
        (const Object*)this
    );
}

void VisualShaderNodeVectorDerivativeFunc::set_function(const int64_t func) {
    rebel_icall_void_int(
        method_bindings.mb_set_function,
        (const Object*)this,
        func
    );
}

VisualShaderNodeVectorDerivativeFunc* VisualShaderNodeVectorDerivativeFunc::create() {
    return (VisualShaderNodeVectorDerivativeFunc*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeVectorDerivativeFunc")()
         );
}

void VisualShaderNodeVectorDerivativeFunc::init_method_bindings() {
    method_bindings.mb_get_function =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeVectorDerivativeFunc",
            "get_function"
        );
    method_bindings.mb_set_function =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeVectorDerivativeFunc",
            "set_function"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeVectorDerivativeFunc");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeVectorDerivativeFunc::MethodBindings VisualShaderNodeVectorDerivativeFunc::method_bindings = {};
void* VisualShaderNodeVectorDerivativeFunc::class_tag = nullptr;
} // namespace Rebel
