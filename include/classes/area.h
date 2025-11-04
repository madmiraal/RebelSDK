// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AREA_H
#define REBEL_AREA_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/collisionobject.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;

class Area : public CollisionObject {
public:
    enum SpaceOverride {
        SPACE_OVERRIDE_DISABLED = 0,
        SPACE_OVERRIDE_COMBINE = 1,
        SPACE_OVERRIDE_COMBINE_REPLACE = 2,
        SPACE_OVERRIDE_REPLACE = 3,
        SPACE_OVERRIDE_REPLACE_COMBINE = 4,
    };

    void _area_enter_tree(const int64_t id);
    void _area_exit_tree(const int64_t id);
    void _area_inout(const int64_t arg0, const RID arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4);
    void _body_enter_tree(const int64_t id);
    void _body_exit_tree(const int64_t id);
    void _body_inout(const int64_t arg0, const RID arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4);
    real_t get_angular_damp() const;
    String get_audio_bus() const;
    real_t get_gravity() const;
    real_t get_gravity_distance_scale() const;
    Vector3 get_gravity_vector() const;
    real_t get_linear_damp() const;
    Array get_overlapping_areas() const;
    Array get_overlapping_bodies() const;
    real_t get_priority() const;
    real_t get_reverb_amount() const;
    String get_reverb_bus() const;
    real_t get_reverb_uniformity() const;
    Area::SpaceOverride get_space_override_mode() const;
    bool is_gravity_a_point() const;
    bool is_monitorable() const;
    bool is_monitoring() const;
    bool is_overriding_audio_bus() const;
    bool is_using_reverb_bus() const;
    bool overlaps_area(const Node* area) const;
    bool overlaps_body(const Node* body) const;
    void set_angular_damp(const real_t angular_damp);
    void set_audio_bus(const String name);
    void set_audio_bus_override(const bool enable);
    void set_gravity(const real_t gravity);
    void set_gravity_distance_scale(const real_t distance_scale);
    void set_gravity_is_point(const bool enable);
    void set_gravity_vector(const Vector3 vector);
    void set_linear_damp(const real_t linear_damp);
    void set_monitorable(const bool enable);
    void set_monitoring(const bool enable);
    void set_priority(const real_t priority);
    void set_reverb_amount(const real_t amount);
    void set_reverb_bus(const String name);
    void set_reverb_uniformity(const real_t amount);
    void set_space_override_mode(const int64_t enable);
    void set_use_reverb_bus(const bool enable);

    static Area* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Area";
    }

    inline static const char* get_rebel_class_name() {
        return "Area";
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
        rebel_method_bind* mb__area_enter_tree;
        rebel_method_bind* mb__area_exit_tree;
        rebel_method_bind* mb__area_inout;
        rebel_method_bind* mb__body_enter_tree;
        rebel_method_bind* mb__body_exit_tree;
        rebel_method_bind* mb__body_inout;
        rebel_method_bind* mb_get_angular_damp;
        rebel_method_bind* mb_get_audio_bus;
        rebel_method_bind* mb_get_gravity;
        rebel_method_bind* mb_get_gravity_distance_scale;
        rebel_method_bind* mb_get_gravity_vector;
        rebel_method_bind* mb_get_linear_damp;
        rebel_method_bind* mb_get_overlapping_areas;
        rebel_method_bind* mb_get_overlapping_bodies;
        rebel_method_bind* mb_get_priority;
        rebel_method_bind* mb_get_reverb_amount;
        rebel_method_bind* mb_get_reverb_bus;
        rebel_method_bind* mb_get_reverb_uniformity;
        rebel_method_bind* mb_get_space_override_mode;
        rebel_method_bind* mb_is_gravity_a_point;
        rebel_method_bind* mb_is_monitorable;
        rebel_method_bind* mb_is_monitoring;
        rebel_method_bind* mb_is_overriding_audio_bus;
        rebel_method_bind* mb_is_using_reverb_bus;
        rebel_method_bind* mb_overlaps_area;
        rebel_method_bind* mb_overlaps_body;
        rebel_method_bind* mb_set_angular_damp;
        rebel_method_bind* mb_set_audio_bus;
        rebel_method_bind* mb_set_audio_bus_override;
        rebel_method_bind* mb_set_gravity;
        rebel_method_bind* mb_set_gravity_distance_scale;
        rebel_method_bind* mb_set_gravity_is_point;
        rebel_method_bind* mb_set_gravity_vector;
        rebel_method_bind* mb_set_linear_damp;
        rebel_method_bind* mb_set_monitorable;
        rebel_method_bind* mb_set_monitoring;
        rebel_method_bind* mb_set_priority;
        rebel_method_bind* mb_set_reverb_amount;
        rebel_method_bind* mb_set_reverb_bus;
        rebel_method_bind* mb_set_reverb_uniformity;
        rebel_method_bind* mb_set_space_override_mode;
        rebel_method_bind* mb_set_use_reverb_bus;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AREA_H
