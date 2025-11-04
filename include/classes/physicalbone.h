// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PHYSICALBONE_H
#define REBEL_PHYSICALBONE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/physicsbody.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class PhysicalBone : public PhysicsBody {
public:
    enum JointType {
        JOINT_TYPE_NONE = 0,
        JOINT_TYPE_PIN = 1,
        JOINT_TYPE_CONE = 2,
        JOINT_TYPE_HINGE = 3,
        JOINT_TYPE_SLIDER = 4,
        JOINT_TYPE_6DOF = 5,
    };

    void _direct_state_changed(const Object* arg0);
    void apply_central_impulse(const Vector3 impulse);
    void apply_impulse(const Vector3 position, const Vector3 impulse);
    Transform get_body_offset() const;
    int64_t get_bone_id() const;
    real_t get_bounce() const;
    real_t get_friction() const;
    real_t get_gravity_scale() const;
    Transform get_joint_offset() const;
    PhysicalBone::JointType get_joint_type() const;
    real_t get_mass() const;
    bool get_simulate_physics();
    real_t get_weight() const;
    bool is_simulating_physics();
    bool is_static_body();
    void set_body_offset(const Transform offset);
    void set_bounce(const real_t bounce);
    void set_friction(const real_t friction);
    void set_gravity_scale(const real_t gravity_scale);
    void set_joint_offset(const Transform offset);
    void set_joint_type(const int64_t joint_type);
    void set_mass(const real_t mass);
    void set_weight(const real_t weight);

    static PhysicalBone* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PhysicalBone";
    }

    inline static const char* get_rebel_class_name() {
        return "PhysicalBone";
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
        rebel_method_bind* mb__direct_state_changed;
        rebel_method_bind* mb_apply_central_impulse;
        rebel_method_bind* mb_apply_impulse;
        rebel_method_bind* mb_get_body_offset;
        rebel_method_bind* mb_get_bone_id;
        rebel_method_bind* mb_get_bounce;
        rebel_method_bind* mb_get_friction;
        rebel_method_bind* mb_get_gravity_scale;
        rebel_method_bind* mb_get_joint_offset;
        rebel_method_bind* mb_get_joint_type;
        rebel_method_bind* mb_get_mass;
        rebel_method_bind* mb_get_simulate_physics;
        rebel_method_bind* mb_get_weight;
        rebel_method_bind* mb_is_simulating_physics;
        rebel_method_bind* mb_is_static_body;
        rebel_method_bind* mb_set_body_offset;
        rebel_method_bind* mb_set_bounce;
        rebel_method_bind* mb_set_friction;
        rebel_method_bind* mb_set_gravity_scale;
        rebel_method_bind* mb_set_joint_offset;
        rebel_method_bind* mb_set_joint_type;
        rebel_method_bind* mb_set_mass;
        rebel_method_bind* mb_set_weight;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PHYSICALBONE_H
