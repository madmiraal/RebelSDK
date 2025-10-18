#include "Theme.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Theme.hpp"
#include "Font.hpp"
#include "Texture.hpp"
#include "StyleBox.hpp"


namespace godot {


Theme::___method_bindings Theme::___mb = {};

void *Theme::_detail_class_tag = nullptr;

void Theme::___init_method_bindings() {
	___mb.mb__emit_theme_changed = godot::api->godot_method_bind_get_method("Theme", "_emit_theme_changed");
	___mb.mb_clear = godot::api->godot_method_bind_get_method("Theme", "clear");
	___mb.mb_clear_color = godot::api->godot_method_bind_get_method("Theme", "clear_color");
	___mb.mb_clear_constant = godot::api->godot_method_bind_get_method("Theme", "clear_constant");
	___mb.mb_clear_font = godot::api->godot_method_bind_get_method("Theme", "clear_font");
	___mb.mb_clear_icon = godot::api->godot_method_bind_get_method("Theme", "clear_icon");
	___mb.mb_clear_stylebox = godot::api->godot_method_bind_get_method("Theme", "clear_stylebox");
	___mb.mb_clear_theme_item = godot::api->godot_method_bind_get_method("Theme", "clear_theme_item");
	___mb.mb_copy_default_theme = godot::api->godot_method_bind_get_method("Theme", "copy_default_theme");
	___mb.mb_copy_theme = godot::api->godot_method_bind_get_method("Theme", "copy_theme");
	___mb.mb_get_color = godot::api->godot_method_bind_get_method("Theme", "get_color");
	___mb.mb_get_color_list = godot::api->godot_method_bind_get_method("Theme", "get_color_list");
	___mb.mb_get_color_types = godot::api->godot_method_bind_get_method("Theme", "get_color_types");
	___mb.mb_get_constant = godot::api->godot_method_bind_get_method("Theme", "get_constant");
	___mb.mb_get_constant_list = godot::api->godot_method_bind_get_method("Theme", "get_constant_list");
	___mb.mb_get_constant_types = godot::api->godot_method_bind_get_method("Theme", "get_constant_types");
	___mb.mb_get_default_font = godot::api->godot_method_bind_get_method("Theme", "get_default_font");
	___mb.mb_get_font = godot::api->godot_method_bind_get_method("Theme", "get_font");
	___mb.mb_get_font_list = godot::api->godot_method_bind_get_method("Theme", "get_font_list");
	___mb.mb_get_font_types = godot::api->godot_method_bind_get_method("Theme", "get_font_types");
	___mb.mb_get_icon = godot::api->godot_method_bind_get_method("Theme", "get_icon");
	___mb.mb_get_icon_list = godot::api->godot_method_bind_get_method("Theme", "get_icon_list");
	___mb.mb_get_icon_types = godot::api->godot_method_bind_get_method("Theme", "get_icon_types");
	___mb.mb_get_stylebox = godot::api->godot_method_bind_get_method("Theme", "get_stylebox");
	___mb.mb_get_stylebox_list = godot::api->godot_method_bind_get_method("Theme", "get_stylebox_list");
	___mb.mb_get_stylebox_types = godot::api->godot_method_bind_get_method("Theme", "get_stylebox_types");
	___mb.mb_get_theme_item = godot::api->godot_method_bind_get_method("Theme", "get_theme_item");
	___mb.mb_get_theme_item_list = godot::api->godot_method_bind_get_method("Theme", "get_theme_item_list");
	___mb.mb_get_theme_item_types = godot::api->godot_method_bind_get_method("Theme", "get_theme_item_types");
	___mb.mb_get_type_list = godot::api->godot_method_bind_get_method("Theme", "get_type_list");
	___mb.mb_has_color = godot::api->godot_method_bind_get_method("Theme", "has_color");
	___mb.mb_has_constant = godot::api->godot_method_bind_get_method("Theme", "has_constant");
	___mb.mb_has_default_font = godot::api->godot_method_bind_get_method("Theme", "has_default_font");
	___mb.mb_has_font = godot::api->godot_method_bind_get_method("Theme", "has_font");
	___mb.mb_has_icon = godot::api->godot_method_bind_get_method("Theme", "has_icon");
	___mb.mb_has_stylebox = godot::api->godot_method_bind_get_method("Theme", "has_stylebox");
	___mb.mb_has_theme_item = godot::api->godot_method_bind_get_method("Theme", "has_theme_item");
	___mb.mb_merge_with = godot::api->godot_method_bind_get_method("Theme", "merge_with");
	___mb.mb_rename_color = godot::api->godot_method_bind_get_method("Theme", "rename_color");
	___mb.mb_rename_constant = godot::api->godot_method_bind_get_method("Theme", "rename_constant");
	___mb.mb_rename_font = godot::api->godot_method_bind_get_method("Theme", "rename_font");
	___mb.mb_rename_icon = godot::api->godot_method_bind_get_method("Theme", "rename_icon");
	___mb.mb_rename_stylebox = godot::api->godot_method_bind_get_method("Theme", "rename_stylebox");
	___mb.mb_rename_theme_item = godot::api->godot_method_bind_get_method("Theme", "rename_theme_item");
	___mb.mb_set_color = godot::api->godot_method_bind_get_method("Theme", "set_color");
	___mb.mb_set_constant = godot::api->godot_method_bind_get_method("Theme", "set_constant");
	___mb.mb_set_default_font = godot::api->godot_method_bind_get_method("Theme", "set_default_font");
	___mb.mb_set_font = godot::api->godot_method_bind_get_method("Theme", "set_font");
	___mb.mb_set_icon = godot::api->godot_method_bind_get_method("Theme", "set_icon");
	___mb.mb_set_stylebox = godot::api->godot_method_bind_get_method("Theme", "set_stylebox");
	___mb.mb_set_theme_item = godot::api->godot_method_bind_get_method("Theme", "set_theme_item");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Theme");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Theme *Theme::_new()
{
	return (Theme *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Theme")());
}
void Theme::_emit_theme_changed(const bool notify_list_changed) {
	___godot_icall_void_bool(___mb.mb__emit_theme_changed, (const Object *) this, notify_list_changed);
}

void Theme::clear() {
	___godot_icall_void(___mb.mb_clear, (const Object *) this);
}

void Theme::clear_color(const String name, const String node_type) {
	___godot_icall_void_String_String(___mb.mb_clear_color, (const Object *) this, name, node_type);
}

void Theme::clear_constant(const String name, const String node_type) {
	___godot_icall_void_String_String(___mb.mb_clear_constant, (const Object *) this, name, node_type);
}

void Theme::clear_font(const String name, const String node_type) {
	___godot_icall_void_String_String(___mb.mb_clear_font, (const Object *) this, name, node_type);
}

void Theme::clear_icon(const String name, const String node_type) {
	___godot_icall_void_String_String(___mb.mb_clear_icon, (const Object *) this, name, node_type);
}

void Theme::clear_stylebox(const String name, const String node_type) {
	___godot_icall_void_String_String(___mb.mb_clear_stylebox, (const Object *) this, name, node_type);
}

void Theme::clear_theme_item(const int64_t data_type, const String name, const String node_type) {
	___godot_icall_void_int_String_String(___mb.mb_clear_theme_item, (const Object *) this, data_type, name, node_type);
}

void Theme::copy_default_theme() {
	___godot_icall_void(___mb.mb_copy_default_theme, (const Object *) this);
}

void Theme::copy_theme(const Ref<Theme> other) {
	___godot_icall_void_Object(___mb.mb_copy_theme, (const Object *) this, other.ptr());
}

Color Theme::get_color(const String name, const String node_type) const {
	return ___godot_icall_Color_String_String(___mb.mb_get_color, (const Object *) this, name, node_type);
}

PoolStringArray Theme::get_color_list(const String node_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_color_list, (const Object *) this, node_type);
}

PoolStringArray Theme::get_color_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_color_types, (const Object *) this);
}

int64_t Theme::get_constant(const String name, const String node_type) const {
	return ___godot_icall_int_String_String(___mb.mb_get_constant, (const Object *) this, name, node_type);
}

PoolStringArray Theme::get_constant_list(const String node_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_constant_list, (const Object *) this, node_type);
}

PoolStringArray Theme::get_constant_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_constant_types, (const Object *) this);
}

Ref<Font> Theme::get_default_font() const {
	return Ref<Font>::__internal_constructor(___godot_icall_Object(___mb.mb_get_default_font, (const Object *) this));
}

Ref<Font> Theme::get_font(const String name, const String node_type) const {
	return Ref<Font>::__internal_constructor(___godot_icall_Object_String_String(___mb.mb_get_font, (const Object *) this, name, node_type));
}

PoolStringArray Theme::get_font_list(const String node_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_font_list, (const Object *) this, node_type);
}

PoolStringArray Theme::get_font_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_font_types, (const Object *) this);
}

Ref<Texture> Theme::get_icon(const String name, const String node_type) const {
	return Ref<Texture>::__internal_constructor(___godot_icall_Object_String_String(___mb.mb_get_icon, (const Object *) this, name, node_type));
}

PoolStringArray Theme::get_icon_list(const String node_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_icon_list, (const Object *) this, node_type);
}

PoolStringArray Theme::get_icon_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_icon_types, (const Object *) this);
}

Ref<StyleBox> Theme::get_stylebox(const String name, const String node_type) const {
	return Ref<StyleBox>::__internal_constructor(___godot_icall_Object_String_String(___mb.mb_get_stylebox, (const Object *) this, name, node_type));
}

PoolStringArray Theme::get_stylebox_list(const String node_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_stylebox_list, (const Object *) this, node_type);
}

PoolStringArray Theme::get_stylebox_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_stylebox_types, (const Object *) this);
}

Variant Theme::get_theme_item(const int64_t data_type, const String name, const String node_type) const {
	return ___godot_icall_Variant_int_String_String(___mb.mb_get_theme_item, (const Object *) this, data_type, name, node_type);
}

PoolStringArray Theme::get_theme_item_list(const int64_t data_type, const String node_type) const {
	return ___godot_icall_PoolStringArray_int_String(___mb.mb_get_theme_item_list, (const Object *) this, data_type, node_type);
}

PoolStringArray Theme::get_theme_item_types(const int64_t data_type) const {
	return ___godot_icall_PoolStringArray_int(___mb.mb_get_theme_item_types, (const Object *) this, data_type);
}

PoolStringArray Theme::get_type_list(const String node_type) const {
	return ___godot_icall_PoolStringArray_String(___mb.mb_get_type_list, (const Object *) this, node_type);
}

bool Theme::has_color(const String name, const String node_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_color, (const Object *) this, name, node_type);
}

bool Theme::has_constant(const String name, const String node_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_constant, (const Object *) this, name, node_type);
}

bool Theme::has_default_font() const {
	return ___godot_icall_bool(___mb.mb_has_default_font, (const Object *) this);
}

bool Theme::has_font(const String name, const String node_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_font, (const Object *) this, name, node_type);
}

bool Theme::has_icon(const String name, const String node_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_icon, (const Object *) this, name, node_type);
}

bool Theme::has_stylebox(const String name, const String node_type) const {
	return ___godot_icall_bool_String_String(___mb.mb_has_stylebox, (const Object *) this, name, node_type);
}

bool Theme::has_theme_item(const int64_t data_type, const String name, const String node_type) const {
	return ___godot_icall_bool_int_String_String(___mb.mb_has_theme_item, (const Object *) this, data_type, name, node_type);
}

void Theme::merge_with(const Ref<Theme> other) {
	___godot_icall_void_Object(___mb.mb_merge_with, (const Object *) this, other.ptr());
}

void Theme::rename_color(const String old_name, const String name, const String node_type) {
	___godot_icall_void_String_String_String(___mb.mb_rename_color, (const Object *) this, old_name, name, node_type);
}

void Theme::rename_constant(const String old_name, const String name, const String node_type) {
	___godot_icall_void_String_String_String(___mb.mb_rename_constant, (const Object *) this, old_name, name, node_type);
}

void Theme::rename_font(const String old_name, const String name, const String node_type) {
	___godot_icall_void_String_String_String(___mb.mb_rename_font, (const Object *) this, old_name, name, node_type);
}

void Theme::rename_icon(const String old_name, const String name, const String node_type) {
	___godot_icall_void_String_String_String(___mb.mb_rename_icon, (const Object *) this, old_name, name, node_type);
}

void Theme::rename_stylebox(const String old_name, const String name, const String node_type) {
	___godot_icall_void_String_String_String(___mb.mb_rename_stylebox, (const Object *) this, old_name, name, node_type);
}

void Theme::rename_theme_item(const int64_t data_type, const String old_name, const String name, const String node_type) {
	___godot_icall_void_int_String_String_String(___mb.mb_rename_theme_item, (const Object *) this, data_type, old_name, name, node_type);
}

void Theme::set_color(const String name, const String node_type, const Color color) {
	___godot_icall_void_String_String_Color(___mb.mb_set_color, (const Object *) this, name, node_type, color);
}

void Theme::set_constant(const String name, const String node_type, const int64_t constant) {
	___godot_icall_void_String_String_int(___mb.mb_set_constant, (const Object *) this, name, node_type, constant);
}

void Theme::set_default_font(const Ref<Font> font) {
	___godot_icall_void_Object(___mb.mb_set_default_font, (const Object *) this, font.ptr());
}

void Theme::set_font(const String name, const String node_type, const Ref<Font> font) {
	___godot_icall_void_String_String_Object(___mb.mb_set_font, (const Object *) this, name, node_type, font.ptr());
}

void Theme::set_icon(const String name, const String node_type, const Ref<Texture> texture) {
	___godot_icall_void_String_String_Object(___mb.mb_set_icon, (const Object *) this, name, node_type, texture.ptr());
}

void Theme::set_stylebox(const String name, const String node_type, const Ref<StyleBox> texture) {
	___godot_icall_void_String_String_Object(___mb.mb_set_stylebox, (const Object *) this, name, node_type, texture.ptr());
}

void Theme::set_theme_item(const int64_t data_type, const String name, const String node_type, const Variant value) {
	___godot_icall_void_int_String_String_Variant(___mb.mb_set_theme_item, (const Object *) this, data_type, name, node_type, value);
}

}