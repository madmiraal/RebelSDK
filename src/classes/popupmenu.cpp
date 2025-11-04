// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/popupmenu.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/shortcut.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array PopupMenu::_get_items() const {
    return rebel_icall_array(
        method_bindings.mb__get_items,
        (const Object*)this
    );
}

void PopupMenu::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void PopupMenu::_set_items(const Array arg0) {
    rebel_icall_void_array(
        method_bindings.mb__set_items,
        (const Object*)this,
        arg0
    );
}

void PopupMenu::_submenu_timeout() {
    rebel_icall_void(
        method_bindings.mb__submenu_timeout,
        (const Object*)this
    );
}

void PopupMenu::add_check_item(const String label, const int64_t id, const int64_t accel) {
    rebel_icall_void_string_int_int(
        method_bindings.mb_add_check_item,
        (const Object*)this,
        label,
        id,
        accel
    );
}

void PopupMenu::add_check_shortcut(const Ref<ShortCut> shortcut, const int64_t id, const bool global) {
    rebel_icall_void_object_int_bool(
        method_bindings.mb_add_check_shortcut,
        (const Object*)this,
        shortcut.ptr(),
        id,
        global
    );
}

void PopupMenu::add_icon_check_item(const Ref<Texture> texture, const String label, const int64_t id, const int64_t accel) {
    rebel_icall_void_object_string_int_int(
        method_bindings.mb_add_icon_check_item,
        (const Object*)this,
        texture.ptr(),
        label,
        id,
        accel
    );
}

void PopupMenu::add_icon_check_shortcut(const Ref<Texture> texture, const Ref<ShortCut> shortcut, const int64_t id, const bool global) {
    rebel_icall_void_object_object_int_bool(
        method_bindings.mb_add_icon_check_shortcut,
        (const Object*)this,
        texture.ptr(),
        shortcut.ptr(),
        id,
        global
    );
}

void PopupMenu::add_icon_item(const Ref<Texture> texture, const String label, const int64_t id, const int64_t accel) {
    rebel_icall_void_object_string_int_int(
        method_bindings.mb_add_icon_item,
        (const Object*)this,
        texture.ptr(),
        label,
        id,
        accel
    );
}

void PopupMenu::add_icon_radio_check_item(const Ref<Texture> texture, const String label, const int64_t id, const int64_t accel) {
    rebel_icall_void_object_string_int_int(
        method_bindings.mb_add_icon_radio_check_item,
        (const Object*)this,
        texture.ptr(),
        label,
        id,
        accel
    );
}

void PopupMenu::add_icon_radio_check_shortcut(const Ref<Texture> texture, const Ref<ShortCut> shortcut, const int64_t id, const bool global) {
    rebel_icall_void_object_object_int_bool(
        method_bindings.mb_add_icon_radio_check_shortcut,
        (const Object*)this,
        texture.ptr(),
        shortcut.ptr(),
        id,
        global
    );
}

void PopupMenu::add_icon_shortcut(const Ref<Texture> texture, const Ref<ShortCut> shortcut, const int64_t id, const bool global) {
    rebel_icall_void_object_object_int_bool(
        method_bindings.mb_add_icon_shortcut,
        (const Object*)this,
        texture.ptr(),
        shortcut.ptr(),
        id,
        global
    );
}

void PopupMenu::add_item(const String label, const int64_t id, const int64_t accel) {
    rebel_icall_void_string_int_int(
        method_bindings.mb_add_item,
        (const Object*)this,
        label,
        id,
        accel
    );
}

void PopupMenu::add_multistate_item(const String label, const int64_t max_states, const int64_t default_state, const int64_t id, const int64_t accel) {
    rebel_icall_void_string_int_int_int_int(
        method_bindings.mb_add_multistate_item,
        (const Object*)this,
        label,
        max_states,
        default_state,
        id,
        accel
    );
}

void PopupMenu::add_radio_check_item(const String label, const int64_t id, const int64_t accel) {
    rebel_icall_void_string_int_int(
        method_bindings.mb_add_radio_check_item,
        (const Object*)this,
        label,
        id,
        accel
    );
}

void PopupMenu::add_radio_check_shortcut(const Ref<ShortCut> shortcut, const int64_t id, const bool global) {
    rebel_icall_void_object_int_bool(
        method_bindings.mb_add_radio_check_shortcut,
        (const Object*)this,
        shortcut.ptr(),
        id,
        global
    );
}

void PopupMenu::add_separator(const String label, const int64_t id) {
    rebel_icall_void_string_int(
        method_bindings.mb_add_separator,
        (const Object*)this,
        label,
        id
    );
}

void PopupMenu::add_shortcut(const Ref<ShortCut> shortcut, const int64_t id, const bool global) {
    rebel_icall_void_object_int_bool(
        method_bindings.mb_add_shortcut,
        (const Object*)this,
        shortcut.ptr(),
        id,
        global
    );
}

void PopupMenu::add_submenu_item(const String label, const String submenu, const int64_t id) {
    rebel_icall_void_string_string_int(
        method_bindings.mb_add_submenu_item,
        (const Object*)this,
        label,
        submenu,
        id
    );
}

void PopupMenu::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

bool PopupMenu::get_allow_search() const {
    return rebel_icall_bool(
        method_bindings.mb_get_allow_search,
        (const Object*)this
    );
}

int64_t PopupMenu::get_current_index() const {
    return rebel_icall_int(
        method_bindings.mb_get_current_index,
        (const Object*)this
    );
}

int64_t PopupMenu::get_item_accelerator(const int64_t idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_item_accelerator,
        (const Object*)this,
        idx
    );
}

int64_t PopupMenu::get_item_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_item_count,
        (const Object*)this
    );
}

Ref<Texture> PopupMenu::get_item_icon(const int64_t idx) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_item_icon,
        (const Object*)this,
        idx
    ));
}

int64_t PopupMenu::get_item_id(const int64_t idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_item_id,
        (const Object*)this,
        idx
    );
}

int64_t PopupMenu::get_item_index(const int64_t id) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_item_index,
        (const Object*)this,
        id
    );
}

Variant PopupMenu::get_item_metadata(const int64_t idx) const {
    return rebel_icall_variant_int(
        method_bindings.mb_get_item_metadata,
        (const Object*)this,
        idx
    );
}

Ref<ShortCut> PopupMenu::get_item_shortcut(const int64_t idx) const {
    return Ref<ShortCut>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_item_shortcut,
        (const Object*)this,
        idx
    ));
}

String PopupMenu::get_item_submenu(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_item_submenu,
        (const Object*)this,
        idx
    );
}

String PopupMenu::get_item_text(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_item_text,
        (const Object*)this,
        idx
    );
}

String PopupMenu::get_item_tooltip(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_item_tooltip,
        (const Object*)this,
        idx
    );
}

real_t PopupMenu::get_submenu_popup_delay() const {
    return rebel_icall_float(
        method_bindings.mb_get_submenu_popup_delay,
        (const Object*)this
    );
}

bool PopupMenu::is_hide_on_checkable_item_selection() const {
    return rebel_icall_bool(
        method_bindings.mb_is_hide_on_checkable_item_selection,
        (const Object*)this
    );
}

bool PopupMenu::is_hide_on_item_selection() const {
    return rebel_icall_bool(
        method_bindings.mb_is_hide_on_item_selection,
        (const Object*)this
    );
}

bool PopupMenu::is_hide_on_state_item_selection() const {
    return rebel_icall_bool(
        method_bindings.mb_is_hide_on_state_item_selection,
        (const Object*)this
    );
}

bool PopupMenu::is_hide_on_window_lose_focus() const {
    return rebel_icall_bool(
        method_bindings.mb_is_hide_on_window_lose_focus,
        (const Object*)this
    );
}

bool PopupMenu::is_item_checkable(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_item_checkable,
        (const Object*)this,
        idx
    );
}

bool PopupMenu::is_item_checked(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_item_checked,
        (const Object*)this,
        idx
    );
}

bool PopupMenu::is_item_disabled(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_item_disabled,
        (const Object*)this,
        idx
    );
}

bool PopupMenu::is_item_radio_checkable(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_item_radio_checkable,
        (const Object*)this,
        idx
    );
}

bool PopupMenu::is_item_separator(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_item_separator,
        (const Object*)this,
        idx
    );
}

bool PopupMenu::is_item_shortcut_disabled(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_item_shortcut_disabled,
        (const Object*)this,
        idx
    );
}

void PopupMenu::remove_item(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_remove_item,
        (const Object*)this,
        idx
    );
}

void PopupMenu::set_allow_search(const bool allow) {
    rebel_icall_void_bool(
        method_bindings.mb_set_allow_search,
        (const Object*)this,
        allow
    );
}

void PopupMenu::set_hide_on_checkable_item_selection(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_hide_on_checkable_item_selection,
        (const Object*)this,
        enable
    );
}

void PopupMenu::set_hide_on_item_selection(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_hide_on_item_selection,
        (const Object*)this,
        enable
    );
}

void PopupMenu::set_hide_on_state_item_selection(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_hide_on_state_item_selection,
        (const Object*)this,
        enable
    );
}

void PopupMenu::set_hide_on_window_lose_focus(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_hide_on_window_lose_focus,
        (const Object*)this,
        enable
    );
}

void PopupMenu::set_item_accelerator(const int64_t idx, const int64_t accel) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_item_accelerator,
        (const Object*)this,
        idx,
        accel
    );
}

void PopupMenu::set_item_as_checkable(const int64_t idx, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_item_as_checkable,
        (const Object*)this,
        idx,
        enable
    );
}

void PopupMenu::set_item_as_radio_checkable(const int64_t idx, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_item_as_radio_checkable,
        (const Object*)this,
        idx,
        enable
    );
}

void PopupMenu::set_item_as_separator(const int64_t idx, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_item_as_separator,
        (const Object*)this,
        idx,
        enable
    );
}

void PopupMenu::set_item_checked(const int64_t idx, const bool checked) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_item_checked,
        (const Object*)this,
        idx,
        checked
    );
}

void PopupMenu::set_item_disabled(const int64_t idx, const bool disabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_item_disabled,
        (const Object*)this,
        idx,
        disabled
    );
}

void PopupMenu::set_item_icon(const int64_t idx, const Ref<Texture> icon) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_item_icon,
        (const Object*)this,
        idx,
        icon.ptr()
    );
}

void PopupMenu::set_item_id(const int64_t idx, const int64_t id) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_item_id,
        (const Object*)this,
        idx,
        id
    );
}

void PopupMenu::set_item_metadata(const int64_t idx, const Variant metadata) {
    rebel_icall_void_int_variant(
        method_bindings.mb_set_item_metadata,
        (const Object*)this,
        idx,
        metadata
    );
}

void PopupMenu::set_item_multistate(const int64_t idx, const int64_t state) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_item_multistate,
        (const Object*)this,
        idx,
        state
    );
}

void PopupMenu::set_item_shortcut(const int64_t idx, const Ref<ShortCut> shortcut, const bool global) {
    rebel_icall_void_int_object_bool(
        method_bindings.mb_set_item_shortcut,
        (const Object*)this,
        idx,
        shortcut.ptr(),
        global
    );
}

void PopupMenu::set_item_shortcut_disabled(const int64_t idx, const bool disabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_item_shortcut_disabled,
        (const Object*)this,
        idx,
        disabled
    );
}

void PopupMenu::set_item_submenu(const int64_t idx, const String submenu) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_item_submenu,
        (const Object*)this,
        idx,
        submenu
    );
}

void PopupMenu::set_item_text(const int64_t idx, const String text) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_item_text,
        (const Object*)this,
        idx,
        text
    );
}

void PopupMenu::set_item_tooltip(const int64_t idx, const String tooltip) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_item_tooltip,
        (const Object*)this,
        idx,
        tooltip
    );
}

void PopupMenu::set_submenu_popup_delay(const real_t seconds) {
    rebel_icall_void_float(
        method_bindings.mb_set_submenu_popup_delay,
        (const Object*)this,
        seconds
    );
}

void PopupMenu::toggle_item_checked(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_toggle_item_checked,
        (const Object*)this,
        idx
    );
}

void PopupMenu::toggle_item_multistate(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_toggle_item_multistate,
        (const Object*)this,
        idx
    );
}

PopupMenu* PopupMenu::create() {
    return (PopupMenu*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PopupMenu")()
         );
}

void PopupMenu::init_method_bindings() {
    method_bindings.mb__get_items =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "_get_items"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "_gui_input"
        );
    method_bindings.mb__set_items =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "_set_items"
        );
    method_bindings.mb__submenu_timeout =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "_submenu_timeout"
        );
    method_bindings.mb_add_check_item =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_check_item"
        );
    method_bindings.mb_add_check_shortcut =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_check_shortcut"
        );
    method_bindings.mb_add_icon_check_item =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_icon_check_item"
        );
    method_bindings.mb_add_icon_check_shortcut =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_icon_check_shortcut"
        );
    method_bindings.mb_add_icon_item =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_icon_item"
        );
    method_bindings.mb_add_icon_radio_check_item =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_icon_radio_check_item"
        );
    method_bindings.mb_add_icon_radio_check_shortcut =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_icon_radio_check_shortcut"
        );
    method_bindings.mb_add_icon_shortcut =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_icon_shortcut"
        );
    method_bindings.mb_add_item =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_item"
        );
    method_bindings.mb_add_multistate_item =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_multistate_item"
        );
    method_bindings.mb_add_radio_check_item =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_radio_check_item"
        );
    method_bindings.mb_add_radio_check_shortcut =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_radio_check_shortcut"
        );
    method_bindings.mb_add_separator =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_separator"
        );
    method_bindings.mb_add_shortcut =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_shortcut"
        );
    method_bindings.mb_add_submenu_item =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "add_submenu_item"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "clear"
        );
    method_bindings.mb_get_allow_search =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_allow_search"
        );
    method_bindings.mb_get_current_index =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_current_index"
        );
    method_bindings.mb_get_item_accelerator =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_item_accelerator"
        );
    method_bindings.mb_get_item_count =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_item_count"
        );
    method_bindings.mb_get_item_icon =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_item_icon"
        );
    method_bindings.mb_get_item_id =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_item_id"
        );
    method_bindings.mb_get_item_index =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_item_index"
        );
    method_bindings.mb_get_item_metadata =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_item_metadata"
        );
    method_bindings.mb_get_item_shortcut =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_item_shortcut"
        );
    method_bindings.mb_get_item_submenu =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_item_submenu"
        );
    method_bindings.mb_get_item_text =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_item_text"
        );
    method_bindings.mb_get_item_tooltip =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_item_tooltip"
        );
    method_bindings.mb_get_submenu_popup_delay =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "get_submenu_popup_delay"
        );
    method_bindings.mb_is_hide_on_checkable_item_selection =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "is_hide_on_checkable_item_selection"
        );
    method_bindings.mb_is_hide_on_item_selection =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "is_hide_on_item_selection"
        );
    method_bindings.mb_is_hide_on_state_item_selection =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "is_hide_on_state_item_selection"
        );
    method_bindings.mb_is_hide_on_window_lose_focus =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "is_hide_on_window_lose_focus"
        );
    method_bindings.mb_is_item_checkable =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "is_item_checkable"
        );
    method_bindings.mb_is_item_checked =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "is_item_checked"
        );
    method_bindings.mb_is_item_disabled =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "is_item_disabled"
        );
    method_bindings.mb_is_item_radio_checkable =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "is_item_radio_checkable"
        );
    method_bindings.mb_is_item_separator =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "is_item_separator"
        );
    method_bindings.mb_is_item_shortcut_disabled =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "is_item_shortcut_disabled"
        );
    method_bindings.mb_remove_item =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "remove_item"
        );
    method_bindings.mb_set_allow_search =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_allow_search"
        );
    method_bindings.mb_set_hide_on_checkable_item_selection =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_hide_on_checkable_item_selection"
        );
    method_bindings.mb_set_hide_on_item_selection =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_hide_on_item_selection"
        );
    method_bindings.mb_set_hide_on_state_item_selection =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_hide_on_state_item_selection"
        );
    method_bindings.mb_set_hide_on_window_lose_focus =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_hide_on_window_lose_focus"
        );
    method_bindings.mb_set_item_accelerator =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_accelerator"
        );
    method_bindings.mb_set_item_as_checkable =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_as_checkable"
        );
    method_bindings.mb_set_item_as_radio_checkable =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_as_radio_checkable"
        );
    method_bindings.mb_set_item_as_separator =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_as_separator"
        );
    method_bindings.mb_set_item_checked =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_checked"
        );
    method_bindings.mb_set_item_disabled =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_disabled"
        );
    method_bindings.mb_set_item_icon =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_icon"
        );
    method_bindings.mb_set_item_id =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_id"
        );
    method_bindings.mb_set_item_metadata =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_metadata"
        );
    method_bindings.mb_set_item_multistate =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_multistate"
        );
    method_bindings.mb_set_item_shortcut =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_shortcut"
        );
    method_bindings.mb_set_item_shortcut_disabled =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_shortcut_disabled"
        );
    method_bindings.mb_set_item_submenu =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_submenu"
        );
    method_bindings.mb_set_item_text =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_text"
        );
    method_bindings.mb_set_item_tooltip =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_item_tooltip"
        );
    method_bindings.mb_set_submenu_popup_delay =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "set_submenu_popup_delay"
        );
    method_bindings.mb_toggle_item_checked =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "toggle_item_checked"
        );
    method_bindings.mb_toggle_item_multistate =
        api->rebel_method_bind_get_method(
            "PopupMenu",
            "toggle_item_multistate"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PopupMenu");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PopupMenu::MethodBindings PopupMenu::method_bindings = {};
void* PopupMenu::class_tag = nullptr;
} // namespace Rebel
