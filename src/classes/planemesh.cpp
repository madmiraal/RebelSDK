// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/planemesh.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector3 PlaneMesh::get_center_offset() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_center_offset,
        (const Object*)this
    );
}

Vector2 PlaneMesh::get_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

int64_t PlaneMesh::get_subdivide_depth() const {
    return rebel_icall_int(
        method_bindings.mb_get_subdivide_depth,
        (const Object*)this
    );
}

int64_t PlaneMesh::get_subdivide_width() const {
    return rebel_icall_int(
        method_bindings.mb_get_subdivide_width,
        (const Object*)this
    );
}

void PlaneMesh::set_center_offset(const Vector3 offset) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_center_offset,
        (const Object*)this,
        offset
    );
}

void PlaneMesh::set_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_size,
        (const Object*)this,
        size
    );
}

void PlaneMesh::set_subdivide_depth(const int64_t subdivide) {
    rebel_icall_void_int(
        method_bindings.mb_set_subdivide_depth,
        (const Object*)this,
        subdivide
    );
}

void PlaneMesh::set_subdivide_width(const int64_t subdivide) {
    rebel_icall_void_int(
        method_bindings.mb_set_subdivide_width,
        (const Object*)this,
        subdivide
    );
}

PlaneMesh* PlaneMesh::create() {
    return (PlaneMesh*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PlaneMesh")()
         );
}

void PlaneMesh::init_method_bindings() {
    method_bindings.mb_get_center_offset =
        api->rebel_method_bind_get_method(
            "PlaneMesh",
            "get_center_offset"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "PlaneMesh",
            "get_size"
        );
    method_bindings.mb_get_subdivide_depth =
        api->rebel_method_bind_get_method(
            "PlaneMesh",
            "get_subdivide_depth"
        );
    method_bindings.mb_get_subdivide_width =
        api->rebel_method_bind_get_method(
            "PlaneMesh",
            "get_subdivide_width"
        );
    method_bindings.mb_set_center_offset =
        api->rebel_method_bind_get_method(
            "PlaneMesh",
            "set_center_offset"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "PlaneMesh",
            "set_size"
        );
    method_bindings.mb_set_subdivide_depth =
        api->rebel_method_bind_get_method(
            "PlaneMesh",
            "set_subdivide_depth"
        );
    method_bindings.mb_set_subdivide_width =
        api->rebel_method_bind_get_method(
            "PlaneMesh",
            "set_subdivide_width"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PlaneMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PlaneMesh::MethodBindings PlaneMesh::method_bindings = {};
void* PlaneMesh::class_tag = nullptr;
} // namespace Rebel
