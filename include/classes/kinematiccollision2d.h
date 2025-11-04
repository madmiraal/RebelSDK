// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_KINEMATICCOLLISION2D_H
#define REBEL_KINEMATICCOLLISION2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class KinematicCollision2D : public Reference {
public:
    real_t get_angle(const Vector2 up_direction = Vector2(0, -1)) const;
    Object* get_collider() const;
    int64_t get_collider_id() const;
    Variant get_collider_metadata() const;
    RID get_collider_rid() const;
    Object* get_collider_shape() const;
    int64_t get_collider_shape_index() const;
    Vector2 get_collider_velocity() const;
    Object* get_local_shape() const;
    Vector2 get_normal() const;
    Vector2 get_position() const;
    Vector2 get_remainder() const;
    Vector2 get_travel() const;

    static KinematicCollision2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "KinematicCollision2D";
    }

    inline static const char* get_rebel_class_name() {
        return "KinematicCollision2D";
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
        rebel_method_bind* mb_get_angle;
        rebel_method_bind* mb_get_collider;
        rebel_method_bind* mb_get_collider_id;
        rebel_method_bind* mb_get_collider_metadata;
        rebel_method_bind* mb_get_collider_rid;
        rebel_method_bind* mb_get_collider_shape;
        rebel_method_bind* mb_get_collider_shape_index;
        rebel_method_bind* mb_get_collider_velocity;
        rebel_method_bind* mb_get_local_shape;
        rebel_method_bind* mb_get_normal;
        rebel_method_bind* mb_get_position;
        rebel_method_bind* mb_get_remainder;
        rebel_method_bind* mb_get_travel;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_KINEMATICCOLLISION2D_H
