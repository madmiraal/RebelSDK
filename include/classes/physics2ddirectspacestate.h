// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PHYSICS2DDIRECTSPACESTATE_H
#define REBEL_PHYSICS2DDIRECTSPACESTATE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Physics2DShapeQueryParameters;

class Physics2DDirectSpaceState : public Object {
public:
    Array cast_motion(const Ref<Physics2DShapeQueryParameters> shape);
    Array collide_shape(const Ref<Physics2DShapeQueryParameters> shape, const int64_t max_results = 32);
    Dictionary get_rest_info(const Ref<Physics2DShapeQueryParameters> shape);
    Array intersect_point(const Vector2 point, const int64_t max_results = 32, const Array exclude = Array(), const int64_t collision_layer = 2147483647, const bool collide_with_bodies = true, const bool collide_with_areas = false);
    Array intersect_point_on_canvas(const Vector2 point, const int64_t canvas_instance_id, const int64_t max_results = 32, const Array exclude = Array(), const int64_t collision_layer = 2147483647, const bool collide_with_bodies = true, const bool collide_with_areas = false);
    Dictionary intersect_ray(const Vector2 from, const Vector2 to, const Array exclude = Array(), const int64_t collision_layer = 2147483647, const bool collide_with_bodies = true, const bool collide_with_areas = false);
    Array intersect_shape(const Ref<Physics2DShapeQueryParameters> shape, const int64_t max_results = 32);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Physics2DDirectSpaceState";
    }

    inline static const char* get_rebel_class_name() {
        return "Physics2DDirectSpaceState";
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
        rebel_method_bind* mb_cast_motion;
        rebel_method_bind* mb_collide_shape;
        rebel_method_bind* mb_get_rest_info;
        rebel_method_bind* mb_intersect_point;
        rebel_method_bind* mb_intersect_point_on_canvas;
        rebel_method_bind* mb_intersect_ray;
        rebel_method_bind* mb_intersect_shape;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PHYSICS2DDIRECTSPACESTATE_H
