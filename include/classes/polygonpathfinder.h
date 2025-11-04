// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_POLYGONPATHFINDER_H
#define REBEL_POLYGONPATHFINDER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PolygonPathFinder : public Resource {
public:
    Dictionary _get_data() const;
    void _set_data(const Dictionary arg0);
    PoolVector2Array find_path(const Vector2 from, const Vector2 to);
    Rect2 get_bounds() const;
    Vector2 get_closest_point(const Vector2 point) const;
    PoolVector2Array get_intersections(const Vector2 from, const Vector2 to) const;
    real_t get_point_penalty(const int64_t idx) const;
    bool is_point_inside(const Vector2 point) const;
    void set_point_penalty(const int64_t idx, const real_t penalty);
    void setup(const PoolVector2Array points, const PoolIntArray connections);

    static PolygonPathFinder* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PolygonPathFinder";
    }

    inline static const char* get_rebel_class_name() {
        return "PolygonPathFinder";
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
        rebel_method_bind* mb_find_path;
        rebel_method_bind* mb_get_bounds;
        rebel_method_bind* mb_get_closest_point;
        rebel_method_bind* mb_get_intersections;
        rebel_method_bind* mb_get_point_penalty;
        rebel_method_bind* mb_is_point_inside;
        rebel_method_bind* mb_set_point_penalty;
        rebel_method_bind* mb_setup;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_POLYGONPATHFINDER_H
