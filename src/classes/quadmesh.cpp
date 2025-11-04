// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/quadmesh.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector3 QuadMesh::get_center_offset() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_center_offset,
        (const Object*)this
    );
}

Vector2 QuadMesh::get_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

void QuadMesh::set_center_offset(const Vector3 center_offset) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_center_offset,
        (const Object*)this,
        center_offset
    );
}

void QuadMesh::set_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_size,
        (const Object*)this,
        size
    );
}

QuadMesh* QuadMesh::create() {
    return (QuadMesh*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"QuadMesh")()
         );
}

void QuadMesh::init_method_bindings() {
    method_bindings.mb_get_center_offset =
        api->rebel_method_bind_get_method(
            "QuadMesh",
            "get_center_offset"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "QuadMesh",
            "get_size"
        );
    method_bindings.mb_set_center_offset =
        api->rebel_method_bind_get_method(
            "QuadMesh",
            "set_center_offset"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "QuadMesh",
            "set_size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "QuadMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

QuadMesh::MethodBindings QuadMesh::method_bindings = {};
void* QuadMesh::class_tag = nullptr;
} // namespace Rebel
