// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_JOINT2D_H
#define REBEL_JOINT2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Joint2D : public Node2D {
public:
    void _body_exit_tree();
    real_t get_bias() const;
    bool get_exclude_nodes_from_collision() const;
    NodePath get_node_a() const;
    NodePath get_node_b() const;
    void set_bias(const real_t bias);
    void set_exclude_nodes_from_collision(const bool enable);
    void set_node_a(const NodePath node);
    void set_node_b(const NodePath node);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Joint2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Joint2D";
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
        rebel_method_bind* mb__body_exit_tree;
        rebel_method_bind* mb_get_bias;
        rebel_method_bind* mb_get_exclude_nodes_from_collision;
        rebel_method_bind* mb_get_node_a;
        rebel_method_bind* mb_get_node_b;
        rebel_method_bind* mb_set_bias;
        rebel_method_bind* mb_set_exclude_nodes_from_collision;
        rebel_method_bind* mb_set_node_a;
        rebel_method_bind* mb_set_node_b;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_JOINT2D_H
