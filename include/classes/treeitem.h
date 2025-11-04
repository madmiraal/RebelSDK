// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TREEITEM_H
#define REBEL_TREEITEM_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class TreeItem : public Object {
public:
    enum TreeCellMode {
        CELL_MODE_STRING = 0,
        CELL_MODE_CHECK = 1,
        CELL_MODE_RANGE = 2,
        CELL_MODE_ICON = 3,
        CELL_MODE_CUSTOM = 4,
    };

    enum TextAlign {
        ALIGN_LEFT = 0,
        ALIGN_CENTER = 1,
        ALIGN_RIGHT = 2,
    };

    void add_button(const int64_t column, const Ref<Texture> button, const int64_t button_idx = -1, const bool disabled = false, const String tooltip = "");
    Variant call_recursive(const String method, const Array& args = Array());
    void clear_custom_bg_color(const int64_t column);
    void clear_custom_color(const int64_t column);
    void deselect(const int64_t column);
    void erase_button(const int64_t column, const int64_t button_idx);
    Ref<Texture> get_button(const int64_t column, const int64_t button_idx) const;
    int64_t get_button_count(const int64_t column) const;
    String get_button_tooltip(const int64_t column, const int64_t button_idx) const;
    TreeItem::TreeCellMode get_cell_mode(const int64_t column) const;
    TreeItem* get_children();
    Color get_custom_bg_color(const int64_t column) const;
    Color get_custom_color(const int64_t column) const;
    int64_t get_custom_minimum_height() const;
    bool get_expand_right(const int64_t column) const;
    Ref<Texture> get_icon(const int64_t column) const;
    int64_t get_icon_max_width(const int64_t column) const;
    Color get_icon_modulate(const int64_t column) const;
    Rect2 get_icon_region(const int64_t column) const;
    Variant get_metadata(const int64_t column) const;
    TreeItem* get_next();
    TreeItem* get_next_visible(const bool wrap = false);
    TreeItem* get_parent();
    TreeItem* get_prev();
    TreeItem* get_prev_visible(const bool wrap = false);
    real_t get_range(const int64_t column) const;
    Dictionary get_range_config(const int64_t column);
    String get_suffix(const int64_t column) const;
    String get_text(const int64_t column) const;
    TreeItem::TextAlign get_text_align(const int64_t column) const;
    String get_tooltip(const int64_t column) const;
    bool is_button_disabled(const int64_t column, const int64_t button_idx) const;
    bool is_checked(const int64_t column) const;
    bool is_collapsed();
    bool is_custom_set_as_button(const int64_t column) const;
    bool is_editable(const int64_t column);
    bool is_folding_disabled() const;
    bool is_selectable(const int64_t column) const;
    bool is_selected(const int64_t column);
    void move_to_bottom();
    void move_to_top();
    void remove_child(const Object* child);
    void select(const int64_t column);
    void set_button(const int64_t column, const int64_t button_idx, const Ref<Texture> button);
    void set_button_disabled(const int64_t column, const int64_t button_idx, const bool disabled);
    void set_cell_mode(const int64_t column, const int64_t mode);
    void set_checked(const int64_t column, const bool checked);
    void set_collapsed(const bool enable);
    void set_custom_as_button(const int64_t column, const bool enable);
    void set_custom_bg_color(const int64_t column, const Color color, const bool just_outline = false);
    void set_custom_color(const int64_t column, const Color color);
    void set_custom_draw(const int64_t column, const Object* object, const String callback);
    void set_custom_minimum_height(const int64_t height);
    void set_disable_folding(const bool disable);
    void set_editable(const int64_t column, const bool enabled);
    void set_expand_right(const int64_t column, const bool enable);
    void set_icon(const int64_t column, const Ref<Texture> texture);
    void set_icon_max_width(const int64_t column, const int64_t width);
    void set_icon_modulate(const int64_t column, const Color modulate);
    void set_icon_region(const int64_t column, const Rect2 region);
    void set_metadata(const int64_t column, const Variant meta);
    void set_range(const int64_t column, const real_t value);
    void set_range_config(const int64_t column, const real_t min, const real_t max, const real_t step, const bool expr = false);
    void set_selectable(const int64_t column, const bool selectable);
    void set_suffix(const int64_t column, const String text);
    void set_text(const int64_t column, const String text);
    void set_text_align(const int64_t column, const int64_t text_align);
    void set_tooltip(const int64_t column, const String tooltip);

    template <class... Args>
    Variant call_recursive(const String method, Args... args) {
        return call_recursive(method, Array::make(args...));
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "TreeItem";
    }

    inline static const char* get_rebel_class_name() {
        return "TreeItem";
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
        rebel_method_bind* mb_add_button;
        rebel_method_bind* mb_call_recursive;
        rebel_method_bind* mb_clear_custom_bg_color;
        rebel_method_bind* mb_clear_custom_color;
        rebel_method_bind* mb_deselect;
        rebel_method_bind* mb_erase_button;
        rebel_method_bind* mb_get_button;
        rebel_method_bind* mb_get_button_count;
        rebel_method_bind* mb_get_button_tooltip;
        rebel_method_bind* mb_get_cell_mode;
        rebel_method_bind* mb_get_children;
        rebel_method_bind* mb_get_custom_bg_color;
        rebel_method_bind* mb_get_custom_color;
        rebel_method_bind* mb_get_custom_minimum_height;
        rebel_method_bind* mb_get_expand_right;
        rebel_method_bind* mb_get_icon;
        rebel_method_bind* mb_get_icon_max_width;
        rebel_method_bind* mb_get_icon_modulate;
        rebel_method_bind* mb_get_icon_region;
        rebel_method_bind* mb_get_metadata;
        rebel_method_bind* mb_get_next;
        rebel_method_bind* mb_get_next_visible;
        rebel_method_bind* mb_get_parent;
        rebel_method_bind* mb_get_prev;
        rebel_method_bind* mb_get_prev_visible;
        rebel_method_bind* mb_get_range;
        rebel_method_bind* mb_get_range_config;
        rebel_method_bind* mb_get_suffix;
        rebel_method_bind* mb_get_text;
        rebel_method_bind* mb_get_text_align;
        rebel_method_bind* mb_get_tooltip;
        rebel_method_bind* mb_is_button_disabled;
        rebel_method_bind* mb_is_checked;
        rebel_method_bind* mb_is_collapsed;
        rebel_method_bind* mb_is_custom_set_as_button;
        rebel_method_bind* mb_is_editable;
        rebel_method_bind* mb_is_folding_disabled;
        rebel_method_bind* mb_is_selectable;
        rebel_method_bind* mb_is_selected;
        rebel_method_bind* mb_move_to_bottom;
        rebel_method_bind* mb_move_to_top;
        rebel_method_bind* mb_remove_child;
        rebel_method_bind* mb_select;
        rebel_method_bind* mb_set_button;
        rebel_method_bind* mb_set_button_disabled;
        rebel_method_bind* mb_set_cell_mode;
        rebel_method_bind* mb_set_checked;
        rebel_method_bind* mb_set_collapsed;
        rebel_method_bind* mb_set_custom_as_button;
        rebel_method_bind* mb_set_custom_bg_color;
        rebel_method_bind* mb_set_custom_color;
        rebel_method_bind* mb_set_custom_draw;
        rebel_method_bind* mb_set_custom_minimum_height;
        rebel_method_bind* mb_set_disable_folding;
        rebel_method_bind* mb_set_editable;
        rebel_method_bind* mb_set_expand_right;
        rebel_method_bind* mb_set_icon;
        rebel_method_bind* mb_set_icon_max_width;
        rebel_method_bind* mb_set_icon_modulate;
        rebel_method_bind* mb_set_icon_region;
        rebel_method_bind* mb_set_metadata;
        rebel_method_bind* mb_set_range;
        rebel_method_bind* mb_set_range_config;
        rebel_method_bind* mb_set_selectable;
        rebel_method_bind* mb_set_suffix;
        rebel_method_bind* mb_set_text;
        rebel_method_bind* mb_set_text_align;
        rebel_method_bind* mb_set_tooltip;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TREEITEM_H
