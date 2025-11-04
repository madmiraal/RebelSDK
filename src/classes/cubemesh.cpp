// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/cubemesh.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector3 CubeMesh::get_size() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

int64_t CubeMesh::get_subdivide_depth() const {
    return rebel_icall_int(
        method_bindings.mb_get_subdivide_depth,
        (const Object*)this
    );
}

int64_t CubeMesh::get_subdivide_height() const {
    return rebel_icall_int(
        method_bindings.mb_get_subdivide_height,
        (const Object*)this
    );
}

int64_t CubeMesh::get_subdivide_width() const {
    return rebel_icall_int(
        method_bindings.mb_get_subdivide_width,
        (const Object*)this
    );
}

void CubeMesh::set_size(const Vector3 size) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_size,
        (const Object*)this,
        size
    );
}

void CubeMesh::set_subdivide_depth(const int64_t divisions) {
    rebel_icall_void_int(
        method_bindings.mb_set_subdivide_depth,
        (const Object*)this,
        divisions
    );
}

void CubeMesh::set_subdivide_height(const int64_t divisions) {
    rebel_icall_void_int(
        method_bindings.mb_set_subdivide_height,
        (const Object*)this,
        divisions
    );
}

void CubeMesh::set_subdivide_width(const int64_t subdivide) {
    rebel_icall_void_int(
        method_bindings.mb_set_subdivide_width,
        (const Object*)this,
        subdivide
    );
}

CubeMesh* CubeMesh::create() {
    return (CubeMesh*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CubeMesh")()
         );
}

void CubeMesh::init_method_bindings() {
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "CubeMesh",
            "get_size"
        );
    method_bindings.mb_get_subdivide_depth =
        api->rebel_method_bind_get_method(
            "CubeMesh",
            "get_subdivide_depth"
        );
    method_bindings.mb_get_subdivide_height =
        api->rebel_method_bind_get_method(
            "CubeMesh",
            "get_subdivide_height"
        );
    method_bindings.mb_get_subdivide_width =
        api->rebel_method_bind_get_method(
            "CubeMesh",
            "get_subdivide_width"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "CubeMesh",
            "set_size"
        );
    method_bindings.mb_set_subdivide_depth =
        api->rebel_method_bind_get_method(
            "CubeMesh",
            "set_subdivide_depth"
        );
    method_bindings.mb_set_subdivide_height =
        api->rebel_method_bind_get_method(
            "CubeMesh",
            "set_subdivide_height"
        );
    method_bindings.mb_set_subdivide_width =
        api->rebel_method_bind_get_method(
            "CubeMesh",
            "set_subdivide_width"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CubeMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CubeMesh::MethodBindings CubeMesh::method_bindings = {};
void* CubeMesh::class_tag = nullptr;
} // namespace Rebel
