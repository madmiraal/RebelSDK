// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventmousemotion.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t InputEventMouseMotion::get_pressure() const {
    return rebel_icall_float(
        method_bindings.mb_get_pressure,
        (const Object*)this
    );
}

Vector2 InputEventMouseMotion::get_relative() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_relative,
        (const Object*)this
    );
}

Vector2 InputEventMouseMotion::get_speed() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_speed,
        (const Object*)this
    );
}

Vector2 InputEventMouseMotion::get_tilt() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_tilt,
        (const Object*)this
    );
}

void InputEventMouseMotion::set_pressure(const real_t pressure) {
    rebel_icall_void_float(
        method_bindings.mb_set_pressure,
        (const Object*)this,
        pressure
    );
}

void InputEventMouseMotion::set_relative(const Vector2 relative) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_relative,
        (const Object*)this,
        relative
    );
}

void InputEventMouseMotion::set_speed(const Vector2 speed) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_speed,
        (const Object*)this,
        speed
    );
}

void InputEventMouseMotion::set_tilt(const Vector2 tilt) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_tilt,
        (const Object*)this,
        tilt
    );
}

InputEventMouseMotion* InputEventMouseMotion::create() {
    return (InputEventMouseMotion*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InputEventMouseMotion")()
         );
}

void InputEventMouseMotion::init_method_bindings() {
    method_bindings.mb_get_pressure =
        api->rebel_method_bind_get_method(
            "InputEventMouseMotion",
            "get_pressure"
        );
    method_bindings.mb_get_relative =
        api->rebel_method_bind_get_method(
            "InputEventMouseMotion",
            "get_relative"
        );
    method_bindings.mb_get_speed =
        api->rebel_method_bind_get_method(
            "InputEventMouseMotion",
            "get_speed"
        );
    method_bindings.mb_get_tilt =
        api->rebel_method_bind_get_method(
            "InputEventMouseMotion",
            "get_tilt"
        );
    method_bindings.mb_set_pressure =
        api->rebel_method_bind_get_method(
            "InputEventMouseMotion",
            "set_pressure"
        );
    method_bindings.mb_set_relative =
        api->rebel_method_bind_get_method(
            "InputEventMouseMotion",
            "set_relative"
        );
    method_bindings.mb_set_speed =
        api->rebel_method_bind_get_method(
            "InputEventMouseMotion",
            "set_speed"
        );
    method_bindings.mb_set_tilt =
        api->rebel_method_bind_get_method(
            "InputEventMouseMotion",
            "set_tilt"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventMouseMotion");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventMouseMotion::MethodBindings InputEventMouseMotion::method_bindings = {};
void* InputEventMouseMotion::class_tag = nullptr;
} // namespace Rebel
