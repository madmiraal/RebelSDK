// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/basebutton.h"

#include "classes/buttongroup.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/shortcut.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void BaseButton::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void BaseButton::_pressed() {
    rebel_icall_void(
        method_bindings.mb__pressed,
        (const Object*)this
    );
}

void BaseButton::_toggled(const bool button_pressed) {
    rebel_icall_void_bool(
        method_bindings.mb__toggled,
        (const Object*)this,
        button_pressed
    );
}

void BaseButton::_unhandled_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__unhandled_input,
        (const Object*)this,
        arg0.ptr()
    );
}

BaseButton::ActionMode BaseButton::get_action_mode() const {
    return (BaseButton::ActionMode)rebel_icall_int(
        method_bindings.mb_get_action_mode,
        (const Object*)this
    );
}

Ref<ButtonGroup> BaseButton::get_button_group() const {
    return Ref<ButtonGroup>::create_ref(rebel_icall_object(
        method_bindings.mb_get_button_group,
        (const Object*)this
    ));
}

int64_t BaseButton::get_button_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_button_mask,
        (const Object*)this
    );
}

BaseButton::DrawMode BaseButton::get_draw_mode() const {
    return (BaseButton::DrawMode)rebel_icall_int(
        method_bindings.mb_get_draw_mode,
        (const Object*)this
    );
}

Control::FocusMode BaseButton::get_enabled_focus_mode() const {
    return (Control::FocusMode)rebel_icall_int(
        method_bindings.mb_get_enabled_focus_mode,
        (const Object*)this
    );
}

Ref<ShortCut> BaseButton::get_shortcut() const {
    return Ref<ShortCut>::create_ref(rebel_icall_object(
        method_bindings.mb_get_shortcut,
        (const Object*)this
    ));
}

bool BaseButton::is_disabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_disabled,
        (const Object*)this
    );
}

bool BaseButton::is_hovered() const {
    return rebel_icall_bool(
        method_bindings.mb_is_hovered,
        (const Object*)this
    );
}

bool BaseButton::is_keep_pressed_outside() const {
    return rebel_icall_bool(
        method_bindings.mb_is_keep_pressed_outside,
        (const Object*)this
    );
}

bool BaseButton::is_pressed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_pressed,
        (const Object*)this
    );
}

bool BaseButton::is_shortcut_in_tooltip_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_shortcut_in_tooltip_enabled,
        (const Object*)this
    );
}

bool BaseButton::is_toggle_mode() const {
    return rebel_icall_bool(
        method_bindings.mb_is_toggle_mode,
        (const Object*)this
    );
}

void BaseButton::set_action_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_action_mode,
        (const Object*)this,
        mode
    );
}

void BaseButton::set_button_group(const Ref<ButtonGroup> button_group) {
    rebel_icall_void_object(
        method_bindings.mb_set_button_group,
        (const Object*)this,
        button_group.ptr()
    );
}

void BaseButton::set_button_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_button_mask,
        (const Object*)this,
        mask
    );
}

void BaseButton::set_disabled(const bool disabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disabled,
        (const Object*)this,
        disabled
    );
}

void BaseButton::set_enabled_focus_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_enabled_focus_mode,
        (const Object*)this,
        mode
    );
}

void BaseButton::set_keep_pressed_outside(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_keep_pressed_outside,
        (const Object*)this,
        enabled
    );
}

void BaseButton::set_pressed(const bool pressed) {
    rebel_icall_void_bool(
        method_bindings.mb_set_pressed,
        (const Object*)this,
        pressed
    );
}

void BaseButton::set_pressed_no_signal(const bool pressed) {
    rebel_icall_void_bool(
        method_bindings.mb_set_pressed_no_signal,
        (const Object*)this,
        pressed
    );
}

void BaseButton::set_shortcut(const Ref<ShortCut> shortcut) {
    rebel_icall_void_object(
        method_bindings.mb_set_shortcut,
        (const Object*)this,
        shortcut.ptr()
    );
}

void BaseButton::set_shortcut_in_tooltip(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_shortcut_in_tooltip,
        (const Object*)this,
        enabled
    );
}

void BaseButton::set_toggle_mode(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_toggle_mode,
        (const Object*)this,
        enabled
    );
}

void BaseButton::init_method_bindings() {
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "_gui_input"
        );
    method_bindings.mb__pressed =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "_pressed"
        );
    method_bindings.mb__toggled =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "_toggled"
        );
    method_bindings.mb__unhandled_input =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "_unhandled_input"
        );
    method_bindings.mb_get_action_mode =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "get_action_mode"
        );
    method_bindings.mb_get_button_group =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "get_button_group"
        );
    method_bindings.mb_get_button_mask =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "get_button_mask"
        );
    method_bindings.mb_get_draw_mode =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "get_draw_mode"
        );
    method_bindings.mb_get_enabled_focus_mode =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "get_enabled_focus_mode"
        );
    method_bindings.mb_get_shortcut =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "get_shortcut"
        );
    method_bindings.mb_is_disabled =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "is_disabled"
        );
    method_bindings.mb_is_hovered =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "is_hovered"
        );
    method_bindings.mb_is_keep_pressed_outside =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "is_keep_pressed_outside"
        );
    method_bindings.mb_is_pressed =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "is_pressed"
        );
    method_bindings.mb_is_shortcut_in_tooltip_enabled =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "is_shortcut_in_tooltip_enabled"
        );
    method_bindings.mb_is_toggle_mode =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "is_toggle_mode"
        );
    method_bindings.mb_set_action_mode =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "set_action_mode"
        );
    method_bindings.mb_set_button_group =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "set_button_group"
        );
    method_bindings.mb_set_button_mask =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "set_button_mask"
        );
    method_bindings.mb_set_disabled =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "set_disabled"
        );
    method_bindings.mb_set_enabled_focus_mode =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "set_enabled_focus_mode"
        );
    method_bindings.mb_set_keep_pressed_outside =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "set_keep_pressed_outside"
        );
    method_bindings.mb_set_pressed =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "set_pressed"
        );
    method_bindings.mb_set_pressed_no_signal =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "set_pressed_no_signal"
        );
    method_bindings.mb_set_shortcut =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "set_shortcut"
        );
    method_bindings.mb_set_shortcut_in_tooltip =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "set_shortcut_in_tooltip"
        );
    method_bindings.mb_set_toggle_mode =
        api->rebel_method_bind_get_method(
            "BaseButton",
            "set_toggle_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "BaseButton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

BaseButton::MethodBindings BaseButton::method_bindings = {};
void* BaseButton::class_tag = nullptr;
} // namespace Rebel
