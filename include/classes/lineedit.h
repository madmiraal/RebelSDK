// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_LINEEDIT_H
#define REBEL_LINEEDIT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class PopupMenu;
class Texture;

class LineEdit : public Control {
public:
    enum Align {
        ALIGN_LEFT = 0,
        ALIGN_CENTER = 1,
        ALIGN_RIGHT = 2,
        ALIGN_FILL = 3,
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

    void _editor_settings_changed();
    void _gui_input(const Ref<InputEvent> arg0);
    void _text_changed();
    void _toggle_draw_caret();
    void append_at_cursor(const String text);
    void clear();
    bool cursor_get_blink_enabled() const;
    real_t cursor_get_blink_speed() const;
    void cursor_set_blink_enabled(const bool enabled);
    void cursor_set_blink_speed(const real_t blink_speed);
    void delete_char_at_cursor();
    void delete_text(const int64_t from_column, const int64_t to_column);
    void deselect();
    LineEdit::Align get_align() const;
    int64_t get_cursor_position() const;
    bool get_expand_to_text_length() const;
    int64_t get_max_length() const;
    PopupMenu* get_menu() const;
    String get_placeholder() const;
    real_t get_placeholder_alpha() const;
    Ref<Texture> get_right_icon();
    int64_t get_scroll_offset() const;
    String get_secret_character() const;
    String get_text() const;
    bool is_clear_button_enabled() const;
    bool is_context_menu_enabled();
    bool is_editable() const;
    bool is_secret() const;
    bool is_selecting_enabled() const;
    bool is_shortcut_keys_enabled() const;
    bool is_virtual_keyboard_enabled() const;
    void menu_option(const int64_t option);
    void select(const int64_t from = 0, const int64_t to = -1);
    void select_all();
    void set_align(const int64_t align);
    void set_clear_button_enabled(const bool enable);
    void set_context_menu_enabled(const bool enable);
    void set_cursor_position(const int64_t position);
    void set_editable(const bool enabled);
    void set_expand_to_text_length(const bool enabled);
    void set_max_length(const int64_t chars);
    void set_placeholder(const String text);
    void set_placeholder_alpha(const real_t alpha);
    void set_right_icon(const Ref<Texture> icon);
    void set_secret(const bool enabled);
    void set_secret_character(const String character);
    void set_selecting_enabled(const bool enable);
    void set_shortcut_keys_enabled(const bool enable);
    void set_text(const String text);
    void set_virtual_keyboard_enabled(const bool enable);

    static LineEdit* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "LineEdit";
    }

    inline static const char* get_rebel_class_name() {
        return "LineEdit";
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
        rebel_method_bind* mb__editor_settings_changed;
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb__text_changed;
        rebel_method_bind* mb__toggle_draw_caret;
        rebel_method_bind* mb_append_at_cursor;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_cursor_get_blink_enabled;
        rebel_method_bind* mb_cursor_get_blink_speed;
        rebel_method_bind* mb_cursor_set_blink_enabled;
        rebel_method_bind* mb_cursor_set_blink_speed;
        rebel_method_bind* mb_delete_char_at_cursor;
        rebel_method_bind* mb_delete_text;
        rebel_method_bind* mb_deselect;
        rebel_method_bind* mb_get_align;
        rebel_method_bind* mb_get_cursor_position;
        rebel_method_bind* mb_get_expand_to_text_length;
        rebel_method_bind* mb_get_max_length;
        rebel_method_bind* mb_get_menu;
        rebel_method_bind* mb_get_placeholder;
        rebel_method_bind* mb_get_placeholder_alpha;
        rebel_method_bind* mb_get_right_icon;
        rebel_method_bind* mb_get_scroll_offset;
        rebel_method_bind* mb_get_secret_character;
        rebel_method_bind* mb_get_text;
        rebel_method_bind* mb_is_clear_button_enabled;
        rebel_method_bind* mb_is_context_menu_enabled;
        rebel_method_bind* mb_is_editable;
        rebel_method_bind* mb_is_secret;
        rebel_method_bind* mb_is_selecting_enabled;
        rebel_method_bind* mb_is_shortcut_keys_enabled;
        rebel_method_bind* mb_is_virtual_keyboard_enabled;
        rebel_method_bind* mb_menu_option;
        rebel_method_bind* mb_select;
        rebel_method_bind* mb_select_all;
        rebel_method_bind* mb_set_align;
        rebel_method_bind* mb_set_clear_button_enabled;
        rebel_method_bind* mb_set_context_menu_enabled;
        rebel_method_bind* mb_set_cursor_position;
        rebel_method_bind* mb_set_editable;
        rebel_method_bind* mb_set_expand_to_text_length;
        rebel_method_bind* mb_set_max_length;
        rebel_method_bind* mb_set_placeholder;
        rebel_method_bind* mb_set_placeholder_alpha;
        rebel_method_bind* mb_set_right_icon;
        rebel_method_bind* mb_set_secret;
        rebel_method_bind* mb_set_secret_character;
        rebel_method_bind* mb_set_selecting_enabled;
        rebel_method_bind* mb_set_shortcut_keys_enabled;
        rebel_method_bind* mb_set_text;
        rebel_method_bind* mb_set_virtual_keyboard_enabled;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_LINEEDIT_H
