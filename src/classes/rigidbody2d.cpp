// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/rigidbody2d.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "classes/physics2ddirectbodystate.h"
#include "classes/physics2dtestmotionresult.h"
#include "classes/physicsmaterial.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void RigidBody2D::_body_enter_tree(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__body_enter_tree,
        (const Object*)this,
        arg0
    );
}

void RigidBody2D::_body_exit_tree(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__body_exit_tree,
        (const Object*)this,
        arg0
    );
}

void RigidBody2D::_direct_state_changed(const Object* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__direct_state_changed,
        (const Object*)this,
        arg0
    );
}

void RigidBody2D::_integrate_forces(const Physics2DDirectBodyState* state) {
    rebel_icall_void_object(
        method_bindings.mb__integrate_forces,
        (const Object*)this,
        state
    );
}

void RigidBody2D::_reload_physics_characteristics() {
    rebel_icall_void(
        method_bindings.mb__reload_physics_characteristics,
        (const Object*)this
    );
}

void RigidBody2D::add_central_force(const Vector2 force) {
    rebel_icall_void_vector2(
        method_bindings.mb_add_central_force,
        (const Object*)this,
        force
    );
}

void RigidBody2D::add_force(const Vector2 offset, const Vector2 force) {
    rebel_icall_void_vector2_vector2(
        method_bindings.mb_add_force,
        (const Object*)this,
        offset,
        force
    );
}

void RigidBody2D::add_torque(const real_t torque) {
    rebel_icall_void_float(
        method_bindings.mb_add_torque,
        (const Object*)this,
        torque
    );
}

void RigidBody2D::apply_central_impulse(const Vector2 impulse) {
    rebel_icall_void_vector2(
        method_bindings.mb_apply_central_impulse,
        (const Object*)this,
        impulse
    );
}

void RigidBody2D::apply_impulse(const Vector2 offset, const Vector2 impulse) {
    rebel_icall_void_vector2_vector2(
        method_bindings.mb_apply_impulse,
        (const Object*)this,
        offset,
        impulse
    );
}

void RigidBody2D::apply_torque_impulse(const real_t torque) {
    rebel_icall_void_float(
        method_bindings.mb_apply_torque_impulse,
        (const Object*)this,
        torque
    );
}

real_t RigidBody2D::get_angular_damp() const {
    return rebel_icall_float(
        method_bindings.mb_get_angular_damp,
        (const Object*)this
    );
}

real_t RigidBody2D::get_angular_velocity() const {
    return rebel_icall_float(
        method_bindings.mb_get_angular_velocity,
        (const Object*)this
    );
}

Vector2 RigidBody2D::get_applied_force() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_applied_force,
        (const Object*)this
    );
}

real_t RigidBody2D::get_applied_torque() const {
    return rebel_icall_float(
        method_bindings.mb_get_applied_torque,
        (const Object*)this
    );
}

real_t RigidBody2D::get_bounce() const {
    return rebel_icall_float(
        method_bindings.mb_get_bounce,
        (const Object*)this
    );
}

Array RigidBody2D::get_colliding_bodies() const {
    return rebel_icall_array(
        method_bindings.mb_get_colliding_bodies,
        (const Object*)this
    );
}

RigidBody2D::CCDMode RigidBody2D::get_continuous_collision_detection_mode() const {
    return (RigidBody2D::CCDMode)rebel_icall_int(
        method_bindings.mb_get_continuous_collision_detection_mode,
        (const Object*)this
    );
}

real_t RigidBody2D::get_friction() const {
    return rebel_icall_float(
        method_bindings.mb_get_friction,
        (const Object*)this
    );
}

real_t RigidBody2D::get_gravity_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_gravity_scale,
        (const Object*)this
    );
}

real_t RigidBody2D::get_inertia() const {
    return rebel_icall_float(
        method_bindings.mb_get_inertia,
        (const Object*)this
    );
}

real_t RigidBody2D::get_linear_damp() const {
    return rebel_icall_float(
        method_bindings.mb_get_linear_damp,
        (const Object*)this
    );
}

Vector2 RigidBody2D::get_linear_velocity() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_linear_velocity,
        (const Object*)this
    );
}

real_t RigidBody2D::get_mass() const {
    return rebel_icall_float(
        method_bindings.mb_get_mass,
        (const Object*)this
    );
}

int64_t RigidBody2D::get_max_contacts_reported() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_contacts_reported,
        (const Object*)this
    );
}

RigidBody2D::Mode RigidBody2D::get_mode() const {
    return (RigidBody2D::Mode)rebel_icall_int(
        method_bindings.mb_get_mode,
        (const Object*)this
    );
}

Ref<PhysicsMaterial> RigidBody2D::get_physics_material_override() const {
    return Ref<PhysicsMaterial>::create_ref(rebel_icall_object(
        method_bindings.mb_get_physics_material_override,
        (const Object*)this
    ));
}

real_t RigidBody2D::get_weight() const {
    return rebel_icall_float(
        method_bindings.mb_get_weight,
        (const Object*)this
    );
}

bool RigidBody2D::is_able_to_sleep() const {
    return rebel_icall_bool(
        method_bindings.mb_is_able_to_sleep,
        (const Object*)this
    );
}

bool RigidBody2D::is_contact_monitor_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_contact_monitor_enabled,
        (const Object*)this
    );
}

bool RigidBody2D::is_sleeping() const {
    return rebel_icall_bool(
        method_bindings.mb_is_sleeping,
        (const Object*)this
    );
}

bool RigidBody2D::is_using_custom_integrator() {
    return rebel_icall_bool(
        method_bindings.mb_is_using_custom_integrator,
        (const Object*)this
    );
}

void RigidBody2D::set_angular_damp(const real_t angular_damp) {
    rebel_icall_void_float(
        method_bindings.mb_set_angular_damp,
        (const Object*)this,
        angular_damp
    );
}

void RigidBody2D::set_angular_velocity(const real_t angular_velocity) {
    rebel_icall_void_float(
        method_bindings.mb_set_angular_velocity,
        (const Object*)this,
        angular_velocity
    );
}

void RigidBody2D::set_applied_force(const Vector2 force) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_applied_force,
        (const Object*)this,
        force
    );
}

void RigidBody2D::set_applied_torque(const real_t torque) {
    rebel_icall_void_float(
        method_bindings.mb_set_applied_torque,
        (const Object*)this,
        torque
    );
}

void RigidBody2D::set_axis_velocity(const Vector2 axis_velocity) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_axis_velocity,
        (const Object*)this,
        axis_velocity
    );
}

void RigidBody2D::set_bounce(const real_t bounce) {
    rebel_icall_void_float(
        method_bindings.mb_set_bounce,
        (const Object*)this,
        bounce
    );
}

void RigidBody2D::set_can_sleep(const bool able_to_sleep) {
    rebel_icall_void_bool(
        method_bindings.mb_set_can_sleep,
        (const Object*)this,
        able_to_sleep
    );
}

void RigidBody2D::set_contact_monitor(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_contact_monitor,
        (const Object*)this,
        enabled
    );
}

void RigidBody2D::set_continuous_collision_detection_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_continuous_collision_detection_mode,
        (const Object*)this,
        mode
    );
}

void RigidBody2D::set_friction(const real_t friction) {
    rebel_icall_void_float(
        method_bindings.mb_set_friction,
        (const Object*)this,
        friction
    );
}

void RigidBody2D::set_gravity_scale(const real_t gravity_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_gravity_scale,
        (const Object*)this,
        gravity_scale
    );
}

void RigidBody2D::set_inertia(const real_t inertia) {
    rebel_icall_void_float(
        method_bindings.mb_set_inertia,
        (const Object*)this,
        inertia
    );
}

void RigidBody2D::set_linear_damp(const real_t linear_damp) {
    rebel_icall_void_float(
        method_bindings.mb_set_linear_damp,
        (const Object*)this,
        linear_damp
    );
}

void RigidBody2D::set_linear_velocity(const Vector2 linear_velocity) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_linear_velocity,
        (const Object*)this,
        linear_velocity
    );
}

void RigidBody2D::set_mass(const real_t mass) {
    rebel_icall_void_float(
        method_bindings.mb_set_mass,
        (const Object*)this,
        mass
    );
}

void RigidBody2D::set_max_contacts_reported(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_max_contacts_reported,
        (const Object*)this,
        amount
    );
}

void RigidBody2D::set_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_mode,
        (const Object*)this,
        mode
    );
}

void RigidBody2D::set_physics_material_override(const Ref<PhysicsMaterial> physics_material_override) {
    rebel_icall_void_object(
        method_bindings.mb_set_physics_material_override,
        (const Object*)this,
        physics_material_override.ptr()
    );
}

void RigidBody2D::set_sleeping(const bool sleeping) {
    rebel_icall_void_bool(
        method_bindings.mb_set_sleeping,
        (const Object*)this,
        sleeping
    );
}

void RigidBody2D::set_use_custom_integrator(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_custom_integrator,
        (const Object*)this,
        enable
    );
}

void RigidBody2D::set_weight(const real_t weight) {
    rebel_icall_void_float(
        method_bindings.mb_set_weight,
        (const Object*)this,
        weight
    );
}

bool RigidBody2D::test_motion(const Vector2 motion, const bool infinite_inertia, const real_t margin, const Ref<Physics2DTestMotionResult> result) {
    return rebel_icall_bool_vector2_bool_float_object(
        method_bindings.mb_test_motion,
        (const Object*)this,
        motion,
        infinite_inertia,
        margin,
        result.ptr()
    );
}

RigidBody2D* RigidBody2D::create() {
    return (RigidBody2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RigidBody2D")()
         );
}

void RigidBody2D::init_method_bindings() {
    method_bindings.mb__body_enter_tree =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "_body_enter_tree"
        );
    method_bindings.mb__body_exit_tree =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "_body_exit_tree"
        );
    method_bindings.mb__direct_state_changed =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "_direct_state_changed"
        );
    method_bindings.mb__integrate_forces =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "_integrate_forces"
        );
    method_bindings.mb__reload_physics_characteristics =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "_reload_physics_characteristics"
        );
    method_bindings.mb_add_central_force =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "add_central_force"
        );
    method_bindings.mb_add_force =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "add_force"
        );
    method_bindings.mb_add_torque =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "add_torque"
        );
    method_bindings.mb_apply_central_impulse =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "apply_central_impulse"
        );
    method_bindings.mb_apply_impulse =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "apply_impulse"
        );
    method_bindings.mb_apply_torque_impulse =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "apply_torque_impulse"
        );
    method_bindings.mb_get_angular_damp =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_angular_damp"
        );
    method_bindings.mb_get_angular_velocity =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_angular_velocity"
        );
    method_bindings.mb_get_applied_force =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_applied_force"
        );
    method_bindings.mb_get_applied_torque =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_applied_torque"
        );
    method_bindings.mb_get_bounce =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_bounce"
        );
    method_bindings.mb_get_colliding_bodies =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_colliding_bodies"
        );
    method_bindings.mb_get_continuous_collision_detection_mode =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_continuous_collision_detection_mode"
        );
    method_bindings.mb_get_friction =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_friction"
        );
    method_bindings.mb_get_gravity_scale =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_gravity_scale"
        );
    method_bindings.mb_get_inertia =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_inertia"
        );
    method_bindings.mb_get_linear_damp =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_linear_damp"
        );
    method_bindings.mb_get_linear_velocity =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_linear_velocity"
        );
    method_bindings.mb_get_mass =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_mass"
        );
    method_bindings.mb_get_max_contacts_reported =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_max_contacts_reported"
        );
    method_bindings.mb_get_mode =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_mode"
        );
    method_bindings.mb_get_physics_material_override =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_physics_material_override"
        );
    method_bindings.mb_get_weight =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "get_weight"
        );
    method_bindings.mb_is_able_to_sleep =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "is_able_to_sleep"
        );
    method_bindings.mb_is_contact_monitor_enabled =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "is_contact_monitor_enabled"
        );
    method_bindings.mb_is_sleeping =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "is_sleeping"
        );
    method_bindings.mb_is_using_custom_integrator =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "is_using_custom_integrator"
        );
    method_bindings.mb_set_angular_damp =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_angular_damp"
        );
    method_bindings.mb_set_angular_velocity =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_angular_velocity"
        );
    method_bindings.mb_set_applied_force =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_applied_force"
        );
    method_bindings.mb_set_applied_torque =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_applied_torque"
        );
    method_bindings.mb_set_axis_velocity =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_axis_velocity"
        );
    method_bindings.mb_set_bounce =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_bounce"
        );
    method_bindings.mb_set_can_sleep =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_can_sleep"
        );
    method_bindings.mb_set_contact_monitor =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_contact_monitor"
        );
    method_bindings.mb_set_continuous_collision_detection_mode =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_continuous_collision_detection_mode"
        );
    method_bindings.mb_set_friction =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_friction"
        );
    method_bindings.mb_set_gravity_scale =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_gravity_scale"
        );
    method_bindings.mb_set_inertia =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_inertia"
        );
    method_bindings.mb_set_linear_damp =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_linear_damp"
        );
    method_bindings.mb_set_linear_velocity =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_linear_velocity"
        );
    method_bindings.mb_set_mass =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_mass"
        );
    method_bindings.mb_set_max_contacts_reported =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_max_contacts_reported"
        );
    method_bindings.mb_set_mode =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_mode"
        );
    method_bindings.mb_set_physics_material_override =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_physics_material_override"
        );
    method_bindings.mb_set_sleeping =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_sleeping"
        );
    method_bindings.mb_set_use_custom_integrator =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_use_custom_integrator"
        );
    method_bindings.mb_set_weight =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "set_weight"
        );
    method_bindings.mb_test_motion =
        api->rebel_method_bind_get_method(
            "RigidBody2D",
            "test_motion"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RigidBody2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RigidBody2D::MethodBindings RigidBody2D::method_bindings = {};
void* RigidBody2D::class_tag = nullptr;
} // namespace Rebel
