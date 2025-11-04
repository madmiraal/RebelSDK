// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/prismmesh.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t PrismMesh::get_left_to_right() const {
    return rebel_icall_float(
        method_bindings.mb_get_left_to_right,
        (const Object*)this
    );
}

Vector3 PrismMesh::get_size() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

int64_t PrismMesh::get_subdivide_depth() const {
    return rebel_icall_int(
        method_bindings.mb_get_subdivide_depth,
        (const Object*)this
    );
}

int64_t PrismMesh::get_subdivide_height() const {
    return rebel_icall_int(
        method_bindings.mb_get_subdivide_height,
        (const Object*)this
    );
}

int64_t PrismMesh::get_subdivide_width() const {
    return rebel_icall_int(
        method_bindings.mb_get_subdivide_width,
        (const Object*)this
    );
}

void PrismMesh::set_left_to_right(const real_t left_to_right) {
    rebel_icall_void_float(
        method_bindings.mb_set_left_to_right,
        (const Object*)this,
        left_to_right
    );
}

void PrismMesh::set_size(const Vector3 size) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_size,
        (const Object*)this,
        size
    );
}

void PrismMesh::set_subdivide_depth(const int64_t segments) {
    rebel_icall_void_int(
        method_bindings.mb_set_subdivide_depth,
        (const Object*)this,
        segments
    );
}

void PrismMesh::set_subdivide_height(const int64_t segments) {
    rebel_icall_void_int(
        method_bindings.mb_set_subdivide_height,
        (const Object*)this,
        segments
    );
}

void PrismMesh::set_subdivide_width(const int64_t segments) {
    rebel_icall_void_int(
        method_bindings.mb_set_subdivide_width,
        (const Object*)this,
        segments
    );
}

PrismMesh* PrismMesh::create() {
    return (PrismMesh*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PrismMesh")()
         );
}

void PrismMesh::init_method_bindings() {
    method_bindings.mb_get_left_to_right =
        api->rebel_method_bind_get_method(
            "PrismMesh",
            "get_left_to_right"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "PrismMesh",
            "get_size"
        );
    method_bindings.mb_get_subdivide_depth =
        api->rebel_method_bind_get_method(
            "PrismMesh",
            "get_subdivide_depth"
        );
    method_bindings.mb_get_subdivide_height =
        api->rebel_method_bind_get_method(
            "PrismMesh",
            "get_subdivide_height"
        );
    method_bindings.mb_get_subdivide_width =
        api->rebel_method_bind_get_method(
            "PrismMesh",
            "get_subdivide_width"
        );
    method_bindings.mb_set_left_to_right =
        api->rebel_method_bind_get_method(
            "PrismMesh",
            "set_left_to_right"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "PrismMesh",
            "set_size"
        );
    method_bindings.mb_set_subdivide_depth =
        api->rebel_method_bind_get_method(
            "PrismMesh",
            "set_subdivide_depth"
        );
    method_bindings.mb_set_subdivide_height =
        api->rebel_method_bind_get_method(
            "PrismMesh",
            "set_subdivide_height"
        );
    method_bindings.mb_set_subdivide_width =
        api->rebel_method_bind_get_method(
            "PrismMesh",
            "set_subdivide_width"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PrismMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PrismMesh::MethodBindings PrismMesh::method_bindings = {};
void* PrismMesh::class_tag = nullptr;
} // namespace Rebel
