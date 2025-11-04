// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/rigidbody.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "classes/physicsdirectbodystate.h"
#include "classes/physicsmaterial.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void RigidBody::_body_enter_tree(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__body_enter_tree,
        (const Object*)this,
        arg0
    );
}

void RigidBody::_body_exit_tree(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__body_exit_tree,
        (const Object*)this,
        arg0
    );
}

void RigidBody::_direct_state_changed(const Object* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__direct_state_changed,
        (const Object*)this,
        arg0
    );
}

void RigidBody::_integrate_forces(const PhysicsDirectBodyState* state) {
    rebel_icall_void_object(
        method_bindings.mb__integrate_forces,
        (const Object*)this,
        state
    );
}

void RigidBody::_reload_physics_characteristics() {
    rebel_icall_void(
        method_bindings.mb__reload_physics_characteristics,
        (const Object*)this
    );
}

void RigidBody::add_central_force(const Vector3 force) {
    rebel_icall_void_vector3(
        method_bindings.mb_add_central_force,
        (const Object*)this,
        force
    );
}

void RigidBody::add_force(const Vector3 force, const Vector3 position) {
    rebel_icall_void_vector3_vector3(
        method_bindings.mb_add_force,
        (const Object*)this,
        force,
        position
    );
}

void RigidBody::add_torque(const Vector3 torque) {
    rebel_icall_void_vector3(
        method_bindings.mb_add_torque,
        (const Object*)this,
        torque
    );
}

void RigidBody::apply_central_impulse(const Vector3 impulse) {
    rebel_icall_void_vector3(
        method_bindings.mb_apply_central_impulse,
        (const Object*)this,
        impulse
    );
}

void RigidBody::apply_impulse(const Vector3 position, const Vector3 impulse) {
    rebel_icall_void_vector3_vector3(
        method_bindings.mb_apply_impulse,
        (const Object*)this,
        position,
        impulse
    );
}

void RigidBody::apply_torque_impulse(const Vector3 impulse) {
    rebel_icall_void_vector3(
        method_bindings.mb_apply_torque_impulse,
        (const Object*)this,
        impulse
    );
}

real_t RigidBody::get_angular_damp() const {
    return rebel_icall_float(
        method_bindings.mb_get_angular_damp,
        (const Object*)this
    );
}

Vector3 RigidBody::get_angular_velocity() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_angular_velocity,
        (const Object*)this
    );
}

bool RigidBody::get_axis_lock(const int64_t axis) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_axis_lock,
        (const Object*)this,
        axis
    );
}

real_t RigidBody::get_bounce() const {
    return rebel_icall_float(
        method_bindings.mb_get_bounce,
        (const Object*)this
    );
}

Array RigidBody::get_colliding_bodies() const {
    return rebel_icall_array(
        method_bindings.mb_get_colliding_bodies,
        (const Object*)this
    );
}

real_t RigidBody::get_friction() const {
    return rebel_icall_float(
        method_bindings.mb_get_friction,
        (const Object*)this
    );
}

real_t RigidBody::get_gravity_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_gravity_scale,
        (const Object*)this
    );
}

Basis RigidBody::get_inverse_inertia_tensor() {
    return rebel_icall_basis(
        method_bindings.mb_get_inverse_inertia_tensor,
        (const Object*)this
    );
}

real_t RigidBody::get_linear_damp() const {
    return rebel_icall_float(
        method_bindings.mb_get_linear_damp,
        (const Object*)this
    );
}

Vector3 RigidBody::get_linear_velocity() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_linear_velocity,
        (const Object*)this
    );
}

real_t RigidBody::get_mass() const {
    return rebel_icall_float(
        method_bindings.mb_get_mass,
        (const Object*)this
    );
}

int64_t RigidBody::get_max_contacts_reported() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_contacts_reported,
        (const Object*)this
    );
}

RigidBody::Mode RigidBody::get_mode() const {
    return (RigidBody::Mode)rebel_icall_int(
        method_bindings.mb_get_mode,
        (const Object*)this
    );
}

Ref<PhysicsMaterial> RigidBody::get_physics_material_override() const {
    return Ref<PhysicsMaterial>::create_ref(rebel_icall_object(
        method_bindings.mb_get_physics_material_override,
        (const Object*)this
    ));
}

real_t RigidBody::get_weight() const {
    return rebel_icall_float(
        method_bindings.mb_get_weight,
        (const Object*)this
    );
}

bool RigidBody::is_able_to_sleep() const {
    return rebel_icall_bool(
        method_bindings.mb_is_able_to_sleep,
        (const Object*)this
    );
}

bool RigidBody::is_contact_monitor_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_contact_monitor_enabled,
        (const Object*)this
    );
}

bool RigidBody::is_sleeping() const {
    return rebel_icall_bool(
        method_bindings.mb_is_sleeping,
        (const Object*)this
    );
}

bool RigidBody::is_using_continuous_collision_detection() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_continuous_collision_detection,
        (const Object*)this
    );
}

bool RigidBody::is_using_custom_integrator() {
    return rebel_icall_bool(
        method_bindings.mb_is_using_custom_integrator,
        (const Object*)this
    );
}

void RigidBody::set_angular_damp(const real_t angular_damp) {
    rebel_icall_void_float(
        method_bindings.mb_set_angular_damp,
        (const Object*)this,
        angular_damp
    );
}

void RigidBody::set_angular_velocity(const Vector3 angular_velocity) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_angular_velocity,
        (const Object*)this,
        angular_velocity
    );
}

void RigidBody::set_axis_lock(const int64_t axis, const bool lock) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_axis_lock,
        (const Object*)this,
        axis,
        lock
    );
}

void RigidBody::set_axis_velocity(const Vector3 axis_velocity) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_axis_velocity,
        (const Object*)this,
        axis_velocity
    );
}

void RigidBody::set_bounce(const real_t bounce) {
    rebel_icall_void_float(
        method_bindings.mb_set_bounce,
        (const Object*)this,
        bounce
    );
}

void RigidBody::set_can_sleep(const bool able_to_sleep) {
    rebel_icall_void_bool(
        method_bindings.mb_set_can_sleep,
        (const Object*)this,
        able_to_sleep
    );
}

void RigidBody::set_contact_monitor(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_contact_monitor,
        (const Object*)this,
        enabled
    );
}

void RigidBody::set_friction(const real_t friction) {
    rebel_icall_void_float(
        method_bindings.mb_set_friction,
        (const Object*)this,
        friction
    );
}

void RigidBody::set_gravity_scale(const real_t gravity_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_gravity_scale,
        (const Object*)this,
        gravity_scale
    );
}

void RigidBody::set_linear_damp(const real_t linear_damp) {
    rebel_icall_void_float(
        method_bindings.mb_set_linear_damp,
        (const Object*)this,
        linear_damp
    );
}

void RigidBody::set_linear_velocity(const Vector3 linear_velocity) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_linear_velocity,
        (const Object*)this,
        linear_velocity
    );
}

void RigidBody::set_mass(const real_t mass) {
    rebel_icall_void_float(
        method_bindings.mb_set_mass,
        (const Object*)this,
        mass
    );
}

void RigidBody::set_max_contacts_reported(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_max_contacts_reported,
        (const Object*)this,
        amount
    );
}

void RigidBody::set_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_mode,
        (const Object*)this,
        mode
    );
}

void RigidBody::set_physics_material_override(const Ref<PhysicsMaterial> physics_material_override) {
    rebel_icall_void_object(
        method_bindings.mb_set_physics_material_override,
        (const Object*)this,
        physics_material_override.ptr()
    );
}

void RigidBody::set_sleeping(const bool sleeping) {
    rebel_icall_void_bool(
        method_bindings.mb_set_sleeping,
        (const Object*)this,
        sleeping
    );
}

void RigidBody::set_use_continuous_collision_detection(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_continuous_collision_detection,
        (const Object*)this,
        enable
    );
}

void RigidBody::set_use_custom_integrator(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_custom_integrator,
        (const Object*)this,
        enable
    );
}

void RigidBody::set_weight(const real_t weight) {
    rebel_icall_void_float(
        method_bindings.mb_set_weight,
        (const Object*)this,
        weight
    );
}

RigidBody* RigidBody::create() {
    return (RigidBody*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RigidBody")()
         );
}

void RigidBody::init_method_bindings() {
    method_bindings.mb__body_enter_tree =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "_body_enter_tree"
        );
    method_bindings.mb__body_exit_tree =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "_body_exit_tree"
        );
    method_bindings.mb__direct_state_changed =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "_direct_state_changed"
        );
    method_bindings.mb__integrate_forces =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "_integrate_forces"
        );
    method_bindings.mb__reload_physics_characteristics =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "_reload_physics_characteristics"
        );
    method_bindings.mb_add_central_force =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "add_central_force"
        );
    method_bindings.mb_add_force =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "add_force"
        );
    method_bindings.mb_add_torque =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "add_torque"
        );
    method_bindings.mb_apply_central_impulse =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "apply_central_impulse"
        );
    method_bindings.mb_apply_impulse =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "apply_impulse"
        );
    method_bindings.mb_apply_torque_impulse =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "apply_torque_impulse"
        );
    method_bindings.mb_get_angular_damp =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_angular_damp"
        );
    method_bindings.mb_get_angular_velocity =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_angular_velocity"
        );
    method_bindings.mb_get_axis_lock =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_axis_lock"
        );
    method_bindings.mb_get_bounce =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_bounce"
        );
    method_bindings.mb_get_colliding_bodies =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_colliding_bodies"
        );
    method_bindings.mb_get_friction =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_friction"
        );
    method_bindings.mb_get_gravity_scale =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_gravity_scale"
        );
    method_bindings.mb_get_inverse_inertia_tensor =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_inverse_inertia_tensor"
        );
    method_bindings.mb_get_linear_damp =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_linear_damp"
        );
    method_bindings.mb_get_linear_velocity =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_linear_velocity"
        );
    method_bindings.mb_get_mass =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_mass"
        );
    method_bindings.mb_get_max_contacts_reported =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_max_contacts_reported"
        );
    method_bindings.mb_get_mode =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_mode"
        );
    method_bindings.mb_get_physics_material_override =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_physics_material_override"
        );
    method_bindings.mb_get_weight =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "get_weight"
        );
    method_bindings.mb_is_able_to_sleep =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "is_able_to_sleep"
        );
    method_bindings.mb_is_contact_monitor_enabled =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "is_contact_monitor_enabled"
        );
    method_bindings.mb_is_sleeping =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "is_sleeping"
        );
    method_bindings.mb_is_using_continuous_collision_detection =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "is_using_continuous_collision_detection"
        );
    method_bindings.mb_is_using_custom_integrator =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "is_using_custom_integrator"
        );
    method_bindings.mb_set_angular_damp =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_angular_damp"
        );
    method_bindings.mb_set_angular_velocity =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_angular_velocity"
        );
    method_bindings.mb_set_axis_lock =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_axis_lock"
        );
    method_bindings.mb_set_axis_velocity =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_axis_velocity"
        );
    method_bindings.mb_set_bounce =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_bounce"
        );
    method_bindings.mb_set_can_sleep =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_can_sleep"
        );
    method_bindings.mb_set_contact_monitor =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_contact_monitor"
        );
    method_bindings.mb_set_friction =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_friction"
        );
    method_bindings.mb_set_gravity_scale =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_gravity_scale"
        );
    method_bindings.mb_set_linear_damp =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_linear_damp"
        );
    method_bindings.mb_set_linear_velocity =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_linear_velocity"
        );
    method_bindings.mb_set_mass =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_mass"
        );
    method_bindings.mb_set_max_contacts_reported =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_max_contacts_reported"
        );
    method_bindings.mb_set_mode =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_mode"
        );
    method_bindings.mb_set_physics_material_override =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_physics_material_override"
        );
    method_bindings.mb_set_sleeping =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_sleeping"
        );
    method_bindings.mb_set_use_continuous_collision_detection =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_use_continuous_collision_detection"
        );
    method_bindings.mb_set_use_custom_integrator =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_use_custom_integrator"
        );
    method_bindings.mb_set_weight =
        api->rebel_method_bind_get_method(
            "RigidBody",
            "set_weight"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RigidBody");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RigidBody::MethodBindings RigidBody::method_bindings = {};
void* RigidBody::class_tag = nullptr;
} // namespace Rebel
