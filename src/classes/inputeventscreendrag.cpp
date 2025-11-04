// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventscreendrag.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t InputEventScreenDrag::get_index() const {
    return rebel_icall_int(
        method_bindings.mb_get_index,
        (const Object*)this
    );
}

Vector2 InputEventScreenDrag::get_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_position,
        (const Object*)this
    );
}

Vector2 InputEventScreenDrag::get_relative() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_relative,
        (const Object*)this
    );
}

Vector2 InputEventScreenDrag::get_speed() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_speed,
        (const Object*)this
    );
}

void InputEventScreenDrag::set_index(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_set_index,
        (const Object*)this,
        index
    );
}

void InputEventScreenDrag::set_position(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_position,
        (const Object*)this,
        position
    );
}

void InputEventScreenDrag::set_relative(const Vector2 relative) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_relative,
        (const Object*)this,
        relative
    );
}

void InputEventScreenDrag::set_speed(const Vector2 speed) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_speed,
        (const Object*)this,
        speed
    );
}

InputEventScreenDrag* InputEventScreenDrag::create() {
    return (InputEventScreenDrag*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InputEventScreenDrag")()
         );
}

void InputEventScreenDrag::init_method_bindings() {
    method_bindings.mb_get_index =
        api->rebel_method_bind_get_method(
            "InputEventScreenDrag",
            "get_index"
        );
    method_bindings.mb_get_position =
        api->rebel_method_bind_get_method(
            "InputEventScreenDrag",
            "get_position"
        );
    method_bindings.mb_get_relative =
        api->rebel_method_bind_get_method(
            "InputEventScreenDrag",
            "get_relative"
        );
    method_bindings.mb_get_speed =
        api->rebel_method_bind_get_method(
            "InputEventScreenDrag",
            "get_speed"
        );
    method_bindings.mb_set_index =
        api->rebel_method_bind_get_method(
            "InputEventScreenDrag",
            "set_index"
        );
    method_bindings.mb_set_position =
        api->rebel_method_bind_get_method(
            "InputEventScreenDrag",
            "set_position"
        );
    method_bindings.mb_set_relative =
        api->rebel_method_bind_get_method(
            "InputEventScreenDrag",
            "set_relative"
        );
    method_bindings.mb_set_speed =
        api->rebel_method_bind_get_method(
            "InputEventScreenDrag",
            "set_speed"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventScreenDrag");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventScreenDrag::MethodBindings InputEventScreenDrag::method_bindings = {};
void* InputEventScreenDrag::class_tag = nullptr;
} // namespace Rebel
