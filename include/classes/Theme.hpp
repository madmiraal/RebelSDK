#ifndef GODOT_CPP_THEME_HPP
#define GODOT_CPP_THEME_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {

class Theme;
class Font;
class Texture;
class StyleBox;

class Theme : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb__emit_theme_changed;
		godot_method_bind *mb_clear;
		godot_method_bind *mb_clear_color;
		godot_method_bind *mb_clear_constant;
		godot_method_bind *mb_clear_font;
		godot_method_bind *mb_clear_icon;
		godot_method_bind *mb_clear_stylebox;
		godot_method_bind *mb_clear_theme_item;
		godot_method_bind *mb_copy_default_theme;
		godot_method_bind *mb_copy_theme;
		godot_method_bind *mb_get_color;
		godot_method_bind *mb_get_color_list;
		godot_method_bind *mb_get_color_types;
		godot_method_bind *mb_get_constant;
		godot_method_bind *mb_get_constant_list;
		godot_method_bind *mb_get_constant_types;
		godot_method_bind *mb_get_default_font;
		godot_method_bind *mb_get_font;
		godot_method_bind *mb_get_font_list;
		godot_method_bind *mb_get_font_types;
		godot_method_bind *mb_get_icon;
		godot_method_bind *mb_get_icon_list;
		godot_method_bind *mb_get_icon_types;
		godot_method_bind *mb_get_stylebox;
		godot_method_bind *mb_get_stylebox_list;
		godot_method_bind *mb_get_stylebox_types;
		godot_method_bind *mb_get_theme_item;
		godot_method_bind *mb_get_theme_item_list;
		godot_method_bind *mb_get_theme_item_types;
		godot_method_bind *mb_get_type_list;
		godot_method_bind *mb_has_color;
		godot_method_bind *mb_has_constant;
		godot_method_bind *mb_has_default_font;
		godot_method_bind *mb_has_font;
		godot_method_bind *mb_has_icon;
		godot_method_bind *mb_has_stylebox;
		godot_method_bind *mb_has_theme_item;
		godot_method_bind *mb_merge_with;
		godot_method_bind *mb_rename_color;
		godot_method_bind *mb_rename_constant;
		godot_method_bind *mb_rename_font;
		godot_method_bind *mb_rename_icon;
		godot_method_bind *mb_rename_stylebox;
		godot_method_bind *mb_rename_theme_item;
		godot_method_bind *mb_set_color;
		godot_method_bind *mb_set_constant;
		godot_method_bind *mb_set_default_font;
		godot_method_bind *mb_set_font;
		godot_method_bind *mb_set_icon;
		godot_method_bind *mb_set_stylebox;
		godot_method_bind *mb_set_theme_item;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Theme"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Theme"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum DataType {
		DATA_TYPE_COLOR = 0,
		DATA_TYPE_CONSTANT = 1,
		DATA_TYPE_FONT = 2,
		DATA_TYPE_ICON = 3,
		DATA_TYPE_STYLEBOX = 4,
		DATA_TYPE_MAX = 5,
	};

	// constants


	static Theme *_new();

	// methods
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

};

}

#endif