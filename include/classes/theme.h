// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_THEME_H
#define REBEL_THEME_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Font;
class StyleBox;
class Texture;

class Theme : public Resource {
public:
    enum DataType {
        DATA_TYPE_COLOR = 0,
        DATA_TYPE_CONSTANT = 1,
        DATA_TYPE_FONT = 2,
        DATA_TYPE_ICON = 3,
        DATA_TYPE_STYLEBOX = 4,
        DATA_TYPE_MAX = 5,
    };

    void _emit_theme_changed(const bool notify_list_changed = false);
    void clear();
    void clear_color(const String name, const String node_type);
    void clear_constant(const String name, const String node_type);
    void clear_font(const String name, const String node_type);
    void clear_icon(const String name, const String node_type);
    void clear_stylebox(const String name, const String node_type);
    void clear_theme_item(const int64_t data_type, const String name, const String node_type);
    void copy_default_theme();
    void copy_theme(const Ref<Theme> other);
    Color get_color(const String name, const String node_type) const;
    PoolStringArray get_color_list(const String node_type) const;
    PoolStringArray get_color_types() const;
    int64_t get_constant(const String name, const String node_type) const;
    PoolStringArray get_constant_list(const String node_type) const;
    PoolStringArray get_constant_types() const;
    Ref<Font> get_default_font() const;
    Ref<Font> get_font(const String name, const String node_type) const;
    PoolStringArray get_font_list(const String node_type) const;
    PoolStringArray get_font_types() const;
    Ref<Texture> get_icon(const String name, const String node_type) const;
    PoolStringArray get_icon_list(const String node_type) const;
    PoolStringArray get_icon_types() const;
    Ref<StyleBox> get_stylebox(const String name, const String node_type) const;
    PoolStringArray get_stylebox_list(const String node_type) const;
    PoolStringArray get_stylebox_types() const;
    Variant get_theme_item(const int64_t data_type, const String name, const String node_type) const;
    PoolStringArray get_theme_item_list(const int64_t data_type, const String node_type) const;
    PoolStringArray get_theme_item_types(const int64_t data_type) const;
    PoolStringArray get_type_list(const String node_type) const;
    bool has_color(const String name, const String node_type) const;
    bool has_constant(const String name, const String node_type) const;
    bool has_default_font() const;
    bool has_font(const String name, const String node_type) const;
    bool has_icon(const String name, const String node_type) const;
    bool has_stylebox(const String name, const String node_type) const;
    bool has_theme_item(const int64_t data_type, const String name, const String node_type) const;
    void merge_with(const Ref<Theme> other);
    void rename_color(const String old_name, const String name, const String node_type);
    void rename_constant(const String old_name, const String name, const String node_type);
    void rename_font(const String old_name, const String name, const String node_type);
    void rename_icon(const String old_name, const String name, const String node_type);
    void rename_stylebox(const String old_name, const String name, const String node_type);
    void rename_theme_item(const int64_t data_type, const String old_name, const String name, const String node_type);
    void set_color(const String name, const String node_type, const Color color);
    void set_constant(const String name, const String node_type, const int64_t constant);
    void set_default_font(const Ref<Font> font);
    void set_font(const String name, const String node_type, const Ref<Font> font);
    void set_icon(const String name, const String node_type, const Ref<Texture> texture);
    void set_stylebox(const String name, const String node_type, const Ref<StyleBox> texture);
    void set_theme_item(const int64_t data_type, const String name, const String node_type, const Variant value);

    static Theme* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Theme";
    }

    inline static const char* get_rebel_class_name() {
        return "Theme";
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
        rebel_method_bind* mb__emit_theme_changed;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_clear_color;
        rebel_method_bind* mb_clear_constant;
        rebel_method_bind* mb_clear_font;
        rebel_method_bind* mb_clear_icon;
        rebel_method_bind* mb_clear_stylebox;
        rebel_method_bind* mb_clear_theme_item;
        rebel_method_bind* mb_copy_default_theme;
        rebel_method_bind* mb_copy_theme;
        rebel_method_bind* mb_get_color;
        rebel_method_bind* mb_get_color_list;
        rebel_method_bind* mb_get_color_types;
        rebel_method_bind* mb_get_constant;
        rebel_method_bind* mb_get_constant_list;
        rebel_method_bind* mb_get_constant_types;
        rebel_method_bind* mb_get_default_font;
        rebel_method_bind* mb_get_font;
        rebel_method_bind* mb_get_font_list;
        rebel_method_bind* mb_get_font_types;
        rebel_method_bind* mb_get_icon;
        rebel_method_bind* mb_get_icon_list;
        rebel_method_bind* mb_get_icon_types;
        rebel_method_bind* mb_get_stylebox;
        rebel_method_bind* mb_get_stylebox_list;
        rebel_method_bind* mb_get_stylebox_types;
        rebel_method_bind* mb_get_theme_item;
        rebel_method_bind* mb_get_theme_item_list;
        rebel_method_bind* mb_get_theme_item_types;
        rebel_method_bind* mb_get_type_list;
        rebel_method_bind* mb_has_color;
        rebel_method_bind* mb_has_constant;
        rebel_method_bind* mb_has_default_font;
        rebel_method_bind* mb_has_font;
        rebel_method_bind* mb_has_icon;
        rebel_method_bind* mb_has_stylebox;
        rebel_method_bind* mb_has_theme_item;
        rebel_method_bind* mb_merge_with;
        rebel_method_bind* mb_rename_color;
        rebel_method_bind* mb_rename_constant;
        rebel_method_bind* mb_rename_font;
        rebel_method_bind* mb_rename_icon;
        rebel_method_bind* mb_rename_stylebox;
        rebel_method_bind* mb_rename_theme_item;
        rebel_method_bind* mb_set_color;
        rebel_method_bind* mb_set_constant;
        rebel_method_bind* mb_set_default_font;
        rebel_method_bind* mb_set_font;
        rebel_method_bind* mb_set_icon;
        rebel_method_bind* mb_set_stylebox;
        rebel_method_bind* mb_set_theme_item;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_THEME_H
