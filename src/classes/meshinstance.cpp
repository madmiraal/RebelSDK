// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/meshinstance.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "classes/mesh.h"
#include "classes/skin.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void MeshInstance::_mesh_changed() {
    rebel_icall_void(
        method_bindings.mb__mesh_changed,
        (const Object*)this
    );
}

void MeshInstance::_update_skinning() {
    rebel_icall_void(
        method_bindings.mb__update_skinning,
        (const Object*)this
    );
}

void MeshInstance::create_convex_collision(const bool clean, const bool simplify) {
    rebel_icall_void_bool_bool(
        method_bindings.mb_create_convex_collision,
        (const Object*)this,
        clean,
        simplify
    );
}

void MeshInstance::create_debug_tangents() {
    rebel_icall_void(
        method_bindings.mb_create_debug_tangents,
        (const Object*)this
    );
}

void MeshInstance::create_multiple_convex_collisions() {
    rebel_icall_void(
        method_bindings.mb_create_multiple_convex_collisions,
        (const Object*)this
    );
}

void MeshInstance::create_trimesh_collision() {
    rebel_icall_void(
        method_bindings.mb_create_trimesh_collision,
        (const Object*)this
    );
}

Ref<Material> MeshInstance::get_active_material(const int64_t surface) const {
    return Ref<Material>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_active_material,
        (const Object*)this,
        surface
    ));
}

Ref<Mesh> MeshInstance::get_mesh() const {
    return Ref<Mesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_mesh,
        (const Object*)this
    ));
}

NodePath MeshInstance::get_skeleton_path() {
    return rebel_icall_nodepath(
        method_bindings.mb_get_skeleton_path,
        (const Object*)this
    );
}

Ref<Skin> MeshInstance::get_skin() const {
    return Ref<Skin>::create_ref(rebel_icall_object(
        method_bindings.mb_get_skin,
        (const Object*)this
    ));
}

Ref<Material> MeshInstance::get_surface_material(const int64_t surface) const {
    return Ref<Material>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_surface_material,
        (const Object*)this,
        surface
    ));
}

int64_t MeshInstance::get_surface_material_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_surface_material_count,
        (const Object*)this
    );
}

bool MeshInstance::is_software_skinning_transform_normals_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_software_skinning_transform_normals_enabled,
        (const Object*)this
    );
}

void MeshInstance::set_mesh(const Ref<Mesh> mesh) {
    rebel_icall_void_object(
        method_bindings.mb_set_mesh,
        (const Object*)this,
        mesh.ptr()
    );
}

void MeshInstance::set_skeleton_path(const NodePath skeleton_path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_skeleton_path,
        (const Object*)this,
        skeleton_path
    );
}

void MeshInstance::set_skin(const Ref<Skin> skin) {
    rebel_icall_void_object(
        method_bindings.mb_set_skin,
        (const Object*)this,
        skin.ptr()
    );
}

void MeshInstance::set_software_skinning_transform_normals(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_software_skinning_transform_normals,
        (const Object*)this,
        enabled
    );
}

void MeshInstance::set_surface_material(const int64_t surface, const Ref<Material> material) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_surface_material,
        (const Object*)this,
        surface,
        material.ptr()
    );
}

MeshInstance* MeshInstance::create() {
    return (MeshInstance*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MeshInstance")()
         );
}

void MeshInstance::init_method_bindings() {
    method_bindings.mb__mesh_changed =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "_mesh_changed"
        );
    method_bindings.mb__update_skinning =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "_update_skinning"
        );
    method_bindings.mb_create_convex_collision =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "create_convex_collision"
        );
    method_bindings.mb_create_debug_tangents =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "create_debug_tangents"
        );
    method_bindings.mb_create_multiple_convex_collisions =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "create_multiple_convex_collisions"
        );
    method_bindings.mb_create_trimesh_collision =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "create_trimesh_collision"
        );
    method_bindings.mb_get_active_material =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "get_active_material"
        );
    method_bindings.mb_get_mesh =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "get_mesh"
        );
    method_bindings.mb_get_skeleton_path =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "get_skeleton_path"
        );
    method_bindings.mb_get_skin =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "get_skin"
        );
    method_bindings.mb_get_surface_material =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "get_surface_material"
        );
    method_bindings.mb_get_surface_material_count =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "get_surface_material_count"
        );
    method_bindings.mb_is_software_skinning_transform_normals_enabled =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "is_software_skinning_transform_normals_enabled"
        );
    method_bindings.mb_set_mesh =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "set_mesh"
        );
    method_bindings.mb_set_skeleton_path =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "set_skeleton_path"
        );
    method_bindings.mb_set_skin =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "set_skin"
        );
    method_bindings.mb_set_software_skinning_transform_normals =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "set_software_skinning_transform_normals"
        );
    method_bindings.mb_set_surface_material =
        api->rebel_method_bind_get_method(
            "MeshInstance",
            "set_surface_material"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MeshInstance");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MeshInstance::MethodBindings MeshInstance::method_bindings = {};
void* MeshInstance::class_tag = nullptr;
} // namespace Rebel
