// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/tabs.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Tabs::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void Tabs::_on_mouse_exited() {
    rebel_icall_void(
        method_bindings.mb__on_mouse_exited,
        (const Object*)this
    );
}

void Tabs::_update_hover() {
    rebel_icall_void(
        method_bindings.mb__update_hover,
        (const Object*)this
    );
}

void Tabs::add_tab(const String title, const Ref<Texture> icon) {
    rebel_icall_void_string_object(
        method_bindings.mb_add_tab,
        (const Object*)this,
        title,
        icon.ptr()
    );
}

void Tabs::ensure_tab_visible(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_ensure_tab_visible,
        (const Object*)this,
        idx
    );
}

int64_t Tabs::get_current_tab() const {
    return rebel_icall_int(
        method_bindings.mb_get_current_tab,
        (const Object*)this
    );
}

bool Tabs::get_drag_to_rearrange_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_get_drag_to_rearrange_enabled,
        (const Object*)this
    );
}

bool Tabs::get_offset_buttons_visible() const {
    return rebel_icall_bool(
        method_bindings.mb_get_offset_buttons_visible,
        (const Object*)this
    );
}

int64_t Tabs::get_previous_tab() const {
    return rebel_icall_int(
        method_bindings.mb_get_previous_tab,
        (const Object*)this
    );
}

bool Tabs::get_scrolling_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_get_scrolling_enabled,
        (const Object*)this
    );
}

bool Tabs::get_select_with_rmb() const {
    return rebel_icall_bool(
        method_bindings.mb_get_select_with_rmb,
        (const Object*)this
    );
}

Tabs::TabAlign Tabs::get_tab_align() const {
    return (Tabs::TabAlign)rebel_icall_int(
        method_bindings.mb_get_tab_align,
        (const Object*)this
    );
}

Tabs::CloseButtonDisplayPolicy Tabs::get_tab_close_display_policy() const {
    return (Tabs::CloseButtonDisplayPolicy)rebel_icall_int(
        method_bindings.mb_get_tab_close_display_policy,
        (const Object*)this
    );
}

int64_t Tabs::get_tab_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_tab_count,
        (const Object*)this
    );
}

bool Tabs::get_tab_disabled(const int64_t tab_idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_tab_disabled,
        (const Object*)this,
        tab_idx
    );
}

Ref<Texture> Tabs::get_tab_icon(const int64_t tab_idx) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_tab_icon,
        (const Object*)this,
        tab_idx
    ));
}

int64_t Tabs::get_tab_offset() const {
    return rebel_icall_int(
        method_bindings.mb_get_tab_offset,
        (const Object*)this
    );
}

Rect2 Tabs::get_tab_rect(const int64_t tab_idx) const {
    return rebel_icall_rect2_int(
        method_bindings.mb_get_tab_rect,
        (const Object*)this,
        tab_idx
    );
}

String Tabs::get_tab_title(const int64_t tab_idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_tab_title,
        (const Object*)this,
        tab_idx
    );
}

int64_t Tabs::get_tabs_rearrange_group() const {
    return rebel_icall_int(
        method_bindings.mb_get_tabs_rearrange_group,
        (const Object*)this
    );
}

void Tabs::move_tab(const int64_t from, const int64_t to) {
    rebel_icall_void_int_int(
        method_bindings.mb_move_tab,
        (const Object*)this,
        from,
        to
    );
}

void Tabs::remove_tab(const int64_t tab_idx) {
    rebel_icall_void_int(
        method_bindings.mb_remove_tab,
        (const Object*)this,
        tab_idx
    );
}

void Tabs::set_current_tab(const int64_t tab_idx) {
    rebel_icall_void_int(
        method_bindings.mb_set_current_tab,
        (const Object*)this,
        tab_idx
    );
}

void Tabs::set_drag_to_rearrange_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_drag_to_rearrange_enabled,
        (const Object*)this,
        enabled
    );
}

void Tabs::set_scrolling_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_scrolling_enabled,
        (const Object*)this,
        enabled
    );
}

void Tabs::set_select_with_rmb(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_select_with_rmb,
        (const Object*)this,
        enabled
    );
}

void Tabs::set_tab_align(const int64_t align) {
    rebel_icall_void_int(
        method_bindings.mb_set_tab_align,
        (const Object*)this,
        align
    );
}

void Tabs::set_tab_close_display_policy(const int64_t policy) {
    rebel_icall_void_int(
        method_bindings.mb_set_tab_close_display_policy,
        (const Object*)this,
        policy
    );
}

void Tabs::set_tab_disabled(const int64_t tab_idx, const bool disabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_tab_disabled,
        (const Object*)this,
        tab_idx,
        disabled
    );
}

void Tabs::set_tab_icon(const int64_t tab_idx, const Ref<Texture> icon) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_tab_icon,
        (const Object*)this,
        tab_idx,
        icon.ptr()
    );
}

void Tabs::set_tab_title(const int64_t tab_idx, const String title) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_tab_title,
        (const Object*)this,
        tab_idx,
        title
    );
}

void Tabs::set_tabs_rearrange_group(const int64_t group_id) {
    rebel_icall_void_int(
        method_bindings.mb_set_tabs_rearrange_group,
        (const Object*)this,
        group_id
    );
}

Tabs* Tabs::create() {
    return (Tabs*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Tabs")()
         );
}

void Tabs::init_method_bindings() {
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "Tabs",
            "_gui_input"
        );
    method_bindings.mb__on_mouse_exited =
        api->rebel_method_bind_get_method(
            "Tabs",
            "_on_mouse_exited"
        );
    method_bindings.mb__update_hover =
        api->rebel_method_bind_get_method(
            "Tabs",
            "_update_hover"
        );
    method_bindings.mb_add_tab =
        api->rebel_method_bind_get_method(
            "Tabs",
            "add_tab"
        );
    method_bindings.mb_ensure_tab_visible =
        api->rebel_method_bind_get_method(
            "Tabs",
            "ensure_tab_visible"
        );
    method_bindings.mb_get_current_tab =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_current_tab"
        );
    method_bindings.mb_get_drag_to_rearrange_enabled =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_drag_to_rearrange_enabled"
        );
    method_bindings.mb_get_offset_buttons_visible =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_offset_buttons_visible"
        );
    method_bindings.mb_get_previous_tab =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_previous_tab"
        );
    method_bindings.mb_get_scrolling_enabled =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_scrolling_enabled"
        );
    method_bindings.mb_get_select_with_rmb =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_select_with_rmb"
        );
    method_bindings.mb_get_tab_align =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_tab_align"
        );
    method_bindings.mb_get_tab_close_display_policy =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_tab_close_display_policy"
        );
    method_bindings.mb_get_tab_count =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_tab_count"
        );
    method_bindings.mb_get_tab_disabled =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_tab_disabled"
        );
    method_bindings.mb_get_tab_icon =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_tab_icon"
        );
    method_bindings.mb_get_tab_offset =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_tab_offset"
        );
    method_bindings.mb_get_tab_rect =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_tab_rect"
        );
    method_bindings.mb_get_tab_title =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_tab_title"
        );
    method_bindings.mb_get_tabs_rearrange_group =
        api->rebel_method_bind_get_method(
            "Tabs",
            "get_tabs_rearrange_group"
        );
    method_bindings.mb_move_tab =
        api->rebel_method_bind_get_method(
            "Tabs",
            "move_tab"
        );
    method_bindings.mb_remove_tab =
        api->rebel_method_bind_get_method(
            "Tabs",
            "remove_tab"
        );
    method_bindings.mb_set_current_tab =
        api->rebel_method_bind_get_method(
            "Tabs",
            "set_current_tab"
        );
    method_bindings.mb_set_drag_to_rearrange_enabled =
        api->rebel_method_bind_get_method(
            "Tabs",
            "set_drag_to_rearrange_enabled"
        );
    method_bindings.mb_set_scrolling_enabled =
        api->rebel_method_bind_get_method(
            "Tabs",
            "set_scrolling_enabled"
        );
    method_bindings.mb_set_select_with_rmb =
        api->rebel_method_bind_get_method(
            "Tabs",
            "set_select_with_rmb"
        );
    method_bindings.mb_set_tab_align =
        api->rebel_method_bind_get_method(
            "Tabs",
            "set_tab_align"
        );
    method_bindings.mb_set_tab_close_display_policy =
        api->rebel_method_bind_get_method(
            "Tabs",
            "set_tab_close_display_policy"
        );
    method_bindings.mb_set_tab_disabled =
        api->rebel_method_bind_get_method(
            "Tabs",
            "set_tab_disabled"
        );
    method_bindings.mb_set_tab_icon =
        api->rebel_method_bind_get_method(
            "Tabs",
            "set_tab_icon"
        );
    method_bindings.mb_set_tab_title =
        api->rebel_method_bind_get_method(
            "Tabs",
            "set_tab_title"
        );
    method_bindings.mb_set_tabs_rearrange_group =
        api->rebel_method_bind_get_method(
            "Tabs",
            "set_tabs_rearrange_group"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Tabs");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Tabs::MethodBindings Tabs::method_bindings = {};
void* Tabs::class_tag = nullptr;
} // namespace Rebel
