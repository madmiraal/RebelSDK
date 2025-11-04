// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventjoypadbutton.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t InputEventJoypadButton::get_button_index() const {
    return rebel_icall_int(
        method_bindings.mb_get_button_index,
        (const Object*)this
    );
}

real_t InputEventJoypadButton::get_pressure() const {
    return rebel_icall_float(
        method_bindings.mb_get_pressure,
        (const Object*)this
    );
}

void InputEventJoypadButton::set_button_index(const int64_t button_index) {
    rebel_icall_void_int(
        method_bindings.mb_set_button_index,
        (const Object*)this,
        button_index
    );
}

void InputEventJoypadButton::set_pressed(const bool pressed) {
    rebel_icall_void_bool(
        method_bindings.mb_set_pressed,
        (const Object*)this,
        pressed
    );
}

void InputEventJoypadButton::set_pressure(const real_t pressure) {
    rebel_icall_void_float(
        method_bindings.mb_set_pressure,
        (const Object*)this,
        pressure
    );
}

InputEventJoypadButton* InputEventJoypadButton::create() {
    return (InputEventJoypadButton*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InputEventJoypadButton")()
         );
}

void InputEventJoypadButton::init_method_bindings() {
    method_bindings.mb_get_button_index =
        api->rebel_method_bind_get_method(
            "InputEventJoypadButton",
            "get_button_index"
        );
    method_bindings.mb_get_pressure =
        api->rebel_method_bind_get_method(
            "InputEventJoypadButton",
            "get_pressure"
        );
    method_bindings.mb_set_button_index =
        api->rebel_method_bind_get_method(
            "InputEventJoypadButton",
            "set_button_index"
        );
    method_bindings.mb_set_pressed =
        api->rebel_method_bind_get_method(
            "InputEventJoypadButton",
            "set_pressed"
        );
    method_bindings.mb_set_pressure =
        api->rebel_method_bind_get_method(
            "InputEventJoypadButton",
            "set_pressure"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventJoypadButton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventJoypadButton::MethodBindings InputEventJoypadButton::method_bindings = {};
void* InputEventJoypadButton::class_tag = nullptr;
} // namespace Rebel
