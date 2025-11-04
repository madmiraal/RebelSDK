// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_COLLISIONOBJECT_H
#define REBEL_COLLISIONOBJECT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class Object;
class Shape;

class CollisionObject : public Spatial {
public:
    void _input_event(const Object* camera, const Ref<InputEvent> event, const Vector3 position, const Vector3 normal, const int64_t shape_idx);
    void _shape_changed(const Ref<Shape> shape);
    void _update_debug_shapes();
    int64_t create_shape_owner(const Object* owner);
    bool get_capture_input_on_drag() const;
    int64_t get_collision_layer() const;
    bool get_collision_layer_bit(const int64_t bit) const;
    int64_t get_collision_mask() const;
    bool get_collision_mask_bit(const int64_t bit) const;
    RID get_rid() const;
    Array get_shape_owners();
    bool is_ray_pickable() const;
    bool is_shape_owner_disabled(const int64_t owner_id) const;
    void remove_shape_owner(const int64_t owner_id);
    void set_capture_input_on_drag(const bool enable);
    void set_collision_layer(const int64_t layer);
    void set_collision_layer_bit(const int64_t bit, const bool value);
    void set_collision_mask(const int64_t mask);
    void set_collision_mask_bit(const int64_t bit, const bool value);
    void set_ray_pickable(const bool ray_pickable);
    int64_t shape_find_owner(const int64_t shape_index) const;
    void shape_owner_add_shape(const int64_t owner_id, const Ref<Shape> shape);
    void shape_owner_clear_shapes(const int64_t owner_id);
    Object* shape_owner_get_owner(const int64_t owner_id) const;
    Ref<Shape> shape_owner_get_shape(const int64_t owner_id, const int64_t shape_id) const;
    int64_t shape_owner_get_shape_count(const int64_t owner_id) const;
    int64_t shape_owner_get_shape_index(const int64_t owner_id, const int64_t shape_id) const;
    Transform shape_owner_get_transform(const int64_t owner_id) const;
    void shape_owner_remove_shape(const int64_t owner_id, const int64_t shape_id);
    void shape_owner_set_disabled(const int64_t owner_id, const bool disabled);
    void shape_owner_set_transform(const int64_t owner_id, const Transform transform);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CollisionObject";
    }

    inline static const char* get_rebel_class_name() {
        return "CollisionObject";
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
        rebel_method_bind* mb__shape_changed;
        rebel_method_bind* mb__update_debug_shapes;
        rebel_method_bind* mb_create_shape_owner;
        rebel_method_bind* mb_get_capture_input_on_drag;
        rebel_method_bind* mb_get_collision_layer;
        rebel_method_bind* mb_get_collision_layer_bit;
        rebel_method_bind* mb_get_collision_mask;
        rebel_method_bind* mb_get_collision_mask_bit;
        rebel_method_bind* mb_get_rid;
        rebel_method_bind* mb_get_shape_owners;
        rebel_method_bind* mb_is_ray_pickable;
        rebel_method_bind* mb_is_shape_owner_disabled;
        rebel_method_bind* mb_remove_shape_owner;
        rebel_method_bind* mb_set_capture_input_on_drag;
        rebel_method_bind* mb_set_collision_layer;
        rebel_method_bind* mb_set_collision_layer_bit;
        rebel_method_bind* mb_set_collision_mask;
        rebel_method_bind* mb_set_collision_mask_bit;
        rebel_method_bind* mb_set_ray_pickable;
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
        rebel_method_bind* mb_shape_owner_set_transform;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_COLLISIONOBJECT_H
