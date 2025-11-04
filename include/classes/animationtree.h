// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONTREE_H
#define REBEL_ANIMATIONTREE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AnimationNode;

class AnimationTree : public Node {
public:
    enum AnimationProcessMode {
        ANIMATION_PROCESS_PHYSICS = 0,
        ANIMATION_PROCESS_IDLE = 1,
        ANIMATION_PROCESS_MANUAL = 2,
    };

    void _clear_caches();
    void _node_removed(const Node* arg0);
    void _tree_changed();
    void _update_properties();
    void advance(const real_t delta);
    NodePath get_animation_player() const;
    AnimationTree::AnimationProcessMode get_process_mode() const;
    NodePath get_root_motion_track() const;
    Transform get_root_motion_transform() const;
    Ref<AnimationNode> get_tree_root() const;
    bool is_active() const;
    void rename_parameter(const String old_name, const String new_name);
    void set_active(const bool active);
    void set_animation_player(const NodePath root);
    void set_process_mode(const int64_t mode);
    void set_root_motion_track(const NodePath path);
    void set_tree_root(const Ref<AnimationNode> root);

    static AnimationTree* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationTree";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationTree";
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
        rebel_method_bind* mb__clear_caches;
        rebel_method_bind* mb__node_removed;
        rebel_method_bind* mb__tree_changed;
        rebel_method_bind* mb__update_properties;
        rebel_method_bind* mb_advance;
        rebel_method_bind* mb_get_animation_player;
        rebel_method_bind* mb_get_process_mode;
        rebel_method_bind* mb_get_root_motion_track;
        rebel_method_bind* mb_get_root_motion_transform;
        rebel_method_bind* mb_get_tree_root;
        rebel_method_bind* mb_is_active;
        rebel_method_bind* mb_rename_parameter;
        rebel_method_bind* mb_set_active;
        rebel_method_bind* mb_set_animation_player;
        rebel_method_bind* mb_set_process_mode;
        rebel_method_bind* mb_set_root_motion_track;
        rebel_method_bind* mb_set_tree_root;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONTREE_H
