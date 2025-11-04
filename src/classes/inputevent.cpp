// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputevent.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool InputEvent::accumulate(const Ref<InputEvent> with_event) {
    return rebel_icall_bool_object(
        method_bindings.mb_accumulate,
        (const Object*)this,
        with_event.ptr()
    );
}

String InputEvent::as_text() const {
    return rebel_icall_string(
        method_bindings.mb_as_text,
        (const Object*)this
    );
}

real_t InputEvent::get_action_strength(const String action, const bool exact_match) const {
    return rebel_icall_float_string_bool(
        method_bindings.mb_get_action_strength,
        (const Object*)this,
        action,
        exact_match
    );
}

int64_t InputEvent::get_device() const {
    return rebel_icall_int(
        method_bindings.mb_get_device,
        (const Object*)this
    );
}

bool InputEvent::is_action(const String action, const bool exact_match) const {
    return rebel_icall_bool_string_bool(
        method_bindings.mb_is_action,
        (const Object*)this,
        action,
        exact_match
    );
}

bool InputEvent::is_action_pressed(const String action, const bool allow_echo, const bool exact_match) const {
    return rebel_icall_bool_string_bool_bool(
        method_bindings.mb_is_action_pressed,
        (const Object*)this,
        action,
        allow_echo,
        exact_match
    );
}

bool InputEvent::is_action_released(const String action, const bool exact_match) const {
    return rebel_icall_bool_string_bool(
        method_bindings.mb_is_action_released,
        (const Object*)this,
        action,
        exact_match
    );
}

bool InputEvent::is_action_type() const {
    return rebel_icall_bool(
        method_bindings.mb_is_action_type,
        (const Object*)this
    );
}

bool InputEvent::is_echo() const {
    return rebel_icall_bool(
        method_bindings.mb_is_echo,
        (const Object*)this
    );
}

bool InputEvent::is_pressed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_pressed,
        (const Object*)this
    );
}

void InputEvent::set_device(const int64_t device) {
    rebel_icall_void_int(
        method_bindings.mb_set_device,
        (const Object*)this,
        device
    );
}

bool InputEvent::shortcut_match(const Ref<InputEvent> event, const bool exact_match) const {
    return rebel_icall_bool_object_bool(
        method_bindings.mb_shortcut_match,
        (const Object*)this,
        event.ptr(),
        exact_match
    );
}

Ref<InputEvent> InputEvent::xformed_by(const Transform2D xform, const Vector2 local_ofs) const {
    return Ref<InputEvent>::create_ref(rebel_icall_object_transform2d_vector2(
        method_bindings.mb_xformed_by,
        (const Object*)this,
        xform,
        local_ofs
    ));
}

void InputEvent::init_method_bindings() {
    method_bindings.mb_accumulate =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "accumulate"
        );
    method_bindings.mb_as_text =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "as_text"
        );
    method_bindings.mb_get_action_strength =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "get_action_strength"
        );
    method_bindings.mb_get_device =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "get_device"
        );
    method_bindings.mb_is_action =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "is_action"
        );
    method_bindings.mb_is_action_pressed =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "is_action_pressed"
        );
    method_bindings.mb_is_action_released =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "is_action_released"
        );
    method_bindings.mb_is_action_type =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "is_action_type"
        );
    method_bindings.mb_is_echo =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "is_echo"
        );
    method_bindings.mb_is_pressed =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "is_pressed"
        );
    method_bindings.mb_set_device =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "set_device"
        );
    method_bindings.mb_shortcut_match =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "shortcut_match"
        );
    method_bindings.mb_xformed_by =
        api->rebel_method_bind_get_method(
            "InputEvent",
            "xformed_by"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEvent");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEvent::MethodBindings InputEvent::method_bindings = {};
void* InputEvent::class_tag = nullptr;
} // namespace Rebel
