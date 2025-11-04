// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RIGIDBODY_H
#define REBEL_RIGIDBODY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/physicsbody.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;
class PhysicsDirectBodyState;
class PhysicsMaterial;

class RigidBody : public PhysicsBody {
public:
    enum Mode {
        MODE_RIGID = 0,
        MODE_STATIC = 1,
        MODE_CHARACTER = 2,
        MODE_KINEMATIC = 3,
    };

    void _body_enter_tree(const int64_t arg0);
    void _body_exit_tree(const int64_t arg0);
    void _direct_state_changed(const Object* arg0);
    void _integrate_forces(const PhysicsDirectBodyState* state);
    void _reload_physics_characteristics();
    void add_central_force(const Vector3 force);
    void add_force(const Vector3 force, const Vector3 position);
    void add_torque(const Vector3 torque);
    void apply_central_impulse(const Vector3 impulse);
    void apply_impulse(const Vector3 position, const Vector3 impulse);
    void apply_torque_impulse(const Vector3 impulse);
    real_t get_angular_damp() const;
    Vector3 get_angular_velocity() const;
    bool get_axis_lock(const int64_t axis) const;
    real_t get_bounce() const;
    Array get_colliding_bodies() const;
    real_t get_friction() const;
    real_t get_gravity_scale() const;
    Basis get_inverse_inertia_tensor();
    real_t get_linear_damp() const;
    Vector3 get_linear_velocity() const;
    real_t get_mass() const;
    int64_t get_max_contacts_reported() const;
    RigidBody::Mode get_mode() const;
    Ref<PhysicsMaterial> get_physics_material_override() const;
    real_t get_weight() const;
    bool is_able_to_sleep() const;
    bool is_contact_monitor_enabled() const;
    bool is_sleeping() const;
    bool is_using_continuous_collision_detection() const;
    bool is_using_custom_integrator();
    void set_angular_damp(const real_t angular_damp);
    void set_angular_velocity(const Vector3 angular_velocity);
    void set_axis_lock(const int64_t axis, const bool lock);
    void set_axis_velocity(const Vector3 axis_velocity);
    void set_bounce(const real_t bounce);
    void set_can_sleep(const bool able_to_sleep);
    void set_contact_monitor(const bool enabled);
    void set_friction(const real_t friction);
    void set_gravity_scale(const real_t gravity_scale);
    void set_linear_damp(const real_t linear_damp);
    void set_linear_velocity(const Vector3 linear_velocity);
    void set_mass(const real_t mass);
    void set_max_contacts_reported(const int64_t amount);
    void set_mode(const int64_t mode);
    void set_physics_material_override(const Ref<PhysicsMaterial> physics_material_override);
    void set_sleeping(const bool sleeping);
    void set_use_continuous_collision_detection(const bool enable);
    void set_use_custom_integrator(const bool enable);
    void set_weight(const real_t weight);

    static RigidBody* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "RigidBody";
    }

    inline static const char* get_rebel_class_name() {
        return "RigidBody";
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
        rebel_method_bind* mb_get_axis_lock;
        rebel_method_bind* mb_get_bounce;
        rebel_method_bind* mb_get_colliding_bodies;
        rebel_method_bind* mb_get_friction;
        rebel_method_bind* mb_get_gravity_scale;
        rebel_method_bind* mb_get_inverse_inertia_tensor;
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
        rebel_method_bind* mb_is_using_continuous_collision_detection;
        rebel_method_bind* mb_is_using_custom_integrator;
        rebel_method_bind* mb_set_angular_damp;
        rebel_method_bind* mb_set_angular_velocity;
        rebel_method_bind* mb_set_axis_lock;
        rebel_method_bind* mb_set_axis_velocity;
        rebel_method_bind* mb_set_bounce;
        rebel_method_bind* mb_set_can_sleep;
        rebel_method_bind* mb_set_contact_monitor;
        rebel_method_bind* mb_set_friction;
        rebel_method_bind* mb_set_gravity_scale;
        rebel_method_bind* mb_set_linear_damp;
        rebel_method_bind* mb_set_linear_velocity;
        rebel_method_bind* mb_set_mass;
        rebel_method_bind* mb_set_max_contacts_reported;
        rebel_method_bind* mb_set_mode;
        rebel_method_bind* mb_set_physics_material_override;
        rebel_method_bind* mb_set_sleeping;
        rebel_method_bind* mb_set_use_continuous_collision_detection;
        rebel_method_bind* mb_set_use_custom_integrator;
        rebel_method_bind* mb_set_weight;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RIGIDBODY_H
