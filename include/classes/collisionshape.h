// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_COLLISIONSHAPE_H
#define REBEL_COLLISIONSHAPE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Resource;
class Shape;

class CollisionShape : public Spatial {
public:
    Ref<Shape> get_shape() const;
    bool is_disabled() const;
    void make_convex_from_brothers();
    void resource_changed(const Ref<Resource> resource);
    void set_disabled(const bool enable);
    void set_shape(const Ref<Shape> shape);

    static CollisionShape* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CollisionShape";
    }

    inline static const char* get_rebel_class_name() {
        return "CollisionShape";
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
        rebel_method_bind* mb_get_shape;
        rebel_method_bind* mb_is_disabled;
        rebel_method_bind* mb_make_convex_from_brothers;
        rebel_method_bind* mb_resource_changed;
        rebel_method_bind* mb_set_disabled;
        rebel_method_bind* mb_set_shape;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_COLLISIONSHAPE_H
