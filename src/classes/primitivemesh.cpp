// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/primitivemesh.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void PrimitiveMesh::_update() const {
    rebel_icall_void(
        method_bindings.mb__update,
        (const Object*)this
    );
}

AABB PrimitiveMesh::get_custom_aabb() const {
    return rebel_icall_aabb(
        method_bindings.mb_get_custom_aabb,
        (const Object*)this
    );
}

bool PrimitiveMesh::get_flip_faces() const {
    return rebel_icall_bool(
        method_bindings.mb_get_flip_faces,
        (const Object*)this
    );
}

Ref<Material> PrimitiveMesh::get_material() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_material,
        (const Object*)this
    ));
}

Array PrimitiveMesh::get_mesh_arrays() const {
    return rebel_icall_array(
        method_bindings.mb_get_mesh_arrays,
        (const Object*)this
    );
}

void PrimitiveMesh::set_custom_aabb(const AABB aabb) {
    rebel_icall_void_aabb(
        method_bindings.mb_set_custom_aabb,
        (const Object*)this,
        aabb
    );
}

void PrimitiveMesh::set_flip_faces(const bool flip_faces) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flip_faces,
        (const Object*)this,
        flip_faces
    );
}

void PrimitiveMesh::set_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_material,
        (const Object*)this,
        material.ptr()
    );
}

void PrimitiveMesh::init_method_bindings() {
    method_bindings.mb__update =
        api->rebel_method_bind_get_method(
            "PrimitiveMesh",
            "_update"
        );
    method_bindings.mb_get_custom_aabb =
        api->rebel_method_bind_get_method(
            "PrimitiveMesh",
            "get_custom_aabb"
        );
    method_bindings.mb_get_flip_faces =
        api->rebel_method_bind_get_method(
            "PrimitiveMesh",
            "get_flip_faces"
        );
    method_bindings.mb_get_material =
        api->rebel_method_bind_get_method(
            "PrimitiveMesh",
            "get_material"
        );
    method_bindings.mb_get_mesh_arrays =
        api->rebel_method_bind_get_method(
            "PrimitiveMesh",
            "get_mesh_arrays"
        );
    method_bindings.mb_set_custom_aabb =
        api->rebel_method_bind_get_method(
            "PrimitiveMesh",
            "set_custom_aabb"
        );
    method_bindings.mb_set_flip_faces =
        api->rebel_method_bind_get_method(
            "PrimitiveMesh",
            "set_flip_faces"
        );
    method_bindings.mb_set_material =
        api->rebel_method_bind_get_method(
            "PrimitiveMesh",
            "set_material"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PrimitiveMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PrimitiveMesh::MethodBindings PrimitiveMesh::method_bindings = {};
void* PrimitiveMesh::class_tag = nullptr;
} // namespace Rebel
