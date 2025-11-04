// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventwithmodifiers.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool InputEventWithModifiers::get_alt() const {
    return rebel_icall_bool(
        method_bindings.mb_get_alt,
        (const Object*)this
    );
}

bool InputEventWithModifiers::get_command() const {
    return rebel_icall_bool(
        method_bindings.mb_get_command,
        (const Object*)this
    );
}

bool InputEventWithModifiers::get_control() const {
    return rebel_icall_bool(
        method_bindings.mb_get_control,
        (const Object*)this
    );
}

bool InputEventWithModifiers::get_metakey() const {
    return rebel_icall_bool(
        method_bindings.mb_get_metakey,
        (const Object*)this
    );
}

bool InputEventWithModifiers::get_shift() const {
    return rebel_icall_bool(
        method_bindings.mb_get_shift,
        (const Object*)this
    );
}

void InputEventWithModifiers::set_alt(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_alt,
        (const Object*)this,
        enable
    );
}

void InputEventWithModifiers::set_command(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_command,
        (const Object*)this,
        enable
    );
}

void InputEventWithModifiers::set_control(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_control,
        (const Object*)this,
        enable
    );
}

void InputEventWithModifiers::set_metakey(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_metakey,
        (const Object*)this,
        enable
    );
}

void InputEventWithModifiers::set_shift(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_shift,
        (const Object*)this,
        enable
    );
}

void InputEventWithModifiers::init_method_bindings() {
    method_bindings.mb_get_alt =
        api->rebel_method_bind_get_method(
            "InputEventWithModifiers",
            "get_alt"
        );
    method_bindings.mb_get_command =
        api->rebel_method_bind_get_method(
            "InputEventWithModifiers",
            "get_command"
        );
    method_bindings.mb_get_control =
        api->rebel_method_bind_get_method(
            "InputEventWithModifiers",
            "get_control"
        );
    method_bindings.mb_get_metakey =
        api->rebel_method_bind_get_method(
            "InputEventWithModifiers",
            "get_metakey"
        );
    method_bindings.mb_get_shift =
        api->rebel_method_bind_get_method(
            "InputEventWithModifiers",
            "get_shift"
        );
    method_bindings.mb_set_alt =
        api->rebel_method_bind_get_method(
            "InputEventWithModifiers",
            "set_alt"
        );
    method_bindings.mb_set_command =
        api->rebel_method_bind_get_method(
            "InputEventWithModifiers",
            "set_command"
        );
    method_bindings.mb_set_control =
        api->rebel_method_bind_get_method(
            "InputEventWithModifiers",
            "set_control"
        );
    method_bindings.mb_set_metakey =
        api->rebel_method_bind_get_method(
            "InputEventWithModifiers",
            "set_metakey"
        );
    method_bindings.mb_set_shift =
        api->rebel_method_bind_get_method(
            "InputEventWithModifiers",
            "set_shift"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventWithModifiers");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventWithModifiers::MethodBindings InputEventWithModifiers::method_bindings = {};
void* InputEventWithModifiers::class_tag = nullptr;
} // namespace Rebel
