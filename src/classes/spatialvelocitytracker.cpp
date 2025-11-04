// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/spatialvelocitytracker.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector3 SpatialVelocityTracker::get_tracked_linear_velocity() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_tracked_linear_velocity,
        (const Object*)this
    );
}

bool SpatialVelocityTracker::is_tracking_physics_step() const {
    return rebel_icall_bool(
        method_bindings.mb_is_tracking_physics_step,
        (const Object*)this
    );
}

void SpatialVelocityTracker::reset(const Vector3 position) {
    rebel_icall_void_vector3(
        method_bindings.mb_reset,
        (const Object*)this,
        position
    );
}

void SpatialVelocityTracker::set_track_physics_step(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_track_physics_step,
        (const Object*)this,
        enable
    );
}

void SpatialVelocityTracker::update_position(const Vector3 position) {
    rebel_icall_void_vector3(
        method_bindings.mb_update_position,
        (const Object*)this,
        position
    );
}

SpatialVelocityTracker* SpatialVelocityTracker::create() {
    return (SpatialVelocityTracker*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SpatialVelocityTracker")()
         );
}

void SpatialVelocityTracker::init_method_bindings() {
    method_bindings.mb_get_tracked_linear_velocity =
        api->rebel_method_bind_get_method(
            "SpatialVelocityTracker",
            "get_tracked_linear_velocity"
        );
    method_bindings.mb_is_tracking_physics_step =
        api->rebel_method_bind_get_method(
            "SpatialVelocityTracker",
            "is_tracking_physics_step"
        );
    method_bindings.mb_reset =
        api->rebel_method_bind_get_method(
            "SpatialVelocityTracker",
            "reset"
        );
    method_bindings.mb_set_track_physics_step =
        api->rebel_method_bind_get_method(
            "SpatialVelocityTracker",
            "set_track_physics_step"
        );
    method_bindings.mb_update_position =
        api->rebel_method_bind_get_method(
            "SpatialVelocityTracker",
            "update_position"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SpatialVelocityTracker");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SpatialVelocityTracker::MethodBindings SpatialVelocityTracker::method_bindings = {};
void* SpatialVelocityTracker::class_tag = nullptr;
} // namespace Rebel
