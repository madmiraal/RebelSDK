// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventaction.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String InputEventAction::get_action() const {
    return rebel_icall_string(
        method_bindings.mb_get_action,
        (const Object*)this
    );
}

real_t InputEventAction::get_strength() const {
    return rebel_icall_float(
        method_bindings.mb_get_strength,
        (const Object*)this
    );
}

void InputEventAction::set_action(const String action) {
    rebel_icall_void_string(
        method_bindings.mb_set_action,
        (const Object*)this,
        action
    );
}

void InputEventAction::set_pressed(const bool pressed) {
    rebel_icall_void_bool(
        method_bindings.mb_set_pressed,
        (const Object*)this,
        pressed
    );
}

void InputEventAction::set_strength(const real_t strength) {
    rebel_icall_void_float(
        method_bindings.mb_set_strength,
        (const Object*)this,
        strength
    );
}

InputEventAction* InputEventAction::create() {
    return (InputEventAction*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InputEventAction")()
         );
}

void InputEventAction::init_method_bindings() {
    method_bindings.mb_get_action =
        api->rebel_method_bind_get_method(
            "InputEventAction",
            "get_action"
        );
    method_bindings.mb_get_strength =
        api->rebel_method_bind_get_method(
            "InputEventAction",
            "get_strength"
        );
    method_bindings.mb_set_action =
        api->rebel_method_bind_get_method(
            "InputEventAction",
            "set_action"
        );
    method_bindings.mb_set_pressed =
        api->rebel_method_bind_get_method(
            "InputEventAction",
            "set_pressed"
        );
    method_bindings.mb_set_strength =
        api->rebel_method_bind_get_method(
            "InputEventAction",
            "set_strength"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventAction");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventAction::MethodBindings InputEventAction::method_bindings = {};
void* InputEventAction::class_tag = nullptr;
} // namespace Rebel
