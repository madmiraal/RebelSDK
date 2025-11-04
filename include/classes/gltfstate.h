// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLTFSTATE_H
#define REBEL_GLTFSTATE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AnimationPlayer;
class Node;

class GLTFState : public Resource {
public:
    Array get_accessors();
    AnimationPlayer* get_animation_player(const int64_t idx);
    int64_t get_animation_players_count(const int64_t idx);
    Array get_animations();
    Array get_buffer_views();
    Array get_buffers();
    Array get_cameras();
    PoolByteArray get_glb_data();
    Array get_images();
    Dictionary get_json();
    Array get_lights();
    int64_t get_major_version();
    Array get_materials();
    Array get_meshes();
    int64_t get_minor_version();
    Array get_nodes();
    Array get_root_nodes();
    String get_scene_name();
    Node* get_scene_node(const int64_t idx);
    Dictionary get_skeleton_to_node();
    Array get_skeletons();
    Array get_skins();
    Array get_textures();
    Array get_unique_animation_names();
    Array get_unique_names();
    bool get_use_named_skin_binds();
    void set_accessors(const Array accessors);
    void set_animations(const Array animations);
    void set_buffer_views(const Array buffer_views);
    void set_buffers(const Array buffers);
    void set_cameras(const Array cameras);
    void set_glb_data(const PoolByteArray glb_data);
    void set_images(const Array images);
    void set_json(const Dictionary json);
    void set_lights(const Array lights);
    void set_major_version(const int64_t major_version);
    void set_materials(const Array materials);
    void set_meshes(const Array meshes);
    void set_minor_version(const int64_t minor_version);
    void set_nodes(const Array nodes);
    void set_root_nodes(const Array root_nodes);
    void set_scene_name(const String scene_name);
    void set_skeleton_to_node(const Dictionary skeleton_to_node);
    void set_skeletons(const Array skeletons);
    void set_skins(const Array skins);
    void set_textures(const Array textures);
    void set_unique_animation_names(const Array unique_animation_names);
    void set_unique_names(const Array unique_names);
    void set_use_named_skin_binds(const bool use_named_skin_binds);

    static GLTFState* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GLTFState";
    }

    inline static const char* get_rebel_class_name() {
        return "GLTFState";
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
        rebel_method_bind* mb_get_accessors;
        rebel_method_bind* mb_get_animation_player;
        rebel_method_bind* mb_get_animation_players_count;
        rebel_method_bind* mb_get_animations;
        rebel_method_bind* mb_get_buffer_views;
        rebel_method_bind* mb_get_buffers;
        rebel_method_bind* mb_get_cameras;
        rebel_method_bind* mb_get_glb_data;
        rebel_method_bind* mb_get_images;
        rebel_method_bind* mb_get_json;
        rebel_method_bind* mb_get_lights;
        rebel_method_bind* mb_get_major_version;
        rebel_method_bind* mb_get_materials;
        rebel_method_bind* mb_get_meshes;
        rebel_method_bind* mb_get_minor_version;
        rebel_method_bind* mb_get_nodes;
        rebel_method_bind* mb_get_root_nodes;
        rebel_method_bind* mb_get_scene_name;
        rebel_method_bind* mb_get_scene_node;
        rebel_method_bind* mb_get_skeleton_to_node;
        rebel_method_bind* mb_get_skeletons;
        rebel_method_bind* mb_get_skins;
        rebel_method_bind* mb_get_textures;
        rebel_method_bind* mb_get_unique_animation_names;
        rebel_method_bind* mb_get_unique_names;
        rebel_method_bind* mb_get_use_named_skin_binds;
        rebel_method_bind* mb_set_accessors;
        rebel_method_bind* mb_set_animations;
        rebel_method_bind* mb_set_buffer_views;
        rebel_method_bind* mb_set_buffers;
        rebel_method_bind* mb_set_cameras;
        rebel_method_bind* mb_set_glb_data;
        rebel_method_bind* mb_set_images;
        rebel_method_bind* mb_set_json;
        rebel_method_bind* mb_set_lights;
        rebel_method_bind* mb_set_major_version;
        rebel_method_bind* mb_set_materials;
        rebel_method_bind* mb_set_meshes;
        rebel_method_bind* mb_set_minor_version;
        rebel_method_bind* mb_set_nodes;
        rebel_method_bind* mb_set_root_nodes;
        rebel_method_bind* mb_set_scene_name;
        rebel_method_bind* mb_set_skeleton_to_node;
        rebel_method_bind* mb_set_skeletons;
        rebel_method_bind* mb_set_skins;
        rebel_method_bind* mb_set_textures;
        rebel_method_bind* mb_set_unique_animation_names;
        rebel_method_bind* mb_set_unique_names;
        rebel_method_bind* mb_set_use_named_skin_binds;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GLTFSTATE_H
