// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/texturerect.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void TextureRect::_texture_changed() {
    rebel_icall_void(
        method_bindings.mb__texture_changed,
        (const Object*)this
    );
}

TextureRect::StretchMode TextureRect::get_stretch_mode() const {
    return (TextureRect::StretchMode)rebel_icall_int(
        method_bindings.mb_get_stretch_mode,
        (const Object*)this
    );
}

Ref<Texture> TextureRect::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

bool TextureRect::has_expand() const {
    return rebel_icall_bool(
        method_bindings.mb_has_expand,
        (const Object*)this
    );
}

bool TextureRect::is_flipped_h() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flipped_h,
        (const Object*)this
    );
}

bool TextureRect::is_flipped_v() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flipped_v,
        (const Object*)this
    );
}

void TextureRect::set_expand(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_expand,
        (const Object*)this,
        enable
    );
}

void TextureRect::set_flip_h(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flip_h,
        (const Object*)this,
        enable
    );
}

void TextureRect::set_flip_v(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flip_v,
        (const Object*)this,
        enable
    );
}

void TextureRect::set_stretch_mode(const int64_t stretch_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_stretch_mode,
        (const Object*)this,
        stretch_mode
    );
}

void TextureRect::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

TextureRect* TextureRect::create() {
    return (TextureRect*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"TextureRect")()
         );
}

void TextureRect::init_method_bindings() {
    method_bindings.mb__texture_changed =
        api->rebel_method_bind_get_method(
            "TextureRect",
            "_texture_changed"
        );
    method_bindings.mb_get_stretch_mode =
        api->rebel_method_bind_get_method(
            "TextureRect",
            "get_stretch_mode"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "TextureRect",
            "get_texture"
        );
    method_bindings.mb_has_expand =
        api->rebel_method_bind_get_method(
            "TextureRect",
            "has_expand"
        );
    method_bindings.mb_is_flipped_h =
        api->rebel_method_bind_get_method(
            "TextureRect",
            "is_flipped_h"
        );
    method_bindings.mb_is_flipped_v =
        api->rebel_method_bind_get_method(
            "TextureRect",
            "is_flipped_v"
        );
    method_bindings.mb_set_expand =
        api->rebel_method_bind_get_method(
            "TextureRect",
            "set_expand"
        );
    method_bindings.mb_set_flip_h =
        api->rebel_method_bind_get_method(
            "TextureRect",
            "set_flip_h"
        );
    method_bindings.mb_set_flip_v =
        api->rebel_method_bind_get_method(
            "TextureRect",
            "set_flip_v"
        );
    method_bindings.mb_set_stretch_mode =
        api->rebel_method_bind_get_method(
            "TextureRect",
            "set_stretch_mode"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "TextureRect",
            "set_texture"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TextureRect");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TextureRect::MethodBindings TextureRect::method_bindings = {};
void* TextureRect::class_tag = nullptr;
} // namespace Rebel
