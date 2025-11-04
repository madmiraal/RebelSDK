// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodecolorconstant.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Color VisualShaderNodeColorConstant::get_constant() const {
    return rebel_icall_color(
        method_bindings.mb_get_constant,
        (const Object*)this
    );
}

void VisualShaderNodeColorConstant::set_constant(const Color value) {
    rebel_icall_void_color(
        method_bindings.mb_set_constant,
        (const Object*)this,
        value
    );
}

VisualShaderNodeColorConstant* VisualShaderNodeColorConstant::create() {
    return (VisualShaderNodeColorConstant*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeColorConstant")()
         );
}

void VisualShaderNodeColorConstant::init_method_bindings() {
    method_bindings.mb_get_constant =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeColorConstant",
            "get_constant"
        );
    method_bindings.mb_set_constant =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeColorConstant",
            "set_constant"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeColorConstant");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeColorConstant::MethodBindings VisualShaderNodeColorConstant::method_bindings = {};
void* VisualShaderNodeColorConstant::class_tag = nullptr;
} // namespace Rebel
