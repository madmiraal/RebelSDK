// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/sprite.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Sprite::_texture_changed() {
    rebel_icall_void(
        method_bindings.mb__texture_changed,
        (const Object*)this
    );
}

int64_t Sprite::get_frame() const {
    return rebel_icall_int(
        method_bindings.mb_get_frame,
        (const Object*)this
    );
}

Vector2 Sprite::get_frame_coords() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_frame_coords,
        (const Object*)this
    );
}

int64_t Sprite::get_hframes() const {
    return rebel_icall_int(
        method_bindings.mb_get_hframes,
        (const Object*)this
    );
}

Ref<Texture> Sprite::get_normal_map() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_normal_map,
        (const Object*)this
    ));
}

Vector2 Sprite::get_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_offset,
        (const Object*)this
    );
}

Rect2 Sprite::get_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_rect,
        (const Object*)this
    );
}

Rect2 Sprite::get_region_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_region_rect,
        (const Object*)this
    );
}

Ref<Texture> Sprite::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

int64_t Sprite::get_vframes() const {
    return rebel_icall_int(
        method_bindings.mb_get_vframes,
        (const Object*)this
    );
}

bool Sprite::is_centered() const {
    return rebel_icall_bool(
        method_bindings.mb_is_centered,
        (const Object*)this
    );
}

bool Sprite::is_flipped_h() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flipped_h,
        (const Object*)this
    );
}

bool Sprite::is_flipped_v() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flipped_v,
        (const Object*)this
    );
}

bool Sprite::is_pixel_opaque(const Vector2 pos) const {
    return rebel_icall_bool_vector2(
        method_bindings.mb_is_pixel_opaque,
        (const Object*)this,
        pos
    );
}

bool Sprite::is_region() const {
    return rebel_icall_bool(
        method_bindings.mb_is_region,
        (const Object*)this
    );
}

bool Sprite::is_region_filter_clip_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_region_filter_clip_enabled,
        (const Object*)this
    );
}

void Sprite::set_centered(const bool centered) {
    rebel_icall_void_bool(
        method_bindings.mb_set_centered,
        (const Object*)this,
        centered
    );
}

void Sprite::set_flip_h(const bool flip_h) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flip_h,
        (const Object*)this,
        flip_h
    );
}

void Sprite::set_flip_v(const bool flip_v) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flip_v,
        (const Object*)this,
        flip_v
    );
}

void Sprite::set_frame(const int64_t frame) {
    rebel_icall_void_int(
        method_bindings.mb_set_frame,
        (const Object*)this,
        frame
    );
}

void Sprite::set_frame_coords(const Vector2 coords) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_frame_coords,
        (const Object*)this,
        coords
    );
}

void Sprite::set_hframes(const int64_t hframes) {
    rebel_icall_void_int(
        method_bindings.mb_set_hframes,
        (const Object*)this,
        hframes
    );
}

void Sprite::set_normal_map(const Ref<Texture> normal_map) {
    rebel_icall_void_object(
        method_bindings.mb_set_normal_map,
        (const Object*)this,
        normal_map.ptr()
    );
}

void Sprite::set_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_offset,
        (const Object*)this,
        offset
    );
}

void Sprite::set_region(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_region,
        (const Object*)this,
        enabled
    );
}

void Sprite::set_region_filter_clip(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_region_filter_clip,
        (const Object*)this,
        enabled
    );
}

void Sprite::set_region_rect(const Rect2 rect) {
    rebel_icall_void_rect2(
        method_bindings.mb_set_region_rect,
        (const Object*)this,
        rect
    );
}

void Sprite::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void Sprite::set_vframes(const int64_t vframes) {
    rebel_icall_void_int(
        method_bindings.mb_set_vframes,
        (const Object*)this,
        vframes
    );
}

Sprite* Sprite::create() {
    return (Sprite*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Sprite")()
         );
}

void Sprite::init_method_bindings() {
    method_bindings.mb__texture_changed =
        api->rebel_method_bind_get_method(
            "Sprite",
            "_texture_changed"
        );
    method_bindings.mb_get_frame =
        api->rebel_method_bind_get_method(
            "Sprite",
            "get_frame"
        );
    method_bindings.mb_get_frame_coords =
        api->rebel_method_bind_get_method(
            "Sprite",
            "get_frame_coords"
        );
    method_bindings.mb_get_hframes =
        api->rebel_method_bind_get_method(
            "Sprite",
            "get_hframes"
        );
    method_bindings.mb_get_normal_map =
        api->rebel_method_bind_get_method(
            "Sprite",
            "get_normal_map"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "Sprite",
            "get_offset"
        );
    method_bindings.mb_get_rect =
        api->rebel_method_bind_get_method(
            "Sprite",
            "get_rect"
        );
    method_bindings.mb_get_region_rect =
        api->rebel_method_bind_get_method(
            "Sprite",
            "get_region_rect"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "Sprite",
            "get_texture"
        );
    method_bindings.mb_get_vframes =
        api->rebel_method_bind_get_method(
            "Sprite",
            "get_vframes"
        );
    method_bindings.mb_is_centered =
        api->rebel_method_bind_get_method(
            "Sprite",
            "is_centered"
        );
    method_bindings.mb_is_flipped_h =
        api->rebel_method_bind_get_method(
            "Sprite",
            "is_flipped_h"
        );
    method_bindings.mb_is_flipped_v =
        api->rebel_method_bind_get_method(
            "Sprite",
            "is_flipped_v"
        );
    method_bindings.mb_is_pixel_opaque =
        api->rebel_method_bind_get_method(
            "Sprite",
            "is_pixel_opaque"
        );
    method_bindings.mb_is_region =
        api->rebel_method_bind_get_method(
            "Sprite",
            "is_region"
        );
    method_bindings.mb_is_region_filter_clip_enabled =
        api->rebel_method_bind_get_method(
            "Sprite",
            "is_region_filter_clip_enabled"
        );
    method_bindings.mb_set_centered =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_centered"
        );
    method_bindings.mb_set_flip_h =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_flip_h"
        );
    method_bindings.mb_set_flip_v =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_flip_v"
        );
    method_bindings.mb_set_frame =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_frame"
        );
    method_bindings.mb_set_frame_coords =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_frame_coords"
        );
    method_bindings.mb_set_hframes =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_hframes"
        );
    method_bindings.mb_set_normal_map =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_normal_map"
        );
    method_bindings.mb_set_offset =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_offset"
        );
    method_bindings.mb_set_region =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_region"
        );
    method_bindings.mb_set_region_filter_clip =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_region_filter_clip"
        );
    method_bindings.mb_set_region_rect =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_region_rect"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_texture"
        );
    method_bindings.mb_set_vframes =
        api->rebel_method_bind_get_method(
            "Sprite",
            "set_vframes"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Sprite");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Sprite::MethodBindings Sprite::method_bindings = {};
void* Sprite::class_tag = nullptr;
} // namespace Rebel
