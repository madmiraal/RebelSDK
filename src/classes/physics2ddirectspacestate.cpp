// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physics2ddirectspacestate.h"

#include "classes/icalls.h"
#include "classes/physics2dshapequeryparameters.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array Physics2DDirectSpaceState::cast_motion(const Ref<Physics2DShapeQueryParameters> shape) {
    return rebel_icall_array_object(
        method_bindings.mb_cast_motion,
        (const Object*)this,
        shape.ptr()
    );
}

Array Physics2DDirectSpaceState::collide_shape(const Ref<Physics2DShapeQueryParameters> shape, const int64_t max_results) {
    return rebel_icall_array_object_int(
        method_bindings.mb_collide_shape,
        (const Object*)this,
        shape.ptr(),
        max_results
    );
}

Dictionary Physics2DDirectSpaceState::get_rest_info(const Ref<Physics2DShapeQueryParameters> shape) {
    return rebel_icall_dictionary_object(
        method_bindings.mb_get_rest_info,
        (const Object*)this,
        shape.ptr()
    );
}

Array Physics2DDirectSpaceState::intersect_point(const Vector2 point, const int64_t max_results, const Array exclude, const int64_t collision_layer, const bool collide_with_bodies, const bool collide_with_areas) {
    return rebel_icall_array_vector2_int_array_int_bool_bool(
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

Array Physics2DDirectSpaceState::intersect_point_on_canvas(const Vector2 point, const int64_t canvas_instance_id, const int64_t max_results, const Array exclude, const int64_t collision_layer, const bool collide_with_bodies, const bool collide_with_areas) {
    return rebel_icall_array_vector2_int_int_array_int_bool_bool(
        method_bindings.mb_intersect_point_on_canvas,
        (const Object*)this,
        point,
        canvas_instance_id,
        max_results,
        exclude,
        collision_layer,
        collide_with_bodies,
        collide_with_areas
    );
}

Dictionary Physics2DDirectSpaceState::intersect_ray(const Vector2 from, const Vector2 to, const Array exclude, const int64_t collision_layer, const bool collide_with_bodies, const bool collide_with_areas) {
    return rebel_icall_dictionary_vector2_vector2_array_int_bool_bool(
        method_bindings.mb_intersect_ray,
        (const Object*)this,
        from,
        to,
        exclude,
        collision_layer,
        collide_with_bodies,
        collide_with_areas
    );
}

Array Physics2DDirectSpaceState::intersect_shape(const Ref<Physics2DShapeQueryParameters> shape, const int64_t max_results) {
    return rebel_icall_array_object_int(
        method_bindings.mb_intersect_shape,
        (const Object*)this,
        shape.ptr(),
        max_results
    );
}

void Physics2DDirectSpaceState::init_method_bindings() {
    method_bindings.mb_cast_motion =
        api->rebel_method_bind_get_method(
            "Physics2DDirectSpaceState",
            "cast_motion"
        );
    method_bindings.mb_collide_shape =
        api->rebel_method_bind_get_method(
            "Physics2DDirectSpaceState",
            "collide_shape"
        );
    method_bindings.mb_get_rest_info =
        api->rebel_method_bind_get_method(
            "Physics2DDirectSpaceState",
            "get_rest_info"
        );
    method_bindings.mb_intersect_point =
        api->rebel_method_bind_get_method(
            "Physics2DDirectSpaceState",
            "intersect_point"
        );
    method_bindings.mb_intersect_point_on_canvas =
        api->rebel_method_bind_get_method(
            "Physics2DDirectSpaceState",
            "intersect_point_on_canvas"
        );
    method_bindings.mb_intersect_ray =
        api->rebel_method_bind_get_method(
            "Physics2DDirectSpaceState",
            "intersect_ray"
        );
    method_bindings.mb_intersect_shape =
        api->rebel_method_bind_get_method(
            "Physics2DDirectSpaceState",
            "intersect_shape"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Physics2DDirectSpaceState");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Physics2DDirectSpaceState::MethodBindings Physics2DDirectSpaceState::method_bindings = {};
void* Physics2DDirectSpaceState::class_tag = nullptr;
} // namespace Rebel
