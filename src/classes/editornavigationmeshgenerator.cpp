// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editornavigationmeshgenerator.h"

#include "classes/icalls.h"
#include "classes/navigationmesh.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorNavigationMeshGenerator::bake(const Ref<NavigationMesh> nav_mesh, const Node* root_node) {
    rebel_icall_void_object_object(
        method_bindings.mb_bake,
        (const Object*)this,
        nav_mesh.ptr(),
        root_node
    );
}

void EditorNavigationMeshGenerator::clear(const Ref<NavigationMesh> nav_mesh) {
    rebel_icall_void_object(
        method_bindings.mb_clear,
        (const Object*)this,
        nav_mesh.ptr()
    );
}

void EditorNavigationMeshGenerator::init_method_bindings() {
    method_bindings.mb_bake =
        api->rebel_method_bind_get_method(
            "EditorNavigationMeshGenerator",
            "bake"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "EditorNavigationMeshGenerator",
            "clear"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorNavigationMeshGenerator");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorNavigationMeshGenerator::MethodBindings EditorNavigationMeshGenerator::method_bindings = {};
void* EditorNavigationMeshGenerator::class_tag = nullptr;
} // namespace Rebel
