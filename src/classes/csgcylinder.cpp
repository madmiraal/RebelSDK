// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/csgcylinder.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t CSGCylinder::get_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

Ref<Material> CSGCylinder::get_material() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_material,
        (const Object*)this
    ));
}

real_t CSGCylinder::get_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_radius,
        (const Object*)this
    );
}

int64_t CSGCylinder::get_sides() const {
    return rebel_icall_int(
        method_bindings.mb_get_sides,
        (const Object*)this
    );
}

bool CSGCylinder::get_smooth_faces() const {
    return rebel_icall_bool(
        method_bindings.mb_get_smooth_faces,
        (const Object*)this
    );
}

bool CSGCylinder::is_cone() const {
    return rebel_icall_bool(
        method_bindings.mb_is_cone,
        (const Object*)this
    );
}

void CSGCylinder::set_cone(const bool cone) {
    rebel_icall_void_bool(
        method_bindings.mb_set_cone,
        (const Object*)this,
        cone
    );
}

void CSGCylinder::set_height(const real_t height) {
    rebel_icall_void_float(
        method_bindings.mb_set_height,
        (const Object*)this,
        height
    );
}

void CSGCylinder::set_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_material,
        (const Object*)this,
        material.ptr()
    );
}

void CSGCylinder::set_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_radius,
        (const Object*)this,
        radius
    );
}

void CSGCylinder::set_sides(const int64_t sides) {
    rebel_icall_void_int(
        method_bindings.mb_set_sides,
        (const Object*)this,
        sides
    );
}

void CSGCylinder::set_smooth_faces(const bool smooth_faces) {
    rebel_icall_void_bool(
        method_bindings.mb_set_smooth_faces,
        (const Object*)this,
        smooth_faces
    );
}

CSGCylinder* CSGCylinder::create() {
    return (CSGCylinder*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CSGCylinder")()
         );
}

void CSGCylinder::init_method_bindings() {
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "get_height"
        );
    method_bindings.mb_get_material =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "get_material"
        );
    method_bindings.mb_get_radius =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "get_radius"
        );
    method_bindings.mb_get_sides =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "get_sides"
        );
    method_bindings.mb_get_smooth_faces =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "get_smooth_faces"
        );
    method_bindings.mb_is_cone =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "is_cone"
        );
    method_bindings.mb_set_cone =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "set_cone"
        );
    method_bindings.mb_set_height =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "set_height"
        );
    method_bindings.mb_set_material =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "set_material"
        );
    method_bindings.mb_set_radius =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "set_radius"
        );
    method_bindings.mb_set_sides =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "set_sides"
        );
    method_bindings.mb_set_smooth_faces =
        api->rebel_method_bind_get_method(
            "CSGCylinder",
            "set_smooth_faces"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CSGCylinder");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CSGCylinder::MethodBindings CSGCylinder::method_bindings = {};
void* CSGCylinder::class_tag = nullptr;
} // namespace Rebel
