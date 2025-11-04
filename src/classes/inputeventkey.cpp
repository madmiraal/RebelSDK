// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventkey.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t InputEventKey::get_physical_scancode() const {
    return rebel_icall_int(
        method_bindings.mb_get_physical_scancode,
        (const Object*)this
    );
}

int64_t InputEventKey::get_physical_scancode_with_modifiers() const {
    return rebel_icall_int(
        method_bindings.mb_get_physical_scancode_with_modifiers,
        (const Object*)this
    );
}

int64_t InputEventKey::get_scancode() const {
    return rebel_icall_int(
        method_bindings.mb_get_scancode,
        (const Object*)this
    );
}

int64_t InputEventKey::get_scancode_with_modifiers() const {
    return rebel_icall_int(
        method_bindings.mb_get_scancode_with_modifiers,
        (const Object*)this
    );
}

int64_t InputEventKey::get_unicode() const {
    return rebel_icall_int(
        method_bindings.mb_get_unicode,
        (const Object*)this
    );
}

void InputEventKey::set_echo(const bool echo) {
    rebel_icall_void_bool(
        method_bindings.mb_set_echo,
        (const Object*)this,
        echo
    );
}

void InputEventKey::set_physical_scancode(const int64_t scancode) {
    rebel_icall_void_int(
        method_bindings.mb_set_physical_scancode,
        (const Object*)this,
        scancode
    );
}

void InputEventKey::set_pressed(const bool pressed) {
    rebel_icall_void_bool(
        method_bindings.mb_set_pressed,
        (const Object*)this,
        pressed
    );
}

void InputEventKey::set_scancode(const int64_t scancode) {
    rebel_icall_void_int(
        method_bindings.mb_set_scancode,
        (const Object*)this,
        scancode
    );
}

void InputEventKey::set_unicode(const int64_t unicode) {
    rebel_icall_void_int(
        method_bindings.mb_set_unicode,
        (const Object*)this,
        unicode
    );
}

InputEventKey* InputEventKey::create() {
    return (InputEventKey*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InputEventKey")()
         );
}

void InputEventKey::init_method_bindings() {
    method_bindings.mb_get_physical_scancode =
        api->rebel_method_bind_get_method(
            "InputEventKey",
            "get_physical_scancode"
        );
    method_bindings.mb_get_physical_scancode_with_modifiers =
        api->rebel_method_bind_get_method(
            "InputEventKey",
            "get_physical_scancode_with_modifiers"
        );
    method_bindings.mb_get_scancode =
        api->rebel_method_bind_get_method(
            "InputEventKey",
            "get_scancode"
        );
    method_bindings.mb_get_scancode_with_modifiers =
        api->rebel_method_bind_get_method(
            "InputEventKey",
            "get_scancode_with_modifiers"
        );
    method_bindings.mb_get_unicode =
        api->rebel_method_bind_get_method(
            "InputEventKey",
            "get_unicode"
        );
    method_bindings.mb_set_echo =
        api->rebel_method_bind_get_method(
            "InputEventKey",
            "set_echo"
        );
    method_bindings.mb_set_physical_scancode =
        api->rebel_method_bind_get_method(
            "InputEventKey",
            "set_physical_scancode"
        );
    method_bindings.mb_set_pressed =
        api->rebel_method_bind_get_method(
            "InputEventKey",
            "set_pressed"
        );
    method_bindings.mb_set_scancode =
        api->rebel_method_bind_get_method(
            "InputEventKey",
            "set_scancode"
        );
    method_bindings.mb_set_unicode =
        api->rebel_method_bind_get_method(
            "InputEventKey",
            "set_unicode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventKey");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventKey::MethodBindings InputEventKey::method_bindings = {};
void* InputEventKey::class_tag = nullptr;
} // namespace Rebel
