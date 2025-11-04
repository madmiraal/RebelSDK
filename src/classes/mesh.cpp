// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/mesh.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "classes/mesh.h"
#include "classes/shape.h"
#include "classes/trianglemesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Shape> Mesh::create_convex_shape(const bool clean, const bool simplify) const {
    return Ref<Shape>::create_ref(rebel_icall_object_bool_bool(
        method_bindings.mb_create_convex_shape,
        (const Object*)this,
        clean,
        simplify
    ));
}

Ref<Mesh> Mesh::create_outline(const real_t margin) const {
    return Ref<Mesh>::create_ref(rebel_icall_object_float(
        method_bindings.mb_create_outline,
        (const Object*)this,
        margin
    ));
}

Ref<Shape> Mesh::create_trimesh_shape() const {
    return Ref<Shape>::create_ref(rebel_icall_object(
        method_bindings.mb_create_trimesh_shape,
        (const Object*)this
    ));
}

Ref<TriangleMesh> Mesh::generate_triangle_mesh() const {
    return Ref<TriangleMesh>::create_ref(rebel_icall_object(
        method_bindings.mb_generate_triangle_mesh,
        (const Object*)this
    ));
}

AABB Mesh::get_aabb() const {
    return rebel_icall_aabb(
        method_bindings.mb_get_aabb,
        (const Object*)this
    );
}

PoolVector3Array Mesh::get_faces() const {
    return rebel_icall_poolvector3array(
        method_bindings.mb_get_faces,
        (const Object*)this
    );
}

Vector2 Mesh::get_lightmap_size_hint() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_lightmap_size_hint,
        (const Object*)this
    );
}

int64_t Mesh::get_surface_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_surface_count,
        (const Object*)this
    );
}

void Mesh::set_lightmap_size_hint(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_lightmap_size_hint,
        (const Object*)this,
        size
    );
}

Array Mesh::surface_get_arrays(const int64_t surf_idx) const {
    return rebel_icall_array_int(
        method_bindings.mb_surface_get_arrays,
        (const Object*)this,
        surf_idx
    );
}

Array Mesh::surface_get_blend_shape_arrays(const int64_t surf_idx) const {
    return rebel_icall_array_int(
        method_bindings.mb_surface_get_blend_shape_arrays,
        (const Object*)this,
        surf_idx
    );
}

Ref<Material> Mesh::surface_get_material(const int64_t surf_idx) const {
    return Ref<Material>::create_ref(rebel_icall_object_int(
        method_bindings.mb_surface_get_material,
        (const Object*)this,
        surf_idx
    ));
}

void Mesh::surface_set_material(const int64_t surf_idx, const Ref<Material> material) {
    rebel_icall_void_int_object(
        method_bindings.mb_surface_set_material,
        (const Object*)this,
        surf_idx,
        material.ptr()
    );
}

void Mesh::init_method_bindings() {
    method_bindings.mb_create_convex_shape =
        api->rebel_method_bind_get_method(
            "Mesh",
            "create_convex_shape"
        );
    method_bindings.mb_create_outline =
        api->rebel_method_bind_get_method(
            "Mesh",
            "create_outline"
        );
    method_bindings.mb_create_trimesh_shape =
        api->rebel_method_bind_get_method(
            "Mesh",
            "create_trimesh_shape"
        );
    method_bindings.mb_generate_triangle_mesh =
        api->rebel_method_bind_get_method(
            "Mesh",
            "generate_triangle_mesh"
        );
    method_bindings.mb_get_aabb =
        api->rebel_method_bind_get_method(
            "Mesh",
            "get_aabb"
        );
    method_bindings.mb_get_faces =
        api->rebel_method_bind_get_method(
            "Mesh",
            "get_faces"
        );
    method_bindings.mb_get_lightmap_size_hint =
        api->rebel_method_bind_get_method(
            "Mesh",
            "get_lightmap_size_hint"
        );
    method_bindings.mb_get_surface_count =
        api->rebel_method_bind_get_method(
            "Mesh",
            "get_surface_count"
        );
    method_bindings.mb_set_lightmap_size_hint =
        api->rebel_method_bind_get_method(
            "Mesh",
            "set_lightmap_size_hint"
        );
    method_bindings.mb_surface_get_arrays =
        api->rebel_method_bind_get_method(
            "Mesh",
            "surface_get_arrays"
        );
    method_bindings.mb_surface_get_blend_shape_arrays =
        api->rebel_method_bind_get_method(
            "Mesh",
            "surface_get_blend_shape_arrays"
        );
    method_bindings.mb_surface_get_material =
        api->rebel_method_bind_get_method(
            "Mesh",
            "surface_get_material"
        );
    method_bindings.mb_surface_set_material =
        api->rebel_method_bind_get_method(
            "Mesh",
            "surface_set_material"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Mesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Mesh::MethodBindings Mesh::method_bindings = {};
void* Mesh::class_tag = nullptr;
} // namespace Rebel
