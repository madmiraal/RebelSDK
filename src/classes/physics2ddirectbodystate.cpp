// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physics2ddirectbodystate.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "classes/physics2ddirectspacestate.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Physics2DDirectBodyState::add_central_force(const Vector2 force) {
    rebel_icall_void_vector2(
        method_bindings.mb_add_central_force,
        (const Object*)this,
        force
    );
}

void Physics2DDirectBodyState::add_force(const Vector2 offset, const Vector2 force) {
    rebel_icall_void_vector2_vector2(
        method_bindings.mb_add_force,
        (const Object*)this,
        offset,
        force
    );
}

void Physics2DDirectBodyState::add_torque(const real_t torque) {
    rebel_icall_void_float(
        method_bindings.mb_add_torque,
        (const Object*)this,
        torque
    );
}

void Physics2DDirectBodyState::apply_central_impulse(const Vector2 impulse) {
    rebel_icall_void_vector2(
        method_bindings.mb_apply_central_impulse,
        (const Object*)this,
        impulse
    );
}

void Physics2DDirectBodyState::apply_impulse(const Vector2 offset, const Vector2 impulse) {
    rebel_icall_void_vector2_vector2(
        method_bindings.mb_apply_impulse,
        (const Object*)this,
        offset,
        impulse
    );
}

void Physics2DDirectBodyState::apply_torque_impulse(const real_t impulse) {
    rebel_icall_void_float(
        method_bindings.mb_apply_torque_impulse,
        (const Object*)this,
        impulse
    );
}

real_t Physics2DDirectBodyState::get_angular_velocity() const {
    return rebel_icall_float(
        method_bindings.mb_get_angular_velocity,
        (const Object*)this
    );
}

RID Physics2DDirectBodyState::get_contact_collider(const int64_t contact_idx) const {
    return rebel_icall_rid_int(
        method_bindings.mb_get_contact_collider,
        (const Object*)this,
        contact_idx
    );
}

int64_t Physics2DDirectBodyState::get_contact_collider_id(const int64_t contact_idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_contact_collider_id,
        (const Object*)this,
        contact_idx
    );
}

Object* Physics2DDirectBodyState::get_contact_collider_object(const int64_t contact_idx) const {
    return (Object*)rebel_icall_object_int(
        method_bindings.mb_get_contact_collider_object,
        (const Object*)this,
        contact_idx
    );
}

Vector2 Physics2DDirectBodyState::get_contact_collider_position(const int64_t contact_idx) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_contact_collider_position,
        (const Object*)this,
        contact_idx
    );
}

int64_t Physics2DDirectBodyState::get_contact_collider_shape(const int64_t contact_idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_contact_collider_shape,
        (const Object*)this,
        contact_idx
    );
}

Variant Physics2DDirectBodyState::get_contact_collider_shape_metadata(const int64_t contact_idx) const {
    return rebel_icall_variant_int(
        method_bindings.mb_get_contact_collider_shape_metadata,
        (const Object*)this,
        contact_idx
    );
}

Vector2 Physics2DDirectBodyState::get_contact_collider_velocity_at_position(const int64_t contact_idx) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_contact_collider_velocity_at_position,
        (const Object*)this,
        contact_idx
    );
}

int64_t Physics2DDirectBodyState::get_contact_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_contact_count,
        (const Object*)this
    );
}

Vector2 Physics2DDirectBodyState::get_contact_local_normal(const int64_t contact_idx) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_contact_local_normal,
        (const Object*)this,
        contact_idx
    );
}

Vector2 Physics2DDirectBodyState::get_contact_local_position(const int64_t contact_idx) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_contact_local_position,
        (const Object*)this,
        contact_idx
    );
}

int64_t Physics2DDirectBodyState::get_contact_local_shape(const int64_t contact_idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_contact_local_shape,
        (const Object*)this,
        contact_idx
    );
}

real_t Physics2DDirectBodyState::get_inverse_inertia() const {
    return rebel_icall_float(
        method_bindings.mb_get_inverse_inertia,
        (const Object*)this
    );
}

real_t Physics2DDirectBodyState::get_inverse_mass() const {
    return rebel_icall_float(
        method_bindings.mb_get_inverse_mass,
        (const Object*)this
    );
}

Vector2 Physics2DDirectBodyState::get_linear_velocity() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_linear_velocity,
        (const Object*)this
    );
}

Physics2DDirectSpaceState* Physics2DDirectBodyState::get_space_state() {
    return (Physics2DDirectSpaceState*)rebel_icall_object(
        method_bindings.mb_get_space_state,
        (const Object*)this
    );
}

real_t Physics2DDirectBodyState::get_step() const {
    return rebel_icall_float(
        method_bindings.mb_get_step,
        (const Object*)this
    );
}

real_t Physics2DDirectBodyState::get_total_angular_damp() const {
    return rebel_icall_float(
        method_bindings.mb_get_total_angular_damp,
        (const Object*)this
    );
}

Vector2 Physics2DDirectBodyState::get_total_gravity() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_total_gravity,
        (const Object*)this
    );
}

real_t Physics2DDirectBodyState::get_total_linear_damp() const {
    return rebel_icall_float(
        method_bindings.mb_get_total_linear_damp,
        (const Object*)this
    );
}

Transform2D Physics2DDirectBodyState::get_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_transform,
        (const Object*)this
    );
}

Vector2 Physics2DDirectBodyState::get_velocity_at_local_position(const Vector2 local_position) const {
    return rebel_icall_vector2_vector2(
        method_bindings.mb_get_velocity_at_local_position,
        (const Object*)this,
        local_position
    );
}

void Physics2DDirectBodyState::integrate_forces() {
    rebel_icall_void(
        method_bindings.mb_integrate_forces,
        (const Object*)this
    );
}

bool Physics2DDirectBodyState::is_sleeping() const {
    return rebel_icall_bool(
        method_bindings.mb_is_sleeping,
        (const Object*)this
    );
}

void Physics2DDirectBodyState::set_angular_velocity(const real_t velocity) {
    rebel_icall_void_float(
        method_bindings.mb_set_angular_velocity,
        (const Object*)this,
        velocity
    );
}

void Physics2DDirectBodyState::set_linear_velocity(const Vector2 velocity) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_linear_velocity,
        (const Object*)this,
        velocity
    );
}

void Physics2DDirectBodyState::set_sleep_state(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_sleep_state,
        (const Object*)this,
        enabled
    );
}

void Physics2DDirectBodyState::set_transform(const Transform2D transform) {
    rebel_icall_void_transform2d(
        method_bindings.mb_set_transform,
        (const Object*)this,
        transform
    );
}

void Physics2DDirectBodyState::init_method_bindings() {
    method_bindings.mb_add_central_force =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "add_central_force"
        );
    method_bindings.mb_add_force =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "add_force"
        );
    method_bindings.mb_add_torque =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "add_torque"
        );
    method_bindings.mb_apply_central_impulse =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "apply_central_impulse"
        );
    method_bindings.mb_apply_impulse =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "apply_impulse"
        );
    method_bindings.mb_apply_torque_impulse =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "apply_torque_impulse"
        );
    method_bindings.mb_get_angular_velocity =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_angular_velocity"
        );
    method_bindings.mb_get_contact_collider =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_contact_collider"
        );
    method_bindings.mb_get_contact_collider_id =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_contact_collider_id"
        );
    method_bindings.mb_get_contact_collider_object =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_contact_collider_object"
        );
    method_bindings.mb_get_contact_collider_position =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_contact_collider_position"
        );
    method_bindings.mb_get_contact_collider_shape =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_contact_collider_shape"
        );
    method_bindings.mb_get_contact_collider_shape_metadata =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_contact_collider_shape_metadata"
        );
    method_bindings.mb_get_contact_collider_velocity_at_position =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_contact_collider_velocity_at_position"
        );
    method_bindings.mb_get_contact_count =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_contact_count"
        );
    method_bindings.mb_get_contact_local_normal =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_contact_local_normal"
        );
    method_bindings.mb_get_contact_local_position =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_contact_local_position"
        );
    method_bindings.mb_get_contact_local_shape =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_contact_local_shape"
        );
    method_bindings.mb_get_inverse_inertia =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_inverse_inertia"
        );
    method_bindings.mb_get_inverse_mass =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_inverse_mass"
        );
    method_bindings.mb_get_linear_velocity =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_linear_velocity"
        );
    method_bindings.mb_get_space_state =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_space_state"
        );
    method_bindings.mb_get_step =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_step"
        );
    method_bindings.mb_get_total_angular_damp =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_total_angular_damp"
        );
    method_bindings.mb_get_total_gravity =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_total_gravity"
        );
    method_bindings.mb_get_total_linear_damp =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_total_linear_damp"
        );
    method_bindings.mb_get_transform =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_transform"
        );
    method_bindings.mb_get_velocity_at_local_position =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "get_velocity_at_local_position"
        );
    method_bindings.mb_integrate_forces =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "integrate_forces"
        );
    method_bindings.mb_is_sleeping =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "is_sleeping"
        );
    method_bindings.mb_set_angular_velocity =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "set_angular_velocity"
        );
    method_bindings.mb_set_linear_velocity =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "set_linear_velocity"
        );
    method_bindings.mb_set_sleep_state =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "set_sleep_state"
        );
    method_bindings.mb_set_transform =
        api->rebel_method_bind_get_method(
            "Physics2DDirectBodyState",
            "set_transform"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Physics2DDirectBodyState");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Physics2DDirectBodyState::MethodBindings Physics2DDirectBodyState::method_bindings = {};
void* Physics2DDirectBodyState::class_tag = nullptr;
} // namespace Rebel
