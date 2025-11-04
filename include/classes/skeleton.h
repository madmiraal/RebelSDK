// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SKELETON_H
#define REBEL_SKELETON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;
class Skin;
class SkinReference;

class Skeleton : public Spatial {
public:
    static const int NOTIFICATION_UPDATE_SKELETON = 50;

    void add_bone(const String name);
    void bind_child_node_to_bone(const int64_t bone_idx, const Node* node);
    void clear_bones();
    void clear_bones_global_pose_override();
    int64_t find_bone(const String name) const;
    int64_t get_bone_count() const;
    Transform get_bone_custom_pose(const int64_t bone_idx) const;
    Transform get_bone_global_pose(const int64_t bone_idx) const;
    Transform get_bone_global_pose_no_override(const int64_t bone_idx) const;
    String get_bone_name(const int64_t bone_idx) const;
    int64_t get_bone_parent(const int64_t bone_idx) const;
    Transform get_bone_pose(const int64_t bone_idx) const;
    Transform get_bone_rest(const int64_t bone_idx) const;
    Array get_bound_child_nodes_to_bone(const int64_t bone_idx) const;
    bool is_bone_rest_disabled(const int64_t bone_idx) const;
    void localize_rests();
    void physical_bones_add_collision_exception(const RID exception);
    void physical_bones_remove_collision_exception(const RID exception);
    void physical_bones_start_simulation(const Array bones = Array());
    void physical_bones_stop_simulation();
    Ref<SkinReference> register_skin(const Ref<Skin> skin);
    void set_bone_custom_pose(const int64_t bone_idx, const Transform custom_pose);
    void set_bone_disable_rest(const int64_t bone_idx, const bool disable);
    void set_bone_global_pose_override(const int64_t bone_idx, const Transform pose, const real_t amount, const bool persistent = false);
    void set_bone_name(const int64_t bone_idx, const String name);
    void set_bone_parent(const int64_t bone_idx, const int64_t parent_idx);
    void set_bone_pose(const int64_t bone_idx, const Transform pose);
    void set_bone_rest(const int64_t bone_idx, const Transform rest);
    void unbind_child_node_from_bone(const int64_t bone_idx, const Node* node);
    void unparent_bone_and_rest(const int64_t bone_idx);

    static Skeleton* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Skeleton";
    }

    inline static const char* get_rebel_class_name() {
        return "Skeleton";
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
        rebel_method_bind* mb_add_bone;
        rebel_method_bind* mb_bind_child_node_to_bone;
        rebel_method_bind* mb_clear_bones;
        rebel_method_bind* mb_clear_bones_global_pose_override;
        rebel_method_bind* mb_find_bone;
        rebel_method_bind* mb_get_bone_count;
        rebel_method_bind* mb_get_bone_custom_pose;
        rebel_method_bind* mb_get_bone_global_pose;
        rebel_method_bind* mb_get_bone_global_pose_no_override;
        rebel_method_bind* mb_get_bone_name;
        rebel_method_bind* mb_get_bone_parent;
        rebel_method_bind* mb_get_bone_pose;
        rebel_method_bind* mb_get_bone_rest;
        rebel_method_bind* mb_get_bound_child_nodes_to_bone;
        rebel_method_bind* mb_is_bone_rest_disabled;
        rebel_method_bind* mb_localize_rests;
        rebel_method_bind* mb_physical_bones_add_collision_exception;
        rebel_method_bind* mb_physical_bones_remove_collision_exception;
        rebel_method_bind* mb_physical_bones_start_simulation;
        rebel_method_bind* mb_physical_bones_stop_simulation;
        rebel_method_bind* mb_register_skin;
        rebel_method_bind* mb_set_bone_custom_pose;
        rebel_method_bind* mb_set_bone_disable_rest;
        rebel_method_bind* mb_set_bone_global_pose_override;
        rebel_method_bind* mb_set_bone_name;
        rebel_method_bind* mb_set_bone_parent;
        rebel_method_bind* mb_set_bone_pose;
        rebel_method_bind* mb_set_bone_rest;
        rebel_method_bind* mb_unbind_child_node_from_bone;
        rebel_method_bind* mb_unparent_bone_and_rest;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SKELETON_H
