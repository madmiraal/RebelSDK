// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_COLLISIONOBJECT2D_H
#define REBEL_COLLISIONOBJECT2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class Object;
class Shape2D;

class CollisionObject2D : public Node2D {
public:
    void _input_event(const Object* viewport, const Ref<InputEvent> event, const int64_t shape_idx);
    int64_t create_shape_owner(const Object* owner);
    int64_t get_collision_layer() const;
    bool get_collision_layer_bit(const int64_t bit) const;
    int64_t get_collision_mask() const;
    bool get_collision_mask_bit(const int64_t bit) const;
    RID get_rid() const;
    real_t get_shape_owner_one_way_collision_margin(const int64_t owner_id) const;
    Array get_shape_owners();
    bool is_pickable() const;
    bool is_shape_owner_disabled(const int64_t owner_id) const;
    bool is_shape_owner_one_way_collision_enabled(const int64_t owner_id) const;
    void remove_shape_owner(const int64_t owner_id);
    void set_collision_layer(const int64_t layer);
    void set_collision_layer_bit(const int64_t bit, const bool value);
    void set_collision_mask(const int64_t mask);
    void set_collision_mask_bit(const int64_t bit, const bool value);
    void set_pickable(const bool enabled);
    int64_t shape_find_owner(const int64_t shape_index) const;
    void shape_owner_add_shape(const int64_t owner_id, const Ref<Shape2D> shape);
    void shape_owner_clear_shapes(const int64_t owner_id);
    Object* shape_owner_get_owner(const int64_t owner_id) const;
    Ref<Shape2D> shape_owner_get_shape(const int64_t owner_id, const int64_t shape_id) const;
    int64_t shape_owner_get_shape_count(const int64_t owner_id) const;
    int64_t shape_owner_get_shape_index(const int64_t owner_id, const int64_t shape_id) const;
    Transform2D shape_owner_get_transform(const int64_t owner_id) const;
    void shape_owner_remove_shape(const int64_t owner_id, const int64_t shape_id);
    void shape_owner_set_disabled(const int64_t owner_id, const bool disabled);
    void shape_owner_set_one_way_collision(const int64_t owner_id, const bool enable);
    void shape_owner_set_one_way_collision_margin(const int64_t owner_id, const real_t margin);
    void shape_owner_set_transform(const int64_t owner_id, const Transform2D transform);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CollisionObject2D";
    }

    inline static const char* get_rebel_class_name() {
        return "CollisionObject2D";
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
        rebel_method_bind* mb__input_event;
        rebel_method_bind* mb_create_shape_owner;
        rebel_method_bind* mb_get_collision_layer;
        rebel_method_bind* mb_get_collision_layer_bit;
        rebel_method_bind* mb_get_collision_mask;
        rebel_method_bind* mb_get_collision_mask_bit;
        rebel_method_bind* mb_get_rid;
        rebel_method_bind* mb_get_shape_owner_one_way_collision_margin;
        rebel_method_bind* mb_get_shape_owners;
        rebel_method_bind* mb_is_pickable;
        rebel_method_bind* mb_is_shape_owner_disabled;
        rebel_method_bind* mb_is_shape_owner_one_way_collision_enabled;
        rebel_method_bind* mb_remove_shape_owner;
        rebel_method_bind* mb_set_collision_layer;
        rebel_method_bind* mb_set_collision_layer_bit;
        rebel_method_bind* mb_set_collision_mask;
        rebel_method_bind* mb_set_collision_mask_bit;
        rebel_method_bind* mb_set_pickable;
        rebel_method_bind* mb_shape_find_owner;
        rebel_method_bind* mb_shape_owner_add_shape;
        rebel_method_bind* mb_shape_owner_clear_shapes;
        rebel_method_bind* mb_shape_owner_get_owner;
        rebel_method_bind* mb_shape_owner_get_shape;
        rebel_method_bind* mb_shape_owner_get_shape_count;
        rebel_method_bind* mb_shape_owner_get_shape_index;
        rebel_method_bind* mb_shape_owner_get_transform;
        rebel_method_bind* mb_shape_owner_remove_shape;
        rebel_method_bind* mb_shape_owner_set_disabled;
        rebel_method_bind* mb_shape_owner_set_one_way_collision;
        rebel_method_bind* mb_shape_owner_set_one_way_collision_margin;
        rebel_method_bind* mb_shape_owner_set_transform;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_COLLISIONOBJECT2D_H
