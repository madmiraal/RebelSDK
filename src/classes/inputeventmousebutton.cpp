// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventmousebutton.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t InputEventMouseButton::get_button_index() const {
    return rebel_icall_int(
        method_bindings.mb_get_button_index,
        (const Object*)this
    );
}

real_t InputEventMouseButton::get_factor() const {
    return rebel_icall_float(
        method_bindings.mb_get_factor,
        (const Object*)this
    );
}

bool InputEventMouseButton::is_doubleclick() const {
    return rebel_icall_bool(
        method_bindings.mb_is_doubleclick,
        (const Object*)this
    );
}

void InputEventMouseButton::set_button_index(const int64_t button_index) {
    rebel_icall_void_int(
        method_bindings.mb_set_button_index,
        (const Object*)this,
        button_index
    );
}

void InputEventMouseButton::set_doubleclick(const bool doubleclick) {
    rebel_icall_void_bool(
        method_bindings.mb_set_doubleclick,
        (const Object*)this,
        doubleclick
    );
}

void InputEventMouseButton::set_factor(const real_t factor) {
    rebel_icall_void_float(
        method_bindings.mb_set_factor,
        (const Object*)this,
        factor
    );
}

void InputEventMouseButton::set_pressed(const bool pressed) {
    rebel_icall_void_bool(
        method_bindings.mb_set_pressed,
        (const Object*)this,
        pressed
    );
}

InputEventMouseButton* InputEventMouseButton::create() {
    return (InputEventMouseButton*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InputEventMouseButton")()
         );
}

void InputEventMouseButton::init_method_bindings() {
    method_bindings.mb_get_button_index =
        api->rebel_method_bind_get_method(
            "InputEventMouseButton",
            "get_button_index"
        );
    method_bindings.mb_get_factor =
        api->rebel_method_bind_get_method(
            "InputEventMouseButton",
            "get_factor"
        );
    method_bindings.mb_is_doubleclick =
        api->rebel_method_bind_get_method(
            "InputEventMouseButton",
            "is_doubleclick"
        );
    method_bindings.mb_set_button_index =
        api->rebel_method_bind_get_method(
            "InputEventMouseButton",
            "set_button_index"
        );
    method_bindings.mb_set_doubleclick =
        api->rebel_method_bind_get_method(
            "InputEventMouseButton",
            "set_doubleclick"
        );
    method_bindings.mb_set_factor =
        api->rebel_method_bind_get_method(
            "InputEventMouseButton",
            "set_factor"
        );
    method_bindings.mb_set_pressed =
        api->rebel_method_bind_get_method(
            "InputEventMouseButton",
            "set_pressed"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventMouseButton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventMouseButton::MethodBindings InputEventMouseButton::method_bindings = {};
void* InputEventMouseButton::class_tag = nullptr;
} // namespace Rebel
