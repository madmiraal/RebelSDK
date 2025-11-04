// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodetransformconstant.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Transform VisualShaderNodeTransformConstant::get_constant() const {
    return rebel_icall_transform(
        method_bindings.mb_get_constant,
        (const Object*)this
    );
}

void VisualShaderNodeTransformConstant::set_constant(const Transform value) {
    rebel_icall_void_transform(
        method_bindings.mb_set_constant,
        (const Object*)this,
        value
    );
}

VisualShaderNodeTransformConstant* VisualShaderNodeTransformConstant::create() {
    return (VisualShaderNodeTransformConstant*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeTransformConstant")()
         );
}

void VisualShaderNodeTransformConstant::init_method_bindings() {
    method_bindings.mb_get_constant =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTransformConstant",
            "get_constant"
        );
    method_bindings.mb_set_constant =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeTransformConstant",
            "set_constant"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeTransformConstant");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeTransformConstant::MethodBindings VisualShaderNodeTransformConstant::method_bindings = {};
void* VisualShaderNodeTransformConstant::class_tag = nullptr;
} // namespace Rebel
