// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/treeitem.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "classes/texture.h"
#include "classes/treeitem.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void TreeItem::add_button(const int64_t column, const Ref<Texture> button, const int64_t button_idx, const bool disabled, const String tooltip) {
    rebel_icall_void_int_object_int_bool_string(
        method_bindings.mb_add_button,
        (const Object*)this,
        column,
        button.ptr(),
        button_idx,
        disabled,
        tooltip
    );
}

Variant TreeItem::call_recursive(const String method, const Array& args) {
    size_t arg_count = 1 + args.size();
    Variant arg_values[1];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = method;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    for (int i = 0; i < args.size(); i++) {
        var_args[1 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_call_recursive,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
    return result;
}

void TreeItem::clear_custom_bg_color(const int64_t column) {
    rebel_icall_void_int(
        method_bindings.mb_clear_custom_bg_color,
        (const Object*)this,
        column
    );
}

void TreeItem::clear_custom_color(const int64_t column) {
    rebel_icall_void_int(
        method_bindings.mb_clear_custom_color,
        (const Object*)this,
        column
    );
}

void TreeItem::deselect(const int64_t column) {
    rebel_icall_void_int(
        method_bindings.mb_deselect,
        (const Object*)this,
        column
    );
}

void TreeItem::erase_button(const int64_t column, const int64_t button_idx) {
    rebel_icall_void_int_int(
        method_bindings.mb_erase_button,
        (const Object*)this,
        column,
        button_idx
    );
}

Ref<Texture> TreeItem::get_button(const int64_t column, const int64_t button_idx) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int_int(
        method_bindings.mb_get_button,
        (const Object*)this,
        column,
        button_idx
    ));
}

int64_t TreeItem::get_button_count(const int64_t column) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_button_count,
        (const Object*)this,
        column
    );
}

String TreeItem::get_button_tooltip(const int64_t column, const int64_t button_idx) const {
    return rebel_icall_string_int_int(
        method_bindings.mb_get_button_tooltip,
        (const Object*)this,
        column,
        button_idx
    );
}

TreeItem::TreeCellMode TreeItem::get_cell_mode(const int64_t column) const {
    return (TreeItem::TreeCellMode)rebel_icall_int_int(
        method_bindings.mb_get_cell_mode,
        (const Object*)this,
        column
    );
}

TreeItem* TreeItem::get_children() {
    return (TreeItem*)rebel_icall_object(
        method_bindings.mb_get_children,
        (const Object*)this
    );
}

Color TreeItem::get_custom_bg_color(const int64_t column) const {
    return rebel_icall_color_int(
        method_bindings.mb_get_custom_bg_color,
        (const Object*)this,
        column
    );
}

Color TreeItem::get_custom_color(const int64_t column) const {
    return rebel_icall_color_int(
        method_bindings.mb_get_custom_color,
        (const Object*)this,
        column
    );
}

int64_t TreeItem::get_custom_minimum_height() const {
    return rebel_icall_int(
        method_bindings.mb_get_custom_minimum_height,
        (const Object*)this
    );
}

bool TreeItem::get_expand_right(const int64_t column) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_expand_right,
        (const Object*)this,
        column
    );
}

Ref<Texture> TreeItem::get_icon(const int64_t column) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_icon,
        (const Object*)this,
        column
    ));
}

int64_t TreeItem::get_icon_max_width(const int64_t column) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_icon_max_width,
        (const Object*)this,
        column
    );
}

Color TreeItem::get_icon_modulate(const int64_t column) const {
    return rebel_icall_color_int(
        method_bindings.mb_get_icon_modulate,
        (const Object*)this,
        column
    );
}

Rect2 TreeItem::get_icon_region(const int64_t column) const {
    return rebel_icall_rect2_int(
        method_bindings.mb_get_icon_region,
        (const Object*)this,
        column
    );
}

Variant TreeItem::get_metadata(const int64_t column) const {
    return rebel_icall_variant_int(
        method_bindings.mb_get_metadata,
        (const Object*)this,
        column
    );
}

TreeItem* TreeItem::get_next() {
    return (TreeItem*)rebel_icall_object(
        method_bindings.mb_get_next,
        (const Object*)this
    );
}

TreeItem* TreeItem::get_next_visible(const bool wrap) {
    return (TreeItem*)rebel_icall_object_bool(
        method_bindings.mb_get_next_visible,
        (const Object*)this,
        wrap
    );
}

TreeItem* TreeItem::get_parent() {
    return (TreeItem*)rebel_icall_object(
        method_bindings.mb_get_parent,
        (const Object*)this
    );
}

TreeItem* TreeItem::get_prev() {
    return (TreeItem*)rebel_icall_object(
        method_bindings.mb_get_prev,
        (const Object*)this
    );
}

TreeItem* TreeItem::get_prev_visible(const bool wrap) {
    return (TreeItem*)rebel_icall_object_bool(
        method_bindings.mb_get_prev_visible,
        (const Object*)this,
        wrap
    );
}

real_t TreeItem::get_range(const int64_t column) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_range,
        (const Object*)this,
        column
    );
}

Dictionary TreeItem::get_range_config(const int64_t column) {
    return rebel_icall_dictionary_int(
        method_bindings.mb_get_range_config,
        (const Object*)this,
        column
    );
}

String TreeItem::get_suffix(const int64_t column) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_suffix,
        (const Object*)this,
        column
    );
}

String TreeItem::get_text(const int64_t column) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_text,
        (const Object*)this,
        column
    );
}

TreeItem::TextAlign TreeItem::get_text_align(const int64_t column) const {
    return (TreeItem::TextAlign)rebel_icall_int_int(
        method_bindings.mb_get_text_align,
        (const Object*)this,
        column
    );
}

String TreeItem::get_tooltip(const int64_t column) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_tooltip,
        (const Object*)this,
        column
    );
}

bool TreeItem::is_button_disabled(const int64_t column, const int64_t button_idx) const {
    return rebel_icall_bool_int_int(
        method_bindings.mb_is_button_disabled,
        (const Object*)this,
        column,
        button_idx
    );
}

bool TreeItem::is_checked(const int64_t column) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_checked,
        (const Object*)this,
        column
    );
}

bool TreeItem::is_collapsed() {
    return rebel_icall_bool(
        method_bindings.mb_is_collapsed,
        (const Object*)this
    );
}

bool TreeItem::is_custom_set_as_button(const int64_t column) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_custom_set_as_button,
        (const Object*)this,
        column
    );
}

bool TreeItem::is_editable(const int64_t column) {
    return rebel_icall_bool_int(
        method_bindings.mb_is_editable,
        (const Object*)this,
        column
    );
}

bool TreeItem::is_folding_disabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_folding_disabled,
        (const Object*)this
    );
}

bool TreeItem::is_selectable(const int64_t column) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_selectable,
        (const Object*)this,
        column
    );
}

bool TreeItem::is_selected(const int64_t column) {
    return rebel_icall_bool_int(
        method_bindings.mb_is_selected,
        (const Object*)this,
        column
    );
}

void TreeItem::move_to_bottom() {
    rebel_icall_void(
        method_bindings.mb_move_to_bottom,
        (const Object*)this
    );
}

void TreeItem::move_to_top() {
    rebel_icall_void(
        method_bindings.mb_move_to_top,
        (const Object*)this
    );
}

void TreeItem::remove_child(const Object* child) {
    rebel_icall_void_object(
        method_bindings.mb_remove_child,
        (const Object*)this,
        child
    );
}

void TreeItem::select(const int64_t column) {
    rebel_icall_void_int(
        method_bindings.mb_select,
        (const Object*)this,
        column
    );
}

void TreeItem::set_button(const int64_t column, const int64_t button_idx, const Ref<Texture> button) {
    rebel_icall_void_int_int_object(
        method_bindings.mb_set_button,
        (const Object*)this,
        column,
        button_idx,
        button.ptr()
    );
}

void TreeItem::set_button_disabled(const int64_t column, const int64_t button_idx, const bool disabled) {
    rebel_icall_void_int_int_bool(
        method_bindings.mb_set_button_disabled,
        (const Object*)this,
        column,
        button_idx,
        disabled
    );
}

void TreeItem::set_cell_mode(const int64_t column, const int64_t mode) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_cell_mode,
        (const Object*)this,
        column,
        mode
    );
}

void TreeItem::set_checked(const int64_t column, const bool checked) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_checked,
        (const Object*)this,
        column,
        checked
    );
}

void TreeItem::set_collapsed(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collapsed,
        (const Object*)this,
        enable
    );
}

void TreeItem::set_custom_as_button(const int64_t column, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_custom_as_button,
        (const Object*)this,
        column,
        enable
    );
}

void TreeItem::set_custom_bg_color(const int64_t column, const Color color, const bool just_outline) {
    rebel_icall_void_int_color_bool(
        method_bindings.mb_set_custom_bg_color,
        (const Object*)this,
        column,
        color,
        just_outline
    );
}

void TreeItem::set_custom_color(const int64_t column, const Color color) {
    rebel_icall_void_int_color(
        method_bindings.mb_set_custom_color,
        (const Object*)this,
        column,
        color
    );
}

void TreeItem::set_custom_draw(const int64_t column, const Object* object, const String callback) {
    rebel_icall_void_int_object_string(
        method_bindings.mb_set_custom_draw,
        (const Object*)this,
        column,
        object,
        callback
    );
}

void TreeItem::set_custom_minimum_height(const int64_t height) {
    rebel_icall_void_int(
        method_bindings.mb_set_custom_minimum_height,
        (const Object*)this,
        height
    );
}

void TreeItem::set_disable_folding(const bool disable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disable_folding,
        (const Object*)this,
        disable
    );
}

void TreeItem::set_editable(const int64_t column, const bool enabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_editable,
        (const Object*)this,
        column,
        enabled
    );
}

void TreeItem::set_expand_right(const int64_t column, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_expand_right,
        (const Object*)this,
        column,
        enable
    );
}

void TreeItem::set_icon(const int64_t column, const Ref<Texture> texture) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_icon,
        (const Object*)this,
        column,
        texture.ptr()
    );
}

void TreeItem::set_icon_max_width(const int64_t column, const int64_t width) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_icon_max_width,
        (const Object*)this,
        column,
        width
    );
}

void TreeItem::set_icon_modulate(const int64_t column, const Color modulate) {
    rebel_icall_void_int_color(
        method_bindings.mb_set_icon_modulate,
        (const Object*)this,
        column,
        modulate
    );
}

void TreeItem::set_icon_region(const int64_t column, const Rect2 region) {
    rebel_icall_void_int_rect2(
        method_bindings.mb_set_icon_region,
        (const Object*)this,
        column,
        region
    );
}

void TreeItem::set_metadata(const int64_t column, const Variant meta) {
    rebel_icall_void_int_variant(
        method_bindings.mb_set_metadata,
        (const Object*)this,
        column,
        meta
    );
}

void TreeItem::set_range(const int64_t column, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_range,
        (const Object*)this,
        column,
        value
    );
}

void TreeItem::set_range_config(const int64_t column, const real_t min, const real_t max, const real_t step, const bool expr) {
    rebel_icall_void_int_float_float_float_bool(
        method_bindings.mb_set_range_config,
        (const Object*)this,
        column,
        min,
        max,
        step,
        expr
    );
}

void TreeItem::set_selectable(const int64_t column, const bool selectable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_selectable,
        (const Object*)this,
        column,
        selectable
    );
}

void TreeItem::set_suffix(const int64_t column, const String text) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_suffix,
        (const Object*)this,
        column,
        text
    );
}

void TreeItem::set_text(const int64_t column, const String text) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_text,
        (const Object*)this,
        column,
        text
    );
}

void TreeItem::set_text_align(const int64_t column, const int64_t text_align) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_text_align,
        (const Object*)this,
        column,
        text_align
    );
}

void TreeItem::set_tooltip(const int64_t column, const String tooltip) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_tooltip,
        (const Object*)this,
        column,
        tooltip
    );
}

void TreeItem::init_method_bindings() {
    method_bindings.mb_add_button =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "add_button"
        );
    method_bindings.mb_call_recursive =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "call_recursive"
        );
    method_bindings.mb_clear_custom_bg_color =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "clear_custom_bg_color"
        );
    method_bindings.mb_clear_custom_color =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "clear_custom_color"
        );
    method_bindings.mb_deselect =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "deselect"
        );
    method_bindings.mb_erase_button =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "erase_button"
        );
    method_bindings.mb_get_button =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_button"
        );
    method_bindings.mb_get_button_count =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_button_count"
        );
    method_bindings.mb_get_button_tooltip =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_button_tooltip"
        );
    method_bindings.mb_get_cell_mode =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_cell_mode"
        );
    method_bindings.mb_get_children =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_children"
        );
    method_bindings.mb_get_custom_bg_color =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_custom_bg_color"
        );
    method_bindings.mb_get_custom_color =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_custom_color"
        );
    method_bindings.mb_get_custom_minimum_height =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_custom_minimum_height"
        );
    method_bindings.mb_get_expand_right =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_expand_right"
        );
    method_bindings.mb_get_icon =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_icon"
        );
    method_bindings.mb_get_icon_max_width =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_icon_max_width"
        );
    method_bindings.mb_get_icon_modulate =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_icon_modulate"
        );
    method_bindings.mb_get_icon_region =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_icon_region"
        );
    method_bindings.mb_get_metadata =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_metadata"
        );
    method_bindings.mb_get_next =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_next"
        );
    method_bindings.mb_get_next_visible =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_next_visible"
        );
    method_bindings.mb_get_parent =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_parent"
        );
    method_bindings.mb_get_prev =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_prev"
        );
    method_bindings.mb_get_prev_visible =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_prev_visible"
        );
    method_bindings.mb_get_range =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_range"
        );
    method_bindings.mb_get_range_config =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_range_config"
        );
    method_bindings.mb_get_suffix =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_suffix"
        );
    method_bindings.mb_get_text =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_text"
        );
    method_bindings.mb_get_text_align =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_text_align"
        );
    method_bindings.mb_get_tooltip =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "get_tooltip"
        );
    method_bindings.mb_is_button_disabled =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "is_button_disabled"
        );
    method_bindings.mb_is_checked =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "is_checked"
        );
    method_bindings.mb_is_collapsed =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "is_collapsed"
        );
    method_bindings.mb_is_custom_set_as_button =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "is_custom_set_as_button"
        );
    method_bindings.mb_is_editable =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "is_editable"
        );
    method_bindings.mb_is_folding_disabled =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "is_folding_disabled"
        );
    method_bindings.mb_is_selectable =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "is_selectable"
        );
    method_bindings.mb_is_selected =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "is_selected"
        );
    method_bindings.mb_move_to_bottom =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "move_to_bottom"
        );
    method_bindings.mb_move_to_top =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "move_to_top"
        );
    method_bindings.mb_remove_child =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "remove_child"
        );
    method_bindings.mb_select =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "select"
        );
    method_bindings.mb_set_button =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_button"
        );
    method_bindings.mb_set_button_disabled =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_button_disabled"
        );
    method_bindings.mb_set_cell_mode =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_cell_mode"
        );
    method_bindings.mb_set_checked =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_checked"
        );
    method_bindings.mb_set_collapsed =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_collapsed"
        );
    method_bindings.mb_set_custom_as_button =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_custom_as_button"
        );
    method_bindings.mb_set_custom_bg_color =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_custom_bg_color"
        );
    method_bindings.mb_set_custom_color =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_custom_color"
        );
    method_bindings.mb_set_custom_draw =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_custom_draw"
        );
    method_bindings.mb_set_custom_minimum_height =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_custom_minimum_height"
        );
    method_bindings.mb_set_disable_folding =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_disable_folding"
        );
    method_bindings.mb_set_editable =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_editable"
        );
    method_bindings.mb_set_expand_right =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_expand_right"
        );
    method_bindings.mb_set_icon =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_icon"
        );
    method_bindings.mb_set_icon_max_width =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_icon_max_width"
        );
    method_bindings.mb_set_icon_modulate =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_icon_modulate"
        );
    method_bindings.mb_set_icon_region =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_icon_region"
        );
    method_bindings.mb_set_metadata =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_metadata"
        );
    method_bindings.mb_set_range =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_range"
        );
    method_bindings.mb_set_range_config =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_range_config"
        );
    method_bindings.mb_set_selectable =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_selectable"
        );
    method_bindings.mb_set_suffix =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_suffix"
        );
    method_bindings.mb_set_text =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_text"
        );
    method_bindings.mb_set_text_align =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_text_align"
        );
    method_bindings.mb_set_tooltip =
        api->rebel_method_bind_get_method(
            "TreeItem",
            "set_tooltip"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TreeItem");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TreeItem::MethodBindings TreeItem::method_bindings = {};
void* TreeItem::class_tag = nullptr;
} // namespace Rebel
