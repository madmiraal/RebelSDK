// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CSGSHAPE_H
#define REBEL_CSGSHAPE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/geometryinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CSGShape : public GeometryInstance {
public:
    enum Operation {
        OPERATION_UNION = 0,
        OPERATION_INTERSECTION = 1,
        OPERATION_SUBTRACTION = 2,
    };

    void _update_shape();
    int64_t get_collision_layer() const;
    bool get_collision_layer_bit(const int64_t bit) const;
    int64_t get_collision_mask() const;
    bool get_collision_mask_bit(const int64_t bit) const;
    Array get_meshes() const;
    CSGShape::Operation get_operation() const;
    real_t get_snap() const;
    bool is_calculating_tangents() const;
    bool is_root_shape() const;
    bool is_using_collision() const;
    void set_calculate_tangents(const bool enabled);
    void set_collision_layer(const int64_t layer);
    void set_collision_layer_bit(const int64_t bit, const bool value);
    void set_collision_mask(const int64_t mask);
    void set_collision_mask_bit(const int64_t bit, const bool value);
    void set_operation(const int64_t operation);
    void set_snap(const real_t snap);
    void set_use_collision(const bool operation);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CSGShape";
    }

    inline static const char* get_rebel_class_name() {
        return "CSGShape";
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
        rebel_method_bind* mb__update_shape;
        rebel_method_bind* mb_get_collision_layer;
        rebel_method_bind* mb_get_collision_layer_bit;
        rebel_method_bind* mb_get_collision_mask;
        rebel_method_bind* mb_get_collision_mask_bit;
        rebel_method_bind* mb_get_meshes;
        rebel_method_bind* mb_get_operation;
        rebel_method_bind* mb_get_snap;
        rebel_method_bind* mb_is_calculating_tangents;
        rebel_method_bind* mb_is_root_shape;
        rebel_method_bind* mb_is_using_collision;
        rebel_method_bind* mb_set_calculate_tangents;
        rebel_method_bind* mb_set_collision_layer;
        rebel_method_bind* mb_set_collision_layer_bit;
        rebel_method_bind* mb_set_collision_mask;
        rebel_method_bind* mb_set_collision_mask_bit;
        rebel_method_bind* mb_set_operation;
        rebel_method_bind* mb_set_snap;
        rebel_method_bind* mb_set_use_collision;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CSGSHAPE_H
