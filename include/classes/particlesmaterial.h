// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PARTICLESMATERIAL_H
#define REBEL_PARTICLESMATERIAL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/material.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CurveTexture;
class GradientTexture;
class Texture;

class ParticlesMaterial : public Material {
public:
    enum Flags {
        FLAG_ALIGN_Y_TO_VELOCITY = 0,
        FLAG_ROTATE_Y = 1,
        FLAG_DISABLE_Z = 2,
        FLAG_MAX = 3,
    };

    enum EmissionShape {
        EMISSION_SHAPE_POINT = 0,
        EMISSION_SHAPE_SPHERE = 1,
        EMISSION_SHAPE_BOX = 2,
        EMISSION_SHAPE_POINTS = 3,
        EMISSION_SHAPE_DIRECTED_POINTS = 4,
        EMISSION_SHAPE_RING = 5,
        EMISSION_SHAPE_MAX = 6,
    };

    enum Parameter {
        PARAM_INITIAL_LINEAR_VELOCITY = 0,
        PARAM_ANGULAR_VELOCITY = 1,
        PARAM_ORBIT_VELOCITY = 2,
        PARAM_LINEAR_ACCEL = 3,
        PARAM_RADIAL_ACCEL = 4,
        PARAM_TANGENTIAL_ACCEL = 5,
        PARAM_DAMPING = 6,
        PARAM_ANGLE = 7,
        PARAM_SCALE = 8,
        PARAM_HUE_VARIATION = 9,
        PARAM_ANIM_SPEED = 10,
        PARAM_ANIM_OFFSET = 11,
        PARAM_MAX = 12,
    };

    Color get_color() const;
    Ref<Texture> get_color_ramp() const;
    Vector3 get_direction() const;
    Vector3 get_emission_box_extents() const;
    Ref<Texture> get_emission_color_texture() const;
    Ref<Texture> get_emission_normal_texture() const;
    int64_t get_emission_point_count() const;
    Ref<Texture> get_emission_point_texture() const;
    Vector3 get_emission_ring_axis() const;
    real_t get_emission_ring_height() const;
    real_t get_emission_ring_inner_radius() const;
    real_t get_emission_ring_radius() const;
    ParticlesMaterial::EmissionShape get_emission_shape() const;
    real_t get_emission_sphere_radius() const;
    bool get_flag(const int64_t flag) const;
    real_t get_flatness() const;
    Vector3 get_gravity() const;
    real_t get_lifetime_randomness() const;
    real_t get_param(const int64_t param) const;
    real_t get_param_randomness(const int64_t param) const;
    Ref<Texture> get_param_texture(const int64_t param) const;
    real_t get_spread() const;
    Ref<GradientTexture> get_trail_color_modifier() const;
    int64_t get_trail_divisor() const;
    Ref<CurveTexture> get_trail_size_modifier() const;
    void set_color(const Color color);
    void set_color_ramp(const Ref<Texture> ramp);
    void set_direction(const Vector3 degrees);
    void set_emission_box_extents(const Vector3 extents);
    void set_emission_color_texture(const Ref<Texture> texture);
    void set_emission_normal_texture(const Ref<Texture> texture);
    void set_emission_point_count(const int64_t point_count);
    void set_emission_point_texture(const Ref<Texture> texture);
    void set_emission_ring_axis(const Vector3 axis);
    void set_emission_ring_height(const real_t height);
    void set_emission_ring_inner_radius(const real_t offset);
    void set_emission_ring_radius(const real_t radius);
    void set_emission_shape(const int64_t shape);
    void set_emission_sphere_radius(const real_t radius);
    void set_flag(const int64_t flag, const bool enable);
    void set_flatness(const real_t amount);
    void set_gravity(const Vector3 accel_vec);
    void set_lifetime_randomness(const real_t randomness);
    void set_param(const int64_t param, const real_t value);
    void set_param_randomness(const int64_t param, const real_t randomness);
    void set_param_texture(const int64_t param, const Ref<Texture> texture);
    void set_spread(const real_t degrees);
    void set_trail_color_modifier(const Ref<GradientTexture> texture);
    void set_trail_divisor(const int64_t divisor);
    void set_trail_size_modifier(const Ref<CurveTexture> texture);

    static ParticlesMaterial* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ParticlesMaterial";
    }

    inline static const char* get_rebel_class_name() {
        return "ParticlesMaterial";
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
        rebel_method_bind* mb_get_color;
        rebel_method_bind* mb_get_color_ramp;
        rebel_method_bind* mb_get_direction;
        rebel_method_bind* mb_get_emission_box_extents;
        rebel_method_bind* mb_get_emission_color_texture;
        rebel_method_bind* mb_get_emission_normal_texture;
        rebel_method_bind* mb_get_emission_point_count;
        rebel_method_bind* mb_get_emission_point_texture;
        rebel_method_bind* mb_get_emission_ring_axis;
        rebel_method_bind* mb_get_emission_ring_height;
        rebel_method_bind* mb_get_emission_ring_inner_radius;
        rebel_method_bind* mb_get_emission_ring_radius;
        rebel_method_bind* mb_get_emission_shape;
        rebel_method_bind* mb_get_emission_sphere_radius;
        rebel_method_bind* mb_get_flag;
        rebel_method_bind* mb_get_flatness;
        rebel_method_bind* mb_get_gravity;
        rebel_method_bind* mb_get_lifetime_randomness;
        rebel_method_bind* mb_get_param;
        rebel_method_bind* mb_get_param_randomness;
        rebel_method_bind* mb_get_param_texture;
        rebel_method_bind* mb_get_spread;
        rebel_method_bind* mb_get_trail_color_modifier;
        rebel_method_bind* mb_get_trail_divisor;
        rebel_method_bind* mb_get_trail_size_modifier;
        rebel_method_bind* mb_set_color;
        rebel_method_bind* mb_set_color_ramp;
        rebel_method_bind* mb_set_direction;
        rebel_method_bind* mb_set_emission_box_extents;
        rebel_method_bind* mb_set_emission_color_texture;
        rebel_method_bind* mb_set_emission_normal_texture;
        rebel_method_bind* mb_set_emission_point_count;
        rebel_method_bind* mb_set_emission_point_texture;
        rebel_method_bind* mb_set_emission_ring_axis;
        rebel_method_bind* mb_set_emission_ring_height;
        rebel_method_bind* mb_set_emission_ring_inner_radius;
        rebel_method_bind* mb_set_emission_ring_radius;
        rebel_method_bind* mb_set_emission_shape;
        rebel_method_bind* mb_set_emission_sphere_radius;
        rebel_method_bind* mb_set_flag;
        rebel_method_bind* mb_set_flatness;
        rebel_method_bind* mb_set_gravity;
        rebel_method_bind* mb_set_lifetime_randomness;
        rebel_method_bind* mb_set_param;
        rebel_method_bind* mb_set_param_randomness;
        rebel_method_bind* mb_set_param_texture;
        rebel_method_bind* mb_set_spread;
        rebel_method_bind* mb_set_trail_color_modifier;
        rebel_method_bind* mb_set_trail_divisor;
        rebel_method_bind* mb_set_trail_size_modifier;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PARTICLESMATERIAL_H
