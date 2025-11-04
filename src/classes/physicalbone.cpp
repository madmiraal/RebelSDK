// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physicalbone.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void PhysicalBone::_direct_state_changed(const Object* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__direct_state_changed,
        (const Object*)this,
        arg0
    );
}

void PhysicalBone::apply_central_impulse(const Vector3 impulse) {
    rebel_icall_void_vector3(
        method_bindings.mb_apply_central_impulse,
        (const Object*)this,
        impulse
    );
}

void PhysicalBone::apply_impulse(const Vector3 position, const Vector3 impulse) {
    rebel_icall_void_vector3_vector3(
        method_bindings.mb_apply_impulse,
        (const Object*)this,
        position,
        impulse
    );
}

Transform PhysicalBone::get_body_offset() const {
    return rebel_icall_transform(
        method_bindings.mb_get_body_offset,
        (const Object*)this
    );
}

int64_t PhysicalBone::get_bone_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_bone_id,
        (const Object*)this
    );
}

real_t PhysicalBone::get_bounce() const {
    return rebel_icall_float(
        method_bindings.mb_get_bounce,
        (const Object*)this
    );
}

real_t PhysicalBone::get_friction() const {
    return rebel_icall_float(
        method_bindings.mb_get_friction,
        (const Object*)this
    );
}

real_t PhysicalBone::get_gravity_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_gravity_scale,
        (const Object*)this
    );
}

Transform PhysicalBone::get_joint_offset() const {
    return rebel_icall_transform(
        method_bindings.mb_get_joint_offset,
        (const Object*)this
    );
}

PhysicalBone::JointType PhysicalBone::get_joint_type() const {
    return (PhysicalBone::JointType)rebel_icall_int(
        method_bindings.mb_get_joint_type,
        (const Object*)this
    );
}

real_t PhysicalBone::get_mass() const {
    return rebel_icall_float(
        method_bindings.mb_get_mass,
        (const Object*)this
    );
}

bool PhysicalBone::get_simulate_physics() {
    return rebel_icall_bool(
        method_bindings.mb_get_simulate_physics,
        (const Object*)this
    );
}

real_t PhysicalBone::get_weight() const {
    return rebel_icall_float(
        method_bindings.mb_get_weight,
        (const Object*)this
    );
}

bool PhysicalBone::is_simulating_physics() {
    return rebel_icall_bool(
        method_bindings.mb_is_simulating_physics,
        (const Object*)this
    );
}

bool PhysicalBone::is_static_body() {
    return rebel_icall_bool(
        method_bindings.mb_is_static_body,
        (const Object*)this
    );
}

void PhysicalBone::set_body_offset(const Transform offset) {
    rebel_icall_void_transform(
        method_bindings.mb_set_body_offset,
        (const Object*)this,
        offset
    );
}

void PhysicalBone::set_bounce(const real_t bounce) {
    rebel_icall_void_float(
        method_bindings.mb_set_bounce,
        (const Object*)this,
        bounce
    );
}

void PhysicalBone::set_friction(const real_t friction) {
    rebel_icall_void_float(
        method_bindings.mb_set_friction,
        (const Object*)this,
        friction
    );
}

void PhysicalBone::set_gravity_scale(const real_t gravity_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_gravity_scale,
        (const Object*)this,
        gravity_scale
    );
}

void PhysicalBone::set_joint_offset(const Transform offset) {
    rebel_icall_void_transform(
        method_bindings.mb_set_joint_offset,
        (const Object*)this,
        offset
    );
}

void PhysicalBone::set_joint_type(const int64_t joint_type) {
    rebel_icall_void_int(
        method_bindings.mb_set_joint_type,
        (const Object*)this,
        joint_type
    );
}

void PhysicalBone::set_mass(const real_t mass) {
    rebel_icall_void_float(
        method_bindings.mb_set_mass,
        (const Object*)this,
        mass
    );
}

void PhysicalBone::set_weight(const real_t weight) {
    rebel_icall_void_float(
        method_bindings.mb_set_weight,
        (const Object*)this,
        weight
    );
}

PhysicalBone* PhysicalBone::create() {
    return (PhysicalBone*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PhysicalBone")()
         );
}

void PhysicalBone::init_method_bindings() {
    method_bindings.mb__direct_state_changed =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "_direct_state_changed"
        );
    method_bindings.mb_apply_central_impulse =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "apply_central_impulse"
        );
    method_bindings.mb_apply_impulse =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "apply_impulse"
        );
    method_bindings.mb_get_body_offset =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "get_body_offset"
        );
    method_bindings.mb_get_bone_id =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "get_bone_id"
        );
    method_bindings.mb_get_bounce =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "get_bounce"
        );
    method_bindings.mb_get_friction =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "get_friction"
        );
    method_bindings.mb_get_gravity_scale =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "get_gravity_scale"
        );
    method_bindings.mb_get_joint_offset =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "get_joint_offset"
        );
    method_bindings.mb_get_joint_type =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "get_joint_type"
        );
    method_bindings.mb_get_mass =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "get_mass"
        );
    method_bindings.mb_get_simulate_physics =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "get_simulate_physics"
        );
    method_bindings.mb_get_weight =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "get_weight"
        );
    method_bindings.mb_is_simulating_physics =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "is_simulating_physics"
        );
    method_bindings.mb_is_static_body =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "is_static_body"
        );
    method_bindings.mb_set_body_offset =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "set_body_offset"
        );
    method_bindings.mb_set_bounce =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "set_bounce"
        );
    method_bindings.mb_set_friction =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "set_friction"
        );
    method_bindings.mb_set_gravity_scale =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "set_gravity_scale"
        );
    method_bindings.mb_set_joint_offset =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "set_joint_offset"
        );
    method_bindings.mb_set_joint_type =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "set_joint_type"
        );
    method_bindings.mb_set_mass =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "set_mass"
        );
    method_bindings.mb_set_weight =
        api->rebel_method_bind_get_method(
            "PhysicalBone",
            "set_weight"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PhysicalBone");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PhysicalBone::MethodBindings PhysicalBone::method_bindings = {};
void* PhysicalBone::class_tag = nullptr;
} // namespace Rebel
