// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physicsserver.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "classes/physicsdirectbodystate.h"
#include "classes/physicsdirectspacestate.h"
#include "classes/physicstestmotionresult.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void PhysicsServer::area_add_shape(const RID area, const RID shape, const Transform transform, const bool disabled) {
    rebel_icall_void_rid_rid_transform_bool(
        method_bindings.mb_area_add_shape,
        (const Object*)this,
        area,
        shape,
        transform,
        disabled
    );
}

void PhysicsServer::area_attach_object_instance_id(const RID area, const int64_t id) {
    rebel_icall_void_rid_int(
        method_bindings.mb_area_attach_object_instance_id,
        (const Object*)this,
        area,
        id
    );
}

void PhysicsServer::area_clear_shapes(const RID area) {
    rebel_icall_void_rid(
        method_bindings.mb_area_clear_shapes,
        (const Object*)this,
        area
    );
}

RID PhysicsServer::area_create() {
    return rebel_icall_rid(
        method_bindings.mb_area_create,
        (const Object*)this
    );
}

int64_t PhysicsServer::area_get_object_instance_id(const RID area) const {
    return rebel_icall_int_rid(
        method_bindings.mb_area_get_object_instance_id,
        (const Object*)this,
        area
    );
}

Variant PhysicsServer::area_get_param(const RID area, const int64_t param) const {
    return rebel_icall_variant_rid_int(
        method_bindings.mb_area_get_param,
        (const Object*)this,
        area,
        param
    );
}

RID PhysicsServer::area_get_shape(const RID area, const int64_t shape_idx) const {
    return rebel_icall_rid_rid_int(
        method_bindings.mb_area_get_shape,
        (const Object*)this,
        area,
        shape_idx
    );
}

int64_t PhysicsServer::area_get_shape_count(const RID area) const {
    return rebel_icall_int_rid(
        method_bindings.mb_area_get_shape_count,
        (const Object*)this,
        area
    );
}

Transform PhysicsServer::area_get_shape_transform(const RID area, const int64_t shape_idx) const {
    return rebel_icall_transform_rid_int(
        method_bindings.mb_area_get_shape_transform,
        (const Object*)this,
        area,
        shape_idx
    );
}

RID PhysicsServer::area_get_space(const RID area) const {
    return rebel_icall_rid_rid(
        method_bindings.mb_area_get_space,
        (const Object*)this,
        area
    );
}

PhysicsServer::AreaSpaceOverrideMode PhysicsServer::area_get_space_override_mode(const RID area) const {
    return (PhysicsServer::AreaSpaceOverrideMode)rebel_icall_int_rid(
        method_bindings.mb_area_get_space_override_mode,
        (const Object*)this,
        area
    );
}

Transform PhysicsServer::area_get_transform(const RID area) const {
    return rebel_icall_transform_rid(
        method_bindings.mb_area_get_transform,
        (const Object*)this,
        area
    );
}

bool PhysicsServer::area_is_ray_pickable(const RID area) const {
    return rebel_icall_bool_rid(
        method_bindings.mb_area_is_ray_pickable,
        (const Object*)this,
        area
    );
}

void PhysicsServer::area_remove_shape(const RID area, const int64_t shape_idx) {
    rebel_icall_void_rid_int(
        method_bindings.mb_area_remove_shape,
        (const Object*)this,
        area,
        shape_idx
    );
}

void PhysicsServer::area_set_area_monitor_callback(const RID area, const Object* receiver, const String method) {
    rebel_icall_void_rid_object_string(
        method_bindings.mb_area_set_area_monitor_callback,
        (const Object*)this,
        area,
        receiver,
        method
    );
}

void PhysicsServer::area_set_collision_layer(const RID area, const int64_t layer) {
    rebel_icall_void_rid_int(
        method_bindings.mb_area_set_collision_layer,
        (const Object*)this,
        area,
        layer
    );
}

void PhysicsServer::area_set_collision_mask(const RID area, const int64_t mask) {
    rebel_icall_void_rid_int(
        method_bindings.mb_area_set_collision_mask,
        (const Object*)this,
        area,
        mask
    );
}

void PhysicsServer::area_set_monitor_callback(const RID area, const Object* receiver, const String method) {
    rebel_icall_void_rid_object_string(
        method_bindings.mb_area_set_monitor_callback,
        (const Object*)this,
        area,
        receiver,
        method
    );
}

void PhysicsServer::area_set_monitorable(const RID area, const bool monitorable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_area_set_monitorable,
        (const Object*)this,
        area,
        monitorable
    );
}

void PhysicsServer::area_set_param(const RID area, const int64_t param, const Variant value) {
    rebel_icall_void_rid_int_variant(
        method_bindings.mb_area_set_param,
        (const Object*)this,
        area,
        param,
        value
    );
}

void PhysicsServer::area_set_ray_pickable(const RID area, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_area_set_ray_pickable,
        (const Object*)this,
        area,
        enable
    );
}

void PhysicsServer::area_set_shape(const RID area, const int64_t shape_idx, const RID shape) {
    rebel_icall_void_rid_int_rid(
        method_bindings.mb_area_set_shape,
        (const Object*)this,
        area,
        shape_idx,
        shape
    );
}

void PhysicsServer::area_set_shape_disabled(const RID area, const int64_t shape_idx, const bool disabled) {
    rebel_icall_void_rid_int_bool(
        method_bindings.mb_area_set_shape_disabled,
        (const Object*)this,
        area,
        shape_idx,
        disabled
    );
}

void PhysicsServer::area_set_shape_transform(const RID area, const int64_t shape_idx, const Transform transform) {
    rebel_icall_void_rid_int_transform(
        method_bindings.mb_area_set_shape_transform,
        (const Object*)this,
        area,
        shape_idx,
        transform
    );
}

void PhysicsServer::area_set_space(const RID area, const RID space) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_area_set_space,
        (const Object*)this,
        area,
        space
    );
}

void PhysicsServer::area_set_space_override_mode(const RID area, const int64_t mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_area_set_space_override_mode,
        (const Object*)this,
        area,
        mode
    );
}

void PhysicsServer::area_set_transform(const RID area, const Transform transform) {
    rebel_icall_void_rid_transform(
        method_bindings.mb_area_set_transform,
        (const Object*)this,
        area,
        transform
    );
}

void PhysicsServer::body_add_central_force(const RID body, const Vector3 force) {
    rebel_icall_void_rid_vector3(
        method_bindings.mb_body_add_central_force,
        (const Object*)this,
        body,
        force
    );
}

void PhysicsServer::body_add_collision_exception(const RID body, const RID excepted_body) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_body_add_collision_exception,
        (const Object*)this,
        body,
        excepted_body
    );
}

void PhysicsServer::body_add_force(const RID body, const Vector3 force, const Vector3 position) {
    rebel_icall_void_rid_vector3_vector3(
        method_bindings.mb_body_add_force,
        (const Object*)this,
        body,
        force,
        position
    );
}

void PhysicsServer::body_add_shape(const RID body, const RID shape, const Transform transform, const bool disabled) {
    rebel_icall_void_rid_rid_transform_bool(
        method_bindings.mb_body_add_shape,
        (const Object*)this,
        body,
        shape,
        transform,
        disabled
    );
}

void PhysicsServer::body_add_torque(const RID body, const Vector3 torque) {
    rebel_icall_void_rid_vector3(
        method_bindings.mb_body_add_torque,
        (const Object*)this,
        body,
        torque
    );
}

void PhysicsServer::body_apply_central_impulse(const RID body, const Vector3 impulse) {
    rebel_icall_void_rid_vector3(
        method_bindings.mb_body_apply_central_impulse,
        (const Object*)this,
        body,
        impulse
    );
}

void PhysicsServer::body_apply_impulse(const RID body, const Vector3 position, const Vector3 impulse) {
    rebel_icall_void_rid_vector3_vector3(
        method_bindings.mb_body_apply_impulse,
        (const Object*)this,
        body,
        position,
        impulse
    );
}

void PhysicsServer::body_apply_torque_impulse(const RID body, const Vector3 impulse) {
    rebel_icall_void_rid_vector3(
        method_bindings.mb_body_apply_torque_impulse,
        (const Object*)this,
        body,
        impulse
    );
}

void PhysicsServer::body_attach_object_instance_id(const RID body, const int64_t id) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_attach_object_instance_id,
        (const Object*)this,
        body,
        id
    );
}

void PhysicsServer::body_clear_shapes(const RID body) {
    rebel_icall_void_rid(
        method_bindings.mb_body_clear_shapes,
        (const Object*)this,
        body
    );
}

RID PhysicsServer::body_create(const int64_t mode, const bool init_sleeping) {
    return rebel_icall_rid_int_bool(
        method_bindings.mb_body_create,
        (const Object*)this,
        mode,
        init_sleeping
    );
}

int64_t PhysicsServer::body_get_collision_layer(const RID body) const {
    return rebel_icall_int_rid(
        method_bindings.mb_body_get_collision_layer,
        (const Object*)this,
        body
    );
}

int64_t PhysicsServer::body_get_collision_mask(const RID body) const {
    return rebel_icall_int_rid(
        method_bindings.mb_body_get_collision_mask,
        (const Object*)this,
        body
    );
}

PhysicsDirectBodyState* PhysicsServer::body_get_direct_state(const RID body) {
    return (PhysicsDirectBodyState*)rebel_icall_object_rid(
        method_bindings.mb_body_get_direct_state,
        (const Object*)this,
        body
    );
}

real_t PhysicsServer::body_get_kinematic_safe_margin(const RID body) const {
    return rebel_icall_float_rid(
        method_bindings.mb_body_get_kinematic_safe_margin,
        (const Object*)this,
        body
    );
}

int64_t PhysicsServer::body_get_max_contacts_reported(const RID body) const {
    return rebel_icall_int_rid(
        method_bindings.mb_body_get_max_contacts_reported,
        (const Object*)this,
        body
    );
}

PhysicsServer::BodyMode PhysicsServer::body_get_mode(const RID body) const {
    return (PhysicsServer::BodyMode)rebel_icall_int_rid(
        method_bindings.mb_body_get_mode,
        (const Object*)this,
        body
    );
}

int64_t PhysicsServer::body_get_object_instance_id(const RID body) const {
    return rebel_icall_int_rid(
        method_bindings.mb_body_get_object_instance_id,
        (const Object*)this,
        body
    );
}

real_t PhysicsServer::body_get_param(const RID body, const int64_t param) const {
    return rebel_icall_float_rid_int(
        method_bindings.mb_body_get_param,
        (const Object*)this,
        body,
        param
    );
}

RID PhysicsServer::body_get_shape(const RID body, const int64_t shape_idx) const {
    return rebel_icall_rid_rid_int(
        method_bindings.mb_body_get_shape,
        (const Object*)this,
        body,
        shape_idx
    );
}

int64_t PhysicsServer::body_get_shape_count(const RID body) const {
    return rebel_icall_int_rid(
        method_bindings.mb_body_get_shape_count,
        (const Object*)this,
        body
    );
}

Transform PhysicsServer::body_get_shape_transform(const RID body, const int64_t shape_idx) const {
    return rebel_icall_transform_rid_int(
        method_bindings.mb_body_get_shape_transform,
        (const Object*)this,
        body,
        shape_idx
    );
}

RID PhysicsServer::body_get_space(const RID body) const {
    return rebel_icall_rid_rid(
        method_bindings.mb_body_get_space,
        (const Object*)this,
        body
    );
}

Variant PhysicsServer::body_get_state(const RID body, const int64_t state) const {
    return rebel_icall_variant_rid_int(
        method_bindings.mb_body_get_state,
        (const Object*)this,
        body,
        state
    );
}

bool PhysicsServer::body_is_axis_locked(const RID body, const int64_t axis) const {
    return rebel_icall_bool_rid_int(
        method_bindings.mb_body_is_axis_locked,
        (const Object*)this,
        body,
        axis
    );
}

bool PhysicsServer::body_is_continuous_collision_detection_enabled(const RID body) const {
    return rebel_icall_bool_rid(
        method_bindings.mb_body_is_continuous_collision_detection_enabled,
        (const Object*)this,
        body
    );
}

bool PhysicsServer::body_is_omitting_force_integration(const RID body) const {
    return rebel_icall_bool_rid(
        method_bindings.mb_body_is_omitting_force_integration,
        (const Object*)this,
        body
    );
}

bool PhysicsServer::body_is_ray_pickable(const RID body) const {
    return rebel_icall_bool_rid(
        method_bindings.mb_body_is_ray_pickable,
        (const Object*)this,
        body
    );
}

void PhysicsServer::body_remove_collision_exception(const RID body, const RID excepted_body) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_body_remove_collision_exception,
        (const Object*)this,
        body,
        excepted_body
    );
}

void PhysicsServer::body_remove_shape(const RID body, const int64_t shape_idx) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_remove_shape,
        (const Object*)this,
        body,
        shape_idx
    );
}

void PhysicsServer::body_set_axis_lock(const RID body, const int64_t axis, const bool lock) {
    rebel_icall_void_rid_int_bool(
        method_bindings.mb_body_set_axis_lock,
        (const Object*)this,
        body,
        axis,
        lock
    );
}

void PhysicsServer::body_set_axis_velocity(const RID body, const Vector3 axis_velocity) {
    rebel_icall_void_rid_vector3(
        method_bindings.mb_body_set_axis_velocity,
        (const Object*)this,
        body,
        axis_velocity
    );
}

void PhysicsServer::body_set_collision_layer(const RID body, const int64_t layer) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_set_collision_layer,
        (const Object*)this,
        body,
        layer
    );
}

void PhysicsServer::body_set_collision_mask(const RID body, const int64_t mask) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_set_collision_mask,
        (const Object*)this,
        body,
        mask
    );
}

void PhysicsServer::body_set_enable_continuous_collision_detection(const RID body, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_body_set_enable_continuous_collision_detection,
        (const Object*)this,
        body,
        enable
    );
}

void PhysicsServer::body_set_force_integration_callback(const RID body, const Object* receiver, const String method, const Variant userdata) {
    rebel_icall_void_rid_object_string_variant(
        method_bindings.mb_body_set_force_integration_callback,
        (const Object*)this,
        body,
        receiver,
        method,
        userdata
    );
}

void PhysicsServer::body_set_kinematic_safe_margin(const RID body, const real_t margin) {
    rebel_icall_void_rid_float(
        method_bindings.mb_body_set_kinematic_safe_margin,
        (const Object*)this,
        body,
        margin
    );
}

void PhysicsServer::body_set_max_contacts_reported(const RID body, const int64_t amount) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_set_max_contacts_reported,
        (const Object*)this,
        body,
        amount
    );
}

void PhysicsServer::body_set_mode(const RID body, const int64_t mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_set_mode,
        (const Object*)this,
        body,
        mode
    );
}

void PhysicsServer::body_set_omit_force_integration(const RID body, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_body_set_omit_force_integration,
        (const Object*)this,
        body,
        enable
    );
}

void PhysicsServer::body_set_param(const RID body, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_body_set_param,
        (const Object*)this,
        body,
        param,
        value
    );
}

void PhysicsServer::body_set_ray_pickable(const RID body, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_body_set_ray_pickable,
        (const Object*)this,
        body,
        enable
    );
}

void PhysicsServer::body_set_shape(const RID body, const int64_t shape_idx, const RID shape) {
    rebel_icall_void_rid_int_rid(
        method_bindings.mb_body_set_shape,
        (const Object*)this,
        body,
        shape_idx,
        shape
    );
}

void PhysicsServer::body_set_shape_disabled(const RID body, const int64_t shape_idx, const bool disabled) {
    rebel_icall_void_rid_int_bool(
        method_bindings.mb_body_set_shape_disabled,
        (const Object*)this,
        body,
        shape_idx,
        disabled
    );
}

void PhysicsServer::body_set_shape_transform(const RID body, const int64_t shape_idx, const Transform transform) {
    rebel_icall_void_rid_int_transform(
        method_bindings.mb_body_set_shape_transform,
        (const Object*)this,
        body,
        shape_idx,
        transform
    );
}

void PhysicsServer::body_set_space(const RID body, const RID space) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_body_set_space,
        (const Object*)this,
        body,
        space
    );
}

void PhysicsServer::body_set_state(const RID body, const int64_t state, const Variant value) {
    rebel_icall_void_rid_int_variant(
        method_bindings.mb_body_set_state,
        (const Object*)this,
        body,
        state,
        value
    );
}

bool PhysicsServer::body_test_motion(const RID body, const Transform from, const Vector3 motion, const bool infinite_inertia, const Ref<PhysicsTestMotionResult> result, const bool exclude_raycast_shapes, const Array exclude) {
    return rebel_icall_bool_rid_transform_vector3_bool_object_bool_array(
        method_bindings.mb_body_test_motion,
        (const Object*)this,
        body,
        from,
        motion,
        infinite_inertia,
        result.ptr(),
        exclude_raycast_shapes,
        exclude
    );
}

real_t PhysicsServer::cone_twist_joint_get_param(const RID joint, const int64_t param) const {
    return rebel_icall_float_rid_int(
        method_bindings.mb_cone_twist_joint_get_param,
        (const Object*)this,
        joint,
        param
    );
}

void PhysicsServer::cone_twist_joint_set_param(const RID joint, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_cone_twist_joint_set_param,
        (const Object*)this,
        joint,
        param,
        value
    );
}

void PhysicsServer::free_rid(const RID rid) {
    rebel_icall_void_rid(
        method_bindings.mb_free_rid,
        (const Object*)this,
        rid
    );
}

bool PhysicsServer::generic_6dof_joint_get_flag(const RID joint, const int64_t axis, const int64_t flag) {
    return rebel_icall_bool_rid_int_int(
        method_bindings.mb_generic_6dof_joint_get_flag,
        (const Object*)this,
        joint,
        axis,
        flag
    );
}

real_t PhysicsServer::generic_6dof_joint_get_param(const RID joint, const int64_t axis, const int64_t param) {
    return rebel_icall_float_rid_int_int(
        method_bindings.mb_generic_6dof_joint_get_param,
        (const Object*)this,
        joint,
        axis,
        param
    );
}

void PhysicsServer::generic_6dof_joint_set_flag(const RID joint, const int64_t axis, const int64_t flag, const bool enable) {
    rebel_icall_void_rid_int_int_bool(
        method_bindings.mb_generic_6dof_joint_set_flag,
        (const Object*)this,
        joint,
        axis,
        flag,
        enable
    );
}

void PhysicsServer::generic_6dof_joint_set_param(const RID joint, const int64_t axis, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_int_float(
        method_bindings.mb_generic_6dof_joint_set_param,
        (const Object*)this,
        joint,
        axis,
        param,
        value
    );
}

int64_t PhysicsServer::get_process_info(const int64_t process_info) {
    return rebel_icall_int_int(
        method_bindings.mb_get_process_info,
        (const Object*)this,
        process_info
    );
}

bool PhysicsServer::hinge_joint_get_flag(const RID joint, const int64_t flag) const {
    return rebel_icall_bool_rid_int(
        method_bindings.mb_hinge_joint_get_flag,
        (const Object*)this,
        joint,
        flag
    );
}

real_t PhysicsServer::hinge_joint_get_param(const RID joint, const int64_t param) const {
    return rebel_icall_float_rid_int(
        method_bindings.mb_hinge_joint_get_param,
        (const Object*)this,
        joint,
        param
    );
}

void PhysicsServer::hinge_joint_set_flag(const RID joint, const int64_t flag, const bool enabled) {
    rebel_icall_void_rid_int_bool(
        method_bindings.mb_hinge_joint_set_flag,
        (const Object*)this,
        joint,
        flag,
        enabled
    );
}

void PhysicsServer::hinge_joint_set_param(const RID joint, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_hinge_joint_set_param,
        (const Object*)this,
        joint,
        param,
        value
    );
}

RID PhysicsServer::joint_create_cone_twist(const RID body_A, const Transform local_ref_A, const RID body_B, const Transform local_ref_B) {
    return rebel_icall_rid_rid_transform_rid_transform(
        method_bindings.mb_joint_create_cone_twist,
        (const Object*)this,
        body_A,
        local_ref_A,
        body_B,
        local_ref_B
    );
}

RID PhysicsServer::joint_create_generic_6dof(const RID body_A, const Transform local_ref_A, const RID body_B, const Transform local_ref_B) {
    return rebel_icall_rid_rid_transform_rid_transform(
        method_bindings.mb_joint_create_generic_6dof,
        (const Object*)this,
        body_A,
        local_ref_A,
        body_B,
        local_ref_B
    );
}

RID PhysicsServer::joint_create_hinge(const RID body_A, const Transform hinge_A, const RID body_B, const Transform hinge_B) {
    return rebel_icall_rid_rid_transform_rid_transform(
        method_bindings.mb_joint_create_hinge,
        (const Object*)this,
        body_A,
        hinge_A,
        body_B,
        hinge_B
    );
}

RID PhysicsServer::joint_create_pin(const RID body_A, const Vector3 local_A, const RID body_B, const Vector3 local_B) {
    return rebel_icall_rid_rid_vector3_rid_vector3(
        method_bindings.mb_joint_create_pin,
        (const Object*)this,
        body_A,
        local_A,
        body_B,
        local_B
    );
}

RID PhysicsServer::joint_create_slider(const RID body_A, const Transform local_ref_A, const RID body_B, const Transform local_ref_B) {
    return rebel_icall_rid_rid_transform_rid_transform(
        method_bindings.mb_joint_create_slider,
        (const Object*)this,
        body_A,
        local_ref_A,
        body_B,
        local_ref_B
    );
}

int64_t PhysicsServer::joint_get_solver_priority(const RID joint) const {
    return rebel_icall_int_rid(
        method_bindings.mb_joint_get_solver_priority,
        (const Object*)this,
        joint
    );
}

PhysicsServer::JointType PhysicsServer::joint_get_type(const RID joint) const {
    return (PhysicsServer::JointType)rebel_icall_int_rid(
        method_bindings.mb_joint_get_type,
        (const Object*)this,
        joint
    );
}

void PhysicsServer::joint_set_solver_priority(const RID joint, const int64_t priority) {
    rebel_icall_void_rid_int(
        method_bindings.mb_joint_set_solver_priority,
        (const Object*)this,
        joint,
        priority
    );
}

Vector3 PhysicsServer::pin_joint_get_local_a(const RID joint) const {
    return rebel_icall_vector3_rid(
        method_bindings.mb_pin_joint_get_local_a,
        (const Object*)this,
        joint
    );
}

Vector3 PhysicsServer::pin_joint_get_local_b(const RID joint) const {
    return rebel_icall_vector3_rid(
        method_bindings.mb_pin_joint_get_local_b,
        (const Object*)this,
        joint
    );
}

real_t PhysicsServer::pin_joint_get_param(const RID joint, const int64_t param) const {
    return rebel_icall_float_rid_int(
        method_bindings.mb_pin_joint_get_param,
        (const Object*)this,
        joint,
        param
    );
}

void PhysicsServer::pin_joint_set_local_a(const RID joint, const Vector3 local_A) {
    rebel_icall_void_rid_vector3(
        method_bindings.mb_pin_joint_set_local_a,
        (const Object*)this,
        joint,
        local_A
    );
}

void PhysicsServer::pin_joint_set_local_b(const RID joint, const Vector3 local_B) {
    rebel_icall_void_rid_vector3(
        method_bindings.mb_pin_joint_set_local_b,
        (const Object*)this,
        joint,
        local_B
    );
}

void PhysicsServer::pin_joint_set_param(const RID joint, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_pin_joint_set_param,
        (const Object*)this,
        joint,
        param,
        value
    );
}

void PhysicsServer::set_active(const bool active) {
    rebel_icall_void_bool(
        method_bindings.mb_set_active,
        (const Object*)this,
        active
    );
}

void PhysicsServer::set_collision_iterations(const int64_t iterations) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_iterations,
        (const Object*)this,
        iterations
    );
}

RID PhysicsServer::shape_create(const int64_t type) {
    return rebel_icall_rid_int(
        method_bindings.mb_shape_create,
        (const Object*)this,
        type
    );
}

Variant PhysicsServer::shape_get_data(const RID shape) const {
    return rebel_icall_variant_rid(
        method_bindings.mb_shape_get_data,
        (const Object*)this,
        shape
    );
}

PhysicsServer::ShapeType PhysicsServer::shape_get_type(const RID shape) const {
    return (PhysicsServer::ShapeType)rebel_icall_int_rid(
        method_bindings.mb_shape_get_type,
        (const Object*)this,
        shape
    );
}

void PhysicsServer::shape_set_data(const RID shape, const Variant data) {
    rebel_icall_void_rid_variant(
        method_bindings.mb_shape_set_data,
        (const Object*)this,
        shape,
        data
    );
}

real_t PhysicsServer::slider_joint_get_param(const RID joint, const int64_t param) const {
    return rebel_icall_float_rid_int(
        method_bindings.mb_slider_joint_get_param,
        (const Object*)this,
        joint,
        param
    );
}

void PhysicsServer::slider_joint_set_param(const RID joint, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_slider_joint_set_param,
        (const Object*)this,
        joint,
        param,
        value
    );
}

RID PhysicsServer::space_create() {
    return rebel_icall_rid(
        method_bindings.mb_space_create,
        (const Object*)this
    );
}

PhysicsDirectSpaceState* PhysicsServer::space_get_direct_state(const RID space) {
    return (PhysicsDirectSpaceState*)rebel_icall_object_rid(
        method_bindings.mb_space_get_direct_state,
        (const Object*)this,
        space
    );
}

real_t PhysicsServer::space_get_param(const RID space, const int64_t param) const {
    return rebel_icall_float_rid_int(
        method_bindings.mb_space_get_param,
        (const Object*)this,
        space,
        param
    );
}

bool PhysicsServer::space_is_active(const RID space) const {
    return rebel_icall_bool_rid(
        method_bindings.mb_space_is_active,
        (const Object*)this,
        space
    );
}

void PhysicsServer::space_set_active(const RID space, const bool active) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_space_set_active,
        (const Object*)this,
        space,
        active
    );
}

void PhysicsServer::space_set_param(const RID space, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_space_set_param,
        (const Object*)this,
        space,
        param,
        value
    );
}

PhysicsServer* PhysicsServer::singleton = nullptr;

PhysicsServer::PhysicsServer() {
    owner = api->rebel_global_get_singleton((char*) "PhysicsServer");
}

void PhysicsServer::init_method_bindings() {
    method_bindings.mb_area_add_shape =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_add_shape"
        );
    method_bindings.mb_area_attach_object_instance_id =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_attach_object_instance_id"
        );
    method_bindings.mb_area_clear_shapes =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_clear_shapes"
        );
    method_bindings.mb_area_create =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_create"
        );
    method_bindings.mb_area_get_object_instance_id =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_get_object_instance_id"
        );
    method_bindings.mb_area_get_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_get_param"
        );
    method_bindings.mb_area_get_shape =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_get_shape"
        );
    method_bindings.mb_area_get_shape_count =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_get_shape_count"
        );
    method_bindings.mb_area_get_shape_transform =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_get_shape_transform"
        );
    method_bindings.mb_area_get_space =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_get_space"
        );
    method_bindings.mb_area_get_space_override_mode =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_get_space_override_mode"
        );
    method_bindings.mb_area_get_transform =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_get_transform"
        );
    method_bindings.mb_area_is_ray_pickable =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_is_ray_pickable"
        );
    method_bindings.mb_area_remove_shape =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_remove_shape"
        );
    method_bindings.mb_area_set_area_monitor_callback =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_area_monitor_callback"
        );
    method_bindings.mb_area_set_collision_layer =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_collision_layer"
        );
    method_bindings.mb_area_set_collision_mask =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_collision_mask"
        );
    method_bindings.mb_area_set_monitor_callback =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_monitor_callback"
        );
    method_bindings.mb_area_set_monitorable =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_monitorable"
        );
    method_bindings.mb_area_set_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_param"
        );
    method_bindings.mb_area_set_ray_pickable =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_ray_pickable"
        );
    method_bindings.mb_area_set_shape =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_shape"
        );
    method_bindings.mb_area_set_shape_disabled =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_shape_disabled"
        );
    method_bindings.mb_area_set_shape_transform =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_shape_transform"
        );
    method_bindings.mb_area_set_space =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_space"
        );
    method_bindings.mb_area_set_space_override_mode =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_space_override_mode"
        );
    method_bindings.mb_area_set_transform =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "area_set_transform"
        );
    method_bindings.mb_body_add_central_force =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_add_central_force"
        );
    method_bindings.mb_body_add_collision_exception =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_add_collision_exception"
        );
    method_bindings.mb_body_add_force =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_add_force"
        );
    method_bindings.mb_body_add_shape =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_add_shape"
        );
    method_bindings.mb_body_add_torque =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_add_torque"
        );
    method_bindings.mb_body_apply_central_impulse =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_apply_central_impulse"
        );
    method_bindings.mb_body_apply_impulse =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_apply_impulse"
        );
    method_bindings.mb_body_apply_torque_impulse =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_apply_torque_impulse"
        );
    method_bindings.mb_body_attach_object_instance_id =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_attach_object_instance_id"
        );
    method_bindings.mb_body_clear_shapes =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_clear_shapes"
        );
    method_bindings.mb_body_create =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_create"
        );
    method_bindings.mb_body_get_collision_layer =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_collision_layer"
        );
    method_bindings.mb_body_get_collision_mask =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_collision_mask"
        );
    method_bindings.mb_body_get_direct_state =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_direct_state"
        );
    method_bindings.mb_body_get_kinematic_safe_margin =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_kinematic_safe_margin"
        );
    method_bindings.mb_body_get_max_contacts_reported =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_max_contacts_reported"
        );
    method_bindings.mb_body_get_mode =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_mode"
        );
    method_bindings.mb_body_get_object_instance_id =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_object_instance_id"
        );
    method_bindings.mb_body_get_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_param"
        );
    method_bindings.mb_body_get_shape =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_shape"
        );
    method_bindings.mb_body_get_shape_count =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_shape_count"
        );
    method_bindings.mb_body_get_shape_transform =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_shape_transform"
        );
    method_bindings.mb_body_get_space =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_space"
        );
    method_bindings.mb_body_get_state =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_get_state"
        );
    method_bindings.mb_body_is_axis_locked =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_is_axis_locked"
        );
    method_bindings.mb_body_is_continuous_collision_detection_enabled =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_is_continuous_collision_detection_enabled"
        );
    method_bindings.mb_body_is_omitting_force_integration =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_is_omitting_force_integration"
        );
    method_bindings.mb_body_is_ray_pickable =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_is_ray_pickable"
        );
    method_bindings.mb_body_remove_collision_exception =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_remove_collision_exception"
        );
    method_bindings.mb_body_remove_shape =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_remove_shape"
        );
    method_bindings.mb_body_set_axis_lock =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_axis_lock"
        );
    method_bindings.mb_body_set_axis_velocity =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_axis_velocity"
        );
    method_bindings.mb_body_set_collision_layer =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_collision_layer"
        );
    method_bindings.mb_body_set_collision_mask =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_collision_mask"
        );
    method_bindings.mb_body_set_enable_continuous_collision_detection =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_enable_continuous_collision_detection"
        );
    method_bindings.mb_body_set_force_integration_callback =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_force_integration_callback"
        );
    method_bindings.mb_body_set_kinematic_safe_margin =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_kinematic_safe_margin"
        );
    method_bindings.mb_body_set_max_contacts_reported =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_max_contacts_reported"
        );
    method_bindings.mb_body_set_mode =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_mode"
        );
    method_bindings.mb_body_set_omit_force_integration =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_omit_force_integration"
        );
    method_bindings.mb_body_set_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_param"
        );
    method_bindings.mb_body_set_ray_pickable =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_ray_pickable"
        );
    method_bindings.mb_body_set_shape =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_shape"
        );
    method_bindings.mb_body_set_shape_disabled =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_shape_disabled"
        );
    method_bindings.mb_body_set_shape_transform =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_shape_transform"
        );
    method_bindings.mb_body_set_space =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_space"
        );
    method_bindings.mb_body_set_state =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_set_state"
        );
    method_bindings.mb_body_test_motion =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "body_test_motion"
        );
    method_bindings.mb_cone_twist_joint_get_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "cone_twist_joint_get_param"
        );
    method_bindings.mb_cone_twist_joint_set_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "cone_twist_joint_set_param"
        );
    method_bindings.mb_free_rid =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "free_rid"
        );
    method_bindings.mb_generic_6dof_joint_get_flag =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "generic_6dof_joint_get_flag"
        );
    method_bindings.mb_generic_6dof_joint_get_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "generic_6dof_joint_get_param"
        );
    method_bindings.mb_generic_6dof_joint_set_flag =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "generic_6dof_joint_set_flag"
        );
    method_bindings.mb_generic_6dof_joint_set_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "generic_6dof_joint_set_param"
        );
    method_bindings.mb_get_process_info =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "get_process_info"
        );
    method_bindings.mb_hinge_joint_get_flag =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "hinge_joint_get_flag"
        );
    method_bindings.mb_hinge_joint_get_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "hinge_joint_get_param"
        );
    method_bindings.mb_hinge_joint_set_flag =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "hinge_joint_set_flag"
        );
    method_bindings.mb_hinge_joint_set_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "hinge_joint_set_param"
        );
    method_bindings.mb_joint_create_cone_twist =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "joint_create_cone_twist"
        );
    method_bindings.mb_joint_create_generic_6dof =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "joint_create_generic_6dof"
        );
    method_bindings.mb_joint_create_hinge =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "joint_create_hinge"
        );
    method_bindings.mb_joint_create_pin =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "joint_create_pin"
        );
    method_bindings.mb_joint_create_slider =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "joint_create_slider"
        );
    method_bindings.mb_joint_get_solver_priority =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "joint_get_solver_priority"
        );
    method_bindings.mb_joint_get_type =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "joint_get_type"
        );
    method_bindings.mb_joint_set_solver_priority =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "joint_set_solver_priority"
        );
    method_bindings.mb_pin_joint_get_local_a =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "pin_joint_get_local_a"
        );
    method_bindings.mb_pin_joint_get_local_b =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "pin_joint_get_local_b"
        );
    method_bindings.mb_pin_joint_get_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "pin_joint_get_param"
        );
    method_bindings.mb_pin_joint_set_local_a =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "pin_joint_set_local_a"
        );
    method_bindings.mb_pin_joint_set_local_b =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "pin_joint_set_local_b"
        );
    method_bindings.mb_pin_joint_set_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "pin_joint_set_param"
        );
    method_bindings.mb_set_active =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "set_active"
        );
    method_bindings.mb_set_collision_iterations =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "set_collision_iterations"
        );
    method_bindings.mb_shape_create =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "shape_create"
        );
    method_bindings.mb_shape_get_data =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "shape_get_data"
        );
    method_bindings.mb_shape_get_type =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "shape_get_type"
        );
    method_bindings.mb_shape_set_data =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "shape_set_data"
        );
    method_bindings.mb_slider_joint_get_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "slider_joint_get_param"
        );
    method_bindings.mb_slider_joint_set_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "slider_joint_set_param"
        );
    method_bindings.mb_space_create =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "space_create"
        );
    method_bindings.mb_space_get_direct_state =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "space_get_direct_state"
        );
    method_bindings.mb_space_get_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "space_get_param"
        );
    method_bindings.mb_space_is_active =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "space_is_active"
        );
    method_bindings.mb_space_set_active =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "space_set_active"
        );
    method_bindings.mb_space_set_param =
        api->rebel_method_bind_get_method(
            "PhysicsServer",
            "space_set_param"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PhysicsServer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PhysicsServer::MethodBindings PhysicsServer::method_bindings = {};
void* PhysicsServer::class_tag = nullptr;
} // namespace Rebel
