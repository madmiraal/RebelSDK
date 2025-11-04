// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physicstestmotionresult.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Object* PhysicsTestMotionResult::get_collider() const {
    return (Object*)rebel_icall_object(
        method_bindings.mb_get_collider,
        (const Object*)this
    );
}

int64_t PhysicsTestMotionResult::get_collider_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_collider_id,
        (const Object*)this
    );
}

RID PhysicsTestMotionResult::get_collider_rid() const {
    return rebel_icall_rid(
        method_bindings.mb_get_collider_rid,
        (const Object*)this
    );
}

int64_t PhysicsTestMotionResult::get_collider_shape() const {
    return rebel_icall_int(
        method_bindings.mb_get_collider_shape,
        (const Object*)this
    );
}

Vector3 PhysicsTestMotionResult::get_collider_velocity() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_collider_velocity,
        (const Object*)this
    );
}

real_t PhysicsTestMotionResult::get_collision_depth() const {
    return rebel_icall_float(
        method_bindings.mb_get_collision_depth,
        (const Object*)this
    );
}

Vector3 PhysicsTestMotionResult::get_collision_normal() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_collision_normal,
        (const Object*)this
    );
}

Vector3 PhysicsTestMotionResult::get_collision_point() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_collision_point,
        (const Object*)this
    );
}

real_t PhysicsTestMotionResult::get_collision_safe_fraction() const {
    return rebel_icall_float(
        method_bindings.mb_get_collision_safe_fraction,
        (const Object*)this
    );
}

real_t PhysicsTestMotionResult::get_collision_unsafe_fraction() const {
    return rebel_icall_float(
        method_bindings.mb_get_collision_unsafe_fraction,
        (const Object*)this
    );
}

Vector3 PhysicsTestMotionResult::get_motion() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_motion,
        (const Object*)this
    );
}

Vector3 PhysicsTestMotionResult::get_motion_remainder() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_motion_remainder,
        (const Object*)this
    );
}

PhysicsTestMotionResult* PhysicsTestMotionResult::create() {
    return (PhysicsTestMotionResult*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PhysicsTestMotionResult")()
         );
}

void PhysicsTestMotionResult::init_method_bindings() {
    method_bindings.mb_get_collider =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_collider"
        );
    method_bindings.mb_get_collider_id =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_collider_id"
        );
    method_bindings.mb_get_collider_rid =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_collider_rid"
        );
    method_bindings.mb_get_collider_shape =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_collider_shape"
        );
    method_bindings.mb_get_collider_velocity =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_collider_velocity"
        );
    method_bindings.mb_get_collision_depth =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_collision_depth"
        );
    method_bindings.mb_get_collision_normal =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_collision_normal"
        );
    method_bindings.mb_get_collision_point =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_collision_point"
        );
    method_bindings.mb_get_collision_safe_fraction =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_collision_safe_fraction"
        );
    method_bindings.mb_get_collision_unsafe_fraction =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_collision_unsafe_fraction"
        );
    method_bindings.mb_get_motion =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_motion"
        );
    method_bindings.mb_get_motion_remainder =
        api->rebel_method_bind_get_method(
            "PhysicsTestMotionResult",
            "get_motion_remainder"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PhysicsTestMotionResult");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PhysicsTestMotionResult::MethodBindings PhysicsTestMotionResult::method_bindings = {};
void* PhysicsTestMotionResult::class_tag = nullptr;
} // namespace Rebel
