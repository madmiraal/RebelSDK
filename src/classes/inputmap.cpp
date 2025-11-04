// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputmap.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void InputMap::action_add_event(const String action, const Ref<InputEvent> event) {
    rebel_icall_void_string_object(
        method_bindings.mb_action_add_event,
        (const Object*)this,
        action,
        event.ptr()
    );
}

void InputMap::action_erase_event(const String action, const Ref<InputEvent> event) {
    rebel_icall_void_string_object(
        method_bindings.mb_action_erase_event,
        (const Object*)this,
        action,
        event.ptr()
    );
}

void InputMap::action_erase_events(const String action) {
    rebel_icall_void_string(
        method_bindings.mb_action_erase_events,
        (const Object*)this,
        action
    );
}

real_t InputMap::action_get_deadzone(const String action) {
    return rebel_icall_float_string(
        method_bindings.mb_action_get_deadzone,
        (const Object*)this,
        action
    );
}

bool InputMap::action_has_event(const String action, const Ref<InputEvent> event) {
    return rebel_icall_bool_string_object(
        method_bindings.mb_action_has_event,
        (const Object*)this,
        action,
        event.ptr()
    );
}

void InputMap::action_set_deadzone(const String action, const real_t deadzone) {
    rebel_icall_void_string_float(
        method_bindings.mb_action_set_deadzone,
        (const Object*)this,
        action,
        deadzone
    );
}

void InputMap::add_action(const String action, const real_t deadzone) {
    rebel_icall_void_string_float(
        method_bindings.mb_add_action,
        (const Object*)this,
        action,
        deadzone
    );
}

void InputMap::erase_action(const String action) {
    rebel_icall_void_string(
        method_bindings.mb_erase_action,
        (const Object*)this,
        action
    );
}

bool InputMap::event_is_action(const Ref<InputEvent> event, const String action, const bool exact_match) const {
    return rebel_icall_bool_object_string_bool(
        method_bindings.mb_event_is_action,
        (const Object*)this,
        event.ptr(),
        action,
        exact_match
    );
}

Array InputMap::get_action_list(const String action) {
    return rebel_icall_array_string(
        method_bindings.mb_get_action_list,
        (const Object*)this,
        action
    );
}

Array InputMap::get_actions() {
    return rebel_icall_array(
        method_bindings.mb_get_actions,
        (const Object*)this
    );
}

bool InputMap::has_action(const String action) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_action,
        (const Object*)this,
        action
    );
}

void InputMap::load_from_globals() {
    rebel_icall_void(
        method_bindings.mb_load_from_globals,
        (const Object*)this
    );
}

InputMap* InputMap::singleton = nullptr;

InputMap::InputMap() {
    owner = api->rebel_global_get_singleton((char*) "InputMap");
}

void InputMap::init_method_bindings() {
    method_bindings.mb_action_add_event =
        api->rebel_method_bind_get_method(
            "InputMap",
            "action_add_event"
        );
    method_bindings.mb_action_erase_event =
        api->rebel_method_bind_get_method(
            "InputMap",
            "action_erase_event"
        );
    method_bindings.mb_action_erase_events =
        api->rebel_method_bind_get_method(
            "InputMap",
            "action_erase_events"
        );
    method_bindings.mb_action_get_deadzone =
        api->rebel_method_bind_get_method(
            "InputMap",
            "action_get_deadzone"
        );
    method_bindings.mb_action_has_event =
        api->rebel_method_bind_get_method(
            "InputMap",
            "action_has_event"
        );
    method_bindings.mb_action_set_deadzone =
        api->rebel_method_bind_get_method(
            "InputMap",
            "action_set_deadzone"
        );
    method_bindings.mb_add_action =
        api->rebel_method_bind_get_method(
            "InputMap",
            "add_action"
        );
    method_bindings.mb_erase_action =
        api->rebel_method_bind_get_method(
            "InputMap",
            "erase_action"
        );
    method_bindings.mb_event_is_action =
        api->rebel_method_bind_get_method(
            "InputMap",
            "event_is_action"
        );
    method_bindings.mb_get_action_list =
        api->rebel_method_bind_get_method(
            "InputMap",
            "get_action_list"
        );
    method_bindings.mb_get_actions =
        api->rebel_method_bind_get_method(
            "InputMap",
            "get_actions"
        );
    method_bindings.mb_has_action =
        api->rebel_method_bind_get_method(
            "InputMap",
            "has_action"
        );
    method_bindings.mb_load_from_globals =
        api->rebel_method_bind_get_method(
            "InputMap",
            "load_from_globals"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputMap");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputMap::MethodBindings InputMap::method_bindings = {};
void* InputMap::class_tag = nullptr;
} // namespace Rebel
