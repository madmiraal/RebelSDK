// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/softbody.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void SoftBody::_draw_soft_mesh() {
    rebel_icall_void(
        method_bindings.mb__draw_soft_mesh,
        (const Object*)this
    );
}

void SoftBody::add_collision_exception_with(const Node* body) {
    rebel_icall_void_object(
        method_bindings.mb_add_collision_exception_with,
        (const Object*)this,
        body
    );
}

real_t SoftBody::get_areaAngular_stiffness() {
    return rebel_icall_float(
        method_bindings.mb_get_areaAngular_stiffness,
        (const Object*)this
    );
}

Array SoftBody::get_collision_exceptions() {
    return rebel_icall_array(
        method_bindings.mb_get_collision_exceptions,
        (const Object*)this
    );
}

int64_t SoftBody::get_collision_layer() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_layer,
        (const Object*)this
    );
}

bool SoftBody::get_collision_layer_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_layer_bit,
        (const Object*)this,
        bit
    );
}

int64_t SoftBody::get_collision_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

bool SoftBody::get_collision_mask_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_mask_bit,
        (const Object*)this,
        bit
    );
}

real_t SoftBody::get_damping_coefficient() {
    return rebel_icall_float(
        method_bindings.mb_get_damping_coefficient,
        (const Object*)this
    );
}

real_t SoftBody::get_drag_coefficient() {
    return rebel_icall_float(
        method_bindings.mb_get_drag_coefficient,
        (const Object*)this
    );
}

real_t SoftBody::get_linear_stiffness() {
    return rebel_icall_float(
        method_bindings.mb_get_linear_stiffness,
        (const Object*)this
    );
}

NodePath SoftBody::get_parent_collision_ignore() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_parent_collision_ignore,
        (const Object*)this
    );
}

Vector3 SoftBody::get_point_transform(const int64_t point_index) {
    return rebel_icall_vector3_int(
        method_bindings.mb_get_point_transform,
        (const Object*)this,
        point_index
    );
}

real_t SoftBody::get_pose_matching_coefficient() {
    return rebel_icall_float(
        method_bindings.mb_get_pose_matching_coefficient,
        (const Object*)this
    );
}

real_t SoftBody::get_pressure_coefficient() {
    return rebel_icall_float(
        method_bindings.mb_get_pressure_coefficient,
        (const Object*)this
    );
}

int64_t SoftBody::get_simulation_precision() {
    return rebel_icall_int(
        method_bindings.mb_get_simulation_precision,
        (const Object*)this
    );
}

real_t SoftBody::get_total_mass() {
    return rebel_icall_float(
        method_bindings.mb_get_total_mass,
        (const Object*)this
    );
}

real_t SoftBody::get_volume_stiffness() {
    return rebel_icall_float(
        method_bindings.mb_get_volume_stiffness,
        (const Object*)this
    );
}

bool SoftBody::is_physics_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_physics_enabled,
        (const Object*)this
    );
}

bool SoftBody::is_point_pinned(const int64_t point_index) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_point_pinned,
        (const Object*)this,
        point_index
    );
}

bool SoftBody::is_ray_pickable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_ray_pickable,
        (const Object*)this
    );
}

void SoftBody::remove_collision_exception_with(const Node* body) {
    rebel_icall_void_object(
        method_bindings.mb_remove_collision_exception_with,
        (const Object*)this,
        body
    );
}

void SoftBody::set_areaAngular_stiffness(const real_t areaAngular_stiffness) {
    rebel_icall_void_float(
        method_bindings.mb_set_areaAngular_stiffness,
        (const Object*)this,
        areaAngular_stiffness
    );
}

void SoftBody::set_collision_layer(const int64_t collision_layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_layer,
        (const Object*)this,
        collision_layer
    );
}

void SoftBody::set_collision_layer_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_layer_bit,
        (const Object*)this,
        bit,
        value
    );
}

void SoftBody::set_collision_mask(const int64_t collision_mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        collision_mask
    );
}

void SoftBody::set_collision_mask_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_mask_bit,
        (const Object*)this,
        bit,
        value
    );
}

void SoftBody::set_damping_coefficient(const real_t damping_coefficient) {
    rebel_icall_void_float(
        method_bindings.mb_set_damping_coefficient,
        (const Object*)this,
        damping_coefficient
    );
}

void SoftBody::set_drag_coefficient(const real_t drag_coefficient) {
    rebel_icall_void_float(
        method_bindings.mb_set_drag_coefficient,
        (const Object*)this,
        drag_coefficient
    );
}

void SoftBody::set_linear_stiffness(const real_t linear_stiffness) {
    rebel_icall_void_float(
        method_bindings.mb_set_linear_stiffness,
        (const Object*)this,
        linear_stiffness
    );
}

void SoftBody::set_parent_collision_ignore(const NodePath parent_collision_ignore) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_parent_collision_ignore,
        (const Object*)this,
        parent_collision_ignore
    );
}

void SoftBody::set_physics_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_physics_enabled,
        (const Object*)this,
        enabled
    );
}

void SoftBody::set_point_pinned(const int64_t point_index, const bool pinned, const NodePath attachment_path) {
    rebel_icall_void_int_bool_nodepath(
        method_bindings.mb_set_point_pinned,
        (const Object*)this,
        point_index,
        pinned,
        attachment_path
    );
}

void SoftBody::set_pose_matching_coefficient(const real_t pose_matching_coefficient) {
    rebel_icall_void_float(
        method_bindings.mb_set_pose_matching_coefficient,
        (const Object*)this,
        pose_matching_coefficient
    );
}

void SoftBody::set_pressure_coefficient(const real_t pressure_coefficient) {
    rebel_icall_void_float(
        method_bindings.mb_set_pressure_coefficient,
        (const Object*)this,
        pressure_coefficient
    );
}

void SoftBody::set_ray_pickable(const bool ray_pickable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_ray_pickable,
        (const Object*)this,
        ray_pickable
    );
}

void SoftBody::set_simulation_precision(const int64_t simulation_precision) {
    rebel_icall_void_int(
        method_bindings.mb_set_simulation_precision,
        (const Object*)this,
        simulation_precision
    );
}

void SoftBody::set_total_mass(const real_t mass) {
    rebel_icall_void_float(
        method_bindings.mb_set_total_mass,
        (const Object*)this,
        mass
    );
}

void SoftBody::set_volume_stiffness(const real_t volume_stiffness) {
    rebel_icall_void_float(
        method_bindings.mb_set_volume_stiffness,
        (const Object*)this,
        volume_stiffness
    );
}

SoftBody* SoftBody::create() {
    return (SoftBody*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SoftBody")()
         );
}

void SoftBody::init_method_bindings() {
    method_bindings.mb__draw_soft_mesh =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "_draw_soft_mesh"
        );
    method_bindings.mb_add_collision_exception_with =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "add_collision_exception_with"
        );
    method_bindings.mb_get_areaAngular_stiffness =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_areaAngular_stiffness"
        );
    method_bindings.mb_get_collision_exceptions =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_collision_exceptions"
        );
    method_bindings.mb_get_collision_layer =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_collision_layer"
        );
    method_bindings.mb_get_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_collision_layer_bit"
        );
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_collision_mask"
        );
    method_bindings.mb_get_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_collision_mask_bit"
        );
    method_bindings.mb_get_damping_coefficient =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_damping_coefficient"
        );
    method_bindings.mb_get_drag_coefficient =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_drag_coefficient"
        );
    method_bindings.mb_get_linear_stiffness =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_linear_stiffness"
        );
    method_bindings.mb_get_parent_collision_ignore =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_parent_collision_ignore"
        );
    method_bindings.mb_get_point_transform =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_point_transform"
        );
    method_bindings.mb_get_pose_matching_coefficient =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_pose_matching_coefficient"
        );
    method_bindings.mb_get_pressure_coefficient =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_pressure_coefficient"
        );
    method_bindings.mb_get_simulation_precision =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_simulation_precision"
        );
    method_bindings.mb_get_total_mass =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_total_mass"
        );
    method_bindings.mb_get_volume_stiffness =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "get_volume_stiffness"
        );
    method_bindings.mb_is_physics_enabled =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "is_physics_enabled"
        );
    method_bindings.mb_is_point_pinned =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "is_point_pinned"
        );
    method_bindings.mb_is_ray_pickable =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "is_ray_pickable"
        );
    method_bindings.mb_remove_collision_exception_with =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "remove_collision_exception_with"
        );
    method_bindings.mb_set_areaAngular_stiffness =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_areaAngular_stiffness"
        );
    method_bindings.mb_set_collision_layer =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_collision_layer"
        );
    method_bindings.mb_set_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_collision_layer_bit"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_collision_mask"
        );
    method_bindings.mb_set_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_collision_mask_bit"
        );
    method_bindings.mb_set_damping_coefficient =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_damping_coefficient"
        );
    method_bindings.mb_set_drag_coefficient =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_drag_coefficient"
        );
    method_bindings.mb_set_linear_stiffness =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_linear_stiffness"
        );
    method_bindings.mb_set_parent_collision_ignore =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_parent_collision_ignore"
        );
    method_bindings.mb_set_physics_enabled =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_physics_enabled"
        );
    method_bindings.mb_set_point_pinned =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_point_pinned"
        );
    method_bindings.mb_set_pose_matching_coefficient =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_pose_matching_coefficient"
        );
    method_bindings.mb_set_pressure_coefficient =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_pressure_coefficient"
        );
    method_bindings.mb_set_ray_pickable =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_ray_pickable"
        );
    method_bindings.mb_set_simulation_precision =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_simulation_precision"
        );
    method_bindings.mb_set_total_mass =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_total_mass"
        );
    method_bindings.mb_set_volume_stiffness =
        api->rebel_method_bind_get_method(
            "SoftBody",
            "set_volume_stiffness"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SoftBody");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SoftBody::MethodBindings SoftBody::method_bindings = {};
void* SoftBody::class_tag = nullptr;
} // namespace Rebel
