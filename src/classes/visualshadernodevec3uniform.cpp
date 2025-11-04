// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodevec3uniform.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeVec3Uniform* VisualShaderNodeVec3Uniform::create() {
    return (VisualShaderNodeVec3Uniform*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeVec3Uniform")()
         );
}

void VisualShaderNodeVec3Uniform::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeVec3Uniform");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeVec3Uniform::MethodBindings VisualShaderNodeVec3Uniform::method_bindings = {};
void* VisualShaderNodeVec3Uniform::class_tag = nullptr;
} // namespace Rebel
