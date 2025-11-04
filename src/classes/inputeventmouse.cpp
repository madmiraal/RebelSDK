// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventmouse.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t InputEventMouse::get_button_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_button_mask,
        (const Object*)this
    );
}

Vector2 InputEventMouse::get_global_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_global_position,
        (const Object*)this
    );
}

Vector2 InputEventMouse::get_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_position,
        (const Object*)this
    );
}

void InputEventMouse::set_button_mask(const int64_t button_mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_button_mask,
        (const Object*)this,
        button_mask
    );
}

void InputEventMouse::set_global_position(const Vector2 global_position) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_global_position,
        (const Object*)this,
        global_position
    );
}

void InputEventMouse::set_position(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_position,
        (const Object*)this,
        position
    );
}

void InputEventMouse::init_method_bindings() {
    method_bindings.mb_get_button_mask =
        api->rebel_method_bind_get_method(
            "InputEventMouse",
            "get_button_mask"
        );
    method_bindings.mb_get_global_position =
        api->rebel_method_bind_get_method(
            "InputEventMouse",
            "get_global_position"
        );
    method_bindings.mb_get_position =
        api->rebel_method_bind_get_method(
            "InputEventMouse",
            "get_position"
        );
    method_bindings.mb_set_button_mask =
        api->rebel_method_bind_get_method(
            "InputEventMouse",
            "set_button_mask"
        );
    method_bindings.mb_set_global_position =
        api->rebel_method_bind_get_method(
            "InputEventMouse",
            "set_global_position"
        );
    method_bindings.mb_set_position =
        api->rebel_method_bind_get_method(
            "InputEventMouse",
            "set_position"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventMouse");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventMouse::MethodBindings InputEventMouse::method_bindings = {};
void* InputEventMouse::class_tag = nullptr;
} // namespace Rebel
