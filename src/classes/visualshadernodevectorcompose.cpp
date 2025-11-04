// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodevectorcompose.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeVectorCompose* VisualShaderNodeVectorCompose::create() {
    return (VisualShaderNodeVectorCompose*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeVectorCompose")()
         );
}

void VisualShaderNodeVectorCompose::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeVectorCompose");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeVectorCompose::MethodBindings VisualShaderNodeVectorCompose::method_bindings = {};
void* VisualShaderNodeVectorCompose::class_tag = nullptr;
} // namespace Rebel
