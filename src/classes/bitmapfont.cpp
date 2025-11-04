// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/bitmapfont.h"

#include "classes/bitmapfont.h"
#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolIntArray BitmapFont::_get_chars() const {
    return rebel_icall_poolintarray(
        method_bindings.mb__get_chars,
        (const Object*)this
    );
}

PoolIntArray BitmapFont::_get_kernings() const {
    return rebel_icall_poolintarray(
        method_bindings.mb__get_kernings,
        (const Object*)this
    );
}

Array BitmapFont::_get_textures() const {
    return rebel_icall_array(
        method_bindings.mb__get_textures,
        (const Object*)this
    );
}

void BitmapFont::_set_chars(const PoolIntArray arg0) {
    rebel_icall_void_poolintarray(
        method_bindings.mb__set_chars,
        (const Object*)this,
        arg0
    );
}

void BitmapFont::_set_kernings(const PoolIntArray arg0) {
    rebel_icall_void_poolintarray(
        method_bindings.mb__set_kernings,
        (const Object*)this,
        arg0
    );
}

void BitmapFont::_set_textures(const Array arg0) {
    rebel_icall_void_array(
        method_bindings.mb__set_textures,
        (const Object*)this,
        arg0
    );
}

void BitmapFont::add_char(const int64_t character, const int64_t texture, const Rect2 rect, const Vector2 align, const real_t advance) {
    rebel_icall_void_int_int_rect2_vector2_float(
        method_bindings.mb_add_char,
        (const Object*)this,
        character,
        texture,
        rect,
        align,
        advance
    );
}

void BitmapFont::add_kerning_pair(const int64_t char_a, const int64_t char_b, const int64_t kerning) {
    rebel_icall_void_int_int_int(
        method_bindings.mb_add_kerning_pair,
        (const Object*)this,
        char_a,
        char_b,
        kerning
    );
}

void BitmapFont::add_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_add_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void BitmapFont::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

Error BitmapFont::create_from_fnt(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_create_from_fnt,
        (const Object*)this,
        path
    );
}

Ref<BitmapFont> BitmapFont::get_fallback() const {
    return Ref<BitmapFont>::create_ref(rebel_icall_object(
        method_bindings.mb_get_fallback,
        (const Object*)this
    ));
}

int64_t BitmapFont::get_kerning_pair(const int64_t char_a, const int64_t char_b) const {
    return rebel_icall_int_int_int(
        method_bindings.mb_get_kerning_pair,
        (const Object*)this,
        char_a,
        char_b
    );
}

Ref<Texture> BitmapFont::get_texture(const int64_t idx) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_texture,
        (const Object*)this,
        idx
    ));
}

int64_t BitmapFont::get_texture_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_texture_count,
        (const Object*)this
    );
}

void BitmapFont::set_ascent(const real_t px) {
    rebel_icall_void_float(
        method_bindings.mb_set_ascent,
        (const Object*)this,
        px
    );
}

void BitmapFont::set_distance_field_hint(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_distance_field_hint,
        (const Object*)this,
        enable
    );
}

void BitmapFont::set_fallback(const Ref<BitmapFont> fallback) {
    rebel_icall_void_object(
        method_bindings.mb_set_fallback,
        (const Object*)this,
        fallback.ptr()
    );
}

void BitmapFont::set_height(const real_t px) {
    rebel_icall_void_float(
        method_bindings.mb_set_height,
        (const Object*)this,
        px
    );
}

BitmapFont* BitmapFont::create() {
    return (BitmapFont*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"BitmapFont")()
         );
}

void BitmapFont::init_method_bindings() {
    method_bindings.mb__get_chars =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "_get_chars"
        );
    method_bindings.mb__get_kernings =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "_get_kernings"
        );
    method_bindings.mb__get_textures =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "_get_textures"
        );
    method_bindings.mb__set_chars =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "_set_chars"
        );
    method_bindings.mb__set_kernings =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "_set_kernings"
        );
    method_bindings.mb__set_textures =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "_set_textures"
        );
    method_bindings.mb_add_char =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "add_char"
        );
    method_bindings.mb_add_kerning_pair =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "add_kerning_pair"
        );
    method_bindings.mb_add_texture =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "add_texture"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "clear"
        );
    method_bindings.mb_create_from_fnt =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "create_from_fnt"
        );
    method_bindings.mb_get_fallback =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "get_fallback"
        );
    method_bindings.mb_get_kerning_pair =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "get_kerning_pair"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "get_texture"
        );
    method_bindings.mb_get_texture_count =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "get_texture_count"
        );
    method_bindings.mb_set_ascent =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "set_ascent"
        );
    method_bindings.mb_set_distance_field_hint =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "set_distance_field_hint"
        );
    method_bindings.mb_set_fallback =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "set_fallback"
        );
    method_bindings.mb_set_height =
        api->rebel_method_bind_get_method(
            "BitmapFont",
            "set_height"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "BitmapFont");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

BitmapFont::MethodBindings BitmapFont::method_bindings = {};
void* BitmapFont::class_tag = nullptr;
} // namespace Rebel
