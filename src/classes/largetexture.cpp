// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/largetexture.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array LargeTexture::_get_data() const {
    return rebel_icall_array(
        method_bindings.mb__get_data,
        (const Object*)this
    );
}

void LargeTexture::_set_data(const Array data) {
    rebel_icall_void_array(
        method_bindings.mb__set_data,
        (const Object*)this,
        data
    );
}

int64_t LargeTexture::add_piece(const Vector2 ofs, const Ref<Texture> texture) {
    return rebel_icall_int_vector2_object(
        method_bindings.mb_add_piece,
        (const Object*)this,
        ofs,
        texture.ptr()
    );
}

void LargeTexture::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

int64_t LargeTexture::get_piece_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_piece_count,
        (const Object*)this
    );
}

Vector2 LargeTexture::get_piece_offset(const int64_t idx) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_piece_offset,
        (const Object*)this,
        idx
    );
}

Ref<Texture> LargeTexture::get_piece_texture(const int64_t idx) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_piece_texture,
        (const Object*)this,
        idx
    ));
}

void LargeTexture::set_piece_offset(const int64_t idx, const Vector2 ofs) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_set_piece_offset,
        (const Object*)this,
        idx,
        ofs
    );
}

void LargeTexture::set_piece_texture(const int64_t idx, const Ref<Texture> texture) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_piece_texture,
        (const Object*)this,
        idx,
        texture.ptr()
    );
}

void LargeTexture::set_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_size,
        (const Object*)this,
        size
    );
}

LargeTexture* LargeTexture::create() {
    return (LargeTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"LargeTexture")()
         );
}

void LargeTexture::init_method_bindings() {
    method_bindings.mb__get_data =
        api->rebel_method_bind_get_method(
            "LargeTexture",
            "_get_data"
        );
    method_bindings.mb__set_data =
        api->rebel_method_bind_get_method(
            "LargeTexture",
            "_set_data"
        );
    method_bindings.mb_add_piece =
        api->rebel_method_bind_get_method(
            "LargeTexture",
            "add_piece"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "LargeTexture",
            "clear"
        );
    method_bindings.mb_get_piece_count =
        api->rebel_method_bind_get_method(
            "LargeTexture",
            "get_piece_count"
        );
    method_bindings.mb_get_piece_offset =
        api->rebel_method_bind_get_method(
            "LargeTexture",
            "get_piece_offset"
        );
    method_bindings.mb_get_piece_texture =
        api->rebel_method_bind_get_method(
            "LargeTexture",
            "get_piece_texture"
        );
    method_bindings.mb_set_piece_offset =
        api->rebel_method_bind_get_method(
            "LargeTexture",
            "set_piece_offset"
        );
    method_bindings.mb_set_piece_texture =
        api->rebel_method_bind_get_method(
            "LargeTexture",
            "set_piece_texture"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "LargeTexture",
            "set_size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "LargeTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

LargeTexture::MethodBindings LargeTexture::method_bindings = {};
void* LargeTexture::class_tag = nullptr;
} // namespace Rebel
