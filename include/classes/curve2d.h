// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CURVE2D_H
#define REBEL_CURVE2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Curve2D : public Resource {
public:
    Dictionary _get_data() const;
    void _set_data(const Dictionary arg0);
    void add_point(const Vector2 position, const Vector2 in = Vector2(0, 0), const Vector2 out = Vector2(0, 0), const int64_t at_position = -1);
    void clear_points();
    real_t get_bake_interval() const;
    real_t get_baked_length() const;
    PoolVector2Array get_baked_points() const;
    real_t get_closest_offset(const Vector2 to_point) const;
    Vector2 get_closest_point(const Vector2 to_point) const;
    int64_t get_point_count() const;
    Vector2 get_point_in(const int64_t idx) const;
    Vector2 get_point_out(const int64_t idx) const;
    Vector2 get_point_position(const int64_t idx) const;
    Vector2 interpolate(const int64_t idx, const real_t t) const;
    Vector2 interpolate_baked(const real_t offset, const bool cubic = false) const;
    Vector2 interpolatef(const real_t fofs) const;
    void remove_point(const int64_t idx);
    void set_bake_interval(const real_t distance);
    void set_point_in(const int64_t idx, const Vector2 position);
    void set_point_out(const int64_t idx, const Vector2 position);
    void set_point_position(const int64_t idx, const Vector2 position);
    PoolVector2Array tessellate(const int64_t max_stages = 5, const real_t tolerance_degrees = 4) const;

    static Curve2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Curve2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Curve2D";
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
        rebel_method_bind* mb_get_closest_offset;
        rebel_method_bind* mb_get_closest_point;
        rebel_method_bind* mb_get_point_count;
        rebel_method_bind* mb_get_point_in;
        rebel_method_bind* mb_get_point_out;
        rebel_method_bind* mb_get_point_position;
        rebel_method_bind* mb_interpolate;
        rebel_method_bind* mb_interpolate_baked;
        rebel_method_bind* mb_interpolatef;
        rebel_method_bind* mb_remove_point;
        rebel_method_bind* mb_set_bake_interval;
        rebel_method_bind* mb_set_point_in;
        rebel_method_bind* mb_set_point_out;
        rebel_method_bind* mb_set_point_position;
        rebel_method_bind* mb_tessellate;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CURVE2D_H
