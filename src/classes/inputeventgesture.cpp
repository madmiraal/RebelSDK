// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventgesture.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector2 InputEventGesture::get_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_position,
        (const Object*)this
    );
}

void InputEventGesture::set_position(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_position,
        (const Object*)this,
        position
    );
}

void InputEventGesture::init_method_bindings() {
    method_bindings.mb_get_position =
        api->rebel_method_bind_get_method(
            "InputEventGesture",
            "get_position"
        );
    method_bindings.mb_set_position =
        api->rebel_method_bind_get_method(
            "InputEventGesture",
            "set_position"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventGesture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventGesture::MethodBindings InputEventGesture::method_bindings = {};
void* InputEventGesture::class_tag = nullptr;
} // namespace Rebel
