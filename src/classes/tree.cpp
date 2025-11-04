// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/tree.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/object.h"
#include "classes/treeitem.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Tree::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void Tree::_popup_select(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__popup_select,
        (const Object*)this,
        arg0
    );
}

void Tree::_range_click_timeout() {
    rebel_icall_void(
        method_bindings.mb__range_click_timeout,
        (const Object*)this
    );
}

void Tree::_scroll_moved(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb__scroll_moved,
        (const Object*)this,
        arg0
    );
}

void Tree::_text_editor_enter(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__text_editor_enter,
        (const Object*)this,
        arg0
    );
}

void Tree::_text_editor_modal_close() {
    rebel_icall_void(
        method_bindings.mb__text_editor_modal_close,
        (const Object*)this
    );
}

void Tree::_value_editor_changed(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb__value_editor_changed,
        (const Object*)this,
        arg0
    );
}

bool Tree::are_column_titles_visible() const {
    return rebel_icall_bool(
        method_bindings.mb_are_column_titles_visible,
        (const Object*)this
    );
}

void Tree::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

TreeItem* Tree::create_item(const Object* parent, const int64_t idx) {
    return (TreeItem*)rebel_icall_object_object_int(
        method_bindings.mb_create_item,
        (const Object*)this,
        parent,
        idx
    );
}

bool Tree::edit_selected() {
    return rebel_icall_bool(
        method_bindings.mb_edit_selected,
        (const Object*)this
    );
}

void Tree::ensure_cursor_is_visible() {
    rebel_icall_void(
        method_bindings.mb_ensure_cursor_is_visible,
        (const Object*)this
    );
}

bool Tree::get_allow_reselect() const {
    return rebel_icall_bool(
        method_bindings.mb_get_allow_reselect,
        (const Object*)this
    );
}

bool Tree::get_allow_rmb_select() const {
    return rebel_icall_bool(
        method_bindings.mb_get_allow_rmb_select,
        (const Object*)this
    );
}

int64_t Tree::get_column_at_position(const Vector2 position) const {
    return rebel_icall_int_vector2(
        method_bindings.mb_get_column_at_position,
        (const Object*)this,
        position
    );
}

String Tree::get_column_title(const int64_t column) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_column_title,
        (const Object*)this,
        column
    );
}

int64_t Tree::get_column_width(const int64_t column) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_column_width,
        (const Object*)this,
        column
    );
}

int64_t Tree::get_columns() const {
    return rebel_icall_int(
        method_bindings.mb_get_columns,
        (const Object*)this
    );
}

Rect2 Tree::get_custom_popup_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_custom_popup_rect,
        (const Object*)this
    );
}

int64_t Tree::get_drop_mode_flags() const {
    return rebel_icall_int(
        method_bindings.mb_get_drop_mode_flags,
        (const Object*)this
    );
}

int64_t Tree::get_drop_section_at_position(const Vector2 position) const {
    return rebel_icall_int_vector2(
        method_bindings.mb_get_drop_section_at_position,
        (const Object*)this,
        position
    );
}

TreeItem* Tree::get_edited() const {
    return (TreeItem*)rebel_icall_object(
        method_bindings.mb_get_edited,
        (const Object*)this
    );
}

int64_t Tree::get_edited_column() const {
    return rebel_icall_int(
        method_bindings.mb_get_edited_column,
        (const Object*)this
    );
}

Rect2 Tree::get_item_area_rect(const Object* item, const int64_t column) const {
    return rebel_icall_rect2_object_int(
        method_bindings.mb_get_item_area_rect,
        (const Object*)this,
        item,
        column
    );
}

TreeItem* Tree::get_item_at_position(const Vector2 position) const {
    return (TreeItem*)rebel_icall_object_vector2(
        method_bindings.mb_get_item_at_position,
        (const Object*)this,
        position
    );
}

TreeItem* Tree::get_next_selected(const Object* from) {
    return (TreeItem*)rebel_icall_object_object(
        method_bindings.mb_get_next_selected,
        (const Object*)this,
        from
    );
}

int64_t Tree::get_pressed_button() const {
    return rebel_icall_int(
        method_bindings.mb_get_pressed_button,
        (const Object*)this
    );
}

TreeItem* Tree::get_root() {
    return (TreeItem*)rebel_icall_object(
        method_bindings.mb_get_root,
        (const Object*)this
    );
}

Vector2 Tree::get_scroll() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_scroll,
        (const Object*)this
    );
}

Tree::SelectMode Tree::get_select_mode() const {
    return (Tree::SelectMode)rebel_icall_int(
        method_bindings.mb_get_select_mode,
        (const Object*)this
    );
}

TreeItem* Tree::get_selected() const {
    return (TreeItem*)rebel_icall_object(
        method_bindings.mb_get_selected,
        (const Object*)this
    );
}

int64_t Tree::get_selected_column() const {
    return rebel_icall_int(
        method_bindings.mb_get_selected_column,
        (const Object*)this
    );
}

bool Tree::is_folding_hidden() const {
    return rebel_icall_bool(
        method_bindings.mb_is_folding_hidden,
        (const Object*)this
    );
}

bool Tree::is_root_hidden() const {
    return rebel_icall_bool(
        method_bindings.mb_is_root_hidden,
        (const Object*)this
    );
}

void Tree::scroll_to_item(const Object* item) {
    rebel_icall_void_object(
        method_bindings.mb_scroll_to_item,
        (const Object*)this,
        item
    );
}

void Tree::set_allow_reselect(const bool allow) {
    rebel_icall_void_bool(
        method_bindings.mb_set_allow_reselect,
        (const Object*)this,
        allow
    );
}

void Tree::set_allow_rmb_select(const bool allow) {
    rebel_icall_void_bool(
        method_bindings.mb_set_allow_rmb_select,
        (const Object*)this,
        allow
    );
}

void Tree::set_column_expand(const int64_t column, const bool expand) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_column_expand,
        (const Object*)this,
        column,
        expand
    );
}

void Tree::set_column_min_width(const int64_t column, const int64_t min_width) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_column_min_width,
        (const Object*)this,
        column,
        min_width
    );
}

void Tree::set_column_title(const int64_t column, const String title) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_column_title,
        (const Object*)this,
        column,
        title
    );
}

void Tree::set_column_titles_visible(const bool visible) {
    rebel_icall_void_bool(
        method_bindings.mb_set_column_titles_visible,
        (const Object*)this,
        visible
    );
}

void Tree::set_columns(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_columns,
        (const Object*)this,
        amount
    );
}

void Tree::set_drop_mode_flags(const int64_t flags) {
    rebel_icall_void_int(
        method_bindings.mb_set_drop_mode_flags,
        (const Object*)this,
        flags
    );
}

void Tree::set_hide_folding(const bool hide) {
    rebel_icall_void_bool(
        method_bindings.mb_set_hide_folding,
        (const Object*)this,
        hide
    );
}

void Tree::set_hide_root(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_hide_root,
        (const Object*)this,
        enable
    );
}

void Tree::set_select_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_select_mode,
        (const Object*)this,
        mode
    );
}

Tree* Tree::create() {
    return (Tree*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Tree")()
         );
}

void Tree::init_method_bindings() {
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "Tree",
            "_gui_input"
        );
    method_bindings.mb__popup_select =
        api->rebel_method_bind_get_method(
            "Tree",
            "_popup_select"
        );
    method_bindings.mb__range_click_timeout =
        api->rebel_method_bind_get_method(
            "Tree",
            "_range_click_timeout"
        );
    method_bindings.mb__scroll_moved =
        api->rebel_method_bind_get_method(
            "Tree",
            "_scroll_moved"
        );
    method_bindings.mb__text_editor_enter =
        api->rebel_method_bind_get_method(
            "Tree",
            "_text_editor_enter"
        );
    method_bindings.mb__text_editor_modal_close =
        api->rebel_method_bind_get_method(
            "Tree",
            "_text_editor_modal_close"
        );
    method_bindings.mb__value_editor_changed =
        api->rebel_method_bind_get_method(
            "Tree",
            "_value_editor_changed"
        );
    method_bindings.mb_are_column_titles_visible =
        api->rebel_method_bind_get_method(
            "Tree",
            "are_column_titles_visible"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "Tree",
            "clear"
        );
    method_bindings.mb_create_item =
        api->rebel_method_bind_get_method(
            "Tree",
            "create_item"
        );
    method_bindings.mb_edit_selected =
        api->rebel_method_bind_get_method(
            "Tree",
            "edit_selected"
        );
    method_bindings.mb_ensure_cursor_is_visible =
        api->rebel_method_bind_get_method(
            "Tree",
            "ensure_cursor_is_visible"
        );
    method_bindings.mb_get_allow_reselect =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_allow_reselect"
        );
    method_bindings.mb_get_allow_rmb_select =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_allow_rmb_select"
        );
    method_bindings.mb_get_column_at_position =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_column_at_position"
        );
    method_bindings.mb_get_column_title =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_column_title"
        );
    method_bindings.mb_get_column_width =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_column_width"
        );
    method_bindings.mb_get_columns =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_columns"
        );
    method_bindings.mb_get_custom_popup_rect =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_custom_popup_rect"
        );
    method_bindings.mb_get_drop_mode_flags =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_drop_mode_flags"
        );
    method_bindings.mb_get_drop_section_at_position =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_drop_section_at_position"
        );
    method_bindings.mb_get_edited =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_edited"
        );
    method_bindings.mb_get_edited_column =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_edited_column"
        );
    method_bindings.mb_get_item_area_rect =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_item_area_rect"
        );
    method_bindings.mb_get_item_at_position =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_item_at_position"
        );
    method_bindings.mb_get_next_selected =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_next_selected"
        );
    method_bindings.mb_get_pressed_button =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_pressed_button"
        );
    method_bindings.mb_get_root =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_root"
        );
    method_bindings.mb_get_scroll =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_scroll"
        );
    method_bindings.mb_get_select_mode =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_select_mode"
        );
    method_bindings.mb_get_selected =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_selected"
        );
    method_bindings.mb_get_selected_column =
        api->rebel_method_bind_get_method(
            "Tree",
            "get_selected_column"
        );
    method_bindings.mb_is_folding_hidden =
        api->rebel_method_bind_get_method(
            "Tree",
            "is_folding_hidden"
        );
    method_bindings.mb_is_root_hidden =
        api->rebel_method_bind_get_method(
            "Tree",
            "is_root_hidden"
        );
    method_bindings.mb_scroll_to_item =
        api->rebel_method_bind_get_method(
            "Tree",
            "scroll_to_item"
        );
    method_bindings.mb_set_allow_reselect =
        api->rebel_method_bind_get_method(
            "Tree",
            "set_allow_reselect"
        );
    method_bindings.mb_set_allow_rmb_select =
        api->rebel_method_bind_get_method(
            "Tree",
            "set_allow_rmb_select"
        );
    method_bindings.mb_set_column_expand =
        api->rebel_method_bind_get_method(
            "Tree",
            "set_column_expand"
        );
    method_bindings.mb_set_column_min_width =
        api->rebel_method_bind_get_method(
            "Tree",
            "set_column_min_width"
        );
    method_bindings.mb_set_column_title =
        api->rebel_method_bind_get_method(
            "Tree",
            "set_column_title"
        );
    method_bindings.mb_set_column_titles_visible =
        api->rebel_method_bind_get_method(
            "Tree",
            "set_column_titles_visible"
        );
    method_bindings.mb_set_columns =
        api->rebel_method_bind_get_method(
            "Tree",
            "set_columns"
        );
    method_bindings.mb_set_drop_mode_flags =
        api->rebel_method_bind_get_method(
            "Tree",
            "set_drop_mode_flags"
        );
    method_bindings.mb_set_hide_folding =
        api->rebel_method_bind_get_method(
            "Tree",
            "set_hide_folding"
        );
    method_bindings.mb_set_hide_root =
        api->rebel_method_bind_get_method(
            "Tree",
            "set_hide_root"
        );
    method_bindings.mb_set_select_mode =
        api->rebel_method_bind_get_method(
            "Tree",
            "set_select_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Tree");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Tree::MethodBindings Tree::method_bindings = {};
void* Tree::class_tag = nullptr;
} // namespace Rebel
