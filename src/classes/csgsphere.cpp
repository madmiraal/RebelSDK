// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/csgsphere.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Material> CSGSphere::get_material() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_material,
        (const Object*)this
    ));
}

int64_t CSGSphere::get_radial_segments() const {
    return rebel_icall_int(
        method_bindings.mb_get_radial_segments,
        (const Object*)this
    );
}

real_t CSGSphere::get_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_radius,
        (const Object*)this
    );
}

int64_t CSGSphere::get_rings() const {
    return rebel_icall_int(
        method_bindings.mb_get_rings,
        (const Object*)this
    );
}

bool CSGSphere::get_smooth_faces() const {
    return rebel_icall_bool(
        method_bindings.mb_get_smooth_faces,
        (const Object*)this
    );
}

void CSGSphere::set_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_material,
        (const Object*)this,
        material.ptr()
    );
}

void CSGSphere::set_radial_segments(const int64_t radial_segments) {
    rebel_icall_void_int(
        method_bindings.mb_set_radial_segments,
        (const Object*)this,
        radial_segments
    );
}

void CSGSphere::set_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_radius,
        (const Object*)this,
        radius
    );
}

void CSGSphere::set_rings(const int64_t rings) {
    rebel_icall_void_int(
        method_bindings.mb_set_rings,
        (const Object*)this,
        rings
    );
}

void CSGSphere::set_smooth_faces(const bool smooth_faces) {
    rebel_icall_void_bool(
        method_bindings.mb_set_smooth_faces,
        (const Object*)this,
        smooth_faces
    );
}

CSGSphere* CSGSphere::create() {
    return (CSGSphere*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CSGSphere")()
         );
}

void CSGSphere::init_method_bindings() {
    method_bindings.mb_get_material =
        api->rebel_method_bind_get_method(
            "CSGSphere",
            "get_material"
        );
    method_bindings.mb_get_radial_segments =
        api->rebel_method_bind_get_method(
            "CSGSphere",
            "get_radial_segments"
        );
    method_bindings.mb_get_radius =
        api->rebel_method_bind_get_method(
            "CSGSphere",
            "get_radius"
        );
    method_bindings.mb_get_rings =
        api->rebel_method_bind_get_method(
            "CSGSphere",
            "get_rings"
        );
    method_bindings.mb_get_smooth_faces =
        api->rebel_method_bind_get_method(
            "CSGSphere",
            "get_smooth_faces"
        );
    method_bindings.mb_set_material =
        api->rebel_method_bind_get_method(
            "CSGSphere",
            "set_material"
        );
    method_bindings.mb_set_radial_segments =
        api->rebel_method_bind_get_method(
            "CSGSphere",
            "set_radial_segments"
        );
    method_bindings.mb_set_radius =
        api->rebel_method_bind_get_method(
            "CSGSphere",
            "set_radius"
        );
    method_bindings.mb_set_rings =
        api->rebel_method_bind_get_method(
            "CSGSphere",
            "set_rings"
        );
    method_bindings.mb_set_smooth_faces =
        api->rebel_method_bind_get_method(
            "CSGSphere",
            "set_smooth_faces"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CSGSphere");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CSGSphere::MethodBindings CSGSphere::method_bindings = {};
void* CSGSphere::class_tag = nullptr;
} // namespace Rebel
