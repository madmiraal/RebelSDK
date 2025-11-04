// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltfmesh.h"

#include "classes/arraymesh.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolRealArray GLTFMesh::get_blend_weights() {
    return rebel_icall_poolrealarray(
        method_bindings.mb_get_blend_weights,
        (const Object*)this
    );
}

Array GLTFMesh::get_instance_materials() {
    return rebel_icall_array(
        method_bindings.mb_get_instance_materials,
        (const Object*)this
    );
}

Ref<ArrayMesh> GLTFMesh::get_mesh() {
    return Ref<ArrayMesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_mesh,
        (const Object*)this
    ));
}

void GLTFMesh::set_blend_weights(const PoolRealArray blend_weights) {
    rebel_icall_void_poolrealarray(
        method_bindings.mb_set_blend_weights,
        (const Object*)this,
        blend_weights
    );
}

void GLTFMesh::set_instance_materials(const Array instance_materials) {
    rebel_icall_void_array(
        method_bindings.mb_set_instance_materials,
        (const Object*)this,
        instance_materials
    );
}

void GLTFMesh::set_mesh(const Ref<ArrayMesh> mesh) {
    rebel_icall_void_object(
        method_bindings.mb_set_mesh,
        (const Object*)this,
        mesh.ptr()
    );
}

void GLTFMesh::init_method_bindings() {
    method_bindings.mb_get_blend_weights =
        api->rebel_method_bind_get_method(
            "GLTFMesh",
            "get_blend_weights"
        );
    method_bindings.mb_get_instance_materials =
        api->rebel_method_bind_get_method(
            "GLTFMesh",
            "get_instance_materials"
        );
    method_bindings.mb_get_mesh =
        api->rebel_method_bind_get_method(
            "GLTFMesh",
            "get_mesh"
        );
    method_bindings.mb_set_blend_weights =
        api->rebel_method_bind_get_method(
            "GLTFMesh",
            "set_blend_weights"
        );
    method_bindings.mb_set_instance_materials =
        api->rebel_method_bind_get_method(
            "GLTFMesh",
            "set_instance_materials"
        );
    method_bindings.mb_set_mesh =
        api->rebel_method_bind_get_method(
            "GLTFMesh",
            "set_mesh"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFMesh::MethodBindings GLTFMesh::method_bindings = {};
void* GLTFMesh::class_tag = nullptr;
} // namespace Rebel
