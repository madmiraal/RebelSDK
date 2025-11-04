// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/scrollcontainer.h"

#include "classes/control.h"
#include "classes/hscrollbar.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/vscrollbar.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ScrollContainer::_gui_focus_changed(const Control* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_focus_changed,
        (const Object*)this,
        arg0
    );
}

void ScrollContainer::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void ScrollContainer::_scroll_moved(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb__scroll_moved,
        (const Object*)this,
        arg0
    );
}

void ScrollContainer::_update_scrollbar_position() {
    rebel_icall_void(
        method_bindings.mb__update_scrollbar_position,
        (const Object*)this
    );
}

void ScrollContainer::ensure_control_visible(const Control* control) {
    rebel_icall_void_object(
        method_bindings.mb_ensure_control_visible,
        (const Object*)this,
        control
    );
}

int64_t ScrollContainer::get_deadzone() const {
    return rebel_icall_int(
        method_bindings.mb_get_deadzone,
        (const Object*)this
    );
}

int64_t ScrollContainer::get_h_scroll() const {
    return rebel_icall_int(
        method_bindings.mb_get_h_scroll,
        (const Object*)this
    );
}

HScrollBar* ScrollContainer::get_h_scrollbar() {
    return (HScrollBar*)rebel_icall_object(
        method_bindings.mb_get_h_scrollbar,
        (const Object*)this
    );
}

int64_t ScrollContainer::get_v_scroll() const {
    return rebel_icall_int(
        method_bindings.mb_get_v_scroll,
        (const Object*)this
    );
}

VScrollBar* ScrollContainer::get_v_scrollbar() {
    return (VScrollBar*)rebel_icall_object(
        method_bindings.mb_get_v_scrollbar,
        (const Object*)this
    );
}

bool ScrollContainer::is_following_focus() const {
    return rebel_icall_bool(
        method_bindings.mb_is_following_focus,
        (const Object*)this
    );
}

bool ScrollContainer::is_h_scroll_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_h_scroll_enabled,
        (const Object*)this
    );
}

bool ScrollContainer::is_v_scroll_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_v_scroll_enabled,
        (const Object*)this
    );
}

void ScrollContainer::set_deadzone(const int64_t deadzone) {
    rebel_icall_void_int(
        method_bindings.mb_set_deadzone,
        (const Object*)this,
        deadzone
    );
}

void ScrollContainer::set_enable_h_scroll(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_enable_h_scroll,
        (const Object*)this,
        enable
    );
}

void ScrollContainer::set_enable_v_scroll(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_enable_v_scroll,
        (const Object*)this,
        enable
    );
}

void ScrollContainer::set_follow_focus(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_follow_focus,
        (const Object*)this,
        enabled
    );
}

void ScrollContainer::set_h_scroll(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_set_h_scroll,
        (const Object*)this,
        value
    );
}

void ScrollContainer::set_v_scroll(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_set_v_scroll,
        (const Object*)this,
        value
    );
}

ScrollContainer* ScrollContainer::create() {
    return (ScrollContainer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ScrollContainer")()
         );
}

void ScrollContainer::init_method_bindings() {
    method_bindings.mb__gui_focus_changed =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "_gui_focus_changed"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "_gui_input"
        );
    method_bindings.mb__scroll_moved =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "_scroll_moved"
        );
    method_bindings.mb__update_scrollbar_position =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "_update_scrollbar_position"
        );
    method_bindings.mb_ensure_control_visible =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "ensure_control_visible"
        );
    method_bindings.mb_get_deadzone =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "get_deadzone"
        );
    method_bindings.mb_get_h_scroll =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "get_h_scroll"
        );
    method_bindings.mb_get_h_scrollbar =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "get_h_scrollbar"
        );
    method_bindings.mb_get_v_scroll =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "get_v_scroll"
        );
    method_bindings.mb_get_v_scrollbar =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "get_v_scrollbar"
        );
    method_bindings.mb_is_following_focus =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "is_following_focus"
        );
    method_bindings.mb_is_h_scroll_enabled =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "is_h_scroll_enabled"
        );
    method_bindings.mb_is_v_scroll_enabled =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "is_v_scroll_enabled"
        );
    method_bindings.mb_set_deadzone =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "set_deadzone"
        );
    method_bindings.mb_set_enable_h_scroll =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "set_enable_h_scroll"
        );
    method_bindings.mb_set_enable_v_scroll =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "set_enable_v_scroll"
        );
    method_bindings.mb_set_follow_focus =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "set_follow_focus"
        );
    method_bindings.mb_set_h_scroll =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "set_h_scroll"
        );
    method_bindings.mb_set_v_scroll =
        api->rebel_method_bind_get_method(
            "ScrollContainer",
            "set_v_scroll"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ScrollContainer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ScrollContainer::MethodBindings ScrollContainer::method_bindings = {};
void* ScrollContainer::class_tag = nullptr;
} // namespace Rebel
