// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/polygon2d.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array Polygon2D::_get_bones() const {
    return rebel_icall_array(
        method_bindings.mb__get_bones,
        (const Object*)this
    );
}

void Polygon2D::_set_bones(const Array bones) {
    rebel_icall_void_array(
        method_bindings.mb__set_bones,
        (const Object*)this,
        bones
    );
}

void Polygon2D::_skeleton_bone_setup_changed() {
    rebel_icall_void(
        method_bindings.mb__skeleton_bone_setup_changed,
        (const Object*)this
    );
}

void Polygon2D::add_bone(const NodePath path, const PoolRealArray weights) {
    rebel_icall_void_nodepath_poolrealarray(
        method_bindings.mb_add_bone,
        (const Object*)this,
        path,
        weights
    );
}

void Polygon2D::clear_bones() {
    rebel_icall_void(
        method_bindings.mb_clear_bones,
        (const Object*)this
    );
}

void Polygon2D::erase_bone(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_erase_bone,
        (const Object*)this,
        index
    );
}

bool Polygon2D::get_antialiased() const {
    return rebel_icall_bool(
        method_bindings.mb_get_antialiased,
        (const Object*)this
    );
}

int64_t Polygon2D::get_bone_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_bone_count,
        (const Object*)this
    );
}

NodePath Polygon2D::get_bone_path(const int64_t index) const {
    return rebel_icall_nodepath_int(
        method_bindings.mb_get_bone_path,
        (const Object*)this,
        index
    );
}

PoolRealArray Polygon2D::get_bone_weights(const int64_t index) const {
    return rebel_icall_poolrealarray_int(
        method_bindings.mb_get_bone_weights,
        (const Object*)this,
        index
    );
}

Color Polygon2D::get_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_color,
        (const Object*)this
    );
}

int64_t Polygon2D::get_internal_vertex_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_internal_vertex_count,
        (const Object*)this
    );
}

bool Polygon2D::get_invert() const {
    return rebel_icall_bool(
        method_bindings.mb_get_invert,
        (const Object*)this
    );
}

real_t Polygon2D::get_invert_border() const {
    return rebel_icall_float(
        method_bindings.mb_get_invert_border,
        (const Object*)this
    );
}

Vector2 Polygon2D::get_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_offset,
        (const Object*)this
    );
}

PoolVector2Array Polygon2D::get_polygon() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_polygon,
        (const Object*)this
    );
}

Array Polygon2D::get_polygons() const {
    return rebel_icall_array(
        method_bindings.mb_get_polygons,
        (const Object*)this
    );
}

NodePath Polygon2D::get_skeleton() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_skeleton,
        (const Object*)this
    );
}

Ref<Texture> Polygon2D::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

Vector2 Polygon2D::get_texture_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_texture_offset,
        (const Object*)this
    );
}

real_t Polygon2D::get_texture_rotation() const {
    return rebel_icall_float(
        method_bindings.mb_get_texture_rotation,
        (const Object*)this
    );
}

real_t Polygon2D::get_texture_rotation_degrees() const {
    return rebel_icall_float(
        method_bindings.mb_get_texture_rotation_degrees,
        (const Object*)this
    );
}

Vector2 Polygon2D::get_texture_scale() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_texture_scale,
        (const Object*)this
    );
}

PoolVector2Array Polygon2D::get_uv() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_uv,
        (const Object*)this
    );
}

PoolColorArray Polygon2D::get_vertex_colors() const {
    return rebel_icall_poolcolorarray(
        method_bindings.mb_get_vertex_colors,
        (const Object*)this
    );
}

void Polygon2D::set_antialiased(const bool antialiased) {
    rebel_icall_void_bool(
        method_bindings.mb_set_antialiased,
        (const Object*)this,
        antialiased
    );
}

void Polygon2D::set_bone_path(const int64_t index, const NodePath path) {
    rebel_icall_void_int_nodepath(
        method_bindings.mb_set_bone_path,
        (const Object*)this,
        index,
        path
    );
}

void Polygon2D::set_bone_weights(const int64_t index, const PoolRealArray weights) {
    rebel_icall_void_int_poolrealarray(
        method_bindings.mb_set_bone_weights,
        (const Object*)this,
        index,
        weights
    );
}

void Polygon2D::set_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        color
    );
}

void Polygon2D::set_internal_vertex_count(const int64_t internal_vertex_count) {
    rebel_icall_void_int(
        method_bindings.mb_set_internal_vertex_count,
        (const Object*)this,
        internal_vertex_count
    );
}

void Polygon2D::set_invert(const bool invert) {
    rebel_icall_void_bool(
        method_bindings.mb_set_invert,
        (const Object*)this,
        invert
    );
}

void Polygon2D::set_invert_border(const real_t invert_border) {
    rebel_icall_void_float(
        method_bindings.mb_set_invert_border,
        (const Object*)this,
        invert_border
    );
}

void Polygon2D::set_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_offset,
        (const Object*)this,
        offset
    );
}

void Polygon2D::set_polygon(const PoolVector2Array polygon) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_polygon,
        (const Object*)this,
        polygon
    );
}

void Polygon2D::set_polygons(const Array polygons) {
    rebel_icall_void_array(
        method_bindings.mb_set_polygons,
        (const Object*)this,
        polygons
    );
}

void Polygon2D::set_skeleton(const NodePath skeleton) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_skeleton,
        (const Object*)this,
        skeleton
    );
}

void Polygon2D::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void Polygon2D::set_texture_offset(const Vector2 texture_offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_texture_offset,
        (const Object*)this,
        texture_offset
    );
}

void Polygon2D::set_texture_rotation(const real_t texture_rotation) {
    rebel_icall_void_float(
        method_bindings.mb_set_texture_rotation,
        (const Object*)this,
        texture_rotation
    );
}

void Polygon2D::set_texture_rotation_degrees(const real_t texture_rotation) {
    rebel_icall_void_float(
        method_bindings.mb_set_texture_rotation_degrees,
        (const Object*)this,
        texture_rotation
    );
}

void Polygon2D::set_texture_scale(const Vector2 texture_scale) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_texture_scale,
        (const Object*)this,
        texture_scale
    );
}

void Polygon2D::set_uv(const PoolVector2Array uv) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_uv,
        (const Object*)this,
        uv
    );
}

void Polygon2D::set_vertex_colors(const PoolColorArray vertex_colors) {
    rebel_icall_void_poolcolorarray(
        method_bindings.mb_set_vertex_colors,
        (const Object*)this,
        vertex_colors
    );
}

Polygon2D* Polygon2D::create() {
    return (Polygon2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Polygon2D")()
         );
}

void Polygon2D::init_method_bindings() {
    method_bindings.mb__get_bones =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "_get_bones"
        );
    method_bindings.mb__set_bones =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "_set_bones"
        );
    method_bindings.mb__skeleton_bone_setup_changed =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "_skeleton_bone_setup_changed"
        );
    method_bindings.mb_add_bone =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "add_bone"
        );
    method_bindings.mb_clear_bones =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "clear_bones"
        );
    method_bindings.mb_erase_bone =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "erase_bone"
        );
    method_bindings.mb_get_antialiased =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_antialiased"
        );
    method_bindings.mb_get_bone_count =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_bone_count"
        );
    method_bindings.mb_get_bone_path =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_bone_path"
        );
    method_bindings.mb_get_bone_weights =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_bone_weights"
        );
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_color"
        );
    method_bindings.mb_get_internal_vertex_count =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_internal_vertex_count"
        );
    method_bindings.mb_get_invert =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_invert"
        );
    method_bindings.mb_get_invert_border =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_invert_border"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_offset"
        );
    method_bindings.mb_get_polygon =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_polygon"
        );
    method_bindings.mb_get_polygons =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_polygons"
        );
    method_bindings.mb_get_skeleton =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_skeleton"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_texture"
        );
    method_bindings.mb_get_texture_offset =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_texture_offset"
        );
    method_bindings.mb_get_texture_rotation =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_texture_rotation"
        );
    method_bindings.mb_get_texture_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_texture_rotation_degrees"
        );
    method_bindings.mb_get_texture_scale =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_texture_scale"
        );
    method_bindings.mb_get_uv =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_uv"
        );
    method_bindings.mb_get_vertex_colors =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "get_vertex_colors"
        );
    method_bindings.mb_set_antialiased =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_antialiased"
        );
    method_bindings.mb_set_bone_path =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_bone_path"
        );
    method_bindings.mb_set_bone_weights =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_bone_weights"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_color"
        );
    method_bindings.mb_set_internal_vertex_count =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_internal_vertex_count"
        );
    method_bindings.mb_set_invert =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_invert"
        );
    method_bindings.mb_set_invert_border =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_invert_border"
        );
    method_bindings.mb_set_offset =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_offset"
        );
    method_bindings.mb_set_polygon =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_polygon"
        );
    method_bindings.mb_set_polygons =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_polygons"
        );
    method_bindings.mb_set_skeleton =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_skeleton"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_texture"
        );
    method_bindings.mb_set_texture_offset =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_texture_offset"
        );
    method_bindings.mb_set_texture_rotation =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_texture_rotation"
        );
    method_bindings.mb_set_texture_rotation_degrees =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_texture_rotation_degrees"
        );
    method_bindings.mb_set_texture_scale =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_texture_scale"
        );
    method_bindings.mb_set_uv =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_uv"
        );
    method_bindings.mb_set_vertex_colors =
        api->rebel_method_bind_get_method(
            "Polygon2D",
            "set_vertex_colors"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Polygon2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Polygon2D::MethodBindings Polygon2D::method_bindings = {};
void* Polygon2D::class_tag = nullptr;
} // namespace Rebel
