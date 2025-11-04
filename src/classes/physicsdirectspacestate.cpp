// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physicsdirectspacestate.h"

#include "classes/icalls.h"
#include "classes/physicsshapequeryparameters.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array PhysicsDirectSpaceState::cast_motion(const Ref<PhysicsShapeQueryParameters> shape, const Vector3 motion) {
    return rebel_icall_array_object_vector3(
        method_bindings.mb_cast_motion,
        (const Object*)this,
        shape.ptr(),
        motion
    );
}

Array PhysicsDirectSpaceState::collide_shape(const Ref<PhysicsShapeQueryParameters> shape, const int64_t max_results) {
    return rebel_icall_array_object_int(
        method_bindings.mb_collide_shape,
        (const Object*)this,
        shape.ptr(),
        max_results
    );
}

Dictionary PhysicsDirectSpaceState::get_rest_info(const Ref<PhysicsShapeQueryParameters> shape) {
    return rebel_icall_dictionary_object(
        method_bindings.mb_get_rest_info,
        (const Object*)this,
        shape.ptr()
    );
}

Array PhysicsDirectSpaceState::intersect_point(const Vector3 point, const int64_t max_results, const Array exclude, const int64_t collision_layer, const bool collide_with_bodies, const bool collide_with_areas) {
    return rebel_icall_array_vector3_int_array_int_bool_bool(
        method_bindings.mb_intersect_point,
        (const Object*)this,
        point,
        max_results,
        exclude,
        collision_layer,
        collide_with_bodies,
        collide_with_areas
    );
}

Dictionary PhysicsDirectSpaceState::intersect_ray(const Vector3 from, const Vector3 to, const Array exclude, const int64_t collision_mask, const bool collide_with_bodies, const bool collide_with_areas) {
    return rebel_icall_dictionary_vector3_vector3_array_int_bool_bool(
        method_bindings.mb_intersect_ray,
        (const Object*)this,
        from,
        to,
        exclude,
        collision_mask,
        collide_with_bodies,
        collide_with_areas
    );
}

Array PhysicsDirectSpaceState::intersect_shape(const Ref<PhysicsShapeQueryParameters> shape, const int64_t max_results) {
    return rebel_icall_array_object_int(
        method_bindings.mb_intersect_shape,
        (const Object*)this,
        shape.ptr(),
        max_results
    );
}

void PhysicsDirectSpaceState::init_method_bindings() {
    method_bindings.mb_cast_motion =
        api->rebel_method_bind_get_method(
            "PhysicsDirectSpaceState",
            "cast_motion"
        );
    method_bindings.mb_collide_shape =
        api->rebel_method_bind_get_method(
            "PhysicsDirectSpaceState",
            "collide_shape"
        );
    method_bindings.mb_get_rest_info =
        api->rebel_method_bind_get_method(
            "PhysicsDirectSpaceState",
            "get_rest_info"
        );
    method_bindings.mb_intersect_point =
        api->rebel_method_bind_get_method(
            "PhysicsDirectSpaceState",
            "intersect_point"
        );
    method_bindings.mb_intersect_ray =
        api->rebel_method_bind_get_method(
            "PhysicsDirectSpaceState",
            "intersect_ray"
        );
    method_bindings.mb_intersect_shape =
        api->rebel_method_bind_get_method(
            "PhysicsDirectSpaceState",
            "intersect_shape"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PhysicsDirectSpaceState");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PhysicsDirectSpaceState::MethodBindings PhysicsDirectSpaceState::method_bindings = {};
void* PhysicsDirectSpaceState::class_tag = nullptr;
} // namespace Rebel
