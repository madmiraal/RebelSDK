// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltfstate.h"

#include "classes/animationplayer.h"
#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array GLTFState::get_accessors() {
    return rebel_icall_array(
        method_bindings.mb_get_accessors,
        (const Object*)this
    );
}

AnimationPlayer* GLTFState::get_animation_player(const int64_t idx) {
    return (AnimationPlayer*)rebel_icall_object_int(
        method_bindings.mb_get_animation_player,
        (const Object*)this,
        idx
    );
}

int64_t GLTFState::get_animation_players_count(const int64_t idx) {
    return rebel_icall_int_int(
        method_bindings.mb_get_animation_players_count,
        (const Object*)this,
        idx
    );
}

Array GLTFState::get_animations() {
    return rebel_icall_array(
        method_bindings.mb_get_animations,
        (const Object*)this
    );
}

Array GLTFState::get_buffer_views() {
    return rebel_icall_array(
        method_bindings.mb_get_buffer_views,
        (const Object*)this
    );
}

Array GLTFState::get_buffers() {
    return rebel_icall_array(
        method_bindings.mb_get_buffers,
        (const Object*)this
    );
}

Array GLTFState::get_cameras() {
    return rebel_icall_array(
        method_bindings.mb_get_cameras,
        (const Object*)this
    );
}

PoolByteArray GLTFState::get_glb_data() {
    return rebel_icall_poolbytearray(
        method_bindings.mb_get_glb_data,
        (const Object*)this
    );
}

Array GLTFState::get_images() {
    return rebel_icall_array(
        method_bindings.mb_get_images,
        (const Object*)this
    );
}

Dictionary GLTFState::get_json() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_json,
        (const Object*)this
    );
}

Array GLTFState::get_lights() {
    return rebel_icall_array(
        method_bindings.mb_get_lights,
        (const Object*)this
    );
}

int64_t GLTFState::get_major_version() {
    return rebel_icall_int(
        method_bindings.mb_get_major_version,
        (const Object*)this
    );
}

Array GLTFState::get_materials() {
    return rebel_icall_array(
        method_bindings.mb_get_materials,
        (const Object*)this
    );
}

Array GLTFState::get_meshes() {
    return rebel_icall_array(
        method_bindings.mb_get_meshes,
        (const Object*)this
    );
}

int64_t GLTFState::get_minor_version() {
    return rebel_icall_int(
        method_bindings.mb_get_minor_version,
        (const Object*)this
    );
}

Array GLTFState::get_nodes() {
    return rebel_icall_array(
        method_bindings.mb_get_nodes,
        (const Object*)this
    );
}

Array GLTFState::get_root_nodes() {
    return rebel_icall_array(
        method_bindings.mb_get_root_nodes,
        (const Object*)this
    );
}

String GLTFState::get_scene_name() {
    return rebel_icall_string(
        method_bindings.mb_get_scene_name,
        (const Object*)this
    );
}

Node* GLTFState::get_scene_node(const int64_t idx) {
    return (Node*)rebel_icall_object_int(
        method_bindings.mb_get_scene_node,
        (const Object*)this,
        idx
    );
}

Dictionary GLTFState::get_skeleton_to_node() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_skeleton_to_node,
        (const Object*)this
    );
}

Array GLTFState::get_skeletons() {
    return rebel_icall_array(
        method_bindings.mb_get_skeletons,
        (const Object*)this
    );
}

Array GLTFState::get_skins() {
    return rebel_icall_array(
        method_bindings.mb_get_skins,
        (const Object*)this
    );
}

Array GLTFState::get_textures() {
    return rebel_icall_array(
        method_bindings.mb_get_textures,
        (const Object*)this
    );
}

Array GLTFState::get_unique_animation_names() {
    return rebel_icall_array(
        method_bindings.mb_get_unique_animation_names,
        (const Object*)this
    );
}

Array GLTFState::get_unique_names() {
    return rebel_icall_array(
        method_bindings.mb_get_unique_names,
        (const Object*)this
    );
}

bool GLTFState::get_use_named_skin_binds() {
    return rebel_icall_bool(
        method_bindings.mb_get_use_named_skin_binds,
        (const Object*)this
    );
}

void GLTFState::set_accessors(const Array accessors) {
    rebel_icall_void_array(
        method_bindings.mb_set_accessors,
        (const Object*)this,
        accessors
    );
}

void GLTFState::set_animations(const Array animations) {
    rebel_icall_void_array(
        method_bindings.mb_set_animations,
        (const Object*)this,
        animations
    );
}

void GLTFState::set_buffer_views(const Array buffer_views) {
    rebel_icall_void_array(
        method_bindings.mb_set_buffer_views,
        (const Object*)this,
        buffer_views
    );
}

void GLTFState::set_buffers(const Array buffers) {
    rebel_icall_void_array(
        method_bindings.mb_set_buffers,
        (const Object*)this,
        buffers
    );
}

void GLTFState::set_cameras(const Array cameras) {
    rebel_icall_void_array(
        method_bindings.mb_set_cameras,
        (const Object*)this,
        cameras
    );
}

void GLTFState::set_glb_data(const PoolByteArray glb_data) {
    rebel_icall_void_poolbytearray(
        method_bindings.mb_set_glb_data,
        (const Object*)this,
        glb_data
    );
}

void GLTFState::set_images(const Array images) {
    rebel_icall_void_array(
        method_bindings.mb_set_images,
        (const Object*)this,
        images
    );
}

void GLTFState::set_json(const Dictionary json) {
    rebel_icall_void_dictionary(
        method_bindings.mb_set_json,
        (const Object*)this,
        json
    );
}

void GLTFState::set_lights(const Array lights) {
    rebel_icall_void_array(
        method_bindings.mb_set_lights,
        (const Object*)this,
        lights
    );
}

void GLTFState::set_major_version(const int64_t major_version) {
    rebel_icall_void_int(
        method_bindings.mb_set_major_version,
        (const Object*)this,
        major_version
    );
}

void GLTFState::set_materials(const Array materials) {
    rebel_icall_void_array(
        method_bindings.mb_set_materials,
        (const Object*)this,
        materials
    );
}

void GLTFState::set_meshes(const Array meshes) {
    rebel_icall_void_array(
        method_bindings.mb_set_meshes,
        (const Object*)this,
        meshes
    );
}

void GLTFState::set_minor_version(const int64_t minor_version) {
    rebel_icall_void_int(
        method_bindings.mb_set_minor_version,
        (const Object*)this,
        minor_version
    );
}

void GLTFState::set_nodes(const Array nodes) {
    rebel_icall_void_array(
        method_bindings.mb_set_nodes,
        (const Object*)this,
        nodes
    );
}

void GLTFState::set_root_nodes(const Array root_nodes) {
    rebel_icall_void_array(
        method_bindings.mb_set_root_nodes,
        (const Object*)this,
        root_nodes
    );
}

void GLTFState::set_scene_name(const String scene_name) {
    rebel_icall_void_string(
        method_bindings.mb_set_scene_name,
        (const Object*)this,
        scene_name
    );
}

void GLTFState::set_skeleton_to_node(const Dictionary skeleton_to_node) {
    rebel_icall_void_dictionary(
        method_bindings.mb_set_skeleton_to_node,
        (const Object*)this,
        skeleton_to_node
    );
}

void GLTFState::set_skeletons(const Array skeletons) {
    rebel_icall_void_array(
        method_bindings.mb_set_skeletons,
        (const Object*)this,
        skeletons
    );
}

void GLTFState::set_skins(const Array skins) {
    rebel_icall_void_array(
        method_bindings.mb_set_skins,
        (const Object*)this,
        skins
    );
}

void GLTFState::set_textures(const Array textures) {
    rebel_icall_void_array(
        method_bindings.mb_set_textures,
        (const Object*)this,
        textures
    );
}

void GLTFState::set_unique_animation_names(const Array unique_animation_names) {
    rebel_icall_void_array(
        method_bindings.mb_set_unique_animation_names,
        (const Object*)this,
        unique_animation_names
    );
}

void GLTFState::set_unique_names(const Array unique_names) {
    rebel_icall_void_array(
        method_bindings.mb_set_unique_names,
        (const Object*)this,
        unique_names
    );
}

void GLTFState::set_use_named_skin_binds(const bool use_named_skin_binds) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_named_skin_binds,
        (const Object*)this,
        use_named_skin_binds
    );
}

GLTFState* GLTFState::create() {
    return (GLTFState*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GLTFState")()
         );
}

void GLTFState::init_method_bindings() {
    method_bindings.mb_get_accessors =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_accessors"
        );
    method_bindings.mb_get_animation_player =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_animation_player"
        );
    method_bindings.mb_get_animation_players_count =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_animation_players_count"
        );
    method_bindings.mb_get_animations =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_animations"
        );
    method_bindings.mb_get_buffer_views =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_buffer_views"
        );
    method_bindings.mb_get_buffers =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_buffers"
        );
    method_bindings.mb_get_cameras =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_cameras"
        );
    method_bindings.mb_get_glb_data =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_glb_data"
        );
    method_bindings.mb_get_images =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_images"
        );
    method_bindings.mb_get_json =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_json"
        );
    method_bindings.mb_get_lights =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_lights"
        );
    method_bindings.mb_get_major_version =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_major_version"
        );
    method_bindings.mb_get_materials =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_materials"
        );
    method_bindings.mb_get_meshes =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_meshes"
        );
    method_bindings.mb_get_minor_version =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_minor_version"
        );
    method_bindings.mb_get_nodes =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_nodes"
        );
    method_bindings.mb_get_root_nodes =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_root_nodes"
        );
    method_bindings.mb_get_scene_name =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_scene_name"
        );
    method_bindings.mb_get_scene_node =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_scene_node"
        );
    method_bindings.mb_get_skeleton_to_node =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_skeleton_to_node"
        );
    method_bindings.mb_get_skeletons =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_skeletons"
        );
    method_bindings.mb_get_skins =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_skins"
        );
    method_bindings.mb_get_textures =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_textures"
        );
    method_bindings.mb_get_unique_animation_names =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_unique_animation_names"
        );
    method_bindings.mb_get_unique_names =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_unique_names"
        );
    method_bindings.mb_get_use_named_skin_binds =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "get_use_named_skin_binds"
        );
    method_bindings.mb_set_accessors =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_accessors"
        );
    method_bindings.mb_set_animations =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_animations"
        );
    method_bindings.mb_set_buffer_views =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_buffer_views"
        );
    method_bindings.mb_set_buffers =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_buffers"
        );
    method_bindings.mb_set_cameras =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_cameras"
        );
    method_bindings.mb_set_glb_data =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_glb_data"
        );
    method_bindings.mb_set_images =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_images"
        );
    method_bindings.mb_set_json =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_json"
        );
    method_bindings.mb_set_lights =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_lights"
        );
    method_bindings.mb_set_major_version =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_major_version"
        );
    method_bindings.mb_set_materials =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_materials"
        );
    method_bindings.mb_set_meshes =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_meshes"
        );
    method_bindings.mb_set_minor_version =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_minor_version"
        );
    method_bindings.mb_set_nodes =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_nodes"
        );
    method_bindings.mb_set_root_nodes =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_root_nodes"
        );
    method_bindings.mb_set_scene_name =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_scene_name"
        );
    method_bindings.mb_set_skeleton_to_node =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_skeleton_to_node"
        );
    method_bindings.mb_set_skeletons =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_skeletons"
        );
    method_bindings.mb_set_skins =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_skins"
        );
    method_bindings.mb_set_textures =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_textures"
        );
    method_bindings.mb_set_unique_animation_names =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_unique_animation_names"
        );
    method_bindings.mb_set_unique_names =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_unique_names"
        );
    method_bindings.mb_set_use_named_skin_binds =
        api->rebel_method_bind_get_method(
            "GLTFState",
            "set_use_named_skin_binds"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFState");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFState::MethodBindings GLTFState::method_bindings = {};
void* GLTFState::class_tag = nullptr;
} // namespace Rebel
