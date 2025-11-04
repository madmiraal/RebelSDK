// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/theme.h"

#include "classes/font.h"
#include "classes/icalls.h"
#include "classes/stylebox.h"
#include "classes/texture.h"
#include "classes/theme.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Theme::_emit_theme_changed(const bool notify_list_changed) {
    rebel_icall_void_bool(
        method_bindings.mb__emit_theme_changed,
        (const Object*)this,
        notify_list_changed
    );
}

void Theme::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void Theme::clear_color(const String name, const String node_type) {
    rebel_icall_void_string_string(
        method_bindings.mb_clear_color,
        (const Object*)this,
        name,
        node_type
    );
}

void Theme::clear_constant(const String name, const String node_type) {
    rebel_icall_void_string_string(
        method_bindings.mb_clear_constant,
        (const Object*)this,
        name,
        node_type
    );
}

void Theme::clear_font(const String name, const String node_type) {
    rebel_icall_void_string_string(
        method_bindings.mb_clear_font,
        (const Object*)this,
        name,
        node_type
    );
}

void Theme::clear_icon(const String name, const String node_type) {
    rebel_icall_void_string_string(
        method_bindings.mb_clear_icon,
        (const Object*)this,
        name,
        node_type
    );
}

void Theme::clear_stylebox(const String name, const String node_type) {
    rebel_icall_void_string_string(
        method_bindings.mb_clear_stylebox,
        (const Object*)this,
        name,
        node_type
    );
}

void Theme::clear_theme_item(const int64_t data_type, const String name, const String node_type) {
    rebel_icall_void_int_string_string(
        method_bindings.mb_clear_theme_item,
        (const Object*)this,
        data_type,
        name,
        node_type
    );
}

void Theme::copy_default_theme() {
    rebel_icall_void(
        method_bindings.mb_copy_default_theme,
        (const Object*)this
    );
}

void Theme::copy_theme(const Ref<Theme> other) {
    rebel_icall_void_object(
        method_bindings.mb_copy_theme,
        (const Object*)this,
        other.ptr()
    );
}

Color Theme::get_color(const String name, const String node_type) const {
    return rebel_icall_color_string_string(
        method_bindings.mb_get_color,
        (const Object*)this,
        name,
        node_type
    );
}

PoolStringArray Theme::get_color_list(const String node_type) const {
    return rebel_icall_poolstringarray_string(
        method_bindings.mb_get_color_list,
        (const Object*)this,
        node_type
    );
}

PoolStringArray Theme::get_color_types() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_color_types,
        (const Object*)this
    );
}

int64_t Theme::get_constant(const String name, const String node_type) const {
    return rebel_icall_int_string_string(
        method_bindings.mb_get_constant,
        (const Object*)this,
        name,
        node_type
    );
}

PoolStringArray Theme::get_constant_list(const String node_type) const {
    return rebel_icall_poolstringarray_string(
        method_bindings.mb_get_constant_list,
        (const Object*)this,
        node_type
    );
}

PoolStringArray Theme::get_constant_types() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_constant_types,
        (const Object*)this
    );
}

Ref<Font> Theme::get_default_font() const {
    return Ref<Font>::create_ref(rebel_icall_object(
        method_bindings.mb_get_default_font,
        (const Object*)this
    ));
}

Ref<Font> Theme::get_font(const String name, const String node_type) const {
    return Ref<Font>::create_ref(rebel_icall_object_string_string(
        method_bindings.mb_get_font,
        (const Object*)this,
        name,
        node_type
    ));
}

PoolStringArray Theme::get_font_list(const String node_type) const {
    return rebel_icall_poolstringarray_string(
        method_bindings.mb_get_font_list,
        (const Object*)this,
        node_type
    );
}

PoolStringArray Theme::get_font_types() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_font_types,
        (const Object*)this
    );
}

Ref<Texture> Theme::get_icon(const String name, const String node_type) const {
    return Ref<Texture>::create_ref(rebel_icall_object_string_string(
        method_bindings.mb_get_icon,
        (const Object*)this,
        name,
        node_type
    ));
}

PoolStringArray Theme::get_icon_list(const String node_type) const {
    return rebel_icall_poolstringarray_string(
        method_bindings.mb_get_icon_list,
        (const Object*)this,
        node_type
    );
}

PoolStringArray Theme::get_icon_types() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_icon_types,
        (const Object*)this
    );
}

Ref<StyleBox> Theme::get_stylebox(const String name, const String node_type) const {
    return Ref<StyleBox>::create_ref(rebel_icall_object_string_string(
        method_bindings.mb_get_stylebox,
        (const Object*)this,
        name,
        node_type
    ));
}

PoolStringArray Theme::get_stylebox_list(const String node_type) const {
    return rebel_icall_poolstringarray_string(
        method_bindings.mb_get_stylebox_list,
        (const Object*)this,
        node_type
    );
}

PoolStringArray Theme::get_stylebox_types() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_stylebox_types,
        (const Object*)this
    );
}

Variant Theme::get_theme_item(const int64_t data_type, const String name, const String node_type) const {
    return rebel_icall_variant_int_string_string(
        method_bindings.mb_get_theme_item,
        (const Object*)this,
        data_type,
        name,
        node_type
    );
}

PoolStringArray Theme::get_theme_item_list(const int64_t data_type, const String node_type) const {
    return rebel_icall_poolstringarray_int_string(
        method_bindings.mb_get_theme_item_list,
        (const Object*)this,
        data_type,
        node_type
    );
}

PoolStringArray Theme::get_theme_item_types(const int64_t data_type) const {
    return rebel_icall_poolstringarray_int(
        method_bindings.mb_get_theme_item_types,
        (const Object*)this,
        data_type
    );
}

PoolStringArray Theme::get_type_list(const String node_type) const {
    return rebel_icall_poolstringarray_string(
        method_bindings.mb_get_type_list,
        (const Object*)this,
        node_type
    );
}

bool Theme::has_color(const String name, const String node_type) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_color,
        (const Object*)this,
        name,
        node_type
    );
}

bool Theme::has_constant(const String name, const String node_type) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_constant,
        (const Object*)this,
        name,
        node_type
    );
}

bool Theme::has_default_font() const {
    return rebel_icall_bool(
        method_bindings.mb_has_default_font,
        (const Object*)this
    );
}

bool Theme::has_font(const String name, const String node_type) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_font,
        (const Object*)this,
        name,
        node_type
    );
}

bool Theme::has_icon(const String name, const String node_type) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_icon,
        (const Object*)this,
        name,
        node_type
    );
}

bool Theme::has_stylebox(const String name, const String node_type) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_stylebox,
        (const Object*)this,
        name,
        node_type
    );
}

bool Theme::has_theme_item(const int64_t data_type, const String name, const String node_type) const {
    return rebel_icall_bool_int_string_string(
        method_bindings.mb_has_theme_item,
        (const Object*)this,
        data_type,
        name,
        node_type
    );
}

void Theme::merge_with(const Ref<Theme> other) {
    rebel_icall_void_object(
        method_bindings.mb_merge_with,
        (const Object*)this,
        other.ptr()
    );
}

void Theme::rename_color(const String old_name, const String name, const String node_type) {
    rebel_icall_void_string_string_string(
        method_bindings.mb_rename_color,
        (const Object*)this,
        old_name,
        name,
        node_type
    );
}

void Theme::rename_constant(const String old_name, const String name, const String node_type) {
    rebel_icall_void_string_string_string(
        method_bindings.mb_rename_constant,
        (const Object*)this,
        old_name,
        name,
        node_type
    );
}

void Theme::rename_font(const String old_name, const String name, const String node_type) {
    rebel_icall_void_string_string_string(
        method_bindings.mb_rename_font,
        (const Object*)this,
        old_name,
        name,
        node_type
    );
}

void Theme::rename_icon(const String old_name, const String name, const String node_type) {
    rebel_icall_void_string_string_string(
        method_bindings.mb_rename_icon,
        (const Object*)this,
        old_name,
        name,
        node_type
    );
}

void Theme::rename_stylebox(const String old_name, const String name, const String node_type) {
    rebel_icall_void_string_string_string(
        method_bindings.mb_rename_stylebox,
        (const Object*)this,
        old_name,
        name,
        node_type
    );
}

void Theme::rename_theme_item(const int64_t data_type, const String old_name, const String name, const String node_type) {
    rebel_icall_void_int_string_string_string(
        method_bindings.mb_rename_theme_item,
        (const Object*)this,
        data_type,
        old_name,
        name,
        node_type
    );
}

void Theme::set_color(const String name, const String node_type, const Color color) {
    rebel_icall_void_string_string_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        name,
        node_type,
        color
    );
}

void Theme::set_constant(const String name, const String node_type, const int64_t constant) {
    rebel_icall_void_string_string_int(
        method_bindings.mb_set_constant,
        (const Object*)this,
        name,
        node_type,
        constant
    );
}

void Theme::set_default_font(const Ref<Font> font) {
    rebel_icall_void_object(
        method_bindings.mb_set_default_font,
        (const Object*)this,
        font.ptr()
    );
}

void Theme::set_font(const String name, const String node_type, const Ref<Font> font) {
    rebel_icall_void_string_string_object(
        method_bindings.mb_set_font,
        (const Object*)this,
        name,
        node_type,
        font.ptr()
    );
}

void Theme::set_icon(const String name, const String node_type, const Ref<Texture> texture) {
    rebel_icall_void_string_string_object(
        method_bindings.mb_set_icon,
        (const Object*)this,
        name,
        node_type,
        texture.ptr()
    );
}

void Theme::set_stylebox(const String name, const String node_type, const Ref<StyleBox> texture) {
    rebel_icall_void_string_string_object(
        method_bindings.mb_set_stylebox,
        (const Object*)this,
        name,
        node_type,
        texture.ptr()
    );
}

void Theme::set_theme_item(const int64_t data_type, const String name, const String node_type, const Variant value) {
    rebel_icall_void_int_string_string_variant(
        method_bindings.mb_set_theme_item,
        (const Object*)this,
        data_type,
        name,
        node_type,
        value
    );
}

Theme* Theme::create() {
    return (Theme*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Theme")()
         );
}

void Theme::init_method_bindings() {
    method_bindings.mb__emit_theme_changed =
        api->rebel_method_bind_get_method(
            "Theme",
            "_emit_theme_changed"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "Theme",
            "clear"
        );
    method_bindings.mb_clear_color =
        api->rebel_method_bind_get_method(
            "Theme",
            "clear_color"
        );
    method_bindings.mb_clear_constant =
        api->rebel_method_bind_get_method(
            "Theme",
            "clear_constant"
        );
    method_bindings.mb_clear_font =
        api->rebel_method_bind_get_method(
            "Theme",
            "clear_font"
        );
    method_bindings.mb_clear_icon =
        api->rebel_method_bind_get_method(
            "Theme",
            "clear_icon"
        );
    method_bindings.mb_clear_stylebox =
        api->rebel_method_bind_get_method(
            "Theme",
            "clear_stylebox"
        );
    method_bindings.mb_clear_theme_item =
        api->rebel_method_bind_get_method(
            "Theme",
            "clear_theme_item"
        );
    method_bindings.mb_copy_default_theme =
        api->rebel_method_bind_get_method(
            "Theme",
            "copy_default_theme"
        );
    method_bindings.mb_copy_theme =
        api->rebel_method_bind_get_method(
            "Theme",
            "copy_theme"
        );
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_color"
        );
    method_bindings.mb_get_color_list =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_color_list"
        );
    method_bindings.mb_get_color_types =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_color_types"
        );
    method_bindings.mb_get_constant =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_constant"
        );
    method_bindings.mb_get_constant_list =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_constant_list"
        );
    method_bindings.mb_get_constant_types =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_constant_types"
        );
    method_bindings.mb_get_default_font =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_default_font"
        );
    method_bindings.mb_get_font =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_font"
        );
    method_bindings.mb_get_font_list =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_font_list"
        );
    method_bindings.mb_get_font_types =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_font_types"
        );
    method_bindings.mb_get_icon =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_icon"
        );
    method_bindings.mb_get_icon_list =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_icon_list"
        );
    method_bindings.mb_get_icon_types =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_icon_types"
        );
    method_bindings.mb_get_stylebox =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_stylebox"
        );
    method_bindings.mb_get_stylebox_list =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_stylebox_list"
        );
    method_bindings.mb_get_stylebox_types =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_stylebox_types"
        );
    method_bindings.mb_get_theme_item =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_theme_item"
        );
    method_bindings.mb_get_theme_item_list =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_theme_item_list"
        );
    method_bindings.mb_get_theme_item_types =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_theme_item_types"
        );
    method_bindings.mb_get_type_list =
        api->rebel_method_bind_get_method(
            "Theme",
            "get_type_list"
        );
    method_bindings.mb_has_color =
        api->rebel_method_bind_get_method(
            "Theme",
            "has_color"
        );
    method_bindings.mb_has_constant =
        api->rebel_method_bind_get_method(
            "Theme",
            "has_constant"
        );
    method_bindings.mb_has_default_font =
        api->rebel_method_bind_get_method(
            "Theme",
            "has_default_font"
        );
    method_bindings.mb_has_font =
        api->rebel_method_bind_get_method(
            "Theme",
            "has_font"
        );
    method_bindings.mb_has_icon =
        api->rebel_method_bind_get_method(
            "Theme",
            "has_icon"
        );
    method_bindings.mb_has_stylebox =
        api->rebel_method_bind_get_method(
            "Theme",
            "has_stylebox"
        );
    method_bindings.mb_has_theme_item =
        api->rebel_method_bind_get_method(
            "Theme",
            "has_theme_item"
        );
    method_bindings.mb_merge_with =
        api->rebel_method_bind_get_method(
            "Theme",
            "merge_with"
        );
    method_bindings.mb_rename_color =
        api->rebel_method_bind_get_method(
            "Theme",
            "rename_color"
        );
    method_bindings.mb_rename_constant =
        api->rebel_method_bind_get_method(
            "Theme",
            "rename_constant"
        );
    method_bindings.mb_rename_font =
        api->rebel_method_bind_get_method(
            "Theme",
            "rename_font"
        );
    method_bindings.mb_rename_icon =
        api->rebel_method_bind_get_method(
            "Theme",
            "rename_icon"
        );
    method_bindings.mb_rename_stylebox =
        api->rebel_method_bind_get_method(
            "Theme",
            "rename_stylebox"
        );
    method_bindings.mb_rename_theme_item =
        api->rebel_method_bind_get_method(
            "Theme",
            "rename_theme_item"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "Theme",
            "set_color"
        );
    method_bindings.mb_set_constant =
        api->rebel_method_bind_get_method(
            "Theme",
            "set_constant"
        );
    method_bindings.mb_set_default_font =
        api->rebel_method_bind_get_method(
            "Theme",
            "set_default_font"
        );
    method_bindings.mb_set_font =
        api->rebel_method_bind_get_method(
            "Theme",
            "set_font"
        );
    method_bindings.mb_set_icon =
        api->rebel_method_bind_get_method(
            "Theme",
            "set_icon"
        );
    method_bindings.mb_set_stylebox =
        api->rebel_method_bind_get_method(
            "Theme",
            "set_stylebox"
        );
    method_bindings.mb_set_theme_item =
        api->rebel_method_bind_get_method(
            "Theme",
            "set_theme_item"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Theme");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Theme::MethodBindings Theme::method_bindings = {};
void* Theme::class_tag = nullptr;
} // namespace Rebel
