// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodescalarconstant.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t VisualShaderNodeScalarConstant::get_constant() const {
    return rebel_icall_float(
        method_bindings.mb_get_constant,
        (const Object*)this
    );
}

void VisualShaderNodeScalarConstant::set_constant(const real_t value) {
    rebel_icall_void_float(
        method_bindings.mb_set_constant,
        (const Object*)this,
        value
    );
}

VisualShaderNodeScalarConstant* VisualShaderNodeScalarConstant::create() {
    return (VisualShaderNodeScalarConstant*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeScalarConstant")()
         );
}

void VisualShaderNodeScalarConstant::init_method_bindings() {
    method_bindings.mb_get_constant =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeScalarConstant",
            "get_constant"
        );
    method_bindings.mb_set_constant =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeScalarConstant",
            "set_constant"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeScalarConstant");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeScalarConstant::MethodBindings VisualShaderNodeScalarConstant::method_bindings = {};
void* VisualShaderNodeScalarConstant::class_tag = nullptr;
} // namespace Rebel
