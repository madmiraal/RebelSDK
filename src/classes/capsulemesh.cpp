// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/capsulemesh.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t CapsuleMesh::get_mid_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_mid_height,
        (const Object*)this
    );
}

int64_t CapsuleMesh::get_radial_segments() const {
    return rebel_icall_int(
        method_bindings.mb_get_radial_segments,
        (const Object*)this
    );
}

real_t CapsuleMesh::get_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_radius,
        (const Object*)this
    );
}

int64_t CapsuleMesh::get_rings() const {
    return rebel_icall_int(
        method_bindings.mb_get_rings,
        (const Object*)this
    );
}

void CapsuleMesh::set_mid_height(const real_t mid_height) {
    rebel_icall_void_float(
        method_bindings.mb_set_mid_height,
        (const Object*)this,
        mid_height
    );
}

void CapsuleMesh::set_radial_segments(const int64_t segments) {
    rebel_icall_void_int(
        method_bindings.mb_set_radial_segments,
        (const Object*)this,
        segments
    );
}

void CapsuleMesh::set_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_radius,
        (const Object*)this,
        radius
    );
}

void CapsuleMesh::set_rings(const int64_t rings) {
    rebel_icall_void_int(
        method_bindings.mb_set_rings,
        (const Object*)this,
        rings
    );
}

CapsuleMesh* CapsuleMesh::create() {
    return (CapsuleMesh*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CapsuleMesh")()
         );
}

void CapsuleMesh::init_method_bindings() {
    method_bindings.mb_get_mid_height =
        api->rebel_method_bind_get_method(
            "CapsuleMesh",
            "get_mid_height"
        );
    method_bindings.mb_get_radial_segments =
        api->rebel_method_bind_get_method(
            "CapsuleMesh",
            "get_radial_segments"
        );
    method_bindings.mb_get_radius =
        api->rebel_method_bind_get_method(
            "CapsuleMesh",
            "get_radius"
        );
    method_bindings.mb_get_rings =
        api->rebel_method_bind_get_method(
            "CapsuleMesh",
            "get_rings"
        );
    method_bindings.mb_set_mid_height =
        api->rebel_method_bind_get_method(
            "CapsuleMesh",
            "set_mid_height"
        );
    method_bindings.mb_set_radial_segments =
        api->rebel_method_bind_get_method(
            "CapsuleMesh",
            "set_radial_segments"
        );
    method_bindings.mb_set_radius =
        api->rebel_method_bind_get_method(
            "CapsuleMesh",
            "set_radius"
        );
    method_bindings.mb_set_rings =
        api->rebel_method_bind_get_method(
            "CapsuleMesh",
            "set_rings"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CapsuleMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CapsuleMesh::MethodBindings CapsuleMesh::method_bindings = {};
void* CapsuleMesh::class_tag = nullptr;
} // namespace Rebel
