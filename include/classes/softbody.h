// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SOFTBODY_H
#define REBEL_SOFTBODY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/meshinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;

class SoftBody : public MeshInstance {
public:
    void _draw_soft_mesh();
    void add_collision_exception_with(const Node* body);
    real_t get_areaAngular_stiffness();
    Array get_collision_exceptions();
    int64_t get_collision_layer() const;
    bool get_collision_layer_bit(const int64_t bit) const;
    int64_t get_collision_mask() const;
    bool get_collision_mask_bit(const int64_t bit) const;
    real_t get_damping_coefficient();
    real_t get_drag_coefficient();
    real_t get_linear_stiffness();
    NodePath get_parent_collision_ignore() const;
    Vector3 get_point_transform(const int64_t point_index);
    real_t get_pose_matching_coefficient();
    real_t get_pressure_coefficient();
    int64_t get_simulation_precision();
    real_t get_total_mass();
    real_t get_volume_stiffness();
    bool is_physics_enabled() const;
    bool is_point_pinned(const int64_t point_index) const;
    bool is_ray_pickable() const;
    void remove_collision_exception_with(const Node* body);
    void set_areaAngular_stiffness(const real_t areaAngular_stiffness);
    void set_collision_layer(const int64_t collision_layer);
    void set_collision_layer_bit(const int64_t bit, const bool value);
    void set_collision_mask(const int64_t collision_mask);
    void set_collision_mask_bit(const int64_t bit, const bool value);
    void set_damping_coefficient(const real_t damping_coefficient);
    void set_drag_coefficient(const real_t drag_coefficient);
    void set_linear_stiffness(const real_t linear_stiffness);
    void set_parent_collision_ignore(const NodePath parent_collision_ignore);
    void set_physics_enabled(const bool enabled);
    void set_point_pinned(const int64_t point_index, const bool pinned, const NodePath attachment_path = "");
    void set_pose_matching_coefficient(const real_t pose_matching_coefficient);
    void set_pressure_coefficient(const real_t pressure_coefficient);
    void set_ray_pickable(const bool ray_pickable);
    void set_simulation_precision(const int64_t simulation_precision);
    void set_total_mass(const real_t mass);
    void set_volume_stiffness(const real_t volume_stiffness);

    static SoftBody* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SoftBody";
    }

    inline static const char* get_rebel_class_name() {
        return "SoftBody";
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
        rebel_method_bind* mb__draw_soft_mesh;
        rebel_method_bind* mb_add_collision_exception_with;
        rebel_method_bind* mb_get_areaAngular_stiffness;
        rebel_method_bind* mb_get_collision_exceptions;
        rebel_method_bind* mb_get_collision_layer;
        rebel_method_bind* mb_get_collision_layer_bit;
        rebel_method_bind* mb_get_collision_mask;
        rebel_method_bind* mb_get_collision_mask_bit;
        rebel_method_bind* mb_get_damping_coefficient;
        rebel_method_bind* mb_get_drag_coefficient;
        rebel_method_bind* mb_get_linear_stiffness;
        rebel_method_bind* mb_get_parent_collision_ignore;
        rebel_method_bind* mb_get_point_transform;
        rebel_method_bind* mb_get_pose_matching_coefficient;
        rebel_method_bind* mb_get_pressure_coefficient;
        rebel_method_bind* mb_get_simulation_precision;
        rebel_method_bind* mb_get_total_mass;
        rebel_method_bind* mb_get_volume_stiffness;
        rebel_method_bind* mb_is_physics_enabled;
        rebel_method_bind* mb_is_point_pinned;
        rebel_method_bind* mb_is_ray_pickable;
        rebel_method_bind* mb_remove_collision_exception_with;
        rebel_method_bind* mb_set_areaAngular_stiffness;
        rebel_method_bind* mb_set_collision_layer;
        rebel_method_bind* mb_set_collision_layer_bit;
        rebel_method_bind* mb_set_collision_mask;
        rebel_method_bind* mb_set_collision_mask_bit;
        rebel_method_bind* mb_set_damping_coefficient;
        rebel_method_bind* mb_set_drag_coefficient;
        rebel_method_bind* mb_set_linear_stiffness;
        rebel_method_bind* mb_set_parent_collision_ignore;
        rebel_method_bind* mb_set_physics_enabled;
        rebel_method_bind* mb_set_point_pinned;
        rebel_method_bind* mb_set_pose_matching_coefficient;
        rebel_method_bind* mb_set_pressure_coefficient;
        rebel_method_bind* mb_set_ray_pickable;
        rebel_method_bind* mb_set_simulation_precision;
        rebel_method_bind* mb_set_total_mass;
        rebel_method_bind* mb_set_volume_stiffness;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SOFTBODY_H
