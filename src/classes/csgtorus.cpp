// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/csgtorus.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t CSGTorus::get_inner_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_inner_radius,
        (const Object*)this
    );
}

Ref<Material> CSGTorus::get_material() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_material,
        (const Object*)this
    ));
}

real_t CSGTorus::get_outer_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_outer_radius,
        (const Object*)this
    );
}

int64_t CSGTorus::get_ring_sides() const {
    return rebel_icall_int(
        method_bindings.mb_get_ring_sides,
        (const Object*)this
    );
}

int64_t CSGTorus::get_sides() const {
    return rebel_icall_int(
        method_bindings.mb_get_sides,
        (const Object*)this
    );
}

bool CSGTorus::get_smooth_faces() const {
    return rebel_icall_bool(
        method_bindings.mb_get_smooth_faces,
        (const Object*)this
    );
}

void CSGTorus::set_inner_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_inner_radius,
        (const Object*)this,
        radius
    );
}

void CSGTorus::set_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_material,
        (const Object*)this,
        material.ptr()
    );
}

void CSGTorus::set_outer_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_outer_radius,
        (const Object*)this,
        radius
    );
}

void CSGTorus::set_ring_sides(const int64_t sides) {
    rebel_icall_void_int(
        method_bindings.mb_set_ring_sides,
        (const Object*)this,
        sides
    );
}

void CSGTorus::set_sides(const int64_t sides) {
    rebel_icall_void_int(
        method_bindings.mb_set_sides,
        (const Object*)this,
        sides
    );
}

void CSGTorus::set_smooth_faces(const bool smooth_faces) {
    rebel_icall_void_bool(
        method_bindings.mb_set_smooth_faces,
        (const Object*)this,
        smooth_faces
    );
}

CSGTorus* CSGTorus::create() {
    return (CSGTorus*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CSGTorus")()
         );
}

void CSGTorus::init_method_bindings() {
    method_bindings.mb_get_inner_radius =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "get_inner_radius"
        );
    method_bindings.mb_get_material =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "get_material"
        );
    method_bindings.mb_get_outer_radius =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "get_outer_radius"
        );
    method_bindings.mb_get_ring_sides =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "get_ring_sides"
        );
    method_bindings.mb_get_sides =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "get_sides"
        );
    method_bindings.mb_get_smooth_faces =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "get_smooth_faces"
        );
    method_bindings.mb_set_inner_radius =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "set_inner_radius"
        );
    method_bindings.mb_set_material =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "set_material"
        );
    method_bindings.mb_set_outer_radius =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "set_outer_radius"
        );
    method_bindings.mb_set_ring_sides =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "set_ring_sides"
        );
    method_bindings.mb_set_sides =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "set_sides"
        );
    method_bindings.mb_set_smooth_faces =
        api->rebel_method_bind_get_method(
            "CSGTorus",
            "set_smooth_faces"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CSGTorus");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CSGTorus::MethodBindings CSGTorus::method_bindings = {};
void* CSGTorus::class_tag = nullptr;
} // namespace Rebel
