// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/texturebutton.h"

#include "classes/bitmap.h"
#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<BitMap> TextureButton::get_click_mask() const {
    return Ref<BitMap>::create_ref(rebel_icall_object(
        method_bindings.mb_get_click_mask,
        (const Object*)this
    ));
}

Ref<Texture> TextureButton::get_disabled_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_disabled_texture,
        (const Object*)this
    ));
}

bool TextureButton::get_expand() const {
    return rebel_icall_bool(
        method_bindings.mb_get_expand,
        (const Object*)this
    );
}

Ref<Texture> TextureButton::get_focused_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_focused_texture,
        (const Object*)this
    ));
}

Ref<Texture> TextureButton::get_hover_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_hover_texture,
        (const Object*)this
    ));
}

Ref<Texture> TextureButton::get_normal_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_normal_texture,
        (const Object*)this
    ));
}

Ref<Texture> TextureButton::get_pressed_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_pressed_texture,
        (const Object*)this
    ));
}

TextureButton::StretchMode TextureButton::get_stretch_mode() const {
    return (TextureButton::StretchMode)rebel_icall_int(
        method_bindings.mb_get_stretch_mode,
        (const Object*)this
    );
}

bool TextureButton::is_flipped_h() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flipped_h,
        (const Object*)this
    );
}

bool TextureButton::is_flipped_v() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flipped_v,
        (const Object*)this
    );
}

void TextureButton::set_click_mask(const Ref<BitMap> mask) {
    rebel_icall_void_object(
        method_bindings.mb_set_click_mask,
        (const Object*)this,
        mask.ptr()
    );
}

void TextureButton::set_disabled_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_disabled_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void TextureButton::set_expand(const bool p_expand) {
    rebel_icall_void_bool(
        method_bindings.mb_set_expand,
        (const Object*)this,
        p_expand
    );
}

void TextureButton::set_flip_h(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flip_h,
        (const Object*)this,
        enable
    );
}

void TextureButton::set_flip_v(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flip_v,
        (const Object*)this,
        enable
    );
}

void TextureButton::set_focused_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_focused_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void TextureButton::set_hover_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_hover_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void TextureButton::set_normal_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_normal_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void TextureButton::set_pressed_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_pressed_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void TextureButton::set_stretch_mode(const int64_t p_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_stretch_mode,
        (const Object*)this,
        p_mode
    );
}

TextureButton* TextureButton::create() {
    return (TextureButton*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"TextureButton")()
         );
}

void TextureButton::init_method_bindings() {
    method_bindings.mb_get_click_mask =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "get_click_mask"
        );
    method_bindings.mb_get_disabled_texture =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "get_disabled_texture"
        );
    method_bindings.mb_get_expand =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "get_expand"
        );
    method_bindings.mb_get_focused_texture =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "get_focused_texture"
        );
    method_bindings.mb_get_hover_texture =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "get_hover_texture"
        );
    method_bindings.mb_get_normal_texture =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "get_normal_texture"
        );
    method_bindings.mb_get_pressed_texture =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "get_pressed_texture"
        );
    method_bindings.mb_get_stretch_mode =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "get_stretch_mode"
        );
    method_bindings.mb_is_flipped_h =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "is_flipped_h"
        );
    method_bindings.mb_is_flipped_v =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "is_flipped_v"
        );
    method_bindings.mb_set_click_mask =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "set_click_mask"
        );
    method_bindings.mb_set_disabled_texture =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "set_disabled_texture"
        );
    method_bindings.mb_set_expand =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "set_expand"
        );
    method_bindings.mb_set_flip_h =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "set_flip_h"
        );
    method_bindings.mb_set_flip_v =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "set_flip_v"
        );
    method_bindings.mb_set_focused_texture =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "set_focused_texture"
        );
    method_bindings.mb_set_hover_texture =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "set_hover_texture"
        );
    method_bindings.mb_set_normal_texture =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "set_normal_texture"
        );
    method_bindings.mb_set_pressed_texture =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "set_pressed_texture"
        );
    method_bindings.mb_set_stretch_mode =
        api->rebel_method_bind_get_method(
            "TextureButton",
            "set_stretch_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TextureButton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TextureButton::MethodBindings TextureButton::method_bindings = {};
void* TextureButton::class_tag = nullptr;
} // namespace Rebel
