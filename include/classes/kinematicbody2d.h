// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_KINEMATICBODY2D_H
#define REBEL_KINEMATICBODY2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/physicsbody2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class KinematicCollision2D;
class Object;

class KinematicBody2D : public PhysicsBody2D {
public:
    void _direct_state_changed(const Object* arg0);
    real_t get_floor_angle(const Vector2 up_direction = Vector2(0, -1)) const;
    Vector2 get_floor_normal() const;
    Vector2 get_floor_velocity() const;
    Ref<KinematicCollision2D> get_last_slide_collision();
    real_t get_safe_margin() const;
    Ref<KinematicCollision2D> get_slide_collision(const int64_t slide_idx);
    int64_t get_slide_count() const;
    bool is_on_ceiling() const;
    bool is_on_floor() const;
    bool is_on_wall() const;
    bool is_sync_to_physics_enabled() const;
    Ref<KinematicCollision2D> move_and_collide(const Vector2 rel_vec, const bool infinite_inertia = true, const bool exclude_raycast_shapes = true, const bool test_only = false);
    Vector2 move_and_slide(const Vector2 linear_velocity, const Vector2 up_direction = Vector2(0, 0), const bool stop_on_slope = false, const int64_t max_slides = 4, const real_t floor_max_angle = 0.785398, const bool infinite_inertia = true);
    Vector2 move_and_slide_with_snap(const Vector2 linear_velocity, const Vector2 snap, const Vector2 up_direction = Vector2(0, 0), const bool stop_on_slope = false, const int64_t max_slides = 4, const real_t floor_max_angle = 0.785398, const bool infinite_inertia = true);
    void set_safe_margin(const real_t pixels);
    void set_sync_to_physics(const bool enable);
    bool test_move(const Transform2D from, const Vector2 rel_vec, const bool infinite_inertia = true);

    static KinematicBody2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "KinematicBody2D";
    }

    inline static const char* get_rebel_class_name() {
        return "KinematicBody2D";
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
        rebel_method_bind* mb_get_floor_angle;
        rebel_method_bind* mb_get_floor_normal;
        rebel_method_bind* mb_get_floor_velocity;
        rebel_method_bind* mb_get_last_slide_collision;
        rebel_method_bind* mb_get_safe_margin;
        rebel_method_bind* mb_get_slide_collision;
        rebel_method_bind* mb_get_slide_count;
        rebel_method_bind* mb_is_on_ceiling;
        rebel_method_bind* mb_is_on_floor;
        rebel_method_bind* mb_is_on_wall;
        rebel_method_bind* mb_is_sync_to_physics_enabled;
        rebel_method_bind* mb_move_and_collide;
        rebel_method_bind* mb_move_and_slide;
        rebel_method_bind* mb_move_and_slide_with_snap;
        rebel_method_bind* mb_set_safe_margin;
        rebel_method_bind* mb_set_sync_to_physics;
        rebel_method_bind* mb_test_move;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_KINEMATICBODY2D_H
