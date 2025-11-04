// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_LINE2D_H
#define REBEL_LINE2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Curve;
class Gradient;
class Texture;

class Line2D : public Node2D {
public:
    enum LineTextureMode {
        LINE_TEXTURE_NONE = 0,
        LINE_TEXTURE_TILE = 1,
        LINE_TEXTURE_STRETCH = 2,
    };

    enum LineCapMode {
        LINE_CAP_NONE = 0,
        LINE_CAP_BOX = 1,
        LINE_CAP_ROUND = 2,
    };

    enum LineJointMode {
        LINE_JOINT_SHARP = 0,
        LINE_JOINT_BEVEL = 1,
        LINE_JOINT_ROUND = 2,
    };

    void _curve_changed();
    void _gradient_changed();
    void add_point(const Vector2 position, const int64_t at_position = -1);
    void clear_points();
    bool get_antialiased() const;
    Line2D::LineCapMode get_begin_cap_mode() const;
    Ref<Curve> get_curve() const;
    Color get_default_color() const;
    Line2D::LineCapMode get_end_cap_mode() const;
    Ref<Gradient> get_gradient() const;
    Line2D::LineJointMode get_joint_mode() const;
    int64_t get_point_count() const;
    Vector2 get_point_position(const int64_t i) const;
    PoolVector2Array get_points() const;
    int64_t get_round_precision() const;
    real_t get_sharp_limit() const;
    Ref<Texture> get_texture() const;
    Line2D::LineTextureMode get_texture_mode() const;
    real_t get_width() const;
    void remove_point(const int64_t i);
    void set_antialiased(const bool antialiased);
    void set_begin_cap_mode(const int64_t mode);
    void set_curve(const Ref<Curve> curve);
    void set_default_color(const Color color);
    void set_end_cap_mode(const int64_t mode);
    void set_gradient(const Ref<Gradient> color);
    void set_joint_mode(const int64_t mode);
    void set_point_position(const int64_t i, const Vector2 position);
    void set_points(const PoolVector2Array points);
    void set_round_precision(const int64_t precision);
    void set_sharp_limit(const real_t limit);
    void set_texture(const Ref<Texture> texture);
    void set_texture_mode(const int64_t mode);
    void set_width(const real_t width);

    static Line2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Line2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Line2D";
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
        rebel_method_bind* mb__curve_changed;
        rebel_method_bind* mb__gradient_changed;
        rebel_method_bind* mb_add_point;
        rebel_method_bind* mb_clear_points;
        rebel_method_bind* mb_get_antialiased;
        rebel_method_bind* mb_get_begin_cap_mode;
        rebel_method_bind* mb_get_curve;
        rebel_method_bind* mb_get_default_color;
        rebel_method_bind* mb_get_end_cap_mode;
        rebel_method_bind* mb_get_gradient;
        rebel_method_bind* mb_get_joint_mode;
        rebel_method_bind* mb_get_point_count;
        rebel_method_bind* mb_get_point_position;
        rebel_method_bind* mb_get_points;
        rebel_method_bind* mb_get_round_precision;
        rebel_method_bind* mb_get_sharp_limit;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_get_texture_mode;
        rebel_method_bind* mb_get_width;
        rebel_method_bind* mb_remove_point;
        rebel_method_bind* mb_set_antialiased;
        rebel_method_bind* mb_set_begin_cap_mode;
        rebel_method_bind* mb_set_curve;
        rebel_method_bind* mb_set_default_color;
        rebel_method_bind* mb_set_end_cap_mode;
        rebel_method_bind* mb_set_gradient;
        rebel_method_bind* mb_set_joint_mode;
        rebel_method_bind* mb_set_point_position;
        rebel_method_bind* mb_set_points;
        rebel_method_bind* mb_set_round_precision;
        rebel_method_bind* mb_set_sharp_limit;
        rebel_method_bind* mb_set_texture;
        rebel_method_bind* mb_set_texture_mode;
        rebel_method_bind* mb_set_width;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_LINE2D_H
