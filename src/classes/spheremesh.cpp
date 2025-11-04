// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/spheremesh.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t SphereMesh::get_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

bool SphereMesh::get_is_hemisphere() const {
    return rebel_icall_bool(
        method_bindings.mb_get_is_hemisphere,
        (const Object*)this
    );
}

int64_t SphereMesh::get_radial_segments() const {
    return rebel_icall_int(
        method_bindings.mb_get_radial_segments,
        (const Object*)this
    );
}

real_t SphereMesh::get_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_radius,
        (const Object*)this
    );
}

int64_t SphereMesh::get_rings() const {
    return rebel_icall_int(
        method_bindings.mb_get_rings,
        (const Object*)this
    );
}

void SphereMesh::set_height(const real_t height) {
    rebel_icall_void_float(
        method_bindings.mb_set_height,
        (const Object*)this,
        height
    );
}

void SphereMesh::set_is_hemisphere(const bool is_hemisphere) {
    rebel_icall_void_bool(
        method_bindings.mb_set_is_hemisphere,
        (const Object*)this,
        is_hemisphere
    );
}

void SphereMesh::set_radial_segments(const int64_t radial_segments) {
    rebel_icall_void_int(
        method_bindings.mb_set_radial_segments,
        (const Object*)this,
        radial_segments
    );
}

void SphereMesh::set_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_radius,
        (const Object*)this,
        radius
    );
}

void SphereMesh::set_rings(const int64_t rings) {
    rebel_icall_void_int(
        method_bindings.mb_set_rings,
        (const Object*)this,
        rings
    );
}

SphereMesh* SphereMesh::create() {
    return (SphereMesh*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SphereMesh")()
         );
}

void SphereMesh::init_method_bindings() {
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "SphereMesh",
            "get_height"
        );
    method_bindings.mb_get_is_hemisphere =
        api->rebel_method_bind_get_method(
            "SphereMesh",
            "get_is_hemisphere"
        );
    method_bindings.mb_get_radial_segments =
        api->rebel_method_bind_get_method(
            "SphereMesh",
            "get_radial_segments"
        );
    method_bindings.mb_get_radius =
        api->rebel_method_bind_get_method(
            "SphereMesh",
            "get_radius"
        );
    method_bindings.mb_get_rings =
        api->rebel_method_bind_get_method(
            "SphereMesh",
            "get_rings"
        );
    method_bindings.mb_set_height =
        api->rebel_method_bind_get_method(
            "SphereMesh",
            "set_height"
        );
    method_bindings.mb_set_is_hemisphere =
        api->rebel_method_bind_get_method(
            "SphereMesh",
            "set_is_hemisphere"
        );
    method_bindings.mb_set_radial_segments =
        api->rebel_method_bind_get_method(
            "SphereMesh",
            "set_radial_segments"
        );
    method_bindings.mb_set_radius =
        api->rebel_method_bind_get_method(
            "SphereMesh",
            "set_radius"
        );
    method_bindings.mb_set_rings =
        api->rebel_method_bind_get_method(
            "SphereMesh",
            "set_rings"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SphereMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SphereMesh::MethodBindings SphereMesh::method_bindings = {};
void* SphereMesh::class_tag = nullptr;
} // namespace Rebel
