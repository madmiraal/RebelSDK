// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TEXTEDIT_H
#define REBEL_TEXTEDIT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class PopupMenu;

class TextEdit : public Control {
public:
    enum SearchFlags {
        SEARCH_MATCH_CASE = 1,
        SEARCH_WHOLE_WORDS = 2,
        SEARCH_BACKWARDS = 4,
    };

    enum SearchResult {
        SEARCH_RESULT_COLUMN = 0,
        SEARCH_RESULT_LINE = 1,
    };

    enum MenuItems {
        MENU_CUT = 0,
        MENU_COPY = 1,
        MENU_PASTE = 2,
        MENU_CLEAR = 3,
        MENU_SELECT_ALL = 4,
        MENU_UNDO = 5,
        MENU_REDO = 6,
        MENU_MAX = 7,
    };

    void _click_selection_held();
    void _cursor_changed_emit();
    void _gui_input(const Ref<InputEvent> arg0);
    void _push_current_op();
    void _scroll_moved(const real_t arg0);
    void _text_changed_emit();
    void _toggle_draw_caret();
    void _update_wrap_at();
    void _v_scroll_input();
    void add_color_region(const String begin_key, const String end_key, const Color color, const bool line_only = false);
    void add_keyword_color(const String keyword, const Color color);
    bool can_fold(const int64_t line) const;
    void center_viewport_to_cursor();
    void clear_colors();
    void clear_undo_history();
    void copy();
    bool cursor_get_blink_enabled() const;
    real_t cursor_get_blink_speed() const;
    int64_t cursor_get_column() const;
    int64_t cursor_get_line() const;
    bool cursor_is_block_mode() const;
    void cursor_set_blink_enabled(const bool enable);
    void cursor_set_blink_speed(const real_t blink_speed);
    void cursor_set_block_mode(const bool enable);
    void cursor_set_column(const int64_t column, const bool adjust_viewport = true);
    void cursor_set_line(const int64_t line, const bool adjust_viewport = true, const bool can_be_hidden = true, const int64_t wrap_index = 0);
    void cut();
    void deselect();
    void draw_minimap(const bool draw);
    void fold_all_lines();
    void fold_line(const int64_t line);
    Array get_breakpoints() const;
    int64_t get_h_scroll() const;
    Color get_keyword_color(const String keyword) const;
    String get_line(const int64_t line) const;
    Vector2 get_line_column_at_pos(const Vector2 position) const;
    int64_t get_line_count() const;
    int64_t get_line_height() const;
    int64_t get_line_width(const int64_t line, const int64_t wrap_index = -1) const;
    int64_t get_line_wrap_count(const int64_t line) const;
    PoolStringArray get_line_wrapped_text(const int64_t line) const;
    PopupMenu* get_menu() const;
    int64_t get_minimap_width() const;
    Vector2 get_pos_at_line_column(const int64_t line, const int64_t column) const;
    Rect2 get_rect_at_line_column(const int64_t line, const int64_t column) const;
    int64_t get_selection_from_column() const;
    int64_t get_selection_from_line() const;
    String get_selection_text() const;
    int64_t get_selection_to_column() const;
    int64_t get_selection_to_line() const;
    String get_text();
    int64_t get_total_gutter_width() const;
    real_t get_v_scroll() const;
    real_t get_v_scroll_speed() const;
    String get_word_under_cursor() const;
    bool has_keyword_color(const String keyword) const;
    bool has_redo() const;
    bool has_undo() const;
    void insert_text_at_cursor(const String text);
    bool is_bookmark_gutter_enabled() const;
    bool is_breakpoint_gutter_enabled() const;
    bool is_context_menu_enabled();
    bool is_drawing_fold_gutter() const;
    bool is_drawing_minimap() const;
    bool is_drawing_spaces() const;
    bool is_drawing_tabs() const;
    bool is_folded(const int64_t line) const;
    bool is_hiding_enabled() const;
    bool is_highlight_all_occurrences_enabled() const;
    bool is_highlight_current_line_enabled() const;
    bool is_line_hidden(const int64_t line) const;
    bool is_line_set_as_bookmark(const int64_t line) const;
    bool is_line_set_as_breakpoint(const int64_t line) const;
    bool is_line_set_as_safe(const int64_t line) const;
    bool is_line_wrapped(const int64_t line) const;
    bool is_overriding_selected_font_color() const;
    bool is_readonly() const;
    bool is_right_click_moving_caret() const;
    bool is_selecting_enabled() const;
    bool is_selection_active() const;
    bool is_shortcut_keys_enabled() const;
    bool is_show_line_numbers_enabled() const;
    bool is_smooth_scroll_enabled() const;
    bool is_syntax_coloring_enabled() const;
    bool is_virtual_keyboard_enabled() const;
    bool is_wrap_enabled() const;
    void menu_option(const int64_t option);
    void paste();
    void redo();
    void remove_breakpoints();
    PoolIntArray search(const String key, const int64_t flags, const int64_t from_line, const int64_t from_column) const;
    void select(const int64_t from_line, const int64_t from_column, const int64_t to_line, const int64_t to_column);
    void select_all();
    void set_bookmark_gutter_enabled(const bool enable);
    void set_breakpoint_gutter_enabled(const bool enable);
    void set_context_menu_enabled(const bool enable);
    void set_draw_fold_gutter(const bool arg0);
    void set_draw_spaces(const bool arg0);
    void set_draw_tabs(const bool arg0);
    void set_h_scroll(const int64_t value);
    void set_hiding_enabled(const bool enable);
    void set_highlight_all_occurrences(const bool enable);
    void set_highlight_current_line(const bool enabled);
    void set_line(const int64_t line, const String new_text);
    void set_line_as_bookmark(const int64_t line, const bool bookmark);
    void set_line_as_breakpoint(const int64_t line, const bool breakpoint);
    void set_line_as_hidden(const int64_t line, const bool enable);
    void set_line_as_safe(const int64_t line, const bool safe);
    void set_minimap_width(const int64_t width);
    void set_override_selected_font_color(const bool override);
    void set_readonly(const bool enable);
    void set_right_click_moves_caret(const bool enable);
    void set_selecting_enabled(const bool enable);
    void set_shortcut_keys_enabled(const bool enable);
    void set_show_line_numbers(const bool enable);
    void set_smooth_scroll_enable(const bool enable);
    void set_syntax_coloring(const bool enable);
    void set_text(const String text);
    void set_v_scroll(const real_t value);
    void set_v_scroll_speed(const real_t speed);
    void set_virtual_keyboard_enabled(const bool enable);
    void set_wrap_enabled(const bool enable);
    void toggle_fold_line(const int64_t line);
    void undo();
    void unfold_line(const int64_t line);
    void unhide_all_lines();

    static TextEdit* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "TextEdit";
    }

    inline static const char* get_rebel_class_name() {
        return "TextEdit";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb__click_selection_held;
        rebel_method_bind* mb__cursor_changed_emit;
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb__push_current_op;
        rebel_method_bind* mb__scroll_moved;
        rebel_method_bind* mb__text_changed_emit;
        rebel_method_bind* mb__toggle_draw_caret;
        rebel_method_bind* mb__update_wrap_at;
        rebel_method_bind* mb__v_scroll_input;
        rebel_method_bind* mb_add_color_region;
        rebel_method_bind* mb_add_keyword_color;
        rebel_method_bind* mb_can_fold;
        rebel_method_bind* mb_center_viewport_to_cursor;
        rebel_method_bind* mb_clear_colors;
        rebel_method_bind* mb_clear_undo_history;
        rebel_method_bind* mb_copy;
        rebel_method_bind* mb_cursor_get_blink_enabled;
        rebel_method_bind* mb_cursor_get_blink_speed;
        rebel_method_bind* mb_cursor_get_column;
        rebel_method_bind* mb_cursor_get_line;
        rebel_method_bind* mb_cursor_is_block_mode;
        rebel_method_bind* mb_cursor_set_blink_enabled;
        rebel_method_bind* mb_cursor_set_blink_speed;
        rebel_method_bind* mb_cursor_set_block_mode;
        rebel_method_bind* mb_cursor_set_column;
        rebel_method_bind* mb_cursor_set_line;
        rebel_method_bind* mb_cut;
        rebel_method_bind* mb_deselect;
        rebel_method_bind* mb_draw_minimap;
        rebel_method_bind* mb_fold_all_lines;
        rebel_method_bind* mb_fold_line;
        rebel_method_bind* mb_get_breakpoints;
        rebel_method_bind* mb_get_h_scroll;
        rebel_method_bind* mb_get_keyword_color;
        rebel_method_bind* mb_get_line;
        rebel_method_bind* mb_get_line_column_at_pos;
        rebel_method_bind* mb_get_line_count;
        rebel_method_bind* mb_get_line_height;
        rebel_method_bind* mb_get_line_width;
        rebel_method_bind* mb_get_line_wrap_count;
        rebel_method_bind* mb_get_line_wrapped_text;
        rebel_method_bind* mb_get_menu;
        rebel_method_bind* mb_get_minimap_width;
        rebel_method_bind* mb_get_pos_at_line_column;
        rebel_method_bind* mb_get_rect_at_line_column;
        rebel_method_bind* mb_get_selection_from_column;
        rebel_method_bind* mb_get_selection_from_line;
        rebel_method_bind* mb_get_selection_text;
        rebel_method_bind* mb_get_selection_to_column;
        rebel_method_bind* mb_get_selection_to_line;
        rebel_method_bind* mb_get_text;
        rebel_method_bind* mb_get_total_gutter_width;
        rebel_method_bind* mb_get_v_scroll;
        rebel_method_bind* mb_get_v_scroll_speed;
        rebel_method_bind* mb_get_word_under_cursor;
        rebel_method_bind* mb_has_keyword_color;
        rebel_method_bind* mb_has_redo;
        rebel_method_bind* mb_has_undo;
        rebel_method_bind* mb_insert_text_at_cursor;
        rebel_method_bind* mb_is_bookmark_gutter_enabled;
        rebel_method_bind* mb_is_breakpoint_gutter_enabled;
        rebel_method_bind* mb_is_context_menu_enabled;
        rebel_method_bind* mb_is_drawing_fold_gutter;
        rebel_method_bind* mb_is_drawing_minimap;
        rebel_method_bind* mb_is_drawing_spaces;
        rebel_method_bind* mb_is_drawing_tabs;
        rebel_method_bind* mb_is_folded;
        rebel_method_bind* mb_is_hiding_enabled;
        rebel_method_bind* mb_is_highlight_all_occurrences_enabled;
        rebel_method_bind* mb_is_highlight_current_line_enabled;
        rebel_method_bind* mb_is_line_hidden;
        rebel_method_bind* mb_is_line_set_as_bookmark;
        rebel_method_bind* mb_is_line_set_as_breakpoint;
        rebel_method_bind* mb_is_line_set_as_safe;
        rebel_method_bind* mb_is_line_wrapped;
        rebel_method_bind* mb_is_overriding_selected_font_color;
        rebel_method_bind* mb_is_readonly;
        rebel_method_bind* mb_is_right_click_moving_caret;
        rebel_method_bind* mb_is_selecting_enabled;
        rebel_method_bind* mb_is_selection_active;
        rebel_method_bind* mb_is_shortcut_keys_enabled;
        rebel_method_bind* mb_is_show_line_numbers_enabled;
        rebel_method_bind* mb_is_smooth_scroll_enabled;
        rebel_method_bind* mb_is_syntax_coloring_enabled;
        rebel_method_bind* mb_is_virtual_keyboard_enabled;
        rebel_method_bind* mb_is_wrap_enabled;
        rebel_method_bind* mb_menu_option;
        rebel_method_bind* mb_paste;
        rebel_method_bind* mb_redo;
        rebel_method_bind* mb_remove_breakpoints;
        rebel_method_bind* mb_search;
        rebel_method_bind* mb_select;
        rebel_method_bind* mb_select_all;
        rebel_method_bind* mb_set_bookmark_gutter_enabled;
        rebel_method_bind* mb_set_breakpoint_gutter_enabled;
        rebel_method_bind* mb_set_context_menu_enabled;
        rebel_method_bind* mb_set_draw_fold_gutter;
        rebel_method_bind* mb_set_draw_spaces;
        rebel_method_bind* mb_set_draw_tabs;
        rebel_method_bind* mb_set_h_scroll;
        rebel_method_bind* mb_set_hiding_enabled;
        rebel_method_bind* mb_set_highlight_all_occurrences;
        rebel_method_bind* mb_set_highlight_current_line;
        rebel_method_bind* mb_set_line;
        rebel_method_bind* mb_set_line_as_bookmark;
        rebel_method_bind* mb_set_line_as_breakpoint;
        rebel_method_bind* mb_set_line_as_hidden;
        rebel_method_bind* mb_set_line_as_safe;
        rebel_method_bind* mb_set_minimap_width;
        rebel_method_bind* mb_set_override_selected_font_color;
        rebel_method_bind* mb_set_readonly;
        rebel_method_bind* mb_set_right_click_moves_caret;
        rebel_method_bind* mb_set_selecting_enabled;
        rebel_method_bind* mb_set_shortcut_keys_enabled;
        rebel_method_bind* mb_set_show_line_numbers;
        rebel_method_bind* mb_set_smooth_scroll_enable;
        rebel_method_bind* mb_set_syntax_coloring;
        rebel_method_bind* mb_set_text;
        rebel_method_bind* mb_set_v_scroll;
        rebel_method_bind* mb_set_v_scroll_speed;
        rebel_method_bind* mb_set_virtual_keyboard_enabled;
        rebel_method_bind* mb_set_wrap_enabled;
        rebel_method_bind* mb_toggle_fold_line;
        rebel_method_bind* mb_undo;
        rebel_method_bind* mb_unfold_line;
        rebel_method_bind* mb_unhide_all_lines;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TEXTEDIT_H
