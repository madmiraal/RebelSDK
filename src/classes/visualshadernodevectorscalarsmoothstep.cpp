// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodevectorscalarsmoothstep.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeVectorScalarSmoothStep* VisualShaderNodeVectorScalarSmoothStep::create() {
    return (VisualShaderNodeVectorScalarSmoothStep*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeVectorScalarSmoothStep")()
         );
}

void VisualShaderNodeVectorScalarSmoothStep::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeVectorScalarSmoothStep");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeVectorScalarSmoothStep::MethodBindings VisualShaderNodeVectorScalarSmoothStep::method_bindings = {};
void* VisualShaderNodeVectorScalarSmoothStep::class_tag = nullptr;
} // namespace Rebel
