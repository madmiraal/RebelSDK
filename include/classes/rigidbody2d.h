// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RIGIDBODY2D_H
#define REBEL_RIGIDBODY2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/physicsbody2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;
class Physics2DDirectBodyState;
class Physics2DTestMotionResult;
class PhysicsMaterial;

class RigidBody2D : public PhysicsBody2D {
public:
    enum Mode {
        MODE_RIGID = 0,
        MODE_STATIC = 1,
        MODE_CHARACTER = 2,
        MODE_KINEMATIC = 3,
    };

    enum CCDMode {
        CCD_MODE_DISABLED = 0,
        CCD_MODE_CAST_RAY = 1,
        CCD_MODE_CAST_SHAPE = 2,
    };

    void _body_enter_tree(const int64_t arg0);
    void _body_exit_tree(const int64_t arg0);
    void _direct_state_changed(const Object* arg0);
    void _integrate_forces(const Physics2DDirectBodyState* state);
    void _reload_physics_characteristics();
    void add_central_force(const Vector2 force);
    void add_force(const Vector2 offset, const Vector2 force);
    void add_torque(const real_t torque);
    void apply_central_impulse(const Vector2 impulse);
    void apply_impulse(const Vector2 offset, const Vector2 impulse);
    void apply_torque_impulse(const real_t torque);
    real_t get_angular_damp() const;
    real_t get_angular_velocity() const;
    Vector2 get_applied_force() const;
    real_t get_applied_torque() const;
    real_t get_bounce() const;
    Array get_colliding_bodies() const;
    RigidBody2D::CCDMode get_continuous_collision_detection_mode() const;
    real_t get_friction() const;
    real_t get_gravity_scale() const;
    real_t get_inertia() const;
    real_t get_linear_damp() const;
    Vector2 get_linear_velocity() const;
    real_t get_mass() const;
    int64_t get_max_contacts_reported() const;
    RigidBody2D::Mode get_mode() const;
    Ref<PhysicsMaterial> get_physics_material_override() const;
    real_t get_weight() const;
    bool is_able_to_sleep() const;
    bool is_contact_monitor_enabled() const;
    bool is_sleeping() const;
    bool is_using_custom_integrator();
    void set_angular_damp(const real_t angular_damp);
    void set_angular_velocity(const real_t angular_velocity);
    void set_applied_force(const Vector2 force);
    void set_applied_torque(const real_t torque);
    void set_axis_velocity(const Vector2 axis_velocity);
    void set_bounce(const real_t bounce);
    void set_can_sleep(const bool able_to_sleep);
    void set_contact_monitor(const bool enabled);
    void set_continuous_collision_detection_mode(const int64_t mode);
    void set_friction(const real_t friction);
    void set_gravity_scale(const real_t gravity_scale);
    void set_inertia(const real_t inertia);
    void set_linear_damp(const real_t linear_damp);
    void set_linear_velocity(const Vector2 linear_velocity);
    void set_mass(const real_t mass);
    void set_max_contacts_reported(const int64_t amount);
    void set_mode(const int64_t mode);
    void set_physics_material_override(const Ref<PhysicsMaterial> physics_material_override);
    void set_sleeping(const bool sleeping);
    void set_use_custom_integrator(const bool enable);
    void set_weight(const real_t weight);
    bool test_motion(const Vector2 motion, const bool infinite_inertia = true, const real_t margin = 0.08, const Ref<Physics2DTestMotionResult> result = nullptr);

    static RigidBody2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "RigidBody2D";
    }

    inline static const char* get_rebel_class_name() {
        return "RigidBody2D";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb__body_enter_tree;
        rebel_method_bind* mb__body_exit_tree;
        rebel_method_bind* mb__direct_state_changed;
        rebel_method_bind* mb__integrate_forces;
        rebel_method_bind* mb__reload_physics_characteristics;
        rebel_method_bind* mb_add_central_force;
        rebel_method_bind* mb_add_force;
        rebel_method_bind* mb_add_torque;
        rebel_method_bind* mb_apply_central_impulse;
        rebel_method_bind* mb_apply_impulse;
        rebel_method_bind* mb_apply_torque_impulse;
        rebel_method_bind* mb_get_angular_damp;
        rebel_method_bind* mb_get_angular_velocity;
        rebel_method_bind* mb_get_applied_force;
        rebel_method_bind* mb_get_applied_torque;
        rebel_method_bind* mb_get_bounce;
        rebel_method_bind* mb_get_colliding_bodies;
        rebel_method_bind* mb_get_continuous_collision_detection_mode;
        rebel_method_bind* mb_get_friction;
        rebel_method_bind* mb_get_gravity_scale;
        rebel_method_bind* mb_get_inertia;
        rebel_method_bind* mb_get_linear_damp;
        rebel_method_bind* mb_get_linear_velocity;
        rebel_method_bind* mb_get_mass;
        rebel_method_bind* mb_get_max_contacts_reported;
        rebel_method_bind* mb_get_mode;
        rebel_method_bind* mb_get_physics_material_override;
        rebel_method_bind* mb_get_weight;
        rebel_method_bind* mb_is_able_to_sleep;
        rebel_method_bind* mb_is_contact_monitor_enabled;
        rebel_method_bind* mb_is_sleeping;
        rebel_method_bind* mb_is_using_custom_integrator;
        rebel_method_bind* mb_set_angular_damp;
        rebel_method_bind* mb_set_angular_velocity;
        rebel_method_bind* mb_set_applied_force;
        rebel_method_bind* mb_set_applied_torque;
        rebel_method_bind* mb_set_axis_velocity;
        rebel_method_bind* mb_set_bounce;
        rebel_method_bind* mb_set_can_sleep;
        rebel_method_bind* mb_set_contact_monitor;
        rebel_method_bind* mb_set_continuous_collision_detection_mode;
        rebel_method_bind* mb_set_friction;
        rebel_method_bind* mb_set_gravity_scale;
        rebel_method_bind* mb_set_inertia;
        rebel_method_bind* mb_set_linear_damp;
        rebel_method_bind* mb_set_linear_velocity;
        rebel_method_bind* mb_set_mass;
        rebel_method_bind* mb_set_max_contacts_reported;
        rebel_method_bind* mb_set_mode;
        rebel_method_bind* mb_set_physics_material_override;
        rebel_method_bind* mb_set_sleeping;
        rebel_method_bind* mb_set_use_custom_integrator;
        rebel_method_bind* mb_set_weight;
        rebel_method_bind* mb_test_motion;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RIGIDBODY2D_H
