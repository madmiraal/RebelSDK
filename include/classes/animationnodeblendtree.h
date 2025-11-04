// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONNODEBLENDTREE_H
#define REBEL_ANIMATIONNODEBLENDTREE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/animationrootnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AnimationNode;

class AnimationNodeBlendTree : public AnimationRootNode {
public:
    static const int CONNECTION_ERROR_CONNECTION_EXISTS = 5;
    static const int CONNECTION_ERROR_NO_INPUT = 1;
    static const int CONNECTION_ERROR_NO_INPUT_INDEX = 2;
    static const int CONNECTION_ERROR_NO_OUTPUT = 3;
    static const int CONNECTION_ERROR_SAME_NODE = 4;
    static const int CONNECTION_OK = 0;

    void _node_changed(const String node);
    void _tree_changed();
    void add_node(const String name, const Ref<AnimationNode> node, const Vector2 position = Vector2(0, 0));
    void connect_node(const String input_node, const int64_t input_index, const String output_node);
    void disconnect_node(const String input_node, const int64_t input_index);
    Vector2 get_graph_offset() const;
    Ref<AnimationNode> get_node(const String name) const;
    Vector2 get_node_position(const String name) const;
    bool has_node(const String name) const;
    void remove_node(const String name);
    void rename_node(const String name, const String new_name);
    void set_graph_offset(const Vector2 offset);
    void set_node_position(const String name, const Vector2 position);

    static AnimationNodeBlendTree* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationNodeBlendTree";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationNodeBlendTree";
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
        rebel_method_bind* mb__node_changed;
        rebel_method_bind* mb__tree_changed;
        rebel_method_bind* mb_add_node;
        rebel_method_bind* mb_connect_node;
        rebel_method_bind* mb_disconnect_node;
        rebel_method_bind* mb_get_graph_offset;
        rebel_method_bind* mb_get_node;
        rebel_method_bind* mb_get_node_position;
        rebel_method_bind* mb_has_node;
        rebel_method_bind* mb_remove_node;
        rebel_method_bind* mb_rename_node;
        rebel_method_bind* mb_set_graph_offset;
        rebel_method_bind* mb_set_node_position;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONNODEBLENDTREE_H
