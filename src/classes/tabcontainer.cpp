// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/tabcontainer.h"

#include "classes/control.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/node.h"
#include "classes/popup.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void TabContainer::_child_renamed_callback() {
    rebel_icall_void(
        method_bindings.mb__child_renamed_callback,
        (const Object*)this
    );
}

void TabContainer::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void TabContainer::_on_mouse_exited() {
    rebel_icall_void(
        method_bindings.mb__on_mouse_exited,
        (const Object*)this
    );
}

void TabContainer::_on_theme_changed() {
    rebel_icall_void(
        method_bindings.mb__on_theme_changed,
        (const Object*)this
    );
}

void TabContainer::_repaint() {
    rebel_icall_void(
        method_bindings.mb__repaint,
        (const Object*)this
    );
}

void TabContainer::_update_current_tab() {
    rebel_icall_void(
        method_bindings.mb__update_current_tab,
        (const Object*)this
    );
}

bool TabContainer::are_tabs_visible() const {
    return rebel_icall_bool(
        method_bindings.mb_are_tabs_visible,
        (const Object*)this
    );
}

int64_t TabContainer::get_current_tab() const {
    return rebel_icall_int(
        method_bindings.mb_get_current_tab,
        (const Object*)this
    );
}

Control* TabContainer::get_current_tab_control() const {
    return (Control*)rebel_icall_object(
        method_bindings.mb_get_current_tab_control,
        (const Object*)this
    );
}

bool TabContainer::get_drag_to_rearrange_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_get_drag_to_rearrange_enabled,
        (const Object*)this
    );
}

Popup* TabContainer::get_popup() const {
    return (Popup*)rebel_icall_object(
        method_bindings.mb_get_popup,
        (const Object*)this
    );
}

int64_t TabContainer::get_previous_tab() const {
    return rebel_icall_int(
        method_bindings.mb_get_previous_tab,
        (const Object*)this
    );
}

TabContainer::TabAlign TabContainer::get_tab_align() const {
    return (TabContainer::TabAlign)rebel_icall_int(
        method_bindings.mb_get_tab_align,
        (const Object*)this
    );
}

Control* TabContainer::get_tab_control(const int64_t tab_idx) const {
    return (Control*)rebel_icall_object_int(
        method_bindings.mb_get_tab_control,
        (const Object*)this,
        tab_idx
    );
}

int64_t TabContainer::get_tab_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_tab_count,
        (const Object*)this
    );
}

bool TabContainer::get_tab_disabled(const int64_t tab_idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_tab_disabled,
        (const Object*)this,
        tab_idx
    );
}

bool TabContainer::get_tab_hidden(const int64_t tab_idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_tab_hidden,
        (const Object*)this,
        tab_idx
    );
}

Ref<Texture> TabContainer::get_tab_icon(const int64_t tab_idx) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_tab_icon,
        (const Object*)this,
        tab_idx
    ));
}

int64_t TabContainer::get_tab_idx_at_point(const Vector2 point) const {
    return rebel_icall_int_vector2(
        method_bindings.mb_get_tab_idx_at_point,
        (const Object*)this,
        point
    );
}

String TabContainer::get_tab_title(const int64_t tab_idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_tab_title,
        (const Object*)this,
        tab_idx
    );
}

int64_t TabContainer::get_tabs_rearrange_group() const {
    return rebel_icall_int(
        method_bindings.mb_get_tabs_rearrange_group,
        (const Object*)this
    );
}

bool TabContainer::get_use_hidden_tabs_for_min_size() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_hidden_tabs_for_min_size,
        (const Object*)this
    );
}

bool TabContainer::is_all_tabs_in_front() const {
    return rebel_icall_bool(
        method_bindings.mb_is_all_tabs_in_front,
        (const Object*)this
    );
}

void TabContainer::set_all_tabs_in_front(const bool is_front) {
    rebel_icall_void_bool(
        method_bindings.mb_set_all_tabs_in_front,
        (const Object*)this,
        is_front
    );
}

void TabContainer::set_current_tab(const int64_t tab_idx) {
    rebel_icall_void_int(
        method_bindings.mb_set_current_tab,
        (const Object*)this,
        tab_idx
    );
}

void TabContainer::set_drag_to_rearrange_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_drag_to_rearrange_enabled,
        (const Object*)this,
        enabled
    );
}

void TabContainer::set_popup(const Node* popup) {
    rebel_icall_void_object(
        method_bindings.mb_set_popup,
        (const Object*)this,
        popup
    );
}

void TabContainer::set_tab_align(const int64_t align) {
    rebel_icall_void_int(
        method_bindings.mb_set_tab_align,
        (const Object*)this,
        align
    );
}

void TabContainer::set_tab_disabled(const int64_t tab_idx, const bool disabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_tab_disabled,
        (const Object*)this,
        tab_idx,
        disabled
    );
}

void TabContainer::set_tab_hidden(const int64_t tab_idx, const bool hidden) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_tab_hidden,
        (const Object*)this,
        tab_idx,
        hidden
    );
}

void TabContainer::set_tab_icon(const int64_t tab_idx, const Ref<Texture> icon) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_tab_icon,
        (const Object*)this,
        tab_idx,
        icon.ptr()
    );
}

void TabContainer::set_tab_title(const int64_t tab_idx, const String title) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_tab_title,
        (const Object*)this,
        tab_idx,
        title
    );
}

void TabContainer::set_tabs_rearrange_group(const int64_t group_id) {
    rebel_icall_void_int(
        method_bindings.mb_set_tabs_rearrange_group,
        (const Object*)this,
        group_id
    );
}

void TabContainer::set_tabs_visible(const bool visible) {
    rebel_icall_void_bool(
        method_bindings.mb_set_tabs_visible,
        (const Object*)this,
        visible
    );
}

void TabContainer::set_use_hidden_tabs_for_min_size(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_hidden_tabs_for_min_size,
        (const Object*)this,
        enabled
    );
}

TabContainer* TabContainer::create() {
    return (TabContainer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"TabContainer")()
         );
}

void TabContainer::init_method_bindings() {
    method_bindings.mb__child_renamed_callback =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "_child_renamed_callback"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "_gui_input"
        );
    method_bindings.mb__on_mouse_exited =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "_on_mouse_exited"
        );
    method_bindings.mb__on_theme_changed =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "_on_theme_changed"
        );
    method_bindings.mb__repaint =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "_repaint"
        );
    method_bindings.mb__update_current_tab =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "_update_current_tab"
        );
    method_bindings.mb_are_tabs_visible =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "are_tabs_visible"
        );
    method_bindings.mb_get_current_tab =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_current_tab"
        );
    method_bindings.mb_get_current_tab_control =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_current_tab_control"
        );
    method_bindings.mb_get_drag_to_rearrange_enabled =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_drag_to_rearrange_enabled"
        );
    method_bindings.mb_get_popup =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_popup"
        );
    method_bindings.mb_get_previous_tab =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_previous_tab"
        );
    method_bindings.mb_get_tab_align =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_tab_align"
        );
    method_bindings.mb_get_tab_control =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_tab_control"
        );
    method_bindings.mb_get_tab_count =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_tab_count"
        );
    method_bindings.mb_get_tab_disabled =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_tab_disabled"
        );
    method_bindings.mb_get_tab_hidden =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_tab_hidden"
        );
    method_bindings.mb_get_tab_icon =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_tab_icon"
        );
    method_bindings.mb_get_tab_idx_at_point =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_tab_idx_at_point"
        );
    method_bindings.mb_get_tab_title =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_tab_title"
        );
    method_bindings.mb_get_tabs_rearrange_group =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_tabs_rearrange_group"
        );
    method_bindings.mb_get_use_hidden_tabs_for_min_size =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "get_use_hidden_tabs_for_min_size"
        );
    method_bindings.mb_is_all_tabs_in_front =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "is_all_tabs_in_front"
        );
    method_bindings.mb_set_all_tabs_in_front =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_all_tabs_in_front"
        );
    method_bindings.mb_set_current_tab =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_current_tab"
        );
    method_bindings.mb_set_drag_to_rearrange_enabled =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_drag_to_rearrange_enabled"
        );
    method_bindings.mb_set_popup =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_popup"
        );
    method_bindings.mb_set_tab_align =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_tab_align"
        );
    method_bindings.mb_set_tab_disabled =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_tab_disabled"
        );
    method_bindings.mb_set_tab_hidden =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_tab_hidden"
        );
    method_bindings.mb_set_tab_icon =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_tab_icon"
        );
    method_bindings.mb_set_tab_title =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_tab_title"
        );
    method_bindings.mb_set_tabs_rearrange_group =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_tabs_rearrange_group"
        );
    method_bindings.mb_set_tabs_visible =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_tabs_visible"
        );
    method_bindings.mb_set_use_hidden_tabs_for_min_size =
        api->rebel_method_bind_get_method(
            "TabContainer",
            "set_use_hidden_tabs_for_min_size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TabContainer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TabContainer::MethodBindings TabContainer::method_bindings = {};
void* TabContainer::class_tag = nullptr;
} // namespace Rebel
