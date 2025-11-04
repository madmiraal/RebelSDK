// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/meshdatatool.h"

#include "classes/arraymesh.h"
#include "classes/icalls.h"
#include "classes/material.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void MeshDataTool::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

Error MeshDataTool::commit_to_surface(const Ref<ArrayMesh> mesh) {
    return (Error)rebel_icall_int_object(
        method_bindings.mb_commit_to_surface,
        (const Object*)this,
        mesh.ptr()
    );
}

Error MeshDataTool::create_from_surface(const Ref<ArrayMesh> mesh, const int64_t surface) {
    return (Error)rebel_icall_int_object_int(
        method_bindings.mb_create_from_surface,
        (const Object*)this,
        mesh.ptr(),
        surface
    );
}

int64_t MeshDataTool::get_edge_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_edge_count,
        (const Object*)this
    );
}

PoolIntArray MeshDataTool::get_edge_faces(const int64_t idx) const {
    return rebel_icall_poolintarray_int(
        method_bindings.mb_get_edge_faces,
        (const Object*)this,
        idx
    );
}

Variant MeshDataTool::get_edge_meta(const int64_t idx) const {
    return rebel_icall_variant_int(
        method_bindings.mb_get_edge_meta,
        (const Object*)this,
        idx
    );
}

int64_t MeshDataTool::get_edge_vertex(const int64_t idx, const int64_t vertex) const {
    return rebel_icall_int_int_int(
        method_bindings.mb_get_edge_vertex,
        (const Object*)this,
        idx,
        vertex
    );
}

int64_t MeshDataTool::get_face_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_face_count,
        (const Object*)this
    );
}

int64_t MeshDataTool::get_face_edge(const int64_t idx, const int64_t edge) const {
    return rebel_icall_int_int_int(
        method_bindings.mb_get_face_edge,
        (const Object*)this,
        idx,
        edge
    );
}

Variant MeshDataTool::get_face_meta(const int64_t idx) const {
    return rebel_icall_variant_int(
        method_bindings.mb_get_face_meta,
        (const Object*)this,
        idx
    );
}

Vector3 MeshDataTool::get_face_normal(const int64_t idx) const {
    return rebel_icall_vector3_int(
        method_bindings.mb_get_face_normal,
        (const Object*)this,
        idx
    );
}

int64_t MeshDataTool::get_face_vertex(const int64_t idx, const int64_t vertex) const {
    return rebel_icall_int_int_int(
        method_bindings.mb_get_face_vertex,
        (const Object*)this,
        idx,
        vertex
    );
}

int64_t MeshDataTool::get_format() const {
    return rebel_icall_int(
        method_bindings.mb_get_format,
        (const Object*)this
    );
}

Ref<Material> MeshDataTool::get_material() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_material,
        (const Object*)this
    ));
}

Vector3 MeshDataTool::get_vertex(const int64_t idx) const {
    return rebel_icall_vector3_int(
        method_bindings.mb_get_vertex,
        (const Object*)this,
        idx
    );
}

PoolIntArray MeshDataTool::get_vertex_bones(const int64_t idx) const {
    return rebel_icall_poolintarray_int(
        method_bindings.mb_get_vertex_bones,
        (const Object*)this,
        idx
    );
}

Color MeshDataTool::get_vertex_color(const int64_t idx) const {
    return rebel_icall_color_int(
        method_bindings.mb_get_vertex_color,
        (const Object*)this,
        idx
    );
}

int64_t MeshDataTool::get_vertex_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_vertex_count,
        (const Object*)this
    );
}

PoolIntArray MeshDataTool::get_vertex_edges(const int64_t idx) const {
    return rebel_icall_poolintarray_int(
        method_bindings.mb_get_vertex_edges,
        (const Object*)this,
        idx
    );
}

PoolIntArray MeshDataTool::get_vertex_faces(const int64_t idx) const {
    return rebel_icall_poolintarray_int(
        method_bindings.mb_get_vertex_faces,
        (const Object*)this,
        idx
    );
}

Variant MeshDataTool::get_vertex_meta(const int64_t idx) const {
    return rebel_icall_variant_int(
        method_bindings.mb_get_vertex_meta,
        (const Object*)this,
        idx
    );
}

Vector3 MeshDataTool::get_vertex_normal(const int64_t idx) const {
    return rebel_icall_vector3_int(
        method_bindings.mb_get_vertex_normal,
        (const Object*)this,
        idx
    );
}

Plane MeshDataTool::get_vertex_tangent(const int64_t idx) const {
    return rebel_icall_plane_int(
        method_bindings.mb_get_vertex_tangent,
        (const Object*)this,
        idx
    );
}

Vector2 MeshDataTool::get_vertex_uv(const int64_t idx) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_vertex_uv,
        (const Object*)this,
        idx
    );
}

Vector2 MeshDataTool::get_vertex_uv2(const int64_t idx) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_vertex_uv2,
        (const Object*)this,
        idx
    );
}

PoolRealArray MeshDataTool::get_vertex_weights(const int64_t idx) const {
    return rebel_icall_poolrealarray_int(
        method_bindings.mb_get_vertex_weights,
        (const Object*)this,
        idx
    );
}

void MeshDataTool::set_edge_meta(const int64_t idx, const Variant meta) {
    rebel_icall_void_int_variant(
        method_bindings.mb_set_edge_meta,
        (const Object*)this,
        idx,
        meta
    );
}

void MeshDataTool::set_face_meta(const int64_t idx, const Variant meta) {
    rebel_icall_void_int_variant(
        method_bindings.mb_set_face_meta,
        (const Object*)this,
        idx,
        meta
    );
}

void MeshDataTool::set_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_material,
        (const Object*)this,
        material.ptr()
    );
}

void MeshDataTool::set_vertex(const int64_t idx, const Vector3 vertex) {
    rebel_icall_void_int_vector3(
        method_bindings.mb_set_vertex,
        (const Object*)this,
        idx,
        vertex
    );
}

void MeshDataTool::set_vertex_bones(const int64_t idx, const PoolIntArray bones) {
    rebel_icall_void_int_poolintarray(
        method_bindings.mb_set_vertex_bones,
        (const Object*)this,
        idx,
        bones
    );
}

void MeshDataTool::set_vertex_color(const int64_t idx, const Color color) {
    rebel_icall_void_int_color(
        method_bindings.mb_set_vertex_color,
        (const Object*)this,
        idx,
        color
    );
}

void MeshDataTool::set_vertex_meta(const int64_t idx, const Variant meta) {
    rebel_icall_void_int_variant(
        method_bindings.mb_set_vertex_meta,
        (const Object*)this,
        idx,
        meta
    );
}

void MeshDataTool::set_vertex_normal(const int64_t idx, const Vector3 normal) {
    rebel_icall_void_int_vector3(
        method_bindings.mb_set_vertex_normal,
        (const Object*)this,
        idx,
        normal
    );
}

void MeshDataTool::set_vertex_tangent(const int64_t idx, const Plane tangent) {
    rebel_icall_void_int_plane(
        method_bindings.mb_set_vertex_tangent,
        (const Object*)this,
        idx,
        tangent
    );
}

void MeshDataTool::set_vertex_uv(const int64_t idx, const Vector2 uv) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_set_vertex_uv,
        (const Object*)this,
        idx,
        uv
    );
}

void MeshDataTool::set_vertex_uv2(const int64_t idx, const Vector2 uv2) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_set_vertex_uv2,
        (const Object*)this,
        idx,
        uv2
    );
}

void MeshDataTool::set_vertex_weights(const int64_t idx, const PoolRealArray weights) {
    rebel_icall_void_int_poolrealarray(
        method_bindings.mb_set_vertex_weights,
        (const Object*)this,
        idx,
        weights
    );
}

MeshDataTool* MeshDataTool::create() {
    return (MeshDataTool*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MeshDataTool")()
         );
}

void MeshDataTool::init_method_bindings() {
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "clear"
        );
    method_bindings.mb_commit_to_surface =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "commit_to_surface"
        );
    method_bindings.mb_create_from_surface =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "create_from_surface"
        );
    method_bindings.mb_get_edge_count =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_edge_count"
        );
    method_bindings.mb_get_edge_faces =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_edge_faces"
        );
    method_bindings.mb_get_edge_meta =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_edge_meta"
        );
    method_bindings.mb_get_edge_vertex =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_edge_vertex"
        );
    method_bindings.mb_get_face_count =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_face_count"
        );
    method_bindings.mb_get_face_edge =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_face_edge"
        );
    method_bindings.mb_get_face_meta =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_face_meta"
        );
    method_bindings.mb_get_face_normal =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_face_normal"
        );
    method_bindings.mb_get_face_vertex =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_face_vertex"
        );
    method_bindings.mb_get_format =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_format"
        );
    method_bindings.mb_get_material =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_material"
        );
    method_bindings.mb_get_vertex =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex"
        );
    method_bindings.mb_get_vertex_bones =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex_bones"
        );
    method_bindings.mb_get_vertex_color =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex_color"
        );
    method_bindings.mb_get_vertex_count =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex_count"
        );
    method_bindings.mb_get_vertex_edges =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex_edges"
        );
    method_bindings.mb_get_vertex_faces =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex_faces"
        );
    method_bindings.mb_get_vertex_meta =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex_meta"
        );
    method_bindings.mb_get_vertex_normal =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex_normal"
        );
    method_bindings.mb_get_vertex_tangent =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex_tangent"
        );
    method_bindings.mb_get_vertex_uv =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex_uv"
        );
    method_bindings.mb_get_vertex_uv2 =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex_uv2"
        );
    method_bindings.mb_get_vertex_weights =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "get_vertex_weights"
        );
    method_bindings.mb_set_edge_meta =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_edge_meta"
        );
    method_bindings.mb_set_face_meta =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_face_meta"
        );
    method_bindings.mb_set_material =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_material"
        );
    method_bindings.mb_set_vertex =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_vertex"
        );
    method_bindings.mb_set_vertex_bones =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_vertex_bones"
        );
    method_bindings.mb_set_vertex_color =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_vertex_color"
        );
    method_bindings.mb_set_vertex_meta =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_vertex_meta"
        );
    method_bindings.mb_set_vertex_normal =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_vertex_normal"
        );
    method_bindings.mb_set_vertex_tangent =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_vertex_tangent"
        );
    method_bindings.mb_set_vertex_uv =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_vertex_uv"
        );
    method_bindings.mb_set_vertex_uv2 =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_vertex_uv2"
        );
    method_bindings.mb_set_vertex_weights =
        api->rebel_method_bind_get_method(
            "MeshDataTool",
            "set_vertex_weights"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MeshDataTool");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MeshDataTool::MethodBindings MeshDataTool::method_bindings = {};
void* MeshDataTool::class_tag = nullptr;
} // namespace Rebel
