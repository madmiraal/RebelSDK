// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/cylindermesh.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t CylinderMesh::get_bottom_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_bottom_radius,
        (const Object*)this
    );
}

real_t CylinderMesh::get_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

int64_t CylinderMesh::get_radial_segments() const {
    return rebel_icall_int(
        method_bindings.mb_get_radial_segments,
        (const Object*)this
    );
}

int64_t CylinderMesh::get_rings() const {
    return rebel_icall_int(
        method_bindings.mb_get_rings,
        (const Object*)this
    );
}

real_t CylinderMesh::get_top_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_top_radius,
        (const Object*)this
    );
}

void CylinderMesh::set_bottom_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_bottom_radius,
        (const Object*)this,
        radius
    );
}

void CylinderMesh::set_height(const real_t height) {
    rebel_icall_void_float(
        method_bindings.mb_set_height,
        (const Object*)this,
        height
    );
}

void CylinderMesh::set_radial_segments(const int64_t segments) {
    rebel_icall_void_int(
        method_bindings.mb_set_radial_segments,
        (const Object*)this,
        segments
    );
}

void CylinderMesh::set_rings(const int64_t rings) {
    rebel_icall_void_int(
        method_bindings.mb_set_rings,
        (const Object*)this,
        rings
    );
}

void CylinderMesh::set_top_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_top_radius,
        (const Object*)this,
        radius
    );
}

CylinderMesh* CylinderMesh::create() {
    return (CylinderMesh*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CylinderMesh")()
         );
}

void CylinderMesh::init_method_bindings() {
    method_bindings.mb_get_bottom_radius =
        api->rebel_method_bind_get_method(
            "CylinderMesh",
            "get_bottom_radius"
        );
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "CylinderMesh",
            "get_height"
        );
    method_bindings.mb_get_radial_segments =
        api->rebel_method_bind_get_method(
            "CylinderMesh",
            "get_radial_segments"
        );
    method_bindings.mb_get_rings =
        api->rebel_method_bind_get_method(
            "CylinderMesh",
            "get_rings"
        );
    method_bindings.mb_get_top_radius =
        api->rebel_method_bind_get_method(
            "CylinderMesh",
            "get_top_radius"
        );
    method_bindings.mb_set_bottom_radius =
        api->rebel_method_bind_get_method(
            "CylinderMesh",
            "set_bottom_radius"
        );
    method_bindings.mb_set_height =
        api->rebel_method_bind_get_method(
            "CylinderMesh",
            "set_height"
        );
    method_bindings.mb_set_radial_segments =
        api->rebel_method_bind_get_method(
            "CylinderMesh",
            "set_radial_segments"
        );
    method_bindings.mb_set_rings =
        api->rebel_method_bind_get_method(
            "CylinderMesh",
            "set_rings"
        );
    method_bindings.mb_set_top_radius =
        api->rebel_method_bind_get_method(
            "CylinderMesh",
            "set_top_radius"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CylinderMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CylinderMesh::MethodBindings CylinderMesh::method_bindings = {};
void* CylinderMesh::class_tag = nullptr;
} // namespace Rebel
