// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TREE_H
#define REBEL_TREE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class Object;
class TreeItem;

class Tree : public Control {
public:
    enum SelectMode {
        SELECT_SINGLE = 0,
        SELECT_ROW = 1,
        SELECT_MULTI = 2,
    };

    enum DropModeFlags {
        DROP_MODE_DISABLED = 0,
        DROP_MODE_ON_ITEM = 1,
        DROP_MODE_INBETWEEN = 2,
    };

    void _gui_input(const Ref<InputEvent> arg0);
    void _popup_select(const int64_t arg0);
    void _range_click_timeout();
    void _scroll_moved(const real_t arg0);
    void _text_editor_enter(const String arg0);
    void _text_editor_modal_close();
    void _value_editor_changed(const real_t arg0);
    bool are_column_titles_visible() const;
    void clear();
    TreeItem* create_item(const Object* parent = nullptr, const int64_t idx = -1);
    bool edit_selected();
    void ensure_cursor_is_visible();
    bool get_allow_reselect() const;
    bool get_allow_rmb_select() const;
    int64_t get_column_at_position(const Vector2 position) const;
    String get_column_title(const int64_t column) const;
    int64_t get_column_width(const int64_t column) const;
    int64_t get_columns() const;
    Rect2 get_custom_popup_rect() const;
    int64_t get_drop_mode_flags() const;
    int64_t get_drop_section_at_position(const Vector2 position) const;
    TreeItem* get_edited() const;
    int64_t get_edited_column() const;
    Rect2 get_item_area_rect(const Object* item, const int64_t column = -1) const;
    TreeItem* get_item_at_position(const Vector2 position) const;
    TreeItem* get_next_selected(const Object* from);
    int64_t get_pressed_button() const;
    TreeItem* get_root();
    Vector2 get_scroll() const;
    Tree::SelectMode get_select_mode() const;
    TreeItem* get_selected() const;
    int64_t get_selected_column() const;
    bool is_folding_hidden() const;
    bool is_root_hidden() const;
    void scroll_to_item(const Object* item);
    void set_allow_reselect(const bool allow);
    void set_allow_rmb_select(const bool allow);
    void set_column_expand(const int64_t column, const bool expand);
    void set_column_min_width(const int64_t column, const int64_t min_width);
    void set_column_title(const int64_t column, const String title);
    void set_column_titles_visible(const bool visible);
    void set_columns(const int64_t amount);
    void set_drop_mode_flags(const int64_t flags);
    void set_hide_folding(const bool hide);
    void set_hide_root(const bool enable);
    void set_select_mode(const int64_t mode);

    static Tree* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Tree";
    }

    inline static const char* get_rebel_class_name() {
        return "Tree";
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
        rebel_method_bind* mb__popup_select;
        rebel_method_bind* mb__range_click_timeout;
        rebel_method_bind* mb__scroll_moved;
        rebel_method_bind* mb__text_editor_enter;
        rebel_method_bind* mb__text_editor_modal_close;
        rebel_method_bind* mb__value_editor_changed;
        rebel_method_bind* mb_are_column_titles_visible;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_create_item;
        rebel_method_bind* mb_edit_selected;
        rebel_method_bind* mb_ensure_cursor_is_visible;
        rebel_method_bind* mb_get_allow_reselect;
        rebel_method_bind* mb_get_allow_rmb_select;
        rebel_method_bind* mb_get_column_at_position;
        rebel_method_bind* mb_get_column_title;
        rebel_method_bind* mb_get_column_width;
        rebel_method_bind* mb_get_columns;
        rebel_method_bind* mb_get_custom_popup_rect;
        rebel_method_bind* mb_get_drop_mode_flags;
        rebel_method_bind* mb_get_drop_section_at_position;
        rebel_method_bind* mb_get_edited;
        rebel_method_bind* mb_get_edited_column;
        rebel_method_bind* mb_get_item_area_rect;
        rebel_method_bind* mb_get_item_at_position;
        rebel_method_bind* mb_get_next_selected;
        rebel_method_bind* mb_get_pressed_button;
        rebel_method_bind* mb_get_root;
        rebel_method_bind* mb_get_scroll;
        rebel_method_bind* mb_get_select_mode;
        rebel_method_bind* mb_get_selected;
        rebel_method_bind* mb_get_selected_column;
        rebel_method_bind* mb_is_folding_hidden;
        rebel_method_bind* mb_is_root_hidden;
        rebel_method_bind* mb_scroll_to_item;
        rebel_method_bind* mb_set_allow_reselect;
        rebel_method_bind* mb_set_allow_rmb_select;
        rebel_method_bind* mb_set_column_expand;
        rebel_method_bind* mb_set_column_min_width;
        rebel_method_bind* mb_set_column_title;
        rebel_method_bind* mb_set_column_titles_visible;
        rebel_method_bind* mb_set_columns;
        rebel_method_bind* mb_set_drop_mode_flags;
        rebel_method_bind* mb_set_hide_folding;
        rebel_method_bind* mb_set_hide_root;
        rebel_method_bind* mb_set_select_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TREE_H
