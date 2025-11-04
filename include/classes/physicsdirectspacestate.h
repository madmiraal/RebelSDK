// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PHYSICSDIRECTSPACESTATE_H
#define REBEL_PHYSICSDIRECTSPACESTATE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PhysicsShapeQueryParameters;

class PhysicsDirectSpaceState : public Object {
public:
    Array cast_motion(const Ref<PhysicsShapeQueryParameters> shape, const Vector3 motion);
    Array collide_shape(const Ref<PhysicsShapeQueryParameters> shape, const int64_t max_results = 32);
    Dictionary get_rest_info(const Ref<PhysicsShapeQueryParameters> shape);
    Array intersect_point(const Vector3 point, const int64_t max_results = 32, const Array exclude = Array(), const int64_t collision_layer = 2147483647, const bool collide_with_bodies = true, const bool collide_with_areas = false);
    Dictionary intersect_ray(const Vector3 from, const Vector3 to, const Array exclude = Array(), const int64_t collision_mask = 2147483647, const bool collide_with_bodies = true, const bool collide_with_areas = false);
    Array intersect_shape(const Ref<PhysicsShapeQueryParameters> shape, const int64_t max_results = 32);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PhysicsDirectSpaceState";
    }

    inline static const char* get_rebel_class_name() {
        return "PhysicsDirectSpaceState";
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
        rebel_method_bind* mb_intersect_ray;
        rebel_method_bind* mb_intersect_shape;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PHYSICSDIRECTSPACESTATE_H
