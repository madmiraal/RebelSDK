// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodeinput.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualShaderNodeInput::get_input_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_input_name,
        (const Object*)this
    );
}

String VisualShaderNodeInput::get_input_real_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_input_real_name,
        (const Object*)this
    );
}

void VisualShaderNodeInput::set_input_name(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_input_name,
        (const Object*)this,
        name
    );
}

VisualShaderNodeInput* VisualShaderNodeInput::create() {
    return (VisualShaderNodeInput*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeInput")()
         );
}

void VisualShaderNodeInput::init_method_bindings() {
    method_bindings.mb_get_input_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeInput",
            "get_input_name"
        );
    method_bindings.mb_get_input_real_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeInput",
            "get_input_real_name"
        );
    method_bindings.mb_set_input_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeInput",
            "set_input_name"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeInput");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeInput::MethodBindings VisualShaderNodeInput::method_bindings = {};
void* VisualShaderNodeInput::class_tag = nullptr;
} // namespace Rebel
