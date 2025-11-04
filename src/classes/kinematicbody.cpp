// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/kinematicbody.h"

#include "classes/icalls.h"
#include "classes/kinematiccollision.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void KinematicBody::_direct_state_changed(const Object* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__direct_state_changed,
        (const Object*)this,
        arg0
    );
}

bool KinematicBody::get_axis_lock(const int64_t axis) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_axis_lock,
        (const Object*)this,
        axis
    );
}

real_t KinematicBody::get_floor_angle(const Vector3 up_direction) const {
    return rebel_icall_float_vector3(
        method_bindings.mb_get_floor_angle,
        (const Object*)this,
        up_direction
    );
}

Vector3 KinematicBody::get_floor_normal() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_floor_normal,
        (const Object*)this
    );
}

Vector3 KinematicBody::get_floor_velocity() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_floor_velocity,
        (const Object*)this
    );
}

Ref<KinematicCollision> KinematicBody::get_last_slide_collision() {
    return Ref<KinematicCollision>::create_ref(rebel_icall_object(
        method_bindings.mb_get_last_slide_collision,
        (const Object*)this
    ));
}

real_t KinematicBody::get_safe_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_safe_margin,
        (const Object*)this
    );
}

Ref<KinematicCollision> KinematicBody::get_slide_collision(const int64_t slide_idx) {
    return Ref<KinematicCollision>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_slide_collision,
        (const Object*)this,
        slide_idx
    ));
}

int64_t KinematicBody::get_slide_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_slide_count,
        (const Object*)this
    );
}

bool KinematicBody::is_on_ceiling() const {
    return rebel_icall_bool(
        method_bindings.mb_is_on_ceiling,
        (const Object*)this
    );
}

bool KinematicBody::is_on_floor() const {
    return rebel_icall_bool(
        method_bindings.mb_is_on_floor,
        (const Object*)this
    );
}

bool KinematicBody::is_on_wall() const {
    return rebel_icall_bool(
        method_bindings.mb_is_on_wall,
        (const Object*)this
    );
}

bool KinematicBody::is_sync_to_physics_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_sync_to_physics_enabled,
        (const Object*)this
    );
}

Ref<KinematicCollision> KinematicBody::move_and_collide(const Vector3 rel_vec, const bool infinite_inertia, const bool exclude_raycast_shapes, const bool test_only) {
    return Ref<KinematicCollision>::create_ref(rebel_icall_object_vector3_bool_bool_bool(
        method_bindings.mb_move_and_collide,
        (const Object*)this,
        rel_vec,
        infinite_inertia,
        exclude_raycast_shapes,
        test_only
    ));
}

Vector3 KinematicBody::move_and_slide(const Vector3 linear_velocity, const Vector3 up_direction, const bool stop_on_slope, const int64_t max_slides, const real_t floor_max_angle, const bool infinite_inertia) {
    return rebel_icall_vector3_vector3_vector3_bool_int_float_bool(
        method_bindings.mb_move_and_slide,
        (const Object*)this,
        linear_velocity,
        up_direction,
        stop_on_slope,
        max_slides,
        floor_max_angle,
        infinite_inertia
    );
}

Vector3 KinematicBody::move_and_slide_with_snap(const Vector3 linear_velocity, const Vector3 snap, const Vector3 up_direction, const bool stop_on_slope, const int64_t max_slides, const real_t floor_max_angle, const bool infinite_inertia) {
    return rebel_icall_vector3_vector3_vector3_vector3_bool_int_float_bool(
        method_bindings.mb_move_and_slide_with_snap,
        (const Object*)this,
        linear_velocity,
        snap,
        up_direction,
        stop_on_slope,
        max_slides,
        floor_max_angle,
        infinite_inertia
    );
}

void KinematicBody::set_axis_lock(const int64_t axis, const bool lock) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_axis_lock,
        (const Object*)this,
        axis,
        lock
    );
}

void KinematicBody::set_safe_margin(const real_t pixels) {
    rebel_icall_void_float(
        method_bindings.mb_set_safe_margin,
        (const Object*)this,
        pixels
    );
}

void KinematicBody::set_sync_to_physics(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_sync_to_physics,
        (const Object*)this,
        enable
    );
}

bool KinematicBody::test_move(const Transform from, const Vector3 rel_vec, const bool infinite_inertia) {
    return rebel_icall_bool_transform_vector3_bool(
        method_bindings.mb_test_move,
        (const Object*)this,
        from,
        rel_vec,
        infinite_inertia
    );
}

KinematicBody* KinematicBody::create() {
    return (KinematicBody*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"KinematicBody")()
         );
}

void KinematicBody::init_method_bindings() {
    method_bindings.mb__direct_state_changed =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "_direct_state_changed"
        );
    method_bindings.mb_get_axis_lock =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "get_axis_lock"
        );
    method_bindings.mb_get_floor_angle =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "get_floor_angle"
        );
    method_bindings.mb_get_floor_normal =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "get_floor_normal"
        );
    method_bindings.mb_get_floor_velocity =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "get_floor_velocity"
        );
    method_bindings.mb_get_last_slide_collision =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "get_last_slide_collision"
        );
    method_bindings.mb_get_safe_margin =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "get_safe_margin"
        );
    method_bindings.mb_get_slide_collision =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "get_slide_collision"
        );
    method_bindings.mb_get_slide_count =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "get_slide_count"
        );
    method_bindings.mb_is_on_ceiling =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "is_on_ceiling"
        );
    method_bindings.mb_is_on_floor =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "is_on_floor"
        );
    method_bindings.mb_is_on_wall =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "is_on_wall"
        );
    method_bindings.mb_is_sync_to_physics_enabled =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "is_sync_to_physics_enabled"
        );
    method_bindings.mb_move_and_collide =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "move_and_collide"
        );
    method_bindings.mb_move_and_slide =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "move_and_slide"
        );
    method_bindings.mb_move_and_slide_with_snap =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "move_and_slide_with_snap"
        );
    method_bindings.mb_set_axis_lock =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "set_axis_lock"
        );
    method_bindings.mb_set_safe_margin =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "set_safe_margin"
        );
    method_bindings.mb_set_sync_to_physics =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "set_sync_to_physics"
        );
    method_bindings.mb_test_move =
        api->rebel_method_bind_get_method(
            "KinematicBody",
            "test_move"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "KinematicBody");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

KinematicBody::MethodBindings KinematicBody::method_bindings = {};
void* KinematicBody::class_tag = nullptr;
} // namespace Rebel
