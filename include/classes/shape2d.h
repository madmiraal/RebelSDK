// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SHAPE2D_H
#define REBEL_SHAPE2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Shape2D : public Resource {
public:
    bool collide(const Transform2D local_xform, const Ref<Shape2D> with_shape, const Transform2D shape_xform);
    Array collide_and_get_contacts(const Transform2D local_xform, const Ref<Shape2D> with_shape, const Transform2D shape_xform);
    bool collide_with_motion(const Transform2D local_xform, const Vector2 local_motion, const Ref<Shape2D> with_shape, const Transform2D shape_xform, const Vector2 shape_motion);
    Array collide_with_motion_and_get_contacts(const Transform2D local_xform, const Vector2 local_motion, const Ref<Shape2D> with_shape, const Transform2D shape_xform, const Vector2 shape_motion);
    void draw(const RID canvas_item, const Color color);
    real_t get_custom_solver_bias() const;
    void set_custom_solver_bias(const real_t bias);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Shape2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Shape2D";
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
        rebel_method_bind* mb_collide;
        rebel_method_bind* mb_collide_and_get_contacts;
        rebel_method_bind* mb_collide_with_motion;
        rebel_method_bind* mb_collide_with_motion_and_get_contacts;
        rebel_method_bind* mb_draw;
        rebel_method_bind* mb_get_custom_solver_bias;
        rebel_method_bind* mb_set_custom_solver_bias;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SHAPE2D_H
