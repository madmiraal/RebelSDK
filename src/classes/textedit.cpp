// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/textedit.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/popupmenu.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void TextEdit::_click_selection_held() {
    rebel_icall_void(
        method_bindings.mb__click_selection_held,
        (const Object*)this
    );
}

void TextEdit::_cursor_changed_emit() {
    rebel_icall_void(
        method_bindings.mb__cursor_changed_emit,
        (const Object*)this
    );
}

void TextEdit::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void TextEdit::_push_current_op() {
    rebel_icall_void(
        method_bindings.mb__push_current_op,
        (const Object*)this
    );
}

void TextEdit::_scroll_moved(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb__scroll_moved,
        (const Object*)this,
        arg0
    );
}

void TextEdit::_text_changed_emit() {
    rebel_icall_void(
        method_bindings.mb__text_changed_emit,
        (const Object*)this
    );
}

void TextEdit::_toggle_draw_caret() {
    rebel_icall_void(
        method_bindings.mb__toggle_draw_caret,
        (const Object*)this
    );
}

void TextEdit::_update_wrap_at() {
    rebel_icall_void(
        method_bindings.mb__update_wrap_at,
        (const Object*)this
    );
}

void TextEdit::_v_scroll_input() {
    rebel_icall_void(
        method_bindings.mb__v_scroll_input,
        (const Object*)this
    );
}

void TextEdit::add_color_region(const String begin_key, const String end_key, const Color color, const bool line_only) {
    rebel_icall_void_string_string_color_bool(
        method_bindings.mb_add_color_region,
        (const Object*)this,
        begin_key,
        end_key,
        color,
        line_only
    );
}

void TextEdit::add_keyword_color(const String keyword, const Color color) {
    rebel_icall_void_string_color(
        method_bindings.mb_add_keyword_color,
        (const Object*)this,
        keyword,
        color
    );
}

bool TextEdit::can_fold(const int64_t line) const {
    return rebel_icall_bool_int(
        method_bindings.mb_can_fold,
        (const Object*)this,
        line
    );
}

void TextEdit::center_viewport_to_cursor() {
    rebel_icall_void(
        method_bindings.mb_center_viewport_to_cursor,
        (const Object*)this
    );
}

void TextEdit::clear_colors() {
    rebel_icall_void(
        method_bindings.mb_clear_colors,
        (const Object*)this
    );
}

void TextEdit::clear_undo_history() {
    rebel_icall_void(
        method_bindings.mb_clear_undo_history,
        (const Object*)this
    );
}

void TextEdit::copy() {
    rebel_icall_void(
        method_bindings.mb_copy,
        (const Object*)this
    );
}

bool TextEdit::cursor_get_blink_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_cursor_get_blink_enabled,
        (const Object*)this
    );
}

real_t TextEdit::cursor_get_blink_speed() const {
    return rebel_icall_float(
        method_bindings.mb_cursor_get_blink_speed,
        (const Object*)this
    );
}

int64_t TextEdit::cursor_get_column() const {
    return rebel_icall_int(
        method_bindings.mb_cursor_get_column,
        (const Object*)this
    );
}

int64_t TextEdit::cursor_get_line() const {
    return rebel_icall_int(
        method_bindings.mb_cursor_get_line,
        (const Object*)this
    );
}

bool TextEdit::cursor_is_block_mode() const {
    return rebel_icall_bool(
        method_bindings.mb_cursor_is_block_mode,
        (const Object*)this
    );
}

void TextEdit::cursor_set_blink_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_cursor_set_blink_enabled,
        (const Object*)this,
        enable
    );
}

void TextEdit::cursor_set_blink_speed(const real_t blink_speed) {
    rebel_icall_void_float(
        method_bindings.mb_cursor_set_blink_speed,
        (const Object*)this,
        blink_speed
    );
}

void TextEdit::cursor_set_block_mode(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_cursor_set_block_mode,
        (const Object*)this,
        enable
    );
}

void TextEdit::cursor_set_column(const int64_t column, const bool adjust_viewport) {
    rebel_icall_void_int_bool(
        method_bindings.mb_cursor_set_column,
        (const Object*)this,
        column,
        adjust_viewport
    );
}

void TextEdit::cursor_set_line(const int64_t line, const bool adjust_viewport, const bool can_be_hidden, const int64_t wrap_index) {
    rebel_icall_void_int_bool_bool_int(
        method_bindings.mb_cursor_set_line,
        (const Object*)this,
        line,
        adjust_viewport,
        can_be_hidden,
        wrap_index
    );
}

void TextEdit::cut() {
    rebel_icall_void(
        method_bindings.mb_cut,
        (const Object*)this
    );
}

void TextEdit::deselect() {
    rebel_icall_void(
        method_bindings.mb_deselect,
        (const Object*)this
    );
}

void TextEdit::draw_minimap(const bool draw) {
    rebel_icall_void_bool(
        method_bindings.mb_draw_minimap,
        (const Object*)this,
        draw
    );
}

void TextEdit::fold_all_lines() {
    rebel_icall_void(
        method_bindings.mb_fold_all_lines,
        (const Object*)this
    );
}

void TextEdit::fold_line(const int64_t line) {
    rebel_icall_void_int(
        method_bindings.mb_fold_line,
        (const Object*)this,
        line
    );
}

Array TextEdit::get_breakpoints() const {
    return rebel_icall_array(
        method_bindings.mb_get_breakpoints,
        (const Object*)this
    );
}

int64_t TextEdit::get_h_scroll() const {
    return rebel_icall_int(
        method_bindings.mb_get_h_scroll,
        (const Object*)this
    );
}

Color TextEdit::get_keyword_color(const String keyword) const {
    return rebel_icall_color_string(
        method_bindings.mb_get_keyword_color,
        (const Object*)this,
        keyword
    );
}

String TextEdit::get_line(const int64_t line) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_line,
        (const Object*)this,
        line
    );
}

Vector2 TextEdit::get_line_column_at_pos(const Vector2 position) const {
    return rebel_icall_vector2_vector2(
        method_bindings.mb_get_line_column_at_pos,
        (const Object*)this,
        position
    );
}

int64_t TextEdit::get_line_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_line_count,
        (const Object*)this
    );
}

int64_t TextEdit::get_line_height() const {
    return rebel_icall_int(
        method_bindings.mb_get_line_height,
        (const Object*)this
    );
}

int64_t TextEdit::get_line_width(const int64_t line, const int64_t wrap_index) const {
    return rebel_icall_int_int_int(
        method_bindings.mb_get_line_width,
        (const Object*)this,
        line,
        wrap_index
    );
}

int64_t TextEdit::get_line_wrap_count(const int64_t line) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_line_wrap_count,
        (const Object*)this,
        line
    );
}

PoolStringArray TextEdit::get_line_wrapped_text(const int64_t line) const {
    return rebel_icall_poolstringarray_int(
        method_bindings.mb_get_line_wrapped_text,
        (const Object*)this,
        line
    );
}

PopupMenu* TextEdit::get_menu() const {
    return (PopupMenu*)rebel_icall_object(
        method_bindings.mb_get_menu,
        (const Object*)this
    );
}

int64_t TextEdit::get_minimap_width() const {
    return rebel_icall_int(
        method_bindings.mb_get_minimap_width,
        (const Object*)this
    );
}

Vector2 TextEdit::get_pos_at_line_column(const int64_t line, const int64_t column) const {
    return rebel_icall_vector2_int_int(
        method_bindings.mb_get_pos_at_line_column,
        (const Object*)this,
        line,
        column
    );
}

Rect2 TextEdit::get_rect_at_line_column(const int64_t line, const int64_t column) const {
    return rebel_icall_rect2_int_int(
        method_bindings.mb_get_rect_at_line_column,
        (const Object*)this,
        line,
        column
    );
}

int64_t TextEdit::get_selection_from_column() const {
    return rebel_icall_int(
        method_bindings.mb_get_selection_from_column,
        (const Object*)this
    );
}

int64_t TextEdit::get_selection_from_line() const {
    return rebel_icall_int(
        method_bindings.mb_get_selection_from_line,
        (const Object*)this
    );
}

String TextEdit::get_selection_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_selection_text,
        (const Object*)this
    );
}

int64_t TextEdit::get_selection_to_column() const {
    return rebel_icall_int(
        method_bindings.mb_get_selection_to_column,
        (const Object*)this
    );
}

int64_t TextEdit::get_selection_to_line() const {
    return rebel_icall_int(
        method_bindings.mb_get_selection_to_line,
        (const Object*)this
    );
}

String TextEdit::get_text() {
    return rebel_icall_string(
        method_bindings.mb_get_text,
        (const Object*)this
    );
}

int64_t TextEdit::get_total_gutter_width() const {
    return rebel_icall_int(
        method_bindings.mb_get_total_gutter_width,
        (const Object*)this
    );
}

real_t TextEdit::get_v_scroll() const {
    return rebel_icall_float(
        method_bindings.mb_get_v_scroll,
        (const Object*)this
    );
}

real_t TextEdit::get_v_scroll_speed() const {
    return rebel_icall_float(
        method_bindings.mb_get_v_scroll_speed,
        (const Object*)this
    );
}

String TextEdit::get_word_under_cursor() const {
    return rebel_icall_string(
        method_bindings.mb_get_word_under_cursor,
        (const Object*)this
    );
}

bool TextEdit::has_keyword_color(const String keyword) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_keyword_color,
        (const Object*)this,
        keyword
    );
}

bool TextEdit::has_redo() const {
    return rebel_icall_bool(
        method_bindings.mb_has_redo,
        (const Object*)this
    );
}

bool TextEdit::has_undo() const {
    return rebel_icall_bool(
        method_bindings.mb_has_undo,
        (const Object*)this
    );
}

void TextEdit::insert_text_at_cursor(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_insert_text_at_cursor,
        (const Object*)this,
        text
    );
}

bool TextEdit::is_bookmark_gutter_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_bookmark_gutter_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_breakpoint_gutter_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_breakpoint_gutter_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_context_menu_enabled() {
    return rebel_icall_bool(
        method_bindings.mb_is_context_menu_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_drawing_fold_gutter() const {
    return rebel_icall_bool(
        method_bindings.mb_is_drawing_fold_gutter,
        (const Object*)this
    );
}

bool TextEdit::is_drawing_minimap() const {
    return rebel_icall_bool(
        method_bindings.mb_is_drawing_minimap,
        (const Object*)this
    );
}

bool TextEdit::is_drawing_spaces() const {
    return rebel_icall_bool(
        method_bindings.mb_is_drawing_spaces,
        (const Object*)this
    );
}

bool TextEdit::is_drawing_tabs() const {
    return rebel_icall_bool(
        method_bindings.mb_is_drawing_tabs,
        (const Object*)this
    );
}

bool TextEdit::is_folded(const int64_t line) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_folded,
        (const Object*)this,
        line
    );
}

bool TextEdit::is_hiding_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_hiding_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_highlight_all_occurrences_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_highlight_all_occurrences_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_highlight_current_line_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_highlight_current_line_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_line_hidden(const int64_t line) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_line_hidden,
        (const Object*)this,
        line
    );
}

bool TextEdit::is_line_set_as_bookmark(const int64_t line) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_line_set_as_bookmark,
        (const Object*)this,
        line
    );
}

bool TextEdit::is_line_set_as_breakpoint(const int64_t line) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_line_set_as_breakpoint,
        (const Object*)this,
        line
    );
}

bool TextEdit::is_line_set_as_safe(const int64_t line) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_line_set_as_safe,
        (const Object*)this,
        line
    );
}

bool TextEdit::is_line_wrapped(const int64_t line) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_line_wrapped,
        (const Object*)this,
        line
    );
}

bool TextEdit::is_overriding_selected_font_color() const {
    return rebel_icall_bool(
        method_bindings.mb_is_overriding_selected_font_color,
        (const Object*)this
    );
}

bool TextEdit::is_readonly() const {
    return rebel_icall_bool(
        method_bindings.mb_is_readonly,
        (const Object*)this
    );
}

bool TextEdit::is_right_click_moving_caret() const {
    return rebel_icall_bool(
        method_bindings.mb_is_right_click_moving_caret,
        (const Object*)this
    );
}

bool TextEdit::is_selecting_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_selecting_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_selection_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_selection_active,
        (const Object*)this
    );
}

bool TextEdit::is_shortcut_keys_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_shortcut_keys_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_show_line_numbers_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_show_line_numbers_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_smooth_scroll_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_smooth_scroll_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_syntax_coloring_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_syntax_coloring_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_virtual_keyboard_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_virtual_keyboard_enabled,
        (const Object*)this
    );
}

bool TextEdit::is_wrap_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_wrap_enabled,
        (const Object*)this
    );
}

void TextEdit::menu_option(const int64_t option) {
    rebel_icall_void_int(
        method_bindings.mb_menu_option,
        (const Object*)this,
        option
    );
}

void TextEdit::paste() {
    rebel_icall_void(
        method_bindings.mb_paste,
        (const Object*)this
    );
}

void TextEdit::redo() {
    rebel_icall_void(
        method_bindings.mb_redo,
        (const Object*)this
    );
}

void TextEdit::remove_breakpoints() {
    rebel_icall_void(
        method_bindings.mb_remove_breakpoints,
        (const Object*)this
    );
}

PoolIntArray TextEdit::search(const String key, const int64_t flags, const int64_t from_line, const int64_t from_column) const {
    return rebel_icall_poolintarray_string_int_int_int(
        method_bindings.mb_search,
        (const Object*)this,
        key,
        flags,
        from_line,
        from_column
    );
}

void TextEdit::select(const int64_t from_line, const int64_t from_column, const int64_t to_line, const int64_t to_column) {
    rebel_icall_void_int_int_int_int(
        method_bindings.mb_select,
        (const Object*)this,
        from_line,
        from_column,
        to_line,
        to_column
    );
}

void TextEdit::select_all() {
    rebel_icall_void(
        method_bindings.mb_select_all,
        (const Object*)this
    );
}

void TextEdit::set_bookmark_gutter_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_bookmark_gutter_enabled,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_breakpoint_gutter_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_breakpoint_gutter_enabled,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_context_menu_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_context_menu_enabled,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_draw_fold_gutter(const bool arg0) {
    rebel_icall_void_bool(
        method_bindings.mb_set_draw_fold_gutter,
        (const Object*)this,
        arg0
    );
}

void TextEdit::set_draw_spaces(const bool arg0) {
    rebel_icall_void_bool(
        method_bindings.mb_set_draw_spaces,
        (const Object*)this,
        arg0
    );
}

void TextEdit::set_draw_tabs(const bool arg0) {
    rebel_icall_void_bool(
        method_bindings.mb_set_draw_tabs,
        (const Object*)this,
        arg0
    );
}

void TextEdit::set_h_scroll(const int64_t value) {
    rebel_icall_void_int(
        method_bindings.mb_set_h_scroll,
        (const Object*)this,
        value
    );
}

void TextEdit::set_hiding_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_hiding_enabled,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_highlight_all_occurrences(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_highlight_all_occurrences,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_highlight_current_line(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_highlight_current_line,
        (const Object*)this,
        enabled
    );
}

void TextEdit::set_line(const int64_t line, const String new_text) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_line,
        (const Object*)this,
        line,
        new_text
    );
}

void TextEdit::set_line_as_bookmark(const int64_t line, const bool bookmark) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_line_as_bookmark,
        (const Object*)this,
        line,
        bookmark
    );
}

void TextEdit::set_line_as_breakpoint(const int64_t line, const bool breakpoint) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_line_as_breakpoint,
        (const Object*)this,
        line,
        breakpoint
    );
}

void TextEdit::set_line_as_hidden(const int64_t line, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_line_as_hidden,
        (const Object*)this,
        line,
        enable
    );
}

void TextEdit::set_line_as_safe(const int64_t line, const bool safe) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_line_as_safe,
        (const Object*)this,
        line,
        safe
    );
}

void TextEdit::set_minimap_width(const int64_t width) {
    rebel_icall_void_int(
        method_bindings.mb_set_minimap_width,
        (const Object*)this,
        width
    );
}

void TextEdit::set_override_selected_font_color(const bool override) {
    rebel_icall_void_bool(
        method_bindings.mb_set_override_selected_font_color,
        (const Object*)this,
        override
    );
}

void TextEdit::set_readonly(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_readonly,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_right_click_moves_caret(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_right_click_moves_caret,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_selecting_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_selecting_enabled,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_shortcut_keys_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_shortcut_keys_enabled,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_show_line_numbers(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_show_line_numbers,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_smooth_scroll_enable(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_smooth_scroll_enable,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_syntax_coloring(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_syntax_coloring,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_text(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_text,
        (const Object*)this,
        text
    );
}

void TextEdit::set_v_scroll(const real_t value) {
    rebel_icall_void_float(
        method_bindings.mb_set_v_scroll,
        (const Object*)this,
        value
    );
}

void TextEdit::set_v_scroll_speed(const real_t speed) {
    rebel_icall_void_float(
        method_bindings.mb_set_v_scroll_speed,
        (const Object*)this,
        speed
    );
}

void TextEdit::set_virtual_keyboard_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_virtual_keyboard_enabled,
        (const Object*)this,
        enable
    );
}

void TextEdit::set_wrap_enabled(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_wrap_enabled,
        (const Object*)this,
        enable
    );
}

void TextEdit::toggle_fold_line(const int64_t line) {
    rebel_icall_void_int(
        method_bindings.mb_toggle_fold_line,
        (const Object*)this,
        line
    );
}

void TextEdit::undo() {
    rebel_icall_void(
        method_bindings.mb_undo,
        (const Object*)this
    );
}

void TextEdit::unfold_line(const int64_t line) {
    rebel_icall_void_int(
        method_bindings.mb_unfold_line,
        (const Object*)this,
        line
    );
}

void TextEdit::unhide_all_lines() {
    rebel_icall_void(
        method_bindings.mb_unhide_all_lines,
        (const Object*)this
    );
}

TextEdit* TextEdit::create() {
    return (TextEdit*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"TextEdit")()
         );
}

void TextEdit::init_method_bindings() {
    method_bindings.mb__click_selection_held =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "_click_selection_held"
        );
    method_bindings.mb__cursor_changed_emit =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "_cursor_changed_emit"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "_gui_input"
        );
    method_bindings.mb__push_current_op =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "_push_current_op"
        );
    method_bindings.mb__scroll_moved =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "_scroll_moved"
        );
    method_bindings.mb__text_changed_emit =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "_text_changed_emit"
        );
    method_bindings.mb__toggle_draw_caret =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "_toggle_draw_caret"
        );
    method_bindings.mb__update_wrap_at =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "_update_wrap_at"
        );
    method_bindings.mb__v_scroll_input =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "_v_scroll_input"
        );
    method_bindings.mb_add_color_region =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "add_color_region"
        );
    method_bindings.mb_add_keyword_color =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "add_keyword_color"
        );
    method_bindings.mb_can_fold =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "can_fold"
        );
    method_bindings.mb_center_viewport_to_cursor =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "center_viewport_to_cursor"
        );
    method_bindings.mb_clear_colors =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "clear_colors"
        );
    method_bindings.mb_clear_undo_history =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "clear_undo_history"
        );
    method_bindings.mb_copy =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "copy"
        );
    method_bindings.mb_cursor_get_blink_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "cursor_get_blink_enabled"
        );
    method_bindings.mb_cursor_get_blink_speed =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "cursor_get_blink_speed"
        );
    method_bindings.mb_cursor_get_column =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "cursor_get_column"
        );
    method_bindings.mb_cursor_get_line =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "cursor_get_line"
        );
    method_bindings.mb_cursor_is_block_mode =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "cursor_is_block_mode"
        );
    method_bindings.mb_cursor_set_blink_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "cursor_set_blink_enabled"
        );
    method_bindings.mb_cursor_set_blink_speed =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "cursor_set_blink_speed"
        );
    method_bindings.mb_cursor_set_block_mode =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "cursor_set_block_mode"
        );
    method_bindings.mb_cursor_set_column =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "cursor_set_column"
        );
    method_bindings.mb_cursor_set_line =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "cursor_set_line"
        );
    method_bindings.mb_cut =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "cut"
        );
    method_bindings.mb_deselect =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "deselect"
        );
    method_bindings.mb_draw_minimap =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "draw_minimap"
        );
    method_bindings.mb_fold_all_lines =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "fold_all_lines"
        );
    method_bindings.mb_fold_line =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "fold_line"
        );
    method_bindings.mb_get_breakpoints =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_breakpoints"
        );
    method_bindings.mb_get_h_scroll =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_h_scroll"
        );
    method_bindings.mb_get_keyword_color =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_keyword_color"
        );
    method_bindings.mb_get_line =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_line"
        );
    method_bindings.mb_get_line_column_at_pos =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_line_column_at_pos"
        );
    method_bindings.mb_get_line_count =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_line_count"
        );
    method_bindings.mb_get_line_height =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_line_height"
        );
    method_bindings.mb_get_line_width =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_line_width"
        );
    method_bindings.mb_get_line_wrap_count =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_line_wrap_count"
        );
    method_bindings.mb_get_line_wrapped_text =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_line_wrapped_text"
        );
    method_bindings.mb_get_menu =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_menu"
        );
    method_bindings.mb_get_minimap_width =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_minimap_width"
        );
    method_bindings.mb_get_pos_at_line_column =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_pos_at_line_column"
        );
    method_bindings.mb_get_rect_at_line_column =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_rect_at_line_column"
        );
    method_bindings.mb_get_selection_from_column =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_selection_from_column"
        );
    method_bindings.mb_get_selection_from_line =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_selection_from_line"
        );
    method_bindings.mb_get_selection_text =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_selection_text"
        );
    method_bindings.mb_get_selection_to_column =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_selection_to_column"
        );
    method_bindings.mb_get_selection_to_line =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_selection_to_line"
        );
    method_bindings.mb_get_text =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_text"
        );
    method_bindings.mb_get_total_gutter_width =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_total_gutter_width"
        );
    method_bindings.mb_get_v_scroll =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_v_scroll"
        );
    method_bindings.mb_get_v_scroll_speed =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_v_scroll_speed"
        );
    method_bindings.mb_get_word_under_cursor =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "get_word_under_cursor"
        );
    method_bindings.mb_has_keyword_color =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "has_keyword_color"
        );
    method_bindings.mb_has_redo =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "has_redo"
        );
    method_bindings.mb_has_undo =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "has_undo"
        );
    method_bindings.mb_insert_text_at_cursor =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "insert_text_at_cursor"
        );
    method_bindings.mb_is_bookmark_gutter_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_bookmark_gutter_enabled"
        );
    method_bindings.mb_is_breakpoint_gutter_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_breakpoint_gutter_enabled"
        );
    method_bindings.mb_is_context_menu_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_context_menu_enabled"
        );
    method_bindings.mb_is_drawing_fold_gutter =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_drawing_fold_gutter"
        );
    method_bindings.mb_is_drawing_minimap =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_drawing_minimap"
        );
    method_bindings.mb_is_drawing_spaces =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_drawing_spaces"
        );
    method_bindings.mb_is_drawing_tabs =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_drawing_tabs"
        );
    method_bindings.mb_is_folded =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_folded"
        );
    method_bindings.mb_is_hiding_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_hiding_enabled"
        );
    method_bindings.mb_is_highlight_all_occurrences_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_highlight_all_occurrences_enabled"
        );
    method_bindings.mb_is_highlight_current_line_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_highlight_current_line_enabled"
        );
    method_bindings.mb_is_line_hidden =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_line_hidden"
        );
    method_bindings.mb_is_line_set_as_bookmark =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_line_set_as_bookmark"
        );
    method_bindings.mb_is_line_set_as_breakpoint =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_line_set_as_breakpoint"
        );
    method_bindings.mb_is_line_set_as_safe =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_line_set_as_safe"
        );
    method_bindings.mb_is_line_wrapped =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_line_wrapped"
        );
    method_bindings.mb_is_overriding_selected_font_color =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_overriding_selected_font_color"
        );
    method_bindings.mb_is_readonly =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_readonly"
        );
    method_bindings.mb_is_right_click_moving_caret =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_right_click_moving_caret"
        );
    method_bindings.mb_is_selecting_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_selecting_enabled"
        );
    method_bindings.mb_is_selection_active =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_selection_active"
        );
    method_bindings.mb_is_shortcut_keys_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_shortcut_keys_enabled"
        );
    method_bindings.mb_is_show_line_numbers_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_show_line_numbers_enabled"
        );
    method_bindings.mb_is_smooth_scroll_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_smooth_scroll_enabled"
        );
    method_bindings.mb_is_syntax_coloring_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_syntax_coloring_enabled"
        );
    method_bindings.mb_is_virtual_keyboard_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_virtual_keyboard_enabled"
        );
    method_bindings.mb_is_wrap_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "is_wrap_enabled"
        );
    method_bindings.mb_menu_option =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "menu_option"
        );
    method_bindings.mb_paste =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "paste"
        );
    method_bindings.mb_redo =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "redo"
        );
    method_bindings.mb_remove_breakpoints =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "remove_breakpoints"
        );
    method_bindings.mb_search =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "search"
        );
    method_bindings.mb_select =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "select"
        );
    method_bindings.mb_select_all =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "select_all"
        );
    method_bindings.mb_set_bookmark_gutter_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_bookmark_gutter_enabled"
        );
    method_bindings.mb_set_breakpoint_gutter_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_breakpoint_gutter_enabled"
        );
    method_bindings.mb_set_context_menu_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_context_menu_enabled"
        );
    method_bindings.mb_set_draw_fold_gutter =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_draw_fold_gutter"
        );
    method_bindings.mb_set_draw_spaces =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_draw_spaces"
        );
    method_bindings.mb_set_draw_tabs =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_draw_tabs"
        );
    method_bindings.mb_set_h_scroll =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_h_scroll"
        );
    method_bindings.mb_set_hiding_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_hiding_enabled"
        );
    method_bindings.mb_set_highlight_all_occurrences =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_highlight_all_occurrences"
        );
    method_bindings.mb_set_highlight_current_line =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_highlight_current_line"
        );
    method_bindings.mb_set_line =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_line"
        );
    method_bindings.mb_set_line_as_bookmark =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_line_as_bookmark"
        );
    method_bindings.mb_set_line_as_breakpoint =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_line_as_breakpoint"
        );
    method_bindings.mb_set_line_as_hidden =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_line_as_hidden"
        );
    method_bindings.mb_set_line_as_safe =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_line_as_safe"
        );
    method_bindings.mb_set_minimap_width =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_minimap_width"
        );
    method_bindings.mb_set_override_selected_font_color =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_override_selected_font_color"
        );
    method_bindings.mb_set_readonly =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_readonly"
        );
    method_bindings.mb_set_right_click_moves_caret =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_right_click_moves_caret"
        );
    method_bindings.mb_set_selecting_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_selecting_enabled"
        );
    method_bindings.mb_set_shortcut_keys_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_shortcut_keys_enabled"
        );
    method_bindings.mb_set_show_line_numbers =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_show_line_numbers"
        );
    method_bindings.mb_set_smooth_scroll_enable =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_smooth_scroll_enable"
        );
    method_bindings.mb_set_syntax_coloring =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_syntax_coloring"
        );
    method_bindings.mb_set_text =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_text"
        );
    method_bindings.mb_set_v_scroll =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_v_scroll"
        );
    method_bindings.mb_set_v_scroll_speed =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_v_scroll_speed"
        );
    method_bindings.mb_set_virtual_keyboard_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_virtual_keyboard_enabled"
        );
    method_bindings.mb_set_wrap_enabled =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "set_wrap_enabled"
        );
    method_bindings.mb_toggle_fold_line =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "toggle_fold_line"
        );
    method_bindings.mb_undo =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "undo"
        );
    method_bindings.mb_unfold_line =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "unfold_line"
        );
    method_bindings.mb_unhide_all_lines =
        api->rebel_method_bind_get_method(
            "TextEdit",
            "unhide_all_lines"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TextEdit");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TextEdit::MethodBindings TextEdit::method_bindings = {};
void* TextEdit::class_tag = nullptr;
} // namespace Rebel
