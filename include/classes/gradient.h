// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GRADIENT_H
#define REBEL_GRADIENT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Gradient : public Resource {
public:
    void add_point(const real_t offset, const Color color);
    Color get_color(const int64_t point);
    PoolColorArray get_colors() const;
    real_t get_offset(const int64_t point);
    PoolRealArray get_offsets() const;
    int64_t get_point_count() const;
    Color interpolate(const real_t offset);
    void remove_point(const int64_t point);
    void set_color(const int64_t point, const Color color);
    void set_colors(const PoolColorArray colors);
    void set_offset(const int64_t point, const real_t offset);
    void set_offsets(const PoolRealArray offsets);

    static Gradient* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Gradient";
    }

    inline static const char* get_rebel_class_name() {
        return "Gradient";
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
        rebel_method_bind* mb_add_point;
        rebel_method_bind* mb_get_color;
        rebel_method_bind* mb_get_colors;
        rebel_method_bind* mb_get_offset;
        rebel_method_bind* mb_get_offsets;
        rebel_method_bind* mb_get_point_count;
        rebel_method_bind* mb_interpolate;
        rebel_method_bind* mb_remove_point;
        rebel_method_bind* mb_set_color;
        rebel_method_bind* mb_set_colors;
        rebel_method_bind* mb_set_offset;
        rebel_method_bind* mb_set_offsets;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GRADIENT_H
