// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventmidi.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t InputEventMIDI::get_channel() const {
    return rebel_icall_int(
        method_bindings.mb_get_channel,
        (const Object*)this
    );
}

int64_t InputEventMIDI::get_controller_number() const {
    return rebel_icall_int(
        method_bindings.mb_get_controller_number,
        (const Object*)this
    );
}

int64_t InputEventMIDI::get_controller_value() const {
    return rebel_icall_int(
        method_bindings.mb_get_controller_value,
        (const Object*)this
    );
}

int64_t InputEventMIDI::get_instrument() const {
    return rebel_icall_int(
        method_bindings.mb_get_instrument,
        (const Object*)this
    );
}

int64_t InputEventMIDI::get_message() const {
    return rebel_icall_int(
        method_bindings.mb_get_message,
        (const Object*)this
    );
}

int64_t InputEventMIDI::get_pitch() const {
    return rebel_icall_int(
        method_bindings.mb_get_pitch,
        (const Object*)this
    );
}

int64_t InputEventMIDI::get_pressure() const {
    return rebel_icall_int(
        method_bindings.mb_get_pressure,
        (const Object*)this
    );
}

int64_t InputEventMIDI::get_velocity() const {
    return rebel_icall_int(
        method_bindings.mb_get_velocity,
        (const Object*)this
    );
}

void InputEventMIDI::set_channel(const int64_t channel) {
    rebel_icall_void_int(
        method_bindings.mb_set_channel,
        (const Object*)this,
        channel
    );
}

void InputEventMIDI::set_controller_number(const int64_t controller_number) {
    rebel_icall_void_int(
        method_bindings.mb_set_controller_number,
        (const Object*)this,
        controller_number
    );
}

void InputEventMIDI::set_controller_value(const int64_t controller_value) {
    rebel_icall_void_int(
        method_bindings.mb_set_controller_value,
        (const Object*)this,
        controller_value
    );
}

void InputEventMIDI::set_instrument(const int64_t instrument) {
    rebel_icall_void_int(
        method_bindings.mb_set_instrument,
        (const Object*)this,
        instrument
    );
}

void InputEventMIDI::set_message(const int64_t message) {
    rebel_icall_void_int(
        method_bindings.mb_set_message,
        (const Object*)this,
        message
    );
}

void InputEventMIDI::set_pitch(const int64_t pitch) {
    rebel_icall_void_int(
        method_bindings.mb_set_pitch,
        (const Object*)this,
        pitch
    );
}

void InputEventMIDI::set_pressure(const int64_t pressure) {
    rebel_icall_void_int(
        method_bindings.mb_set_pressure,
        (const Object*)this,
        pressure
    );
}

void InputEventMIDI::set_velocity(const int64_t velocity) {
    rebel_icall_void_int(
        method_bindings.mb_set_velocity,
        (const Object*)this,
        velocity
    );
}

InputEventMIDI* InputEventMIDI::create() {
    return (InputEventMIDI*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InputEventMIDI")()
         );
}

void InputEventMIDI::init_method_bindings() {
    method_bindings.mb_get_channel =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "get_channel"
        );
    method_bindings.mb_get_controller_number =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "get_controller_number"
        );
    method_bindings.mb_get_controller_value =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "get_controller_value"
        );
    method_bindings.mb_get_instrument =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "get_instrument"
        );
    method_bindings.mb_get_message =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "get_message"
        );
    method_bindings.mb_get_pitch =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "get_pitch"
        );
    method_bindings.mb_get_pressure =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "get_pressure"
        );
    method_bindings.mb_get_velocity =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "get_velocity"
        );
    method_bindings.mb_set_channel =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "set_channel"
        );
    method_bindings.mb_set_controller_number =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "set_controller_number"
        );
    method_bindings.mb_set_controller_value =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "set_controller_value"
        );
    method_bindings.mb_set_instrument =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "set_instrument"
        );
    method_bindings.mb_set_message =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "set_message"
        );
    method_bindings.mb_set_pitch =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "set_pitch"
        );
    method_bindings.mb_set_pressure =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "set_pressure"
        );
    method_bindings.mb_set_velocity =
        api->rebel_method_bind_get_method(
            "InputEventMIDI",
            "set_velocity"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventMIDI");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventMIDI::MethodBindings InputEventMIDI::method_bindings = {};
void* InputEventMIDI::class_tag = nullptr;
} // namespace Rebel
