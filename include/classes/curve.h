// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CURVE_H
#define REBEL_CURVE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Curve : public Resource {
public:
    enum TangentMode {
        TANGENT_FREE = 0,
        TANGENT_LINEAR = 1,
        TANGENT_MODE_COUNT = 2,
    };

    Array _get_data() const;
    void _set_data(const Array data);
    int64_t add_point(const Vector2 position, const real_t left_tangent = 0, const real_t right_tangent = 0, const int64_t left_mode = 0, const int64_t right_mode = 0);
    void bake();
    void clean_dupes();
    void clear_points();
    int64_t get_bake_resolution() const;
    real_t get_max_value() const;
    real_t get_min_value() const;
    int64_t get_point_count() const;
    Curve::TangentMode get_point_left_mode(const int64_t index) const;
    real_t get_point_left_tangent(const int64_t index) const;
    Vector2 get_point_position(const int64_t index) const;
    Curve::TangentMode get_point_right_mode(const int64_t index) const;
    real_t get_point_right_tangent(const int64_t index) const;
    real_t interpolate(const real_t offset) const;
    real_t interpolate_baked(const real_t offset);
    void remove_point(const int64_t index);
    void set_bake_resolution(const int64_t resolution);
    void set_max_value(const real_t max);
    void set_min_value(const real_t min);
    void set_point_left_mode(const int64_t index, const int64_t mode);
    void set_point_left_tangent(const int64_t index, const real_t tangent);
    int64_t set_point_offset(const int64_t index, const real_t offset);
    void set_point_right_mode(const int64_t index, const int64_t mode);
    void set_point_right_tangent(const int64_t index, const real_t tangent);
    void set_point_value(const int64_t index, const real_t y);

    static Curve* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Curve";
    }

    inline static const char* get_rebel_class_name() {
        return "Curve";
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
        rebel_method_bind* mb_bake;
        rebel_method_bind* mb_clean_dupes;
        rebel_method_bind* mb_clear_points;
        rebel_method_bind* mb_get_bake_resolution;
        rebel_method_bind* mb_get_max_value;
        rebel_method_bind* mb_get_min_value;
        rebel_method_bind* mb_get_point_count;
        rebel_method_bind* mb_get_point_left_mode;
        rebel_method_bind* mb_get_point_left_tangent;
        rebel_method_bind* mb_get_point_position;
        rebel_method_bind* mb_get_point_right_mode;
        rebel_method_bind* mb_get_point_right_tangent;
        rebel_method_bind* mb_interpolate;
        rebel_method_bind* mb_interpolate_baked;
        rebel_method_bind* mb_remove_point;
        rebel_method_bind* mb_set_bake_resolution;
        rebel_method_bind* mb_set_max_value;
        rebel_method_bind* mb_set_min_value;
        rebel_method_bind* mb_set_point_left_mode;
        rebel_method_bind* mb_set_point_left_tangent;
        rebel_method_bind* mb_set_point_offset;
        rebel_method_bind* mb_set_point_right_mode;
        rebel_method_bind* mb_set_point_right_tangent;
        rebel_method_bind* mb_set_point_value;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CURVE_H
