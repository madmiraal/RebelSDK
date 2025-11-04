// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONNODESTATEMACHINE_H
#define REBEL_ANIMATIONNODESTATEMACHINE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/animationrootnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AnimationNode;
class AnimationNodeStateMachineTransition;

class AnimationNodeStateMachine : public AnimationRootNode {
public:
    void _tree_changed();
    void add_node(const String name, const Ref<AnimationNode> node, const Vector2 position = Vector2(0, 0));
    void add_transition(const String from, const String to, const Ref<AnimationNodeStateMachineTransition> transition);
    String get_end_node() const;
    Vector2 get_graph_offset() const;
    Ref<AnimationNode> get_node(const String name) const;
    String get_node_name(const Ref<AnimationNode> node) const;
    Vector2 get_node_position(const String name) const;
    String get_start_node() const;
    Ref<AnimationNodeStateMachineTransition> get_transition(const int64_t idx) const;
    int64_t get_transition_count() const;
    String get_transition_from(const int64_t idx) const;
    String get_transition_to(const int64_t idx) const;
    bool has_node(const String name) const;
    bool has_transition(const String from, const String to) const;
    void remove_node(const String name);
    void remove_transition(const String from, const String to);
    void remove_transition_by_index(const int64_t idx);
    void rename_node(const String name, const String new_name);
    void replace_node(const String name, const Ref<AnimationNode> node);
    void set_end_node(const String name);
    void set_graph_offset(const Vector2 offset);
    void set_node_position(const String name, const Vector2 position);
    void set_start_node(const String name);

    static AnimationNodeStateMachine* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationNodeStateMachine";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationNodeStateMachine";
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
        rebel_method_bind* mb__tree_changed;
        rebel_method_bind* mb_add_node;
        rebel_method_bind* mb_add_transition;
        rebel_method_bind* mb_get_end_node;
        rebel_method_bind* mb_get_graph_offset;
        rebel_method_bind* mb_get_node;
        rebel_method_bind* mb_get_node_name;
        rebel_method_bind* mb_get_node_position;
        rebel_method_bind* mb_get_start_node;
        rebel_method_bind* mb_get_transition;
        rebel_method_bind* mb_get_transition_count;
        rebel_method_bind* mb_get_transition_from;
        rebel_method_bind* mb_get_transition_to;
        rebel_method_bind* mb_has_node;
        rebel_method_bind* mb_has_transition;
        rebel_method_bind* mb_remove_node;
        rebel_method_bind* mb_remove_transition;
        rebel_method_bind* mb_remove_transition_by_index;
        rebel_method_bind* mb_rename_node;
        rebel_method_bind* mb_replace_node;
        rebel_method_bind* mb_set_end_node;
        rebel_method_bind* mb_set_graph_offset;
        rebel_method_bind* mb_set_node_position;
        rebel_method_bind* mb_set_start_node;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONNODESTATEMACHINE_H
