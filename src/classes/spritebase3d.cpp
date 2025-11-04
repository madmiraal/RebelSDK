// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/spritebase3d.h"

#include "classes/icalls.h"
#include "classes/trianglemesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void SpriteBase3D::_im_update() {
    rebel_icall_void(
        method_bindings.mb__im_update,
        (const Object*)this
    );
}

void SpriteBase3D::_queue_update() {
    rebel_icall_void(
        method_bindings.mb__queue_update,
        (const Object*)this
    );
}

Ref<TriangleMesh> SpriteBase3D::generate_triangle_mesh() const {
    return Ref<TriangleMesh>::create_ref(rebel_icall_object(
        method_bindings.mb_generate_triangle_mesh,
        (const Object*)this
    ));
}

SpriteBase3D::AlphaCutMode SpriteBase3D::get_alpha_cut_mode() const {
    return (SpriteBase3D::AlphaCutMode)rebel_icall_int(
        method_bindings.mb_get_alpha_cut_mode,
        (const Object*)this
    );
}

Vector3::Axis SpriteBase3D::get_axis() const {
    return (Vector3::Axis)rebel_icall_int(
        method_bindings.mb_get_axis,
        (const Object*)this
    );
}

SpatialMaterial::BillboardMode SpriteBase3D::get_billboard_mode() const {
    return (SpatialMaterial::BillboardMode)rebel_icall_int(
        method_bindings.mb_get_billboard_mode,
        (const Object*)this
    );
}

bool SpriteBase3D::get_draw_flag(const int64_t flag) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_draw_flag,
        (const Object*)this,
        flag
    );
}

Rect2 SpriteBase3D::get_item_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_item_rect,
        (const Object*)this
    );
}

Color SpriteBase3D::get_modulate() const {
    return rebel_icall_color(
        method_bindings.mb_get_modulate,
        (const Object*)this
    );
}

Vector2 SpriteBase3D::get_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_offset,
        (const Object*)this
    );
}

real_t SpriteBase3D::get_opacity() const {
    return rebel_icall_float(
        method_bindings.mb_get_opacity,
        (const Object*)this
    );
}

real_t SpriteBase3D::get_pixel_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_pixel_size,
        (const Object*)this
    );
}

bool SpriteBase3D::is_centered() const {
    return rebel_icall_bool(
        method_bindings.mb_is_centered,
        (const Object*)this
    );
}

bool SpriteBase3D::is_flipped_h() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flipped_h,
        (const Object*)this
    );
}

bool SpriteBase3D::is_flipped_v() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flipped_v,
        (const Object*)this
    );
}

void SpriteBase3D::set_alpha_cut_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_alpha_cut_mode,
        (const Object*)this,
        mode
    );
}

void SpriteBase3D::set_axis(const int64_t axis) {
    rebel_icall_void_int(
        method_bindings.mb_set_axis,
        (const Object*)this,
        axis
    );
}

void SpriteBase3D::set_billboard_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_billboard_mode,
        (const Object*)this,
        mode
    );
}

void SpriteBase3D::set_centered(const bool centered) {
    rebel_icall_void_bool(
        method_bindings.mb_set_centered,
        (const Object*)this,
        centered
    );
}

void SpriteBase3D::set_draw_flag(const int64_t flag, const bool enabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_draw_flag,
        (const Object*)this,
        flag,
        enabled
    );
}

void SpriteBase3D::set_flip_h(const bool flip_h) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flip_h,
        (const Object*)this,
        flip_h
    );
}

void SpriteBase3D::set_flip_v(const bool flip_v) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flip_v,
        (const Object*)this,
        flip_v
    );
}

void SpriteBase3D::set_modulate(const Color modulate) {
    rebel_icall_void_color(
        method_bindings.mb_set_modulate,
        (const Object*)this,
        modulate
    );
}

void SpriteBase3D::set_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_offset,
        (const Object*)this,
        offset
    );
}

void SpriteBase3D::set_opacity(const real_t opacity) {
    rebel_icall_void_float(
        method_bindings.mb_set_opacity,
        (const Object*)this,
        opacity
    );
}

void SpriteBase3D::set_pixel_size(const real_t pixel_size) {
    rebel_icall_void_float(
        method_bindings.mb_set_pixel_size,
        (const Object*)this,
        pixel_size
    );
}

void SpriteBase3D::init_method_bindings() {
    method_bindings.mb__im_update =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "_im_update"
        );
    method_bindings.mb__queue_update =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "_queue_update"
        );
    method_bindings.mb_generate_triangle_mesh =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "generate_triangle_mesh"
        );
    method_bindings.mb_get_alpha_cut_mode =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "get_alpha_cut_mode"
        );
    method_bindings.mb_get_axis =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "get_axis"
        );
    method_bindings.mb_get_billboard_mode =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "get_billboard_mode"
        );
    method_bindings.mb_get_draw_flag =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "get_draw_flag"
        );
    method_bindings.mb_get_item_rect =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "get_item_rect"
        );
    method_bindings.mb_get_modulate =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "get_modulate"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "get_offset"
        );
    method_bindings.mb_get_opacity =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "get_opacity"
        );
    method_bindings.mb_get_pixel_size =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "get_pixel_size"
        );
    method_bindings.mb_is_centered =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "is_centered"
        );
    method_bindings.mb_is_flipped_h =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "is_flipped_h"
        );
    method_bindings.mb_is_flipped_v =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "is_flipped_v"
        );
    method_bindings.mb_set_alpha_cut_mode =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "set_alpha_cut_mode"
        );
    method_bindings.mb_set_axis =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "set_axis"
        );
    method_bindings.mb_set_billboard_mode =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "set_billboard_mode"
        );
    method_bindings.mb_set_centered =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "set_centered"
        );
    method_bindings.mb_set_draw_flag =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "set_draw_flag"
        );
    method_bindings.mb_set_flip_h =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "set_flip_h"
        );
    method_bindings.mb_set_flip_v =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "set_flip_v"
        );
    method_bindings.mb_set_modulate =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "set_modulate"
        );
    method_bindings.mb_set_offset =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "set_offset"
        );
    method_bindings.mb_set_opacity =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "set_opacity"
        );
    method_bindings.mb_set_pixel_size =
        api->rebel_method_bind_get_method(
            "SpriteBase3D",
            "set_pixel_size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SpriteBase3D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SpriteBase3D::MethodBindings SpriteBase3D::method_bindings = {};
void* SpriteBase3D::class_tag = nullptr;
} // namespace Rebel
