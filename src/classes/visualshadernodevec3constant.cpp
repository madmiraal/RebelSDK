// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodevec3constant.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector3 VisualShaderNodeVec3Constant::get_constant() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_constant,
        (const Object*)this
    );
}

void VisualShaderNodeVec3Constant::set_constant(const Vector3 value) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_constant,
        (const Object*)this,
        value
    );
}

VisualShaderNodeVec3Constant* VisualShaderNodeVec3Constant::create() {
    return (VisualShaderNodeVec3Constant*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeVec3Constant")()
         );
}

void VisualShaderNodeVec3Constant::init_method_bindings() {
    method_bindings.mb_get_constant =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeVec3Constant",
            "get_constant"
        );
    method_bindings.mb_set_constant =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeVec3Constant",
            "set_constant"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeVec3Constant");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeVec3Constant::MethodBindings VisualShaderNodeVec3Constant::method_bindings = {};
void* VisualShaderNodeVec3Constant::class_tag = nullptr;
} // namespace Rebel
