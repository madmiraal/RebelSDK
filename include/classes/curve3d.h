// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CURVE3D_H
#define REBEL_CURVE3D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Curve3D : public Resource {
public:
    Dictionary _get_data() const;
    void _set_data(const Dictionary arg0);
    void add_point(const Vector3 position, const Vector3 in = Vector3(0, 0, 0), const Vector3 out = Vector3(0, 0, 0), const int64_t at_position = -1);
    void clear_points();
    real_t get_bake_interval() const;
    real_t get_baked_length() const;
    PoolVector3Array get_baked_points() const;
    PoolRealArray get_baked_tilts() const;
    PoolVector3Array get_baked_up_vectors() const;
    real_t get_closest_offset(const Vector3 to_point) const;
    Vector3 get_closest_point(const Vector3 to_point) const;
    int64_t get_point_count() const;
    Vector3 get_point_in(const int64_t idx) const;
    Vector3 get_point_out(const int64_t idx) const;
    Vector3 get_point_position(const int64_t idx) const;
    real_t get_point_tilt(const int64_t idx) const;
    Vector3 interpolate(const int64_t idx, const real_t t) const;
    Vector3 interpolate_baked(const real_t offset, const bool cubic = false) const;
    Vector3 interpolate_baked_up_vector(const real_t offset, const bool apply_tilt = false) const;
    Vector3 interpolatef(const real_t fofs) const;
    bool is_up_vector_enabled() const;
    void remove_point(const int64_t idx);
    void set_bake_interval(const real_t distance);
    void set_point_in(const int64_t idx, const Vector3 position);
    void set_point_out(const int64_t idx, const Vector3 position);
    void set_point_position(const int64_t idx, const Vector3 position);
    void set_point_tilt(const int64_t idx, const real_t tilt);
    void set_up_vector_enabled(const bool enable);
    PoolVector3Array tessellate(const int64_t max_stages = 5, const real_t tolerance_degrees = 4) const;

    static Curve3D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Curve3D";
    }

    inline static const char* get_rebel_class_name() {
        return "Curve3D";
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
        rebel_method_bind* mb__get_data;
        rebel_method_bind* mb__set_data;
        rebel_method_bind* mb_add_point;
        rebel_method_bind* mb_clear_points;
        rebel_method_bind* mb_get_bake_interval;
        rebel_method_bind* mb_get_baked_length;
        rebel_method_bind* mb_get_baked_points;
        rebel_method_bind* mb_get_baked_tilts;
        rebel_method_bind* mb_get_baked_up_vectors;
        rebel_method_bind* mb_get_closest_offset;
        rebel_method_bind* mb_get_closest_point;
        rebel_method_bind* mb_get_point_count;
        rebel_method_bind* mb_get_point_in;
        rebel_method_bind* mb_get_point_out;
        rebel_method_bind* mb_get_point_position;
        rebel_method_bind* mb_get_point_tilt;
        rebel_method_bind* mb_interpolate;
        rebel_method_bind* mb_interpolate_baked;
        rebel_method_bind* mb_interpolate_baked_up_vector;
        rebel_method_bind* mb_interpolatef;
        rebel_method_bind* mb_is_up_vector_enabled;
        rebel_method_bind* mb_remove_point;
        rebel_method_bind* mb_set_bake_interval;
        rebel_method_bind* mb_set_point_in;
        rebel_method_bind* mb_set_point_out;
        rebel_method_bind* mb_set_point_position;
        rebel_method_bind* mb_set_point_tilt;
        rebel_method_bind* mb_set_up_vector_enabled;
        rebel_method_bind* mb_tessellate;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CURVE3D_H
