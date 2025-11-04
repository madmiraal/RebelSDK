// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PHYSICSDIRECTBODYSTATE_H
#define REBEL_PHYSICSDIRECTBODYSTATE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PhysicsDirectSpaceState;

class PhysicsDirectBodyState : public Object {
public:
    void add_central_force(const Vector3 force);
    void add_force(const Vector3 force, const Vector3 position);
    void add_torque(const Vector3 torque);
    void apply_central_impulse(const Vector3 j);
    void apply_impulse(const Vector3 position, const Vector3 j);
    void apply_torque_impulse(const Vector3 j);
    Vector3 get_angular_velocity() const;
    Vector3 get_center_of_mass() const;
    RID get_contact_collider(const int64_t contact_idx) const;
    int64_t get_contact_collider_id(const int64_t contact_idx) const;
    Object* get_contact_collider_object(const int64_t contact_idx) const;
    Vector3 get_contact_collider_position(const int64_t contact_idx) const;
    int64_t get_contact_collider_shape(const int64_t contact_idx) const;
    Vector3 get_contact_collider_velocity_at_position(const int64_t contact_idx) const;
    int64_t get_contact_count() const;
    real_t get_contact_impulse(const int64_t contact_idx) const;
    Vector3 get_contact_local_normal(const int64_t contact_idx) const;
    Vector3 get_contact_local_position(const int64_t contact_idx) const;
    int64_t get_contact_local_shape(const int64_t contact_idx) const;
    Vector3 get_inverse_inertia() const;
    real_t get_inverse_mass() const;
    Vector3 get_linear_velocity() const;
    Basis get_principal_inertia_axes() const;
    PhysicsDirectSpaceState* get_space_state();
    real_t get_step() const;
    real_t get_total_angular_damp() const;
    Vector3 get_total_gravity() const;
    real_t get_total_linear_damp() const;
    Transform get_transform() const;
    Vector3 get_velocity_at_local_position(const Vector3 local_position) const;
    void integrate_forces();
    bool is_sleeping() const;
    void set_angular_velocity(const Vector3 velocity);
    void set_linear_velocity(const Vector3 velocity);
    void set_sleep_state(const bool enabled);
    void set_transform(const Transform transform);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PhysicsDirectBodyState";
    }

    inline static const char* get_rebel_class_name() {
        return "PhysicsDirectBodyState";
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
        rebel_method_bind* mb_add_central_force;
        rebel_method_bind* mb_add_force;
        rebel_method_bind* mb_add_torque;
        rebel_method_bind* mb_apply_central_impulse;
        rebel_method_bind* mb_apply_impulse;
        rebel_method_bind* mb_apply_torque_impulse;
        rebel_method_bind* mb_get_angular_velocity;
        rebel_method_bind* mb_get_center_of_mass;
        rebel_method_bind* mb_get_contact_collider;
        rebel_method_bind* mb_get_contact_collider_id;
        rebel_method_bind* mb_get_contact_collider_object;
        rebel_method_bind* mb_get_contact_collider_position;
        rebel_method_bind* mb_get_contact_collider_shape;
        rebel_method_bind* mb_get_contact_collider_velocity_at_position;
        rebel_method_bind* mb_get_contact_count;
        rebel_method_bind* mb_get_contact_impulse;
        rebel_method_bind* mb_get_contact_local_normal;
        rebel_method_bind* mb_get_contact_local_position;
        rebel_method_bind* mb_get_contact_local_shape;
        rebel_method_bind* mb_get_inverse_inertia;
        rebel_method_bind* mb_get_inverse_mass;
        rebel_method_bind* mb_get_linear_velocity;
        rebel_method_bind* mb_get_principal_inertia_axes;
        rebel_method_bind* mb_get_space_state;
        rebel_method_bind* mb_get_step;
        rebel_method_bind* mb_get_total_angular_damp;
        rebel_method_bind* mb_get_total_gravity;
        rebel_method_bind* mb_get_total_linear_damp;
        rebel_method_bind* mb_get_transform;
        rebel_method_bind* mb_get_velocity_at_local_position;
        rebel_method_bind* mb_integrate_forces;
        rebel_method_bind* mb_is_sleeping;
        rebel_method_bind* mb_set_angular_velocity;
        rebel_method_bind* mb_set_linear_velocity;
        rebel_method_bind* mb_set_sleep_state;
        rebel_method_bind* mb_set_transform;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PHYSICSDIRECTBODYSTATE_H
