// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodeoutput.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void VisualShaderNodeOutput::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeOutput");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeOutput::MethodBindings VisualShaderNodeOutput::method_bindings = {};
void* VisualShaderNodeOutput::class_tag = nullptr;
} // namespace Rebel
