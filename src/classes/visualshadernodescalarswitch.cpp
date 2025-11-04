// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodescalarswitch.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeScalarSwitch* VisualShaderNodeScalarSwitch::create() {
    return (VisualShaderNodeScalarSwitch*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeScalarSwitch")()
         );
}

void VisualShaderNodeScalarSwitch::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeScalarSwitch");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeScalarSwitch::MethodBindings VisualShaderNodeScalarSwitch::method_bindings = {};
void* VisualShaderNodeScalarSwitch::class_tag = nullptr;
} // namespace Rebel
