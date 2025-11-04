// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PHYSICSTESTMOTIONRESULT_H
#define REBEL_PHYSICSTESTMOTIONRESULT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class PhysicsTestMotionResult : public Reference {
public:
    Object* get_collider() const;
    int64_t get_collider_id() const;
    RID get_collider_rid() const;
    int64_t get_collider_shape() const;
    Vector3 get_collider_velocity() const;
    real_t get_collision_depth() const;
    Vector3 get_collision_normal() const;
    Vector3 get_collision_point() const;
    real_t get_collision_safe_fraction() const;
    real_t get_collision_unsafe_fraction() const;
    Vector3 get_motion() const;
    Vector3 get_motion_remainder() const;

    static PhysicsTestMotionResult* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PhysicsTestMotionResult";
    }

    inline static const char* get_rebel_class_name() {
        return "PhysicsTestMotionResult";
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
        rebel_method_bind* mb_get_collider;
        rebel_method_bind* mb_get_collider_id;
        rebel_method_bind* mb_get_collider_rid;
        rebel_method_bind* mb_get_collider_shape;
        rebel_method_bind* mb_get_collider_velocity;
        rebel_method_bind* mb_get_collision_depth;
        rebel_method_bind* mb_get_collision_normal;
        rebel_method_bind* mb_get_collision_point;
        rebel_method_bind* mb_get_collision_safe_fraction;
        rebel_method_bind* mb_get_collision_unsafe_fraction;
        rebel_method_bind* mb_get_motion;
        rebel_method_bind* mb_get_motion_remainder;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PHYSICSTESTMOTIONRESULT_H
