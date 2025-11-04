// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RICHTEXTLABEL_H
#define REBEL_RICHTEXTLABEL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Font;
class InputEvent;
class Texture;
class VScrollBar;

class RichTextLabel : public Control {
public:
    enum Align {
        ALIGN_LEFT = 0,
        ALIGN_CENTER = 1,
        ALIGN_RIGHT = 2,
        ALIGN_FILL = 3,
    };

    enum ListType {
        LIST_NUMBERS = 0,
        LIST_LETTERS = 1,
        LIST_DOTS = 2,
    };

    enum ItemType {
        ITEM_FRAME = 0,
        ITEM_TEXT = 1,
        ITEM_IMAGE = 2,
        ITEM_NEWLINE = 3,
        ITEM_FONT = 4,
        ITEM_COLOR = 5,
        ITEM_UNDERLINE = 6,
        ITEM_STRIKETHROUGH = 7,
        ITEM_ALIGN = 8,
        ITEM_INDENT = 9,
        ITEM_LIST = 10,
        ITEM_TABLE = 11,
        ITEM_FADE = 12,
        ITEM_SHAKE = 13,
        ITEM_WAVE = 14,
        ITEM_TORNADO = 15,
        ITEM_RAINBOW = 16,
        ITEM_META = 17,
        ITEM_CUSTOMFX = 18,
    };

    void _gui_input(const Ref<InputEvent> arg0);
    void _scroll_changed(const real_t arg0);
    void add_image(const Ref<Texture> image, const int64_t width = 0, const int64_t height = 0);
    void add_text(const String text);
    Error append_bbcode(const String bbcode);
    void clear();
    String get_bbcode() const;
    int64_t get_content_height() const;
    Array get_effects();
    int64_t get_line_count() const;
    real_t get_percent_visible() const;
    int64_t get_tab_size() const;
    String get_text();
    int64_t get_total_character_count() const;
    VScrollBar* get_v_scroll();
    int64_t get_visible_characters() const;
    int64_t get_visible_line_count() const;
    void install_effect(const Variant effect);
    bool is_fit_content_height_enabled() const;
    bool is_meta_underlined() const;
    bool is_overriding_selected_font_color() const;
    bool is_scroll_active() const;
    bool is_scroll_following() const;
    bool is_selection_enabled() const;
    bool is_using_bbcode() const;
    void newline();
    Error parse_bbcode(const String bbcode);
    Dictionary parse_expressions_for_values(const PoolStringArray expressions);
    void pop();
    void push_align(const int64_t align);
    void push_bold();
    void push_bold_italics();
    void push_cell();
    void push_color(const Color color);
    void push_font(const Ref<Font> font);
    void push_indent(const int64_t level);
    void push_italics();
    void push_list(const int64_t type);
    void push_meta(const Variant data);
    void push_mono();
    void push_normal();
    void push_strikethrough();
    void push_table(const int64_t columns);
    void push_underline();
    bool remove_line(const int64_t line);
    void scroll_to_line(const int64_t line);
    void set_bbcode(const String text);
    void set_effects(const Array effects);
    void set_fit_content_height(const bool enabled);
    void set_meta_underline(const bool enable);
    void set_override_selected_font_color(const bool override);
    void set_percent_visible(const real_t percent_visible);
    void set_scroll_active(const bool active);
    void set_scroll_follow(const bool follow);
    void set_selection_enabled(const bool enabled);
    void set_tab_size(const int64_t spaces);
    void set_table_column_expand(const int64_t column, const bool expand, const int64_t ratio);
    void set_text(const String text);
    void set_use_bbcode(const bool enable);
    void set_visible_characters(const int64_t amount);

    static RichTextLabel* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "RichTextLabel";
    }

    inline static const char* get_rebel_class_name() {
        return "RichTextLabel";
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
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb__scroll_changed;
        rebel_method_bind* mb_add_image;
        rebel_method_bind* mb_add_text;
        rebel_method_bind* mb_append_bbcode;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_get_bbcode;
        rebel_method_bind* mb_get_content_height;
        rebel_method_bind* mb_get_effects;
        rebel_method_bind* mb_get_line_count;
        rebel_method_bind* mb_get_percent_visible;
        rebel_method_bind* mb_get_tab_size;
        rebel_method_bind* mb_get_text;
        rebel_method_bind* mb_get_total_character_count;
        rebel_method_bind* mb_get_v_scroll;
        rebel_method_bind* mb_get_visible_characters;
        rebel_method_bind* mb_get_visible_line_count;
        rebel_method_bind* mb_install_effect;
        rebel_method_bind* mb_is_fit_content_height_enabled;
        rebel_method_bind* mb_is_meta_underlined;
        rebel_method_bind* mb_is_overriding_selected_font_color;
        rebel_method_bind* mb_is_scroll_active;
        rebel_method_bind* mb_is_scroll_following;
        rebel_method_bind* mb_is_selection_enabled;
        rebel_method_bind* mb_is_using_bbcode;
        rebel_method_bind* mb_newline;
        rebel_method_bind* mb_parse_bbcode;
        rebel_method_bind* mb_parse_expressions_for_values;
        rebel_method_bind* mb_pop;
        rebel_method_bind* mb_push_align;
        rebel_method_bind* mb_push_bold;
        rebel_method_bind* mb_push_bold_italics;
        rebel_method_bind* mb_push_cell;
        rebel_method_bind* mb_push_color;
        rebel_method_bind* mb_push_font;
        rebel_method_bind* mb_push_indent;
        rebel_method_bind* mb_push_italics;
        rebel_method_bind* mb_push_list;
        rebel_method_bind* mb_push_meta;
        rebel_method_bind* mb_push_mono;
        rebel_method_bind* mb_push_normal;
        rebel_method_bind* mb_push_strikethrough;
        rebel_method_bind* mb_push_table;
        rebel_method_bind* mb_push_underline;
        rebel_method_bind* mb_remove_line;
        rebel_method_bind* mb_scroll_to_line;
        rebel_method_bind* mb_set_bbcode;
        rebel_method_bind* mb_set_effects;
        rebel_method_bind* mb_set_fit_content_height;
        rebel_method_bind* mb_set_meta_underline;
        rebel_method_bind* mb_set_override_selected_font_color;
        rebel_method_bind* mb_set_percent_visible;
        rebel_method_bind* mb_set_scroll_active;
        rebel_method_bind* mb_set_scroll_follow;
        rebel_method_bind* mb_set_selection_enabled;
        rebel_method_bind* mb_set_tab_size;
        rebel_method_bind* mb_set_table_column_expand;
        rebel_method_bind* mb_set_text;
        rebel_method_bind* mb_set_use_bbcode;
        rebel_method_bind* mb_set_visible_characters;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RICHTEXTLABEL_H
