// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodebooleanconstant.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool VisualShaderNodeBooleanConstant::get_constant() const {
    return rebel_icall_bool(
        method_bindings.mb_get_constant,
        (const Object*)this
    );
}

void VisualShaderNodeBooleanConstant::set_constant(const bool value) {
    rebel_icall_void_bool(
        method_bindings.mb_set_constant,
        (const Object*)this,
        value
    );
}

VisualShaderNodeBooleanConstant* VisualShaderNodeBooleanConstant::create() {
    return (VisualShaderNodeBooleanConstant*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeBooleanConstant")()
         );
}

void VisualShaderNodeBooleanConstant::init_method_bindings() {
    method_bindings.mb_get_constant =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeBooleanConstant",
            "get_constant"
        );
    method_bindings.mb_set_constant =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeBooleanConstant",
            "set_constant"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeBooleanConstant");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeBooleanConstant::MethodBindings VisualShaderNodeBooleanConstant::method_bindings = {};
void* VisualShaderNodeBooleanConstant::class_tag = nullptr;
} // namespace Rebel
