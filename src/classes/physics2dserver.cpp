// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physics2dserver.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "classes/physics2ddirectbodystate.h"
#include "classes/physics2ddirectspacestate.h"
#include "classes/physics2dtestmotionresult.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Physics2DServer::area_add_shape(const RID area, const RID shape, const Transform2D transform, const bool disabled) {
    rebel_icall_void_rid_rid_transform2d_bool(
        method_bindings.mb_area_add_shape,
        (const Object*)this,
        area,
        shape,
        transform,
        disabled
    );
}

void Physics2DServer::area_attach_canvas_instance_id(const RID area, const int64_t id) {
    rebel_icall_void_rid_int(
        method_bindings.mb_area_attach_canvas_instance_id,
        (const Object*)this,
        area,
        id
    );
}

void Physics2DServer::area_attach_object_instance_id(const RID area, const int64_t id) {
    rebel_icall_void_rid_int(
        method_bindings.mb_area_attach_object_instance_id,
        (const Object*)this,
        area,
        id
    );
}

void Physics2DServer::area_clear_shapes(const RID area) {
    rebel_icall_void_rid(
        method_bindings.mb_area_clear_shapes,
        (const Object*)this,
        area
    );
}

RID Physics2DServer::area_create() {
    return rebel_icall_rid(
        method_bindings.mb_area_create,
        (const Object*)this
    );
}

int64_t Physics2DServer::area_get_canvas_instance_id(const RID area) const {
    return rebel_icall_int_rid(
        method_bindings.mb_area_get_canvas_instance_id,
        (const Object*)this,
        area
    );
}

int64_t Physics2DServer::area_get_object_instance_id(const RID area) const {
    return rebel_icall_int_rid(
        method_bindings.mb_area_get_object_instance_id,
        (const Object*)this,
        area
    );
}

Variant Physics2DServer::area_get_param(const RID area, const int64_t param) const {
    return rebel_icall_variant_rid_int(
        method_bindings.mb_area_get_param,
        (const Object*)this,
        area,
        param
    );
}

RID Physics2DServer::area_get_shape(const RID area, const int64_t shape_idx) const {
    return rebel_icall_rid_rid_int(
        method_bindings.mb_area_get_shape,
        (const Object*)this,
        area,
        shape_idx
    );
}

int64_t Physics2DServer::area_get_shape_count(const RID area) const {
    return rebel_icall_int_rid(
        method_bindings.mb_area_get_shape_count,
        (const Object*)this,
        area
    );
}

Transform2D Physics2DServer::area_get_shape_transform(const RID area, const int64_t shape_idx) const {
    return rebel_icall_transform2d_rid_int(
        method_bindings.mb_area_get_shape_transform,
        (const Object*)this,
        area,
        shape_idx
    );
}

RID Physics2DServer::area_get_space(const RID area) const {
    return rebel_icall_rid_rid(
        method_bindings.mb_area_get_space,
        (const Object*)this,
        area
    );
}

Physics2DServer::AreaSpaceOverrideMode Physics2DServer::area_get_space_override_mode(const RID area) const {
    return (Physics2DServer::AreaSpaceOverrideMode)rebel_icall_int_rid(
        method_bindings.mb_area_get_space_override_mode,
        (const Object*)this,
        area
    );
}

Transform2D Physics2DServer::area_get_transform(const RID area) const {
    return rebel_icall_transform2d_rid(
        method_bindings.mb_area_get_transform,
        (const Object*)this,
        area
    );
}

void Physics2DServer::area_remove_shape(const RID area, const int64_t shape_idx) {
    rebel_icall_void_rid_int(
        method_bindings.mb_area_remove_shape,
        (const Object*)this,
        area,
        shape_idx
    );
}

void Physics2DServer::area_set_area_monitor_callback(const RID area, const Object* receiver, const String method) {
    rebel_icall_void_rid_object_string(
        method_bindings.mb_area_set_area_monitor_callback,
        (const Object*)this,
        area,
        receiver,
        method
    );
}

void Physics2DServer::area_set_collision_layer(const RID area, const int64_t layer) {
    rebel_icall_void_rid_int(
        method_bindings.mb_area_set_collision_layer,
        (const Object*)this,
        area,
        layer
    );
}

void Physics2DServer::area_set_collision_mask(const RID area, const int64_t mask) {
    rebel_icall_void_rid_int(
        method_bindings.mb_area_set_collision_mask,
        (const Object*)this,
        area,
        mask
    );
}

void Physics2DServer::area_set_monitor_callback(const RID area, const Object* receiver, const String method) {
    rebel_icall_void_rid_object_string(
        method_bindings.mb_area_set_monitor_callback,
        (const Object*)this,
        area,
        receiver,
        method
    );
}

void Physics2DServer::area_set_monitorable(const RID area, const bool monitorable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_area_set_monitorable,
        (const Object*)this,
        area,
        monitorable
    );
}

void Physics2DServer::area_set_param(const RID area, const int64_t param, const Variant value) {
    rebel_icall_void_rid_int_variant(
        method_bindings.mb_area_set_param,
        (const Object*)this,
        area,
        param,
        value
    );
}

void Physics2DServer::area_set_shape(const RID area, const int64_t shape_idx, const RID shape) {
    rebel_icall_void_rid_int_rid(
        method_bindings.mb_area_set_shape,
        (const Object*)this,
        area,
        shape_idx,
        shape
    );
}

void Physics2DServer::area_set_shape_disabled(const RID area, const int64_t shape_idx, const bool disabled) {
    rebel_icall_void_rid_int_bool(
        method_bindings.mb_area_set_shape_disabled,
        (const Object*)this,
        area,
        shape_idx,
        disabled
    );
}

void Physics2DServer::area_set_shape_transform(const RID area, const int64_t shape_idx, const Transform2D transform) {
    rebel_icall_void_rid_int_transform2d(
        method_bindings.mb_area_set_shape_transform,
        (const Object*)this,
        area,
        shape_idx,
        transform
    );
}

void Physics2DServer::area_set_space(const RID area, const RID space) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_area_set_space,
        (const Object*)this,
        area,
        space
    );
}

void Physics2DServer::area_set_space_override_mode(const RID area, const int64_t mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_area_set_space_override_mode,
        (const Object*)this,
        area,
        mode
    );
}

void Physics2DServer::area_set_transform(const RID area, const Transform2D transform) {
    rebel_icall_void_rid_transform2d(
        method_bindings.mb_area_set_transform,
        (const Object*)this,
        area,
        transform
    );
}

void Physics2DServer::body_add_central_force(const RID body, const Vector2 force) {
    rebel_icall_void_rid_vector2(
        method_bindings.mb_body_add_central_force,
        (const Object*)this,
        body,
        force
    );
}

void Physics2DServer::body_add_collision_exception(const RID body, const RID excepted_body) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_body_add_collision_exception,
        (const Object*)this,
        body,
        excepted_body
    );
}

void Physics2DServer::body_add_force(const RID body, const Vector2 offset, const Vector2 force) {
    rebel_icall_void_rid_vector2_vector2(
        method_bindings.mb_body_add_force,
        (const Object*)this,
        body,
        offset,
        force
    );
}

void Physics2DServer::body_add_shape(const RID body, const RID shape, const Transform2D transform, const bool disabled) {
    rebel_icall_void_rid_rid_transform2d_bool(
        method_bindings.mb_body_add_shape,
        (const Object*)this,
        body,
        shape,
        transform,
        disabled
    );
}

void Physics2DServer::body_add_torque(const RID body, const real_t torque) {
    rebel_icall_void_rid_float(
        method_bindings.mb_body_add_torque,
        (const Object*)this,
        body,
        torque
    );
}

void Physics2DServer::body_apply_central_impulse(const RID body, const Vector2 impulse) {
    rebel_icall_void_rid_vector2(
        method_bindings.mb_body_apply_central_impulse,
        (const Object*)this,
        body,
        impulse
    );
}

void Physics2DServer::body_apply_impulse(const RID body, const Vector2 position, const Vector2 impulse) {
    rebel_icall_void_rid_vector2_vector2(
        method_bindings.mb_body_apply_impulse,
        (const Object*)this,
        body,
        position,
        impulse
    );
}

void Physics2DServer::body_apply_torque_impulse(const RID body, const real_t impulse) {
    rebel_icall_void_rid_float(
        method_bindings.mb_body_apply_torque_impulse,
        (const Object*)this,
        body,
        impulse
    );
}

void Physics2DServer::body_attach_canvas_instance_id(const RID body, const int64_t id) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_attach_canvas_instance_id,
        (const Object*)this,
        body,
        id
    );
}

void Physics2DServer::body_attach_object_instance_id(const RID body, const int64_t id) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_attach_object_instance_id,
        (const Object*)this,
        body,
        id
    );
}

void Physics2DServer::body_clear_shapes(const RID body) {
    rebel_icall_void_rid(
        method_bindings.mb_body_clear_shapes,
        (const Object*)this,
        body
    );
}

RID Physics2DServer::body_create() {
    return rebel_icall_rid(
        method_bindings.mb_body_create,
        (const Object*)this
    );
}

int64_t Physics2DServer::body_get_canvas_instance_id(const RID body) const {
    return rebel_icall_int_rid(
        method_bindings.mb_body_get_canvas_instance_id,
        (const Object*)this,
        body
    );
}

int64_t Physics2DServer::body_get_collision_layer(const RID body) const {
    return rebel_icall_int_rid(
        method_bindings.mb_body_get_collision_layer,
        (const Object*)this,
        body
    );
}

int64_t Physics2DServer::body_get_collision_mask(const RID body) const {
    return rebel_icall_int_rid(
        method_bindings.mb_body_get_collision_mask,
        (const Object*)this,
        body
    );
}

Physics2DServer::CCDMode Physics2DServer::body_get_continuous_collision_detection_mode(const RID body) const {
    return (Physics2DServer::CCDMode)rebel_icall_int_rid(
        method_bindings.mb_body_get_continuous_collision_detection_mode,
        (const Object*)this,
        body
    );
}

Physics2DDirectBodyState* Physics2DServer::body_get_direct_state(const RID body) {
    return (Physics2DDirectBodyState*)rebel_icall_object_rid(
        method_bindings.mb_body_get_direct_state,
        (const Object*)this,
        body
    );
}

int64_t Physics2DServer::body_get_max_contacts_reported(const RID body) const {
    return rebel_icall_int_rid(
        method_bindings.mb_body_get_max_contacts_reported,
        (const Object*)this,
        body
    );
}

Physics2DServer::BodyMode Physics2DServer::body_get_mode(const RID body) const {
    return (Physics2DServer::BodyMode)rebel_icall_int_rid(
        method_bindings.mb_body_get_mode,
        (const Object*)this,
        body
    );
}

int64_t Physics2DServer::body_get_object_instance_id(const RID body) const {
    return rebel_icall_int_rid(
        method_bindings.mb_body_get_object_instance_id,
        (const Object*)this,
        body
    );
}

real_t Physics2DServer::body_get_param(const RID body, const int64_t param) const {
    return rebel_icall_float_rid_int(
        method_bindings.mb_body_get_param,
        (const Object*)this,
        body,
        param
    );
}

RID Physics2DServer::body_get_shape(const RID body, const int64_t shape_idx) const {
    return rebel_icall_rid_rid_int(
        method_bindings.mb_body_get_shape,
        (const Object*)this,
        body,
        shape_idx
    );
}

int64_t Physics2DServer::body_get_shape_count(const RID body) const {
    return rebel_icall_int_rid(
        method_bindings.mb_body_get_shape_count,
        (const Object*)this,
        body
    );
}

Variant Physics2DServer::body_get_shape_metadata(const RID body, const int64_t shape_idx) const {
    return rebel_icall_variant_rid_int(
        method_bindings.mb_body_get_shape_metadata,
        (const Object*)this,
        body,
        shape_idx
    );
}

Transform2D Physics2DServer::body_get_shape_transform(const RID body, const int64_t shape_idx) const {
    return rebel_icall_transform2d_rid_int(
        method_bindings.mb_body_get_shape_transform,
        (const Object*)this,
        body,
        shape_idx
    );
}

RID Physics2DServer::body_get_space(const RID body) const {
    return rebel_icall_rid_rid(
        method_bindings.mb_body_get_space,
        (const Object*)this,
        body
    );
}

Variant Physics2DServer::body_get_state(const RID body, const int64_t state) const {
    return rebel_icall_variant_rid_int(
        method_bindings.mb_body_get_state,
        (const Object*)this,
        body,
        state
    );
}

bool Physics2DServer::body_is_omitting_force_integration(const RID body) const {
    return rebel_icall_bool_rid(
        method_bindings.mb_body_is_omitting_force_integration,
        (const Object*)this,
        body
    );
}

void Physics2DServer::body_remove_collision_exception(const RID body, const RID excepted_body) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_body_remove_collision_exception,
        (const Object*)this,
        body,
        excepted_body
    );
}

void Physics2DServer::body_remove_shape(const RID body, const int64_t shape_idx) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_remove_shape,
        (const Object*)this,
        body,
        shape_idx
    );
}

void Physics2DServer::body_set_axis_velocity(const RID body, const Vector2 axis_velocity) {
    rebel_icall_void_rid_vector2(
        method_bindings.mb_body_set_axis_velocity,
        (const Object*)this,
        body,
        axis_velocity
    );
}

void Physics2DServer::body_set_collision_layer(const RID body, const int64_t layer) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_set_collision_layer,
        (const Object*)this,
        body,
        layer
    );
}

void Physics2DServer::body_set_collision_mask(const RID body, const int64_t mask) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_set_collision_mask,
        (const Object*)this,
        body,
        mask
    );
}

void Physics2DServer::body_set_continuous_collision_detection_mode(const RID body, const int64_t mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_set_continuous_collision_detection_mode,
        (const Object*)this,
        body,
        mode
    );
}

void Physics2DServer::body_set_force_integration_callback(const RID body, const Object* receiver, const String method, const Variant userdata) {
    rebel_icall_void_rid_object_string_variant(
        method_bindings.mb_body_set_force_integration_callback,
        (const Object*)this,
        body,
        receiver,
        method,
        userdata
    );
}

void Physics2DServer::body_set_max_contacts_reported(const RID body, const int64_t amount) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_set_max_contacts_reported,
        (const Object*)this,
        body,
        amount
    );
}

void Physics2DServer::body_set_mode(const RID body, const int64_t mode) {
    rebel_icall_void_rid_int(
        method_bindings.mb_body_set_mode,
        (const Object*)this,
        body,
        mode
    );
}

void Physics2DServer::body_set_omit_force_integration(const RID body, const bool enable) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_body_set_omit_force_integration,
        (const Object*)this,
        body,
        enable
    );
}

void Physics2DServer::body_set_param(const RID body, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_body_set_param,
        (const Object*)this,
        body,
        param,
        value
    );
}

void Physics2DServer::body_set_shape(const RID body, const int64_t shape_idx, const RID shape) {
    rebel_icall_void_rid_int_rid(
        method_bindings.mb_body_set_shape,
        (const Object*)this,
        body,
        shape_idx,
        shape
    );
}

void Physics2DServer::body_set_shape_as_one_way_collision(const RID body, const int64_t shape_idx, const bool enable, const real_t margin) {
    rebel_icall_void_rid_int_bool_float(
        method_bindings.mb_body_set_shape_as_one_way_collision,
        (const Object*)this,
        body,
        shape_idx,
        enable,
        margin
    );
}

void Physics2DServer::body_set_shape_disabled(const RID body, const int64_t shape_idx, const bool disabled) {
    rebel_icall_void_rid_int_bool(
        method_bindings.mb_body_set_shape_disabled,
        (const Object*)this,
        body,
        shape_idx,
        disabled
    );
}

void Physics2DServer::body_set_shape_metadata(const RID body, const int64_t shape_idx, const Variant metadata) {
    rebel_icall_void_rid_int_variant(
        method_bindings.mb_body_set_shape_metadata,
        (const Object*)this,
        body,
        shape_idx,
        metadata
    );
}

void Physics2DServer::body_set_shape_transform(const RID body, const int64_t shape_idx, const Transform2D transform) {
    rebel_icall_void_rid_int_transform2d(
        method_bindings.mb_body_set_shape_transform,
        (const Object*)this,
        body,
        shape_idx,
        transform
    );
}

void Physics2DServer::body_set_space(const RID body, const RID space) {
    rebel_icall_void_rid_rid(
        method_bindings.mb_body_set_space,
        (const Object*)this,
        body,
        space
    );
}

void Physics2DServer::body_set_state(const RID body, const int64_t state, const Variant value) {
    rebel_icall_void_rid_int_variant(
        method_bindings.mb_body_set_state,
        (const Object*)this,
        body,
        state,
        value
    );
}

bool Physics2DServer::body_test_motion(const RID body, const Transform2D from, const Vector2 motion, const bool infinite_inertia, const real_t margin, const Ref<Physics2DTestMotionResult> result, const bool exclude_raycast_shapes, const Array exclude) {
    return rebel_icall_bool_rid_transform2d_vector2_bool_float_object_bool_array(
        method_bindings.mb_body_test_motion,
        (const Object*)this,
        body,
        from,
        motion,
        infinite_inertia,
        margin,
        result.ptr(),
        exclude_raycast_shapes,
        exclude
    );
}

RID Physics2DServer::capsule_shape_create() {
    return rebel_icall_rid(
        method_bindings.mb_capsule_shape_create,
        (const Object*)this
    );
}

RID Physics2DServer::circle_shape_create() {
    return rebel_icall_rid(
        method_bindings.mb_circle_shape_create,
        (const Object*)this
    );
}

RID Physics2DServer::concave_polygon_shape_create() {
    return rebel_icall_rid(
        method_bindings.mb_concave_polygon_shape_create,
        (const Object*)this
    );
}

RID Physics2DServer::convex_polygon_shape_create() {
    return rebel_icall_rid(
        method_bindings.mb_convex_polygon_shape_create,
        (const Object*)this
    );
}

RID Physics2DServer::damped_spring_joint_create(const Vector2 anchor_a, const Vector2 anchor_b, const RID body_a, const RID body_b) {
    return rebel_icall_rid_vector2_vector2_rid_rid(
        method_bindings.mb_damped_spring_joint_create,
        (const Object*)this,
        anchor_a,
        anchor_b,
        body_a,
        body_b
    );
}

real_t Physics2DServer::damped_string_joint_get_param(const RID joint, const int64_t param) const {
    return rebel_icall_float_rid_int(
        method_bindings.mb_damped_string_joint_get_param,
        (const Object*)this,
        joint,
        param
    );
}

void Physics2DServer::damped_string_joint_set_param(const RID joint, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_damped_string_joint_set_param,
        (const Object*)this,
        joint,
        param,
        value
    );
}

void Physics2DServer::free_rid(const RID rid) {
    rebel_icall_void_rid(
        method_bindings.mb_free_rid,
        (const Object*)this,
        rid
    );
}

int64_t Physics2DServer::get_process_info(const int64_t process_info) {
    return rebel_icall_int_int(
        method_bindings.mb_get_process_info,
        (const Object*)this,
        process_info
    );
}

RID Physics2DServer::groove_joint_create(const Vector2 groove1_a, const Vector2 groove2_a, const Vector2 anchor_b, const RID body_a, const RID body_b) {
    return rebel_icall_rid_vector2_vector2_vector2_rid_rid(
        method_bindings.mb_groove_joint_create,
        (const Object*)this,
        groove1_a,
        groove2_a,
        anchor_b,
        body_a,
        body_b
    );
}

real_t Physics2DServer::joint_get_param(const RID joint, const int64_t param) const {
    return rebel_icall_float_rid_int(
        method_bindings.mb_joint_get_param,
        (const Object*)this,
        joint,
        param
    );
}

Physics2DServer::JointType Physics2DServer::joint_get_type(const RID joint) const {
    return (Physics2DServer::JointType)rebel_icall_int_rid(
        method_bindings.mb_joint_get_type,
        (const Object*)this,
        joint
    );
}

void Physics2DServer::joint_set_param(const RID joint, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_joint_set_param,
        (const Object*)this,
        joint,
        param,
        value
    );
}

RID Physics2DServer::line_shape_create() {
    return rebel_icall_rid(
        method_bindings.mb_line_shape_create,
        (const Object*)this
    );
}

RID Physics2DServer::pin_joint_create(const Vector2 anchor, const RID body_a, const RID body_b) {
    return rebel_icall_rid_vector2_rid_rid(
        method_bindings.mb_pin_joint_create,
        (const Object*)this,
        anchor,
        body_a,
        body_b
    );
}

RID Physics2DServer::ray_shape_create() {
    return rebel_icall_rid(
        method_bindings.mb_ray_shape_create,
        (const Object*)this
    );
}

RID Physics2DServer::rectangle_shape_create() {
    return rebel_icall_rid(
        method_bindings.mb_rectangle_shape_create,
        (const Object*)this
    );
}

RID Physics2DServer::segment_shape_create() {
    return rebel_icall_rid(
        method_bindings.mb_segment_shape_create,
        (const Object*)this
    );
}

void Physics2DServer::set_active(const bool active) {
    rebel_icall_void_bool(
        method_bindings.mb_set_active,
        (const Object*)this,
        active
    );
}

void Physics2DServer::set_collision_iterations(const int64_t iterations) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_iterations,
        (const Object*)this,
        iterations
    );
}

Variant Physics2DServer::shape_get_data(const RID shape) const {
    return rebel_icall_variant_rid(
        method_bindings.mb_shape_get_data,
        (const Object*)this,
        shape
    );
}

Physics2DServer::ShapeType Physics2DServer::shape_get_type(const RID shape) const {
    return (Physics2DServer::ShapeType)rebel_icall_int_rid(
        method_bindings.mb_shape_get_type,
        (const Object*)this,
        shape
    );
}

void Physics2DServer::shape_set_data(const RID shape, const Variant data) {
    rebel_icall_void_rid_variant(
        method_bindings.mb_shape_set_data,
        (const Object*)this,
        shape,
        data
    );
}

RID Physics2DServer::space_create() {
    return rebel_icall_rid(
        method_bindings.mb_space_create,
        (const Object*)this
    );
}

Physics2DDirectSpaceState* Physics2DServer::space_get_direct_state(const RID space) {
    return (Physics2DDirectSpaceState*)rebel_icall_object_rid(
        method_bindings.mb_space_get_direct_state,
        (const Object*)this,
        space
    );
}

real_t Physics2DServer::space_get_param(const RID space, const int64_t param) const {
    return rebel_icall_float_rid_int(
        method_bindings.mb_space_get_param,
        (const Object*)this,
        space,
        param
    );
}

bool Physics2DServer::space_is_active(const RID space) const {
    return rebel_icall_bool_rid(
        method_bindings.mb_space_is_active,
        (const Object*)this,
        space
    );
}

void Physics2DServer::space_set_active(const RID space, const bool active) {
    rebel_icall_void_rid_bool(
        method_bindings.mb_space_set_active,
        (const Object*)this,
        space,
        active
    );
}

void Physics2DServer::space_set_param(const RID space, const int64_t param, const real_t value) {
    rebel_icall_void_rid_int_float(
        method_bindings.mb_space_set_param,
        (const Object*)this,
        space,
        param,
        value
    );
}

Physics2DServer* Physics2DServer::singleton = nullptr;

Physics2DServer::Physics2DServer() {
    owner = api->rebel_global_get_singleton((char*) "Physics2DServer");
}

void Physics2DServer::init_method_bindings() {
    method_bindings.mb_area_add_shape =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_add_shape"
        );
    method_bindings.mb_area_attach_canvas_instance_id =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_attach_canvas_instance_id"
        );
    method_bindings.mb_area_attach_object_instance_id =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_attach_object_instance_id"
        );
    method_bindings.mb_area_clear_shapes =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_clear_shapes"
        );
    method_bindings.mb_area_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_create"
        );
    method_bindings.mb_area_get_canvas_instance_id =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_get_canvas_instance_id"
        );
    method_bindings.mb_area_get_object_instance_id =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_get_object_instance_id"
        );
    method_bindings.mb_area_get_param =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_get_param"
        );
    method_bindings.mb_area_get_shape =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_get_shape"
        );
    method_bindings.mb_area_get_shape_count =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_get_shape_count"
        );
    method_bindings.mb_area_get_shape_transform =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_get_shape_transform"
        );
    method_bindings.mb_area_get_space =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_get_space"
        );
    method_bindings.mb_area_get_space_override_mode =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_get_space_override_mode"
        );
    method_bindings.mb_area_get_transform =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_get_transform"
        );
    method_bindings.mb_area_remove_shape =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_remove_shape"
        );
    method_bindings.mb_area_set_area_monitor_callback =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_area_monitor_callback"
        );
    method_bindings.mb_area_set_collision_layer =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_collision_layer"
        );
    method_bindings.mb_area_set_collision_mask =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_collision_mask"
        );
    method_bindings.mb_area_set_monitor_callback =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_monitor_callback"
        );
    method_bindings.mb_area_set_monitorable =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_monitorable"
        );
    method_bindings.mb_area_set_param =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_param"
        );
    method_bindings.mb_area_set_shape =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_shape"
        );
    method_bindings.mb_area_set_shape_disabled =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_shape_disabled"
        );
    method_bindings.mb_area_set_shape_transform =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_shape_transform"
        );
    method_bindings.mb_area_set_space =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_space"
        );
    method_bindings.mb_area_set_space_override_mode =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_space_override_mode"
        );
    method_bindings.mb_area_set_transform =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "area_set_transform"
        );
    method_bindings.mb_body_add_central_force =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_add_central_force"
        );
    method_bindings.mb_body_add_collision_exception =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_add_collision_exception"
        );
    method_bindings.mb_body_add_force =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_add_force"
        );
    method_bindings.mb_body_add_shape =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_add_shape"
        );
    method_bindings.mb_body_add_torque =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_add_torque"
        );
    method_bindings.mb_body_apply_central_impulse =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_apply_central_impulse"
        );
    method_bindings.mb_body_apply_impulse =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_apply_impulse"
        );
    method_bindings.mb_body_apply_torque_impulse =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_apply_torque_impulse"
        );
    method_bindings.mb_body_attach_canvas_instance_id =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_attach_canvas_instance_id"
        );
    method_bindings.mb_body_attach_object_instance_id =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_attach_object_instance_id"
        );
    method_bindings.mb_body_clear_shapes =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_clear_shapes"
        );
    method_bindings.mb_body_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_create"
        );
    method_bindings.mb_body_get_canvas_instance_id =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_canvas_instance_id"
        );
    method_bindings.mb_body_get_collision_layer =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_collision_layer"
        );
    method_bindings.mb_body_get_collision_mask =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_collision_mask"
        );
    method_bindings.mb_body_get_continuous_collision_detection_mode =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_continuous_collision_detection_mode"
        );
    method_bindings.mb_body_get_direct_state =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_direct_state"
        );
    method_bindings.mb_body_get_max_contacts_reported =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_max_contacts_reported"
        );
    method_bindings.mb_body_get_mode =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_mode"
        );
    method_bindings.mb_body_get_object_instance_id =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_object_instance_id"
        );
    method_bindings.mb_body_get_param =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_param"
        );
    method_bindings.mb_body_get_shape =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_shape"
        );
    method_bindings.mb_body_get_shape_count =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_shape_count"
        );
    method_bindings.mb_body_get_shape_metadata =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_shape_metadata"
        );
    method_bindings.mb_body_get_shape_transform =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_shape_transform"
        );
    method_bindings.mb_body_get_space =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_space"
        );
    method_bindings.mb_body_get_state =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_get_state"
        );
    method_bindings.mb_body_is_omitting_force_integration =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_is_omitting_force_integration"
        );
    method_bindings.mb_body_remove_collision_exception =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_remove_collision_exception"
        );
    method_bindings.mb_body_remove_shape =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_remove_shape"
        );
    method_bindings.mb_body_set_axis_velocity =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_axis_velocity"
        );
    method_bindings.mb_body_set_collision_layer =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_collision_layer"
        );
    method_bindings.mb_body_set_collision_mask =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_collision_mask"
        );
    method_bindings.mb_body_set_continuous_collision_detection_mode =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_continuous_collision_detection_mode"
        );
    method_bindings.mb_body_set_force_integration_callback =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_force_integration_callback"
        );
    method_bindings.mb_body_set_max_contacts_reported =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_max_contacts_reported"
        );
    method_bindings.mb_body_set_mode =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_mode"
        );
    method_bindings.mb_body_set_omit_force_integration =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_omit_force_integration"
        );
    method_bindings.mb_body_set_param =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_param"
        );
    method_bindings.mb_body_set_shape =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_shape"
        );
    method_bindings.mb_body_set_shape_as_one_way_collision =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_shape_as_one_way_collision"
        );
    method_bindings.mb_body_set_shape_disabled =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_shape_disabled"
        );
    method_bindings.mb_body_set_shape_metadata =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_shape_metadata"
        );
    method_bindings.mb_body_set_shape_transform =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_shape_transform"
        );
    method_bindings.mb_body_set_space =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_space"
        );
    method_bindings.mb_body_set_state =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_set_state"
        );
    method_bindings.mb_body_test_motion =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "body_test_motion"
        );
    method_bindings.mb_capsule_shape_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "capsule_shape_create"
        );
    method_bindings.mb_circle_shape_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "circle_shape_create"
        );
    method_bindings.mb_concave_polygon_shape_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "concave_polygon_shape_create"
        );
    method_bindings.mb_convex_polygon_shape_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "convex_polygon_shape_create"
        );
    method_bindings.mb_damped_spring_joint_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "damped_spring_joint_create"
        );
    method_bindings.mb_damped_string_joint_get_param =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "damped_string_joint_get_param"
        );
    method_bindings.mb_damped_string_joint_set_param =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "damped_string_joint_set_param"
        );
    method_bindings.mb_free_rid =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "free_rid"
        );
    method_bindings.mb_get_process_info =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "get_process_info"
        );
    method_bindings.mb_groove_joint_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "groove_joint_create"
        );
    method_bindings.mb_joint_get_param =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "joint_get_param"
        );
    method_bindings.mb_joint_get_type =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "joint_get_type"
        );
    method_bindings.mb_joint_set_param =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "joint_set_param"
        );
    method_bindings.mb_line_shape_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "line_shape_create"
        );
    method_bindings.mb_pin_joint_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "pin_joint_create"
        );
    method_bindings.mb_ray_shape_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "ray_shape_create"
        );
    method_bindings.mb_rectangle_shape_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "rectangle_shape_create"
        );
    method_bindings.mb_segment_shape_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "segment_shape_create"
        );
    method_bindings.mb_set_active =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "set_active"
        );
    method_bindings.mb_set_collision_iterations =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "set_collision_iterations"
        );
    method_bindings.mb_shape_get_data =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "shape_get_data"
        );
    method_bindings.mb_shape_get_type =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "shape_get_type"
        );
    method_bindings.mb_shape_set_data =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "shape_set_data"
        );
    method_bindings.mb_space_create =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "space_create"
        );
    method_bindings.mb_space_get_direct_state =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "space_get_direct_state"
        );
    method_bindings.mb_space_get_param =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "space_get_param"
        );
    method_bindings.mb_space_is_active =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "space_is_active"
        );
    method_bindings.mb_space_set_active =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "space_set_active"
        );
    method_bindings.mb_space_set_param =
        api->rebel_method_bind_get_method(
            "Physics2DServer",
            "space_set_param"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Physics2DServer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Physics2DServer::MethodBindings Physics2DServer::method_bindings = {};
void* Physics2DServer::class_tag = nullptr;
} // namespace Rebel
