// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RAYCAST2D_H
#define REBEL_RAYCAST2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class RayCast2D : public Node2D {
public:
    void add_exception(const Object* node);
    void add_exception_rid(const RID rid);
    void clear_exceptions();
    void force_raycast_update();
    Vector2 get_cast_to() const;
    Object* get_collider() const;
    int64_t get_collider_shape() const;
    int64_t get_collision_mask() const;
    bool get_collision_mask_bit(const int64_t bit) const;
    Vector2 get_collision_normal() const;
    Vector2 get_collision_point() const;
    bool get_exclude_parent_body() const;
    bool is_collide_with_areas_enabled() const;
    bool is_collide_with_bodies_enabled() const;
    bool is_colliding() const;
    bool is_enabled() const;
    void remove_exception(const Object* node);
    void remove_exception_rid(const RID rid);
    void set_cast_to(const Vector2 local_point);
    void set_collide_with_areas(const bool enable);
    void set_collide_with_bodies(const bool enable);
    void set_collision_mask(const int64_t mask);
    void set_collision_mask_bit(const int64_t bit, const bool value);
    void set_enabled(const bool enabled);
    void set_exclude_parent_body(const bool mask);

    static RayCast2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "RayCast2D";
    }

    inline static const char* get_rebel_class_name() {
        return "RayCast2D";
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
        rebel_method_bind* mb_add_exception;
        rebel_method_bind* mb_add_exception_rid;
        rebel_method_bind* mb_clear_exceptions;
        rebel_method_bind* mb_force_raycast_update;
        rebel_method_bind* mb_get_cast_to;
        rebel_method_bind* mb_get_collider;
        rebel_method_bind* mb_get_collider_shape;
        rebel_method_bind* mb_get_collision_mask;
        rebel_method_bind* mb_get_collision_mask_bit;
        rebel_method_bind* mb_get_collision_normal;
        rebel_method_bind* mb_get_collision_point;
        rebel_method_bind* mb_get_exclude_parent_body;
        rebel_method_bind* mb_is_collide_with_areas_enabled;
        rebel_method_bind* mb_is_collide_with_bodies_enabled;
        rebel_method_bind* mb_is_colliding;
        rebel_method_bind* mb_is_enabled;
        rebel_method_bind* mb_remove_exception;
        rebel_method_bind* mb_remove_exception_rid;
        rebel_method_bind* mb_set_cast_to;
        rebel_method_bind* mb_set_collide_with_areas;
        rebel_method_bind* mb_set_collide_with_bodies;
        rebel_method_bind* mb_set_collision_mask;
        rebel_method_bind* mb_set_collision_mask_bit;
        rebel_method_bind* mb_set_enabled;
        rebel_method_bind* mb_set_exclude_parent_body;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RAYCAST2D_H
