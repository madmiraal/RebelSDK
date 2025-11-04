// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/meshlibrary.h"

#include "classes/icalls.h"
#include "classes/mesh.h"
#include "classes/navigationmesh.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void MeshLibrary::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void MeshLibrary::create_item(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_create_item,
        (const Object*)this,
        id
    );
}

int64_t MeshLibrary::find_item_by_name(const String name) const {
    return rebel_icall_int_string(
        method_bindings.mb_find_item_by_name,
        (const Object*)this,
        name
    );
}

PoolIntArray MeshLibrary::get_item_list() const {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_item_list,
        (const Object*)this
    );
}

Ref<Mesh> MeshLibrary::get_item_mesh(const int64_t id) const {
    return Ref<Mesh>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_item_mesh,
        (const Object*)this,
        id
    ));
}

Transform MeshLibrary::get_item_mesh_transform(const int64_t id) const {
    return rebel_icall_transform_int(
        method_bindings.mb_get_item_mesh_transform,
        (const Object*)this,
        id
    );
}

String MeshLibrary::get_item_name(const int64_t id) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_item_name,
        (const Object*)this,
        id
    );
}

Ref<NavigationMesh> MeshLibrary::get_item_navmesh(const int64_t id) const {
    return Ref<NavigationMesh>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_item_navmesh,
        (const Object*)this,
        id
    ));
}

Transform MeshLibrary::get_item_navmesh_transform(const int64_t id) const {
    return rebel_icall_transform_int(
        method_bindings.mb_get_item_navmesh_transform,
        (const Object*)this,
        id
    );
}

Ref<Texture> MeshLibrary::get_item_preview(const int64_t id) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_item_preview,
        (const Object*)this,
        id
    ));
}

Array MeshLibrary::get_item_shapes(const int64_t id) const {
    return rebel_icall_array_int(
        method_bindings.mb_get_item_shapes,
        (const Object*)this,
        id
    );
}

int64_t MeshLibrary::get_last_unused_item_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_last_unused_item_id,
        (const Object*)this
    );
}

void MeshLibrary::remove_item(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_remove_item,
        (const Object*)this,
        id
    );
}

void MeshLibrary::set_item_mesh(const int64_t id, const Ref<Mesh> mesh) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_item_mesh,
        (const Object*)this,
        id,
        mesh.ptr()
    );
}

void MeshLibrary::set_item_mesh_transform(const int64_t id, const Transform mesh_transform) {
    rebel_icall_void_int_transform(
        method_bindings.mb_set_item_mesh_transform,
        (const Object*)this,
        id,
        mesh_transform
    );
}

void MeshLibrary::set_item_name(const int64_t id, const String name) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_item_name,
        (const Object*)this,
        id,
        name
    );
}

void MeshLibrary::set_item_navmesh(const int64_t id, const Ref<NavigationMesh> navmesh) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_item_navmesh,
        (const Object*)this,
        id,
        navmesh.ptr()
    );
}

void MeshLibrary::set_item_navmesh_transform(const int64_t id, const Transform navmesh) {
    rebel_icall_void_int_transform(
        method_bindings.mb_set_item_navmesh_transform,
        (const Object*)this,
        id,
        navmesh
    );
}

void MeshLibrary::set_item_preview(const int64_t id, const Ref<Texture> texture) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_item_preview,
        (const Object*)this,
        id,
        texture.ptr()
    );
}

void MeshLibrary::set_item_shapes(const int64_t id, const Array shapes) {
    rebel_icall_void_int_array(
        method_bindings.mb_set_item_shapes,
        (const Object*)this,
        id,
        shapes
    );
}

MeshLibrary* MeshLibrary::create() {
    return (MeshLibrary*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MeshLibrary")()
         );
}

void MeshLibrary::init_method_bindings() {
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "clear"
        );
    method_bindings.mb_create_item =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "create_item"
        );
    method_bindings.mb_find_item_by_name =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "find_item_by_name"
        );
    method_bindings.mb_get_item_list =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "get_item_list"
        );
    method_bindings.mb_get_item_mesh =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "get_item_mesh"
        );
    method_bindings.mb_get_item_mesh_transform =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "get_item_mesh_transform"
        );
    method_bindings.mb_get_item_name =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "get_item_name"
        );
    method_bindings.mb_get_item_navmesh =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "get_item_navmesh"
        );
    method_bindings.mb_get_item_navmesh_transform =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "get_item_navmesh_transform"
        );
    method_bindings.mb_get_item_preview =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "get_item_preview"
        );
    method_bindings.mb_get_item_shapes =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "get_item_shapes"
        );
    method_bindings.mb_get_last_unused_item_id =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "get_last_unused_item_id"
        );
    method_bindings.mb_remove_item =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "remove_item"
        );
    method_bindings.mb_set_item_mesh =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "set_item_mesh"
        );
    method_bindings.mb_set_item_mesh_transform =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "set_item_mesh_transform"
        );
    method_bindings.mb_set_item_name =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "set_item_name"
        );
    method_bindings.mb_set_item_navmesh =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "set_item_navmesh"
        );
    method_bindings.mb_set_item_navmesh_transform =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "set_item_navmesh_transform"
        );
    method_bindings.mb_set_item_preview =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "set_item_preview"
        );
    method_bindings.mb_set_item_shapes =
        api->rebel_method_bind_get_method(
            "MeshLibrary",
            "set_item_shapes"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MeshLibrary");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MeshLibrary::MethodBindings MeshLibrary::method_bindings = {};
void* MeshLibrary::class_tag = nullptr;
} // namespace Rebel
