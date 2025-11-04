// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PHYSICSBODY2D_H
#define REBEL_PHYSICSBODY2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/collisionobject2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;

class PhysicsBody2D : public CollisionObject2D {
public:
    int64_t _get_layers() const;
    void _set_layers(const int64_t mask);
    void add_collision_exception_with(const Node* body);
    Array get_collision_exceptions();
    void remove_collision_exception_with(const Node* body);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PhysicsBody2D";
    }

    inline static const char* get_rebel_class_name() {
        return "PhysicsBody2D";
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
        rebel_method_bind* mb__get_layers;
        rebel_method_bind* mb__set_layers;
        rebel_method_bind* mb_add_collision_exception_with;
        rebel_method_bind* mb_get_collision_exceptions;
        rebel_method_bind* mb_remove_collision_exception_with;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PHYSICSBODY2D_H
