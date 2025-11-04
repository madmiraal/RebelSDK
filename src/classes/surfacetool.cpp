// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/surfacetool.h"

#include "classes/arraymesh.h"
#include "classes/icalls.h"
#include "classes/material.h"
#include "classes/mesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void SurfaceTool::add_bones(const PoolIntArray bones) {
    rebel_icall_void_poolintarray(
        method_bindings.mb_add_bones,
        (const Object*)this,
        bones
    );
}

void SurfaceTool::add_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_add_color,
        (const Object*)this,
        color
    );
}

void SurfaceTool::add_index(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_add_index,
        (const Object*)this,
        index
    );
}

void SurfaceTool::add_normal(const Vector3 normal) {
    rebel_icall_void_vector3(
        method_bindings.mb_add_normal,
        (const Object*)this,
        normal
    );
}

void SurfaceTool::add_smooth_group(const bool smooth) {
    rebel_icall_void_bool(
        method_bindings.mb_add_smooth_group,
        (const Object*)this,
        smooth
    );
}

void SurfaceTool::add_tangent(const Plane tangent) {
    rebel_icall_void_plane(
        method_bindings.mb_add_tangent,
        (const Object*)this,
        tangent
    );
}

void SurfaceTool::add_triangle_fan(const PoolVector3Array vertices, const PoolVector2Array uvs, const PoolColorArray colors, const PoolVector2Array uv2s, const PoolVector3Array normals, const Array tangents) {
    rebel_icall_void_poolvector3array_poolvector2array_poolcolorarray_poolvector2array_poolvector3array_array(
        method_bindings.mb_add_triangle_fan,
        (const Object*)this,
        vertices,
        uvs,
        colors,
        uv2s,
        normals,
        tangents
    );
}

void SurfaceTool::add_uv(const Vector2 uv) {
    rebel_icall_void_vector2(
        method_bindings.mb_add_uv,
        (const Object*)this,
        uv
    );
}

void SurfaceTool::add_uv2(const Vector2 uv2) {
    rebel_icall_void_vector2(
        method_bindings.mb_add_uv2,
        (const Object*)this,
        uv2
    );
}

void SurfaceTool::add_vertex(const Vector3 vertex) {
    rebel_icall_void_vector3(
        method_bindings.mb_add_vertex,
        (const Object*)this,
        vertex
    );
}

void SurfaceTool::add_weights(const PoolRealArray weights) {
    rebel_icall_void_poolrealarray(
        method_bindings.mb_add_weights,
        (const Object*)this,
        weights
    );
}

void SurfaceTool::append_from(const Ref<Mesh> existing, const int64_t surface, const Transform transform) {
    rebel_icall_void_object_int_transform(
        method_bindings.mb_append_from,
        (const Object*)this,
        existing.ptr(),
        surface,
        transform
    );
}

void SurfaceTool::begin(const int64_t primitive) {
    rebel_icall_void_int(
        method_bindings.mb_begin,
        (const Object*)this,
        primitive
    );
}

void SurfaceTool::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

Ref<ArrayMesh> SurfaceTool::commit(const Ref<ArrayMesh> existing, const int64_t flags) {
    return Ref<ArrayMesh>::create_ref(rebel_icall_object_object_int(
        method_bindings.mb_commit,
        (const Object*)this,
        existing.ptr(),
        flags
    ));
}

Array SurfaceTool::commit_to_arrays() {
    return rebel_icall_array(
        method_bindings.mb_commit_to_arrays,
        (const Object*)this
    );
}

void SurfaceTool::create_from(const Ref<Mesh> existing, const int64_t surface) {
    rebel_icall_void_object_int(
        method_bindings.mb_create_from,
        (const Object*)this,
        existing.ptr(),
        surface
    );
}

void SurfaceTool::create_from_blend_shape(const Ref<Mesh> existing, const int64_t surface, const String blend_shape) {
    rebel_icall_void_object_int_string(
        method_bindings.mb_create_from_blend_shape,
        (const Object*)this,
        existing.ptr(),
        surface,
        blend_shape
    );
}

void SurfaceTool::deindex() {
    rebel_icall_void(
        method_bindings.mb_deindex,
        (const Object*)this
    );
}

void SurfaceTool::generate_normals(const bool flip) {
    rebel_icall_void_bool(
        method_bindings.mb_generate_normals,
        (const Object*)this,
        flip
    );
}

void SurfaceTool::generate_tangents() {
    rebel_icall_void(
        method_bindings.mb_generate_tangents,
        (const Object*)this
    );
}

void SurfaceTool::index() {
    rebel_icall_void(
        method_bindings.mb_index,
        (const Object*)this
    );
}

void SurfaceTool::set_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_material,
        (const Object*)this,
        material.ptr()
    );
}

SurfaceTool* SurfaceTool::create() {
    return (SurfaceTool*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SurfaceTool")()
         );
}

void SurfaceTool::init_method_bindings() {
    method_bindings.mb_add_bones =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "add_bones"
        );
    method_bindings.mb_add_color =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "add_color"
        );
    method_bindings.mb_add_index =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "add_index"
        );
    method_bindings.mb_add_normal =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "add_normal"
        );
    method_bindings.mb_add_smooth_group =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "add_smooth_group"
        );
    method_bindings.mb_add_tangent =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "add_tangent"
        );
    method_bindings.mb_add_triangle_fan =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "add_triangle_fan"
        );
    method_bindings.mb_add_uv =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "add_uv"
        );
    method_bindings.mb_add_uv2 =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "add_uv2"
        );
    method_bindings.mb_add_vertex =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "add_vertex"
        );
    method_bindings.mb_add_weights =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "add_weights"
        );
    method_bindings.mb_append_from =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "append_from"
        );
    method_bindings.mb_begin =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "begin"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "clear"
        );
    method_bindings.mb_commit =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "commit"
        );
    method_bindings.mb_commit_to_arrays =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "commit_to_arrays"
        );
    method_bindings.mb_create_from =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "create_from"
        );
    method_bindings.mb_create_from_blend_shape =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "create_from_blend_shape"
        );
    method_bindings.mb_deindex =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "deindex"
        );
    method_bindings.mb_generate_normals =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "generate_normals"
        );
    method_bindings.mb_generate_tangents =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "generate_tangents"
        );
    method_bindings.mb_index =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "index"
        );
    method_bindings.mb_set_material =
        api->rebel_method_bind_get_method(
            "SurfaceTool",
            "set_material"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SurfaceTool");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SurfaceTool::MethodBindings SurfaceTool::method_bindings = {};
void* SurfaceTool::class_tag = nullptr;
} // namespace Rebel
