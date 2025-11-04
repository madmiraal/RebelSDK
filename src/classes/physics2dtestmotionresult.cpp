// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physics2dtestmotionresult.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Object* Physics2DTestMotionResult::get_collider() const {
    return (Object*)rebel_icall_object(
        method_bindings.mb_get_collider,
        (const Object*)this
    );
}

int64_t Physics2DTestMotionResult::get_collider_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_collider_id,
        (const Object*)this
    );
}

RID Physics2DTestMotionResult::get_collider_rid() const {
    return rebel_icall_rid(
        method_bindings.mb_get_collider_rid,
        (const Object*)this
    );
}

int64_t Physics2DTestMotionResult::get_collider_shape() const {
    return rebel_icall_int(
        method_bindings.mb_get_collider_shape,
        (const Object*)this
    );
}

Vector2 Physics2DTestMotionResult::get_collider_velocity() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_collider_velocity,
        (const Object*)this
    );
}

real_t Physics2DTestMotionResult::get_collision_depth() const {
    return rebel_icall_float(
        method_bindings.mb_get_collision_depth,
        (const Object*)this
    );
}

Vector2 Physics2DTestMotionResult::get_collision_normal() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_collision_normal,
        (const Object*)this
    );
}

Vector2 Physics2DTestMotionResult::get_collision_point() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_collision_point,
        (const Object*)this
    );
}

real_t Physics2DTestMotionResult::get_collision_safe_fraction() const {
    return rebel_icall_float(
        method_bindings.mb_get_collision_safe_fraction,
        (const Object*)this
    );
}

real_t Physics2DTestMotionResult::get_collision_unsafe_fraction() const {
    return rebel_icall_float(
        method_bindings.mb_get_collision_unsafe_fraction,
        (const Object*)this
    );
}

Vector2 Physics2DTestMotionResult::get_motion() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_motion,
        (const Object*)this
    );
}

Vector2 Physics2DTestMotionResult::get_motion_remainder() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_motion_remainder,
        (const Object*)this
    );
}

Physics2DTestMotionResult* Physics2DTestMotionResult::create() {
    return (Physics2DTestMotionResult*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Physics2DTestMotionResult")()
         );
}

void Physics2DTestMotionResult::init_method_bindings() {
    method_bindings.mb_get_collider =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_collider"
        );
    method_bindings.mb_get_collider_id =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_collider_id"
        );
    method_bindings.mb_get_collider_rid =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_collider_rid"
        );
    method_bindings.mb_get_collider_shape =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_collider_shape"
        );
    method_bindings.mb_get_collider_velocity =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_collider_velocity"
        );
    method_bindings.mb_get_collision_depth =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_collision_depth"
        );
    method_bindings.mb_get_collision_normal =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_collision_normal"
        );
    method_bindings.mb_get_collision_point =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_collision_point"
        );
    method_bindings.mb_get_collision_safe_fraction =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_collision_safe_fraction"
        );
    method_bindings.mb_get_collision_unsafe_fraction =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_collision_unsafe_fraction"
        );
    method_bindings.mb_get_motion =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_motion"
        );
    method_bindings.mb_get_motion_remainder =
        api->rebel_method_bind_get_method(
            "Physics2DTestMotionResult",
            "get_motion_remainder"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Physics2DTestMotionResult");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Physics2DTestMotionResult::MethodBindings Physics2DTestMotionResult::method_bindings = {};
void* Physics2DTestMotionResult::class_tag = nullptr;
} // namespace Rebel
