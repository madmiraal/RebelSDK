// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONNODEBLENDSPACE2D_H
#define REBEL_ANIMATIONNODEBLENDSPACE2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/animationrootnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AnimationNodeBlendSpace2D : public AnimationRootNode {
public:
    enum BlendMode {
        BLEND_MODE_INTERPOLATED = 0,
        BLEND_MODE_DISCRETE = 1,
        BLEND_MODE_DISCRETE_CARRY = 2,
    };

    void _add_blend_point(const int64_t index, const Ref<AnimationRootNode> node);
    PoolIntArray _get_triangles() const;
    void _set_triangles(const PoolIntArray triangles);
    void _tree_changed();
    void _update_triangles();
    void add_blend_point(const Ref<AnimationRootNode> node, const Vector2 pos, const int64_t at_index = -1);
    void add_triangle(const int64_t x, const int64_t y, const int64_t z, const int64_t at_index = -1);
    bool get_auto_triangles() const;
    AnimationNodeBlendSpace2D::BlendMode get_blend_mode() const;
    int64_t get_blend_point_count() const;
    Ref<AnimationRootNode> get_blend_point_node(const int64_t point) const;
    Vector2 get_blend_point_position(const int64_t point) const;
    Vector2 get_max_space() const;
    Vector2 get_min_space() const;
    Vector2 get_snap() const;
    int64_t get_triangle_count() const;
    int64_t get_triangle_point(const int64_t triangle, const int64_t point);
    String get_x_label() const;
    String get_y_label() const;
    void remove_blend_point(const int64_t point);
    void remove_triangle(const int64_t triangle);
    void set_auto_triangles(const bool enable);
    void set_blend_mode(const int64_t mode);
    void set_blend_point_node(const int64_t point, const Ref<AnimationRootNode> node);
    void set_blend_point_position(const int64_t point, const Vector2 pos);
    void set_max_space(const Vector2 max_space);
    void set_min_space(const Vector2 min_space);
    void set_snap(const Vector2 snap);
    void set_x_label(const String text);
    void set_y_label(const String text);

    static AnimationNodeBlendSpace2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationNodeBlendSpace2D";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationNodeBlendSpace2D";
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
        rebel_method_bind* mb__add_blend_point;
        rebel_method_bind* mb__get_triangles;
        rebel_method_bind* mb__set_triangles;
        rebel_method_bind* mb__tree_changed;
        rebel_method_bind* mb__update_triangles;
        rebel_method_bind* mb_add_blend_point;
        rebel_method_bind* mb_add_triangle;
        rebel_method_bind* mb_get_auto_triangles;
        rebel_method_bind* mb_get_blend_mode;
        rebel_method_bind* mb_get_blend_point_count;
        rebel_method_bind* mb_get_blend_point_node;
        rebel_method_bind* mb_get_blend_point_position;
        rebel_method_bind* mb_get_max_space;
        rebel_method_bind* mb_get_min_space;
        rebel_method_bind* mb_get_snap;
        rebel_method_bind* mb_get_triangle_count;
        rebel_method_bind* mb_get_triangle_point;
        rebel_method_bind* mb_get_x_label;
        rebel_method_bind* mb_get_y_label;
        rebel_method_bind* mb_remove_blend_point;
        rebel_method_bind* mb_remove_triangle;
        rebel_method_bind* mb_set_auto_triangles;
        rebel_method_bind* mb_set_blend_mode;
        rebel_method_bind* mb_set_blend_point_node;
        rebel_method_bind* mb_set_blend_point_position;
        rebel_method_bind* mb_set_max_space;
        rebel_method_bind* mb_set_min_space;
        rebel_method_bind* mb_set_snap;
        rebel_method_bind* mb_set_x_label;
        rebel_method_bind* mb_set_y_label;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONNODEBLENDSPACE2D_H
