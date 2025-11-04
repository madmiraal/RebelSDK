// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NODE2D_H
#define REBEL_NODE2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/canvasitem.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;

class Node2D : public CanvasItem {
public:
    void apply_scale(const Vector2 ratio);
    real_t get_angle_to(const Vector2 point) const;
    Vector2 get_global_position() const;
    real_t get_global_rotation() const;
    real_t get_global_rotation_degrees() const;
    Vector2 get_global_scale() const;
    Vector2 get_position() const;
    Transform2D get_relative_transform_to_parent(const Node* parent) const;
    real_t get_rotation() const;
    real_t get_rotation_degrees() const;
    Vector2 get_scale() const;
    int64_t get_z_index() const;
    void global_translate(const Vector2 offset);
    bool is_z_relative() const;
    void look_at(const Vector2 point);
    void move_local_x(const real_t delta, const bool scaled = false);
    void move_local_y(const real_t delta, const bool scaled = false);
    void rotate(const real_t radians);
    void set_global_position(const Vector2 position);
    void set_global_rotation(const real_t radians);
    void set_global_rotation_degrees(const real_t degrees);
    void set_global_scale(const Vector2 scale);
    void set_global_transform(const Transform2D xform);
    void set_position(const Vector2 position);
    void set_rotation(const real_t radians);
    void set_rotation_degrees(const real_t degrees);
    void set_scale(const Vector2 scale);
    void set_transform(const Transform2D xform);
    void set_z_as_relative(const bool enable);
    void set_z_index(const int64_t z_index);
    Vector2 to_global(const Vector2 local_point) const;
    Vector2 to_local(const Vector2 global_point) const;
    void translate(const Vector2 offset);

    static Node2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Node2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Node2D";
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
        rebel_method_bind* mb_apply_scale;
        rebel_method_bind* mb_get_angle_to;
        rebel_method_bind* mb_get_global_position;
        rebel_method_bind* mb_get_global_rotation;
        rebel_method_bind* mb_get_global_rotation_degrees;
        rebel_method_bind* mb_get_global_scale;
        rebel_method_bind* mb_get_position;
        rebel_method_bind* mb_get_relative_transform_to_parent;
        rebel_method_bind* mb_get_rotation;
        rebel_method_bind* mb_get_rotation_degrees;
        rebel_method_bind* mb_get_scale;
        rebel_method_bind* mb_get_z_index;
        rebel_method_bind* mb_global_translate;
        rebel_method_bind* mb_is_z_relative;
        rebel_method_bind* mb_look_at;
        rebel_method_bind* mb_move_local_x;
        rebel_method_bind* mb_move_local_y;
        rebel_method_bind* mb_rotate;
        rebel_method_bind* mb_set_global_position;
        rebel_method_bind* mb_set_global_rotation;
        rebel_method_bind* mb_set_global_rotation_degrees;
        rebel_method_bind* mb_set_global_scale;
        rebel_method_bind* mb_set_global_transform;
        rebel_method_bind* mb_set_position;
        rebel_method_bind* mb_set_rotation;
        rebel_method_bind* mb_set_rotation_degrees;
        rebel_method_bind* mb_set_scale;
        rebel_method_bind* mb_set_transform;
        rebel_method_bind* mb_set_z_as_relative;
        rebel_method_bind* mb_set_z_index;
        rebel_method_bind* mb_to_global;
        rebel_method_bind* mb_to_local;
        rebel_method_bind* mb_translate;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NODE2D_H
