#include "GLTFState.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "AnimationPlayer.hpp"
#include "Node.hpp"


namespace godot {


GLTFState::___method_bindings GLTFState::___mb = {};

void *GLTFState::_detail_class_tag = nullptr;

void GLTFState::___init_method_bindings() {
	___mb.mb_get_accessors = godot::api->godot_method_bind_get_method("GLTFState", "get_accessors");
	___mb.mb_get_animation_player = godot::api->godot_method_bind_get_method("GLTFState", "get_animation_player");
	___mb.mb_get_animation_players_count = godot::api->godot_method_bind_get_method("GLTFState", "get_animation_players_count");
	___mb.mb_get_animations = godot::api->godot_method_bind_get_method("GLTFState", "get_animations");
	___mb.mb_get_buffer_views = godot::api->godot_method_bind_get_method("GLTFState", "get_buffer_views");
	___mb.mb_get_buffers = godot::api->godot_method_bind_get_method("GLTFState", "get_buffers");
	___mb.mb_get_cameras = godot::api->godot_method_bind_get_method("GLTFState", "get_cameras");
	___mb.mb_get_glb_data = godot::api->godot_method_bind_get_method("GLTFState", "get_glb_data");
	___mb.mb_get_images = godot::api->godot_method_bind_get_method("GLTFState", "get_images");
	___mb.mb_get_json = godot::api->godot_method_bind_get_method("GLTFState", "get_json");
	___mb.mb_get_lights = godot::api->godot_method_bind_get_method("GLTFState", "get_lights");
	___mb.mb_get_major_version = godot::api->godot_method_bind_get_method("GLTFState", "get_major_version");
	___mb.mb_get_materials = godot::api->godot_method_bind_get_method("GLTFState", "get_materials");
	___mb.mb_get_meshes = godot::api->godot_method_bind_get_method("GLTFState", "get_meshes");
	___mb.mb_get_minor_version = godot::api->godot_method_bind_get_method("GLTFState", "get_minor_version");
	___mb.mb_get_nodes = godot::api->godot_method_bind_get_method("GLTFState", "get_nodes");
	___mb.mb_get_root_nodes = godot::api->godot_method_bind_get_method("GLTFState", "get_root_nodes");
	___mb.mb_get_scene_name = godot::api->godot_method_bind_get_method("GLTFState", "get_scene_name");
	___mb.mb_get_scene_node = godot::api->godot_method_bind_get_method("GLTFState", "get_scene_node");
	___mb.mb_get_skeleton_to_node = godot::api->godot_method_bind_get_method("GLTFState", "get_skeleton_to_node");
	___mb.mb_get_skeletons = godot::api->godot_method_bind_get_method("GLTFState", "get_skeletons");
	___mb.mb_get_skins = godot::api->godot_method_bind_get_method("GLTFState", "get_skins");
	___mb.mb_get_textures = godot::api->godot_method_bind_get_method("GLTFState", "get_textures");
	___mb.mb_get_unique_animation_names = godot::api->godot_method_bind_get_method("GLTFState", "get_unique_animation_names");
	___mb.mb_get_unique_names = godot::api->godot_method_bind_get_method("GLTFState", "get_unique_names");
	___mb.mb_get_use_named_skin_binds = godot::api->godot_method_bind_get_method("GLTFState", "get_use_named_skin_binds");
	___mb.mb_set_accessors = godot::api->godot_method_bind_get_method("GLTFState", "set_accessors");
	___mb.mb_set_animations = godot::api->godot_method_bind_get_method("GLTFState", "set_animations");
	___mb.mb_set_buffer_views = godot::api->godot_method_bind_get_method("GLTFState", "set_buffer_views");
	___mb.mb_set_buffers = godot::api->godot_method_bind_get_method("GLTFState", "set_buffers");
	___mb.mb_set_cameras = godot::api->godot_method_bind_get_method("GLTFState", "set_cameras");
	___mb.mb_set_glb_data = godot::api->godot_method_bind_get_method("GLTFState", "set_glb_data");
	___mb.mb_set_images = godot::api->godot_method_bind_get_method("GLTFState", "set_images");
	___mb.mb_set_json = godot::api->godot_method_bind_get_method("GLTFState", "set_json");
	___mb.mb_set_lights = godot::api->godot_method_bind_get_method("GLTFState", "set_lights");
	___mb.mb_set_major_version = godot::api->godot_method_bind_get_method("GLTFState", "set_major_version");
	___mb.mb_set_materials = godot::api->godot_method_bind_get_method("GLTFState", "set_materials");
	___mb.mb_set_meshes = godot::api->godot_method_bind_get_method("GLTFState", "set_meshes");
	___mb.mb_set_minor_version = godot::api->godot_method_bind_get_method("GLTFState", "set_minor_version");
	___mb.mb_set_nodes = godot::api->godot_method_bind_get_method("GLTFState", "set_nodes");
	___mb.mb_set_root_nodes = godot::api->godot_method_bind_get_method("GLTFState", "set_root_nodes");
	___mb.mb_set_scene_name = godot::api->godot_method_bind_get_method("GLTFState", "set_scene_name");
	___mb.mb_set_skeleton_to_node = godot::api->godot_method_bind_get_method("GLTFState", "set_skeleton_to_node");
	___mb.mb_set_skeletons = godot::api->godot_method_bind_get_method("GLTFState", "set_skeletons");
	___mb.mb_set_skins = godot::api->godot_method_bind_get_method("GLTFState", "set_skins");
	___mb.mb_set_textures = godot::api->godot_method_bind_get_method("GLTFState", "set_textures");
	___mb.mb_set_unique_animation_names = godot::api->godot_method_bind_get_method("GLTFState", "set_unique_animation_names");
	___mb.mb_set_unique_names = godot::api->godot_method_bind_get_method("GLTFState", "set_unique_names");
	___mb.mb_set_use_named_skin_binds = godot::api->godot_method_bind_get_method("GLTFState", "set_use_named_skin_binds");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFState");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GLTFState *GLTFState::_new()
{
	return (GLTFState *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GLTFState")());
}
Array GLTFState::get_accessors() {
	return ___godot_icall_Array(___mb.mb_get_accessors, (const Object *) this);
}

AnimationPlayer *GLTFState::get_animation_player(const int64_t idx) {
	return (AnimationPlayer *) ___godot_icall_Object_int(___mb.mb_get_animation_player, (const Object *) this, idx);
}

int64_t GLTFState::get_animation_players_count(const int64_t idx) {
	return ___godot_icall_int_int(___mb.mb_get_animation_players_count, (const Object *) this, idx);
}

Array GLTFState::get_animations() {
	return ___godot_icall_Array(___mb.mb_get_animations, (const Object *) this);
}

Array GLTFState::get_buffer_views() {
	return ___godot_icall_Array(___mb.mb_get_buffer_views, (const Object *) this);
}

Array GLTFState::get_buffers() {
	return ___godot_icall_Array(___mb.mb_get_buffers, (const Object *) this);
}

Array GLTFState::get_cameras() {
	return ___godot_icall_Array(___mb.mb_get_cameras, (const Object *) this);
}

PoolByteArray GLTFState::get_glb_data() {
	return ___godot_icall_PoolByteArray(___mb.mb_get_glb_data, (const Object *) this);
}

Array GLTFState::get_images() {
	return ___godot_icall_Array(___mb.mb_get_images, (const Object *) this);
}

Dictionary GLTFState::get_json() {
	return ___godot_icall_Dictionary(___mb.mb_get_json, (const Object *) this);
}

Array GLTFState::get_lights() {
	return ___godot_icall_Array(___mb.mb_get_lights, (const Object *) this);
}

int64_t GLTFState::get_major_version() {
	return ___godot_icall_int(___mb.mb_get_major_version, (const Object *) this);
}

Array GLTFState::get_materials() {
	return ___godot_icall_Array(___mb.mb_get_materials, (const Object *) this);
}

Array GLTFState::get_meshes() {
	return ___godot_icall_Array(___mb.mb_get_meshes, (const Object *) this);
}

int64_t GLTFState::get_minor_version() {
	return ___godot_icall_int(___mb.mb_get_minor_version, (const Object *) this);
}

Array GLTFState::get_nodes() {
	return ___godot_icall_Array(___mb.mb_get_nodes, (const Object *) this);
}

Array GLTFState::get_root_nodes() {
	return ___godot_icall_Array(___mb.mb_get_root_nodes, (const Object *) this);
}

String GLTFState::get_scene_name() {
	return ___godot_icall_String(___mb.mb_get_scene_name, (const Object *) this);
}

Node *GLTFState::get_scene_node(const int64_t idx) {
	return (Node *) ___godot_icall_Object_int(___mb.mb_get_scene_node, (const Object *) this, idx);
}

Dictionary GLTFState::get_skeleton_to_node() {
	return ___godot_icall_Dictionary(___mb.mb_get_skeleton_to_node, (const Object *) this);
}

Array GLTFState::get_skeletons() {
	return ___godot_icall_Array(___mb.mb_get_skeletons, (const Object *) this);
}

Array GLTFState::get_skins() {
	return ___godot_icall_Array(___mb.mb_get_skins, (const Object *) this);
}

Array GLTFState::get_textures() {
	return ___godot_icall_Array(___mb.mb_get_textures, (const Object *) this);
}

Array GLTFState::get_unique_animation_names() {
	return ___godot_icall_Array(___mb.mb_get_unique_animation_names, (const Object *) this);
}

Array GLTFState::get_unique_names() {
	return ___godot_icall_Array(___mb.mb_get_unique_names, (const Object *) this);
}

bool GLTFState::get_use_named_skin_binds() {
	return ___godot_icall_bool(___mb.mb_get_use_named_skin_binds, (const Object *) this);
}

void GLTFState::set_accessors(const Array accessors) {
	___godot_icall_void_Array(___mb.mb_set_accessors, (const Object *) this, accessors);
}

void GLTFState::set_animations(const Array animations) {
	___godot_icall_void_Array(___mb.mb_set_animations, (const Object *) this, animations);
}

void GLTFState::set_buffer_views(const Array buffer_views) {
	___godot_icall_void_Array(___mb.mb_set_buffer_views, (const Object *) this, buffer_views);
}

void GLTFState::set_buffers(const Array buffers) {
	___godot_icall_void_Array(___mb.mb_set_buffers, (const Object *) this, buffers);
}

void GLTFState::set_cameras(const Array cameras) {
	___godot_icall_void_Array(___mb.mb_set_cameras, (const Object *) this, cameras);
}

void GLTFState::set_glb_data(const PoolByteArray glb_data) {
	___godot_icall_void_PoolByteArray(___mb.mb_set_glb_data, (const Object *) this, glb_data);
}

void GLTFState::set_images(const Array images) {
	___godot_icall_void_Array(___mb.mb_set_images, (const Object *) this, images);
}

void GLTFState::set_json(const Dictionary json) {
	___godot_icall_void_Dictionary(___mb.mb_set_json, (const Object *) this, json);
}

void GLTFState::set_lights(const Array lights) {
	___godot_icall_void_Array(___mb.mb_set_lights, (const Object *) this, lights);
}

void GLTFState::set_major_version(const int64_t major_version) {
	___godot_icall_void_int(___mb.mb_set_major_version, (const Object *) this, major_version);
}

void GLTFState::set_materials(const Array materials) {
	___godot_icall_void_Array(___mb.mb_set_materials, (const Object *) this, materials);
}

void GLTFState::set_meshes(const Array meshes) {
	___godot_icall_void_Array(___mb.mb_set_meshes, (const Object *) this, meshes);
}

void GLTFState::set_minor_version(const int64_t minor_version) {
	___godot_icall_void_int(___mb.mb_set_minor_version, (const Object *) this, minor_version);
}

void GLTFState::set_nodes(const Array nodes) {
	___godot_icall_void_Array(___mb.mb_set_nodes, (const Object *) this, nodes);
}

void GLTFState::set_root_nodes(const Array root_nodes) {
	___godot_icall_void_Array(___mb.mb_set_root_nodes, (const Object *) this, root_nodes);
}

void GLTFState::set_scene_name(const String scene_name) {
	___godot_icall_void_String(___mb.mb_set_scene_name, (const Object *) this, scene_name);
}

void GLTFState::set_skeleton_to_node(const Dictionary skeleton_to_node) {
	___godot_icall_void_Dictionary(___mb.mb_set_skeleton_to_node, (const Object *) this, skeleton_to_node);
}

void GLTFState::set_skeletons(const Array skeletons) {
	___godot_icall_void_Array(___mb.mb_set_skeletons, (const Object *) this, skeletons);
}

void GLTFState::set_skins(const Array skins) {
	___godot_icall_void_Array(___mb.mb_set_skins, (const Object *) this, skins);
}

void GLTFState::set_textures(const Array textures) {
	___godot_icall_void_Array(___mb.mb_set_textures, (const Object *) this, textures);
}

void GLTFState::set_unique_animation_names(const Array unique_animation_names) {
	___godot_icall_void_Array(___mb.mb_set_unique_animation_names, (const Object *) this, unique_animation_names);
}

void GLTFState::set_unique_names(const Array unique_names) {
	___godot_icall_void_Array(___mb.mb_set_unique_names, (const Object *) this, unique_names);
}

void GLTFState::set_use_named_skin_binds(const bool use_named_skin_binds) {
	___godot_icall_void_bool(___mb.mb_set_use_named_skin_binds, (const Object *) this, use_named_skin_binds);
}

}