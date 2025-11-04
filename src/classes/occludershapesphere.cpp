// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/occludershapesphere.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array OccluderShapeSphere::get_spheres() const {
    return rebel_icall_array(
        method_bindings.mb_get_spheres,
        (const Object*)this
    );
}

void OccluderShapeSphere::set_sphere_position(const int64_t index, const Vector3 position) {
    rebel_icall_void_int_vector3(
        method_bindings.mb_set_sphere_position,
        (const Object*)this,
        index,
        position
    );
}

void OccluderShapeSphere::set_sphere_radius(const int64_t index, const real_t radius) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_sphere_radius,
        (const Object*)this,
        index,
        radius
    );
}

void OccluderShapeSphere::set_spheres(const Array spheres) {
    rebel_icall_void_array(
        method_bindings.mb_set_spheres,
        (const Object*)this,
        spheres
    );
}

OccluderShapeSphere* OccluderShapeSphere::create() {
    return (OccluderShapeSphere*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"OccluderShapeSphere")()
         );
}

void OccluderShapeSphere::init_method_bindings() {
    method_bindings.mb_get_spheres =
        api->rebel_method_bind_get_method(
            "OccluderShapeSphere",
            "get_spheres"
        );
    method_bindings.mb_set_sphere_position =
        api->rebel_method_bind_get_method(
            "OccluderShapeSphere",
            "set_sphere_position"
        );
    method_bindings.mb_set_sphere_radius =
        api->rebel_method_bind_get_method(
            "OccluderShapeSphere",
            "set_sphere_radius"
        );
    method_bindings.mb_set_spheres =
        api->rebel_method_bind_get_method(
            "OccluderShapeSphere",
            "set_spheres"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "OccluderShapeSphere");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

OccluderShapeSphere::MethodBindings OccluderShapeSphere::method_bindings = {};
void* OccluderShapeSphere::class_tag = nullptr;
} // namespace Rebel
