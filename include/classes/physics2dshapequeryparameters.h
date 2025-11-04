// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PHYSICS2DSHAPEQUERYPARAMETERS_H
#define REBEL_PHYSICS2DSHAPEQUERYPARAMETERS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Resource;

class Physics2DShapeQueryParameters : public Reference {
public:
    int64_t get_collision_layer() const;
    Array get_exclude() const;
    real_t get_margin() const;
    Vector2 get_motion() const;
    RID get_shape_rid() const;
    Transform2D get_transform() const;
    bool is_collide_with_areas_enabled() const;
    bool is_collide_with_bodies_enabled() const;
    void set_collide_with_areas(const bool enable);
    void set_collide_with_bodies(const bool enable);
    void set_collision_layer(const int64_t collision_layer);
    void set_exclude(const Array exclude);
    void set_margin(const real_t margin);
    void set_motion(const Vector2 motion);
    void set_shape(const Ref<Resource> shape);
    void set_shape_rid(const RID shape);
    void set_transform(const Transform2D transform);

    static Physics2DShapeQueryParameters* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Physics2DShapeQueryParameters";
    }

    inline static const char* get_rebel_class_name() {
        return "Physics2DShapeQueryParameters";
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
        rebel_method_bind* mb_get_collision_layer;
        rebel_method_bind* mb_get_exclude;
        rebel_method_bind* mb_get_margin;
        rebel_method_bind* mb_get_motion;
        rebel_method_bind* mb_get_shape_rid;
        rebel_method_bind* mb_get_transform;
        rebel_method_bind* mb_is_collide_with_areas_enabled;
        rebel_method_bind* mb_is_collide_with_bodies_enabled;
        rebel_method_bind* mb_set_collide_with_areas;
        rebel_method_bind* mb_set_collide_with_bodies;
        rebel_method_bind* mb_set_collision_layer;
        rebel_method_bind* mb_set_exclude;
        rebel_method_bind* mb_set_margin;
        rebel_method_bind* mb_set_motion;
        rebel_method_bind* mb_set_shape;
        rebel_method_bind* mb_set_shape_rid;
        rebel_method_bind* mb_set_transform;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PHYSICS2DSHAPEQUERYPARAMETERS_H
