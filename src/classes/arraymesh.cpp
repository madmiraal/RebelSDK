// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/arraymesh.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ArrayMesh::add_blend_shape(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_add_blend_shape,
        (const Object*)this,
        name
    );
}

void ArrayMesh::add_surface_from_arrays(const int64_t primitive, const Array arrays, const Array blend_shapes, const int64_t compress_flags) {
    rebel_icall_void_int_array_array_int(
        method_bindings.mb_add_surface_from_arrays,
        (const Object*)this,
        primitive,
        arrays,
        blend_shapes,
        compress_flags
    );
}

void ArrayMesh::clear_blend_shapes() {
    rebel_icall_void(
        method_bindings.mb_clear_blend_shapes,
        (const Object*)this
    );
}

void ArrayMesh::clear_surfaces() {
    rebel_icall_void(
        method_bindings.mb_clear_surfaces,
        (const Object*)this
    );
}

int64_t ArrayMesh::get_blend_shape_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_blend_shape_count,
        (const Object*)this
    );
}

Mesh::BlendShapeMode ArrayMesh::get_blend_shape_mode() const {
    return (Mesh::BlendShapeMode)rebel_icall_int(
        method_bindings.mb_get_blend_shape_mode,
        (const Object*)this
    );
}

String ArrayMesh::get_blend_shape_name(const int64_t index) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_blend_shape_name,
        (const Object*)this,
        index
    );
}

AABB ArrayMesh::get_custom_aabb() const {
    return rebel_icall_aabb(
        method_bindings.mb_get_custom_aabb,
        (const Object*)this
    );
}

Error ArrayMesh::lightmap_unwrap(const Transform transform, const real_t texel_size) {
    return (Error)rebel_icall_int_transform_float(
        method_bindings.mb_lightmap_unwrap,
        (const Object*)this,
        transform,
        texel_size
    );
}

void ArrayMesh::regen_normalmaps() {
    rebel_icall_void(
        method_bindings.mb_regen_normalmaps,
        (const Object*)this
    );
}

void ArrayMesh::set_blend_shape_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_blend_shape_mode,
        (const Object*)this,
        mode
    );
}

void ArrayMesh::set_blend_shape_name(const int64_t index, const String name) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_blend_shape_name,
        (const Object*)this,
        index,
        name
    );
}

void ArrayMesh::set_custom_aabb(const AABB aabb) {
    rebel_icall_void_aabb(
        method_bindings.mb_set_custom_aabb,
        (const Object*)this,
        aabb
    );
}

int64_t ArrayMesh::surface_find_by_name(const String name) const {
    return rebel_icall_int_string(
        method_bindings.mb_surface_find_by_name,
        (const Object*)this,
        name
    );
}

int64_t ArrayMesh::surface_get_array_index_len(const int64_t surf_idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_surface_get_array_index_len,
        (const Object*)this,
        surf_idx
    );
}

int64_t ArrayMesh::surface_get_array_len(const int64_t surf_idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_surface_get_array_len,
        (const Object*)this,
        surf_idx
    );
}

int64_t ArrayMesh::surface_get_format(const int64_t surf_idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_surface_get_format,
        (const Object*)this,
        surf_idx
    );
}

String ArrayMesh::surface_get_name(const int64_t surf_idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_surface_get_name,
        (const Object*)this,
        surf_idx
    );
}

Mesh::PrimitiveType ArrayMesh::surface_get_primitive_type(const int64_t surf_idx) const {
    return (Mesh::PrimitiveType)rebel_icall_int_int(
        method_bindings.mb_surface_get_primitive_type,
        (const Object*)this,
        surf_idx
    );
}

void ArrayMesh::surface_remove(const int64_t surf_idx) {
    rebel_icall_void_int(
        method_bindings.mb_surface_remove,
        (const Object*)this,
        surf_idx
    );
}

void ArrayMesh::surface_set_name(const int64_t surf_idx, const String name) {
    rebel_icall_void_int_string(
        method_bindings.mb_surface_set_name,
        (const Object*)this,
        surf_idx,
        name
    );
}

void ArrayMesh::surface_update_region(const int64_t surf_idx, const int64_t offset, const PoolByteArray data) {
    rebel_icall_void_int_int_poolbytearray(
        method_bindings.mb_surface_update_region,
        (const Object*)this,
        surf_idx,
        offset,
        data
    );
}

ArrayMesh* ArrayMesh::create() {
    return (ArrayMesh*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ArrayMesh")()
         );
}

void ArrayMesh::init_method_bindings() {
    method_bindings.mb_add_blend_shape =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "add_blend_shape"
        );
    method_bindings.mb_add_surface_from_arrays =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "add_surface_from_arrays"
        );
    method_bindings.mb_clear_blend_shapes =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "clear_blend_shapes"
        );
    method_bindings.mb_clear_surfaces =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "clear_surfaces"
        );
    method_bindings.mb_get_blend_shape_count =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "get_blend_shape_count"
        );
    method_bindings.mb_get_blend_shape_mode =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "get_blend_shape_mode"
        );
    method_bindings.mb_get_blend_shape_name =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "get_blend_shape_name"
        );
    method_bindings.mb_get_custom_aabb =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "get_custom_aabb"
        );
    method_bindings.mb_lightmap_unwrap =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "lightmap_unwrap"
        );
    method_bindings.mb_regen_normalmaps =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "regen_normalmaps"
        );
    method_bindings.mb_set_blend_shape_mode =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "set_blend_shape_mode"
        );
    method_bindings.mb_set_blend_shape_name =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "set_blend_shape_name"
        );
    method_bindings.mb_set_custom_aabb =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "set_custom_aabb"
        );
    method_bindings.mb_surface_find_by_name =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "surface_find_by_name"
        );
    method_bindings.mb_surface_get_array_index_len =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "surface_get_array_index_len"
        );
    method_bindings.mb_surface_get_array_len =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "surface_get_array_len"
        );
    method_bindings.mb_surface_get_format =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "surface_get_format"
        );
    method_bindings.mb_surface_get_name =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "surface_get_name"
        );
    method_bindings.mb_surface_get_primitive_type =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "surface_get_primitive_type"
        );
    method_bindings.mb_surface_remove =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "surface_remove"
        );
    method_bindings.mb_surface_set_name =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "surface_set_name"
        );
    method_bindings.mb_surface_update_region =
        api->rebel_method_bind_get_method(
            "ArrayMesh",
            "surface_update_region"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ArrayMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ArrayMesh::MethodBindings ArrayMesh::method_bindings = {};
void* ArrayMesh::class_tag = nullptr;
} // namespace Rebel
