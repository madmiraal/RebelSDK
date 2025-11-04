// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/csgmesh.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "classes/mesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void CSGMesh::_mesh_changed() {
    rebel_icall_void(
        method_bindings.mb__mesh_changed,
        (const Object*)this
    );
}

Ref<Material> CSGMesh::get_material() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_material,
        (const Object*)this
    ));
}

Ref<Mesh> CSGMesh::get_mesh() {
    return Ref<Mesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_mesh,
        (const Object*)this
    ));
}

void CSGMesh::set_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_material,
        (const Object*)this,
        material.ptr()
    );
}

void CSGMesh::set_mesh(const Ref<Mesh> mesh) {
    rebel_icall_void_object(
        method_bindings.mb_set_mesh,
        (const Object*)this,
        mesh.ptr()
    );
}

CSGMesh* CSGMesh::create() {
    return (CSGMesh*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CSGMesh")()
         );
}

void CSGMesh::init_method_bindings() {
    method_bindings.mb__mesh_changed =
        api->rebel_method_bind_get_method(
            "CSGMesh",
            "_mesh_changed"
        );
    method_bindings.mb_get_material =
        api->rebel_method_bind_get_method(
            "CSGMesh",
            "get_material"
        );
    method_bindings.mb_get_mesh =
        api->rebel_method_bind_get_method(
            "CSGMesh",
            "get_mesh"
        );
    method_bindings.mb_set_material =
        api->rebel_method_bind_get_method(
            "CSGMesh",
            "set_material"
        );
    method_bindings.mb_set_mesh =
        api->rebel_method_bind_get_method(
            "CSGMesh",
            "set_mesh"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CSGMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CSGMesh::MethodBindings CSGMesh::method_bindings = {};
void* CSGMesh::class_tag = nullptr;
} // namespace Rebel
