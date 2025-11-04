// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CPUPARTICLES_H
#define REBEL_CPUPARTICLES_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/geometryinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Curve;
class Gradient;
class Mesh;
class Node;

class CPUParticles : public GeometryInstance {
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

    enum DrawOrder {
        DRAW_ORDER_INDEX = 0,
        DRAW_ORDER_LIFETIME = 1,
        DRAW_ORDER_VIEW_DEPTH = 2,
    };

    void _update_render_thread();
    void convert_from_particles(const Node* particles);
    int64_t get_amount() const;
    Color get_color() const;
    Ref<Gradient> get_color_ramp() const;
    Vector3 get_direction() const;
    CPUParticles::DrawOrder get_draw_order() const;
    Vector3 get_emission_box_extents() const;
    PoolColorArray get_emission_colors() const;
    PoolVector3Array get_emission_normals() const;
    PoolVector3Array get_emission_points() const;
    Vector3 get_emission_ring_axis() const;
    real_t get_emission_ring_height() const;
    real_t get_emission_ring_inner_radius() const;
    real_t get_emission_ring_radius() const;
    CPUParticles::EmissionShape get_emission_shape() const;
    real_t get_emission_sphere_radius() const;
    real_t get_explosiveness_ratio() const;
    int64_t get_fixed_fps() const;
    real_t get_flatness() const;
    bool get_fractional_delta() const;
    Vector3 get_gravity() const;
    real_t get_lifetime() const;
    real_t get_lifetime_randomness() const;
    Ref<Mesh> get_mesh() const;
    bool get_one_shot() const;
    real_t get_param(const int64_t param) const;
    Ref<Curve> get_param_curve(const int64_t param) const;
    real_t get_param_randomness(const int64_t param) const;
    bool get_particle_flag(const int64_t flag) const;
    real_t get_pre_process_time() const;
    real_t get_randomness_ratio() const;
    real_t get_speed_scale() const;
    real_t get_spread() const;
    bool get_use_local_coordinates() const;
    bool is_emitting() const;
    void restart();
    void set_amount(const int64_t amount);
    void set_color(const Color color);
    void set_color_ramp(const Ref<Gradient> ramp);
    void set_direction(const Vector3 direction);
    void set_draw_order(const int64_t order);
    void set_emission_box_extents(const Vector3 extents);
    void set_emission_colors(const PoolColorArray array);
    void set_emission_normals(const PoolVector3Array array);
    void set_emission_points(const PoolVector3Array array);
    void set_emission_ring_axis(const Vector3 axis);
    void set_emission_ring_height(const real_t height);
    void set_emission_ring_inner_radius(const real_t offset);
    void set_emission_ring_radius(const real_t radius);
    void set_emission_shape(const int64_t shape);
    void set_emission_sphere_radius(const real_t radius);
    void set_emitting(const bool emitting);
    void set_explosiveness_ratio(const real_t ratio);
    void set_fixed_fps(const int64_t fps);
    void set_flatness(const real_t amount);
    void set_fractional_delta(const bool enable);
    void set_gravity(const Vector3 accel_vec);
    void set_lifetime(const real_t secs);
    void set_lifetime_randomness(const real_t random);
    void set_mesh(const Ref<Mesh> mesh);
    void set_one_shot(const bool enable);
    void set_param(const int64_t param, const real_t value);
    void set_param_curve(const int64_t param, const Ref<Curve> curve);
    void set_param_randomness(const int64_t param, const real_t randomness);
    void set_particle_flag(const int64_t flag, const bool enable);
    void set_pre_process_time(const real_t secs);
    void set_randomness_ratio(const real_t ratio);
    void set_speed_scale(const real_t scale);
    void set_spread(const real_t degrees);
    void set_use_local_coordinates(const bool enable);

    static CPUParticles* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CPUParticles";
    }

    inline static const char* get_rebel_class_name() {
        return "CPUParticles";
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
        rebel_method_bind* mb__update_render_thread;
        rebel_method_bind* mb_convert_from_particles;
        rebel_method_bind* mb_get_amount;
        rebel_method_bind* mb_get_color;
        rebel_method_bind* mb_get_color_ramp;
        rebel_method_bind* mb_get_direction;
        rebel_method_bind* mb_get_draw_order;
        rebel_method_bind* mb_get_emission_box_extents;
        rebel_method_bind* mb_get_emission_colors;
        rebel_method_bind* mb_get_emission_normals;
        rebel_method_bind* mb_get_emission_points;
        rebel_method_bind* mb_get_emission_ring_axis;
        rebel_method_bind* mb_get_emission_ring_height;
        rebel_method_bind* mb_get_emission_ring_inner_radius;
        rebel_method_bind* mb_get_emission_ring_radius;
        rebel_method_bind* mb_get_emission_shape;
        rebel_method_bind* mb_get_emission_sphere_radius;
        rebel_method_bind* mb_get_explosiveness_ratio;
        rebel_method_bind* mb_get_fixed_fps;
        rebel_method_bind* mb_get_flatness;
        rebel_method_bind* mb_get_fractional_delta;
        rebel_method_bind* mb_get_gravity;
        rebel_method_bind* mb_get_lifetime;
        rebel_method_bind* mb_get_lifetime_randomness;
        rebel_method_bind* mb_get_mesh;
        rebel_method_bind* mb_get_one_shot;
        rebel_method_bind* mb_get_param;
        rebel_method_bind* mb_get_param_curve;
        rebel_method_bind* mb_get_param_randomness;
        rebel_method_bind* mb_get_particle_flag;
        rebel_method_bind* mb_get_pre_process_time;
        rebel_method_bind* mb_get_randomness_ratio;
        rebel_method_bind* mb_get_speed_scale;
        rebel_method_bind* mb_get_spread;
        rebel_method_bind* mb_get_use_local_coordinates;
        rebel_method_bind* mb_is_emitting;
        rebel_method_bind* mb_restart;
        rebel_method_bind* mb_set_amount;
        rebel_method_bind* mb_set_color;
        rebel_method_bind* mb_set_color_ramp;
        rebel_method_bind* mb_set_direction;
        rebel_method_bind* mb_set_draw_order;
        rebel_method_bind* mb_set_emission_box_extents;
        rebel_method_bind* mb_set_emission_colors;
        rebel_method_bind* mb_set_emission_normals;
        rebel_method_bind* mb_set_emission_points;
        rebel_method_bind* mb_set_emission_ring_axis;
        rebel_method_bind* mb_set_emission_ring_height;
        rebel_method_bind* mb_set_emission_ring_inner_radius;
        rebel_method_bind* mb_set_emission_ring_radius;
        rebel_method_bind* mb_set_emission_shape;
        rebel_method_bind* mb_set_emission_sphere_radius;
        rebel_method_bind* mb_set_emitting;
        rebel_method_bind* mb_set_explosiveness_ratio;
        rebel_method_bind* mb_set_fixed_fps;
        rebel_method_bind* mb_set_flatness;
        rebel_method_bind* mb_set_fractional_delta;
        rebel_method_bind* mb_set_gravity;
        rebel_method_bind* mb_set_lifetime;
        rebel_method_bind* mb_set_lifetime_randomness;
        rebel_method_bind* mb_set_mesh;
        rebel_method_bind* mb_set_one_shot;
        rebel_method_bind* mb_set_param;
        rebel_method_bind* mb_set_param_curve;
        rebel_method_bind* mb_set_param_randomness;
        rebel_method_bind* mb_set_particle_flag;
        rebel_method_bind* mb_set_pre_process_time;
        rebel_method_bind* mb_set_randomness_ratio;
        rebel_method_bind* mb_set_speed_scale;
        rebel_method_bind* mb_set_spread;
        rebel_method_bind* mb_set_use_local_coordinates;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CPUPARTICLES_H
