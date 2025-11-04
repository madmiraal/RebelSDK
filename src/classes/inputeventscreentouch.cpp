// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventscreentouch.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t InputEventScreenTouch::get_index() const {
    return rebel_icall_int(
        method_bindings.mb_get_index,
        (const Object*)this
    );
}

Vector2 InputEventScreenTouch::get_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_position,
        (const Object*)this
    );
}

void InputEventScreenTouch::set_index(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_set_index,
        (const Object*)this,
        index
    );
}

void InputEventScreenTouch::set_position(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_position,
        (const Object*)this,
        position
    );
}

void InputEventScreenTouch::set_pressed(const bool pressed) {
    rebel_icall_void_bool(
        method_bindings.mb_set_pressed,
        (const Object*)this,
        pressed
    );
}

InputEventScreenTouch* InputEventScreenTouch::create() {
    return (InputEventScreenTouch*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InputEventScreenTouch")()
         );
}

void InputEventScreenTouch::init_method_bindings() {
    method_bindings.mb_get_index =
        api->rebel_method_bind_get_method(
            "InputEventScreenTouch",
            "get_index"
        );
    method_bindings.mb_get_position =
        api->rebel_method_bind_get_method(
            "InputEventScreenTouch",
            "get_position"
        );
    method_bindings.mb_set_index =
        api->rebel_method_bind_get_method(
            "InputEventScreenTouch",
            "set_index"
        );
    method_bindings.mb_set_position =
        api->rebel_method_bind_get_method(
            "InputEventScreenTouch",
            "set_position"
        );
    method_bindings.mb_set_pressed =
        api->rebel_method_bind_get_method(
            "InputEventScreenTouch",
            "set_pressed"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventScreenTouch");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventScreenTouch::MethodBindings InputEventScreenTouch::method_bindings = {};
void* InputEventScreenTouch::class_tag = nullptr;
} // namespace Rebel
