// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/itemlist.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/texture.h"
#include "classes/vscrollbar.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array ItemList::_get_items() const {
    return rebel_icall_array(
        method_bindings.mb__get_items,
        (const Object*)this
    );
}

void ItemList::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void ItemList::_scroll_changed(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb__scroll_changed,
        (const Object*)this,
        arg0
    );
}

void ItemList::_set_items(const Array arg0) {
    rebel_icall_void_array(
        method_bindings.mb__set_items,
        (const Object*)this,
        arg0
    );
}

void ItemList::add_icon_item(const Ref<Texture> icon, const bool selectable) {
    rebel_icall_void_object_bool(
        method_bindings.mb_add_icon_item,
        (const Object*)this,
        icon.ptr(),
        selectable
    );
}

void ItemList::add_item(const String text, const Ref<Texture> icon, const bool selectable) {
    rebel_icall_void_string_object_bool(
        method_bindings.mb_add_item,
        (const Object*)this,
        text,
        icon.ptr(),
        selectable
    );
}

void ItemList::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void ItemList::ensure_current_is_visible() {
    rebel_icall_void(
        method_bindings.mb_ensure_current_is_visible,
        (const Object*)this
    );
}

bool ItemList::get_allow_reselect() const {
    return rebel_icall_bool(
        method_bindings.mb_get_allow_reselect,
        (const Object*)this
    );
}

bool ItemList::get_allow_rmb_select() const {
    return rebel_icall_bool(
        method_bindings.mb_get_allow_rmb_select,
        (const Object*)this
    );
}

int64_t ItemList::get_fixed_column_width() const {
    return rebel_icall_int(
        method_bindings.mb_get_fixed_column_width,
        (const Object*)this
    );
}

Vector2 ItemList::get_fixed_icon_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_fixed_icon_size,
        (const Object*)this
    );
}

ItemList::IconMode ItemList::get_icon_mode() const {
    return (ItemList::IconMode)rebel_icall_int(
        method_bindings.mb_get_icon_mode,
        (const Object*)this
    );
}

real_t ItemList::get_icon_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_icon_scale,
        (const Object*)this
    );
}

int64_t ItemList::get_item_at_position(const Vector2 position, const bool exact) const {
    return rebel_icall_int_vector2_bool(
        method_bindings.mb_get_item_at_position,
        (const Object*)this,
        position,
        exact
    );
}

int64_t ItemList::get_item_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_item_count,
        (const Object*)this
    );
}

Color ItemList::get_item_custom_bg_color(const int64_t idx) const {
    return rebel_icall_color_int(
        method_bindings.mb_get_item_custom_bg_color,
        (const Object*)this,
        idx
    );
}

Color ItemList::get_item_custom_fg_color(const int64_t idx) const {
    return rebel_icall_color_int(
        method_bindings.mb_get_item_custom_fg_color,
        (const Object*)this,
        idx
    );
}

Ref<Texture> ItemList::get_item_icon(const int64_t idx) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_item_icon,
        (const Object*)this,
        idx
    ));
}

Color ItemList::get_item_icon_modulate(const int64_t idx) const {
    return rebel_icall_color_int(
        method_bindings.mb_get_item_icon_modulate,
        (const Object*)this,
        idx
    );
}

Rect2 ItemList::get_item_icon_region(const int64_t idx) const {
    return rebel_icall_rect2_int(
        method_bindings.mb_get_item_icon_region,
        (const Object*)this,
        idx
    );
}

Variant ItemList::get_item_metadata(const int64_t idx) const {
    return rebel_icall_variant_int(
        method_bindings.mb_get_item_metadata,
        (const Object*)this,
        idx
    );
}

String ItemList::get_item_text(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_item_text,
        (const Object*)this,
        idx
    );
}

String ItemList::get_item_tooltip(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_item_tooltip,
        (const Object*)this,
        idx
    );
}

int64_t ItemList::get_max_columns() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_columns,
        (const Object*)this
    );
}

int64_t ItemList::get_max_text_lines() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_text_lines,
        (const Object*)this
    );
}

ItemList::SelectMode ItemList::get_select_mode() const {
    return (ItemList::SelectMode)rebel_icall_int(
        method_bindings.mb_get_select_mode,
        (const Object*)this
    );
}

PoolIntArray ItemList::get_selected_items() {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_selected_items,
        (const Object*)this
    );
}

VScrollBar* ItemList::get_v_scroll() {
    return (VScrollBar*)rebel_icall_object(
        method_bindings.mb_get_v_scroll,
        (const Object*)this
    );
}

bool ItemList::has_auto_height() const {
    return rebel_icall_bool(
        method_bindings.mb_has_auto_height,
        (const Object*)this
    );
}

bool ItemList::is_anything_selected() {
    return rebel_icall_bool(
        method_bindings.mb_is_anything_selected,
        (const Object*)this
    );
}

bool ItemList::is_item_disabled(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_item_disabled,
        (const Object*)this,
        idx
    );
}

bool ItemList::is_item_icon_transposed(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_item_icon_transposed,
        (const Object*)this,
        idx
    );
}

bool ItemList::is_item_selectable(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_item_selectable,
        (const Object*)this,
        idx
    );
}

bool ItemList::is_item_tooltip_enabled(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_item_tooltip_enabled,
        (const Object*)this,
        idx
    );
}

bool ItemList::is_same_column_width() const {
    return rebel_icall_bool(
        method_bindings.mb_is_same_column_width,
        (const Object*)this
    );
}

bool ItemList::is_selected(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_selected,
        (const Object*)this,
        idx
    );
}

void ItemList::move_item(const int64_t from_idx, const int64_t to_idx) {
    rebel_icall_void_int_int(
        method_bindings.mb_move_item,
        (const Object*)this,
        from_idx,
        to_idx
    );
}

void ItemList::remove_item(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_remove_item,
        (const Object*)this,
        idx
    );
}

void ItemList::select(const int64_t idx, const bool single) {
    rebel_icall_void_int_bool(
        method_bindings.mb_select,
        (const Object*)this,
        idx,
        single
    );
}

void ItemList::set_allow_reselect(const bool allow) {
    rebel_icall_void_bool(
        method_bindings.mb_set_allow_reselect,
        (const Object*)this,
        allow
    );
}

void ItemList::set_allow_rmb_select(const bool allow) {
    rebel_icall_void_bool(
        method_bindings.mb_set_allow_rmb_select,
        (const Object*)this,
        allow
    );
}

void ItemList::set_auto_height(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_auto_height,
        (const Object*)this,
        enable
    );
}

void ItemList::set_fixed_column_width(const int64_t width) {
    rebel_icall_void_int(
        method_bindings.mb_set_fixed_column_width,
        (const Object*)this,
        width
    );
}

void ItemList::set_fixed_icon_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_fixed_icon_size,
        (const Object*)this,
        size
    );
}

void ItemList::set_icon_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_icon_mode,
        (const Object*)this,
        mode
    );
}

void ItemList::set_icon_scale(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_icon_scale,
        (const Object*)this,
        scale
    );
}

void ItemList::set_item_custom_bg_color(const int64_t idx, const Color custom_bg_color) {
    rebel_icall_void_int_color(
        method_bindings.mb_set_item_custom_bg_color,
        (const Object*)this,
        idx,
        custom_bg_color
    );
}

void ItemList::set_item_custom_fg_color(const int64_t idx, const Color custom_fg_color) {
    rebel_icall_void_int_color(
        method_bindings.mb_set_item_custom_fg_color,
        (const Object*)this,
        idx,
        custom_fg_color
    );
}

void ItemList::set_item_disabled(const int64_t idx, const bool disabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_item_disabled,
        (const Object*)this,
        idx,
        disabled
    );
}

void ItemList::set_item_icon(const int64_t idx, const Ref<Texture> icon) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_item_icon,
        (const Object*)this,
        idx,
        icon.ptr()
    );
}

void ItemList::set_item_icon_modulate(const int64_t idx, const Color modulate) {
    rebel_icall_void_int_color(
        method_bindings.mb_set_item_icon_modulate,
        (const Object*)this,
        idx,
        modulate
    );
}

void ItemList::set_item_icon_region(const int64_t idx, const Rect2 rect) {
    rebel_icall_void_int_rect2(
        method_bindings.mb_set_item_icon_region,
        (const Object*)this,
        idx,
        rect
    );
}

void ItemList::set_item_icon_transposed(const int64_t idx, const bool transposed) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_item_icon_transposed,
        (const Object*)this,
        idx,
        transposed
    );
}

void ItemList::set_item_metadata(const int64_t idx, const Variant metadata) {
    rebel_icall_void_int_variant(
        method_bindings.mb_set_item_metadata,
        (const Object*)this,
        idx,
        metadata
    );
}

void ItemList::set_item_selectable(const int64_t idx, const bool selectable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_item_selectable,
        (const Object*)this,
        idx,
        selectable
    );
}

void ItemList::set_item_text(const int64_t idx, const String text) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_item_text,
        (const Object*)this,
        idx,
        text
    );
}

void ItemList::set_item_tooltip(const int64_t idx, const String tooltip) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_item_tooltip,
        (const Object*)this,
        idx,
        tooltip
    );
}

void ItemList::set_item_tooltip_enabled(const int64_t idx, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_item_tooltip_enabled,
        (const Object*)this,
        idx,
        enable
    );
}

void ItemList::set_max_columns(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_max_columns,
        (const Object*)this,
        amount
    );
}

void ItemList::set_max_text_lines(const int64_t lines) {
    rebel_icall_void_int(
        method_bindings.mb_set_max_text_lines,
        (const Object*)this,
        lines
    );
}

void ItemList::set_same_column_width(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_same_column_width,
        (const Object*)this,
        enable
    );
}

void ItemList::set_select_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_select_mode,
        (const Object*)this,
        mode
    );
}

void ItemList::sort_items_by_text() {
    rebel_icall_void(
        method_bindings.mb_sort_items_by_text,
        (const Object*)this
    );
}

void ItemList::unselect(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_unselect,
        (const Object*)this,
        idx
    );
}

void ItemList::unselect_all() {
    rebel_icall_void(
        method_bindings.mb_unselect_all,
        (const Object*)this
    );
}

ItemList* ItemList::create() {
    return (ItemList*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ItemList")()
         );
}

void ItemList::init_method_bindings() {
    method_bindings.mb__get_items =
        api->rebel_method_bind_get_method(
            "ItemList",
            "_get_items"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "ItemList",
            "_gui_input"
        );
    method_bindings.mb__scroll_changed =
        api->rebel_method_bind_get_method(
            "ItemList",
            "_scroll_changed"
        );
    method_bindings.mb__set_items =
        api->rebel_method_bind_get_method(
            "ItemList",
            "_set_items"
        );
    method_bindings.mb_add_icon_item =
        api->rebel_method_bind_get_method(
            "ItemList",
            "add_icon_item"
        );
    method_bindings.mb_add_item =
        api->rebel_method_bind_get_method(
            "ItemList",
            "add_item"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "ItemList",
            "clear"
        );
    method_bindings.mb_ensure_current_is_visible =
        api->rebel_method_bind_get_method(
            "ItemList",
            "ensure_current_is_visible"
        );
    method_bindings.mb_get_allow_reselect =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_allow_reselect"
        );
    method_bindings.mb_get_allow_rmb_select =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_allow_rmb_select"
        );
    method_bindings.mb_get_fixed_column_width =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_fixed_column_width"
        );
    method_bindings.mb_get_fixed_icon_size =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_fixed_icon_size"
        );
    method_bindings.mb_get_icon_mode =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_icon_mode"
        );
    method_bindings.mb_get_icon_scale =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_icon_scale"
        );
    method_bindings.mb_get_item_at_position =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_item_at_position"
        );
    method_bindings.mb_get_item_count =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_item_count"
        );
    method_bindings.mb_get_item_custom_bg_color =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_item_custom_bg_color"
        );
    method_bindings.mb_get_item_custom_fg_color =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_item_custom_fg_color"
        );
    method_bindings.mb_get_item_icon =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_item_icon"
        );
    method_bindings.mb_get_item_icon_modulate =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_item_icon_modulate"
        );
    method_bindings.mb_get_item_icon_region =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_item_icon_region"
        );
    method_bindings.mb_get_item_metadata =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_item_metadata"
        );
    method_bindings.mb_get_item_text =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_item_text"
        );
    method_bindings.mb_get_item_tooltip =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_item_tooltip"
        );
    method_bindings.mb_get_max_columns =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_max_columns"
        );
    method_bindings.mb_get_max_text_lines =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_max_text_lines"
        );
    method_bindings.mb_get_select_mode =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_select_mode"
        );
    method_bindings.mb_get_selected_items =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_selected_items"
        );
    method_bindings.mb_get_v_scroll =
        api->rebel_method_bind_get_method(
            "ItemList",
            "get_v_scroll"
        );
    method_bindings.mb_has_auto_height =
        api->rebel_method_bind_get_method(
            "ItemList",
            "has_auto_height"
        );
    method_bindings.mb_is_anything_selected =
        api->rebel_method_bind_get_method(
            "ItemList",
            "is_anything_selected"
        );
    method_bindings.mb_is_item_disabled =
        api->rebel_method_bind_get_method(
            "ItemList",
            "is_item_disabled"
        );
    method_bindings.mb_is_item_icon_transposed =
        api->rebel_method_bind_get_method(
            "ItemList",
            "is_item_icon_transposed"
        );
    method_bindings.mb_is_item_selectable =
        api->rebel_method_bind_get_method(
            "ItemList",
            "is_item_selectable"
        );
    method_bindings.mb_is_item_tooltip_enabled =
        api->rebel_method_bind_get_method(
            "ItemList",
            "is_item_tooltip_enabled"
        );
    method_bindings.mb_is_same_column_width =
        api->rebel_method_bind_get_method(
            "ItemList",
            "is_same_column_width"
        );
    method_bindings.mb_is_selected =
        api->rebel_method_bind_get_method(
            "ItemList",
            "is_selected"
        );
    method_bindings.mb_move_item =
        api->rebel_method_bind_get_method(
            "ItemList",
            "move_item"
        );
    method_bindings.mb_remove_item =
        api->rebel_method_bind_get_method(
            "ItemList",
            "remove_item"
        );
    method_bindings.mb_select =
        api->rebel_method_bind_get_method(
            "ItemList",
            "select"
        );
    method_bindings.mb_set_allow_reselect =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_allow_reselect"
        );
    method_bindings.mb_set_allow_rmb_select =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_allow_rmb_select"
        );
    method_bindings.mb_set_auto_height =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_auto_height"
        );
    method_bindings.mb_set_fixed_column_width =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_fixed_column_width"
        );
    method_bindings.mb_set_fixed_icon_size =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_fixed_icon_size"
        );
    method_bindings.mb_set_icon_mode =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_icon_mode"
        );
    method_bindings.mb_set_icon_scale =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_icon_scale"
        );
    method_bindings.mb_set_item_custom_bg_color =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_custom_bg_color"
        );
    method_bindings.mb_set_item_custom_fg_color =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_custom_fg_color"
        );
    method_bindings.mb_set_item_disabled =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_disabled"
        );
    method_bindings.mb_set_item_icon =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_icon"
        );
    method_bindings.mb_set_item_icon_modulate =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_icon_modulate"
        );
    method_bindings.mb_set_item_icon_region =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_icon_region"
        );
    method_bindings.mb_set_item_icon_transposed =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_icon_transposed"
        );
    method_bindings.mb_set_item_metadata =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_metadata"
        );
    method_bindings.mb_set_item_selectable =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_selectable"
        );
    method_bindings.mb_set_item_text =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_text"
        );
    method_bindings.mb_set_item_tooltip =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_tooltip"
        );
    method_bindings.mb_set_item_tooltip_enabled =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_item_tooltip_enabled"
        );
    method_bindings.mb_set_max_columns =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_max_columns"
        );
    method_bindings.mb_set_max_text_lines =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_max_text_lines"
        );
    method_bindings.mb_set_same_column_width =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_same_column_width"
        );
    method_bindings.mb_set_select_mode =
        api->rebel_method_bind_get_method(
            "ItemList",
            "set_select_mode"
        );
    method_bindings.mb_sort_items_by_text =
        api->rebel_method_bind_get_method(
            "ItemList",
            "sort_items_by_text"
        );
    method_bindings.mb_unselect =
        api->rebel_method_bind_get_method(
            "ItemList",
            "unselect"
        );
    method_bindings.mb_unselect_all =
        api->rebel_method_bind_get_method(
            "ItemList",
            "unselect_all"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ItemList");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ItemList::MethodBindings ItemList::method_bindings = {};
void* ItemList::class_tag = nullptr;
} // namespace Rebel
