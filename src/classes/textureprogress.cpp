// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/textureprogress.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t TextureProgress::get_fill_degrees() {
    return rebel_icall_float(
        method_bindings.mb_get_fill_degrees,
        (const Object*)this
    );
}

int64_t TextureProgress::get_fill_mode() {
    return rebel_icall_int(
        method_bindings.mb_get_fill_mode,
        (const Object*)this
    );
}

bool TextureProgress::get_nine_patch_stretch() const {
    return rebel_icall_bool(
        method_bindings.mb_get_nine_patch_stretch,
        (const Object*)this
    );
}

Ref<Texture> TextureProgress::get_over_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_over_texture,
        (const Object*)this
    ));
}

Ref<Texture> TextureProgress::get_progress_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_progress_texture,
        (const Object*)this
    ));
}

Vector2 TextureProgress::get_radial_center_offset() {
    return rebel_icall_vector2(
        method_bindings.mb_get_radial_center_offset,
        (const Object*)this
    );
}

real_t TextureProgress::get_radial_initial_angle() {
    return rebel_icall_float(
        method_bindings.mb_get_radial_initial_angle,
        (const Object*)this
    );
}

int64_t TextureProgress::get_stretch_margin(const int64_t margin) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_stretch_margin,
        (const Object*)this,
        margin
    );
}

Vector2 TextureProgress::get_texture_progress_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_texture_progress_offset,
        (const Object*)this
    );
}

Color TextureProgress::get_tint_over() const {
    return rebel_icall_color(
        method_bindings.mb_get_tint_over,
        (const Object*)this
    );
}

Color TextureProgress::get_tint_progress() const {
    return rebel_icall_color(
        method_bindings.mb_get_tint_progress,
        (const Object*)this
    );
}

Color TextureProgress::get_tint_under() const {
    return rebel_icall_color(
        method_bindings.mb_get_tint_under,
        (const Object*)this
    );
}

Ref<Texture> TextureProgress::get_under_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_under_texture,
        (const Object*)this
    ));
}

void TextureProgress::set_fill_degrees(const real_t mode) {
    rebel_icall_void_float(
        method_bindings.mb_set_fill_degrees,
        (const Object*)this,
        mode
    );
}

void TextureProgress::set_fill_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_fill_mode,
        (const Object*)this,
        mode
    );
}

void TextureProgress::set_nine_patch_stretch(const bool stretch) {
    rebel_icall_void_bool(
        method_bindings.mb_set_nine_patch_stretch,
        (const Object*)this,
        stretch
    );
}

void TextureProgress::set_over_texture(const Ref<Texture> tex) {
    rebel_icall_void_object(
        method_bindings.mb_set_over_texture,
        (const Object*)this,
        tex.ptr()
    );
}

void TextureProgress::set_progress_texture(const Ref<Texture> tex) {
    rebel_icall_void_object(
        method_bindings.mb_set_progress_texture,
        (const Object*)this,
        tex.ptr()
    );
}

void TextureProgress::set_radial_center_offset(const Vector2 mode) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_radial_center_offset,
        (const Object*)this,
        mode
    );
}

void TextureProgress::set_radial_initial_angle(const real_t mode) {
    rebel_icall_void_float(
        method_bindings.mb_set_radial_initial_angle,
        (const Object*)this,
        mode
    );
}

void TextureProgress::set_stretch_margin(const int64_t margin, const int64_t value) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_stretch_margin,
        (const Object*)this,
        margin,
        value
    );
}

void TextureProgress::set_texture_progress_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_texture_progress_offset,
        (const Object*)this,
        offset
    );
}

void TextureProgress::set_tint_over(const Color tint) {
    rebel_icall_void_color(
        method_bindings.mb_set_tint_over,
        (const Object*)this,
        tint
    );
}

void TextureProgress::set_tint_progress(const Color tint) {
    rebel_icall_void_color(
        method_bindings.mb_set_tint_progress,
        (const Object*)this,
        tint
    );
}

void TextureProgress::set_tint_under(const Color tint) {
    rebel_icall_void_color(
        method_bindings.mb_set_tint_under,
        (const Object*)this,
        tint
    );
}

void TextureProgress::set_under_texture(const Ref<Texture> tex) {
    rebel_icall_void_object(
        method_bindings.mb_set_under_texture,
        (const Object*)this,
        tex.ptr()
    );
}

TextureProgress* TextureProgress::create() {
    return (TextureProgress*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"TextureProgress")()
         );
}

void TextureProgress::init_method_bindings() {
    method_bindings.mb_get_fill_degrees =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_fill_degrees"
        );
    method_bindings.mb_get_fill_mode =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_fill_mode"
        );
    method_bindings.mb_get_nine_patch_stretch =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_nine_patch_stretch"
        );
    method_bindings.mb_get_over_texture =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_over_texture"
        );
    method_bindings.mb_get_progress_texture =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_progress_texture"
        );
    method_bindings.mb_get_radial_center_offset =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_radial_center_offset"
        );
    method_bindings.mb_get_radial_initial_angle =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_radial_initial_angle"
        );
    method_bindings.mb_get_stretch_margin =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_stretch_margin"
        );
    method_bindings.mb_get_texture_progress_offset =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_texture_progress_offset"
        );
    method_bindings.mb_get_tint_over =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_tint_over"
        );
    method_bindings.mb_get_tint_progress =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_tint_progress"
        );
    method_bindings.mb_get_tint_under =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_tint_under"
        );
    method_bindings.mb_get_under_texture =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "get_under_texture"
        );
    method_bindings.mb_set_fill_degrees =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_fill_degrees"
        );
    method_bindings.mb_set_fill_mode =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_fill_mode"
        );
    method_bindings.mb_set_nine_patch_stretch =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_nine_patch_stretch"
        );
    method_bindings.mb_set_over_texture =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_over_texture"
        );
    method_bindings.mb_set_progress_texture =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_progress_texture"
        );
    method_bindings.mb_set_radial_center_offset =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_radial_center_offset"
        );
    method_bindings.mb_set_radial_initial_angle =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_radial_initial_angle"
        );
    method_bindings.mb_set_stretch_margin =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_stretch_margin"
        );
    method_bindings.mb_set_texture_progress_offset =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_texture_progress_offset"
        );
    method_bindings.mb_set_tint_over =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_tint_over"
        );
    method_bindings.mb_set_tint_progress =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_tint_progress"
        );
    method_bindings.mb_set_tint_under =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_tint_under"
        );
    method_bindings.mb_set_under_texture =
        api->rebel_method_bind_get_method(
            "TextureProgress",
            "set_under_texture"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TextureProgress");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TextureProgress::MethodBindings TextureProgress::method_bindings = {};
void* TextureProgress::class_tag = nullptr;
} // namespace Rebel
