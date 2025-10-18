#ifndef GODOT_CPP_GLTFSTATE_HPP
#define GODOT_CPP_GLTFSTATE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {

class AnimationPlayer;
class Node;

class GLTFState : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_accessors;
		godot_method_bind *mb_get_animation_player;
		godot_method_bind *mb_get_animation_players_count;
		godot_method_bind *mb_get_animations;
		godot_method_bind *mb_get_buffer_views;
		godot_method_bind *mb_get_buffers;
		godot_method_bind *mb_get_cameras;
		godot_method_bind *mb_get_glb_data;
		godot_method_bind *mb_get_images;
		godot_method_bind *mb_get_json;
		godot_method_bind *mb_get_lights;
		godot_method_bind *mb_get_major_version;
		godot_method_bind *mb_get_materials;
		godot_method_bind *mb_get_meshes;
		godot_method_bind *mb_get_minor_version;
		godot_method_bind *mb_get_nodes;
		godot_method_bind *mb_get_root_nodes;
		godot_method_bind *mb_get_scene_name;
		godot_method_bind *mb_get_scene_node;
		godot_method_bind *mb_get_skeleton_to_node;
		godot_method_bind *mb_get_skeletons;
		godot_method_bind *mb_get_skins;
		godot_method_bind *mb_get_textures;
		godot_method_bind *mb_get_unique_animation_names;
		godot_method_bind *mb_get_unique_names;
		godot_method_bind *mb_get_use_named_skin_binds;
		godot_method_bind *mb_set_accessors;
		godot_method_bind *mb_set_animations;
		godot_method_bind *mb_set_buffer_views;
		godot_method_bind *mb_set_buffers;
		godot_method_bind *mb_set_cameras;
		godot_method_bind *mb_set_glb_data;
		godot_method_bind *mb_set_images;
		godot_method_bind *mb_set_json;
		godot_method_bind *mb_set_lights;
		godot_method_bind *mb_set_major_version;
		godot_method_bind *mb_set_materials;
		godot_method_bind *mb_set_meshes;
		godot_method_bind *mb_set_minor_version;
		godot_method_bind *mb_set_nodes;
		godot_method_bind *mb_set_root_nodes;
		godot_method_bind *mb_set_scene_name;
		godot_method_bind *mb_set_skeleton_to_node;
		godot_method_bind *mb_set_skeletons;
		godot_method_bind *mb_set_skins;
		godot_method_bind *mb_set_textures;
		godot_method_bind *mb_set_unique_animation_names;
		godot_method_bind *mb_set_unique_names;
		godot_method_bind *mb_set_use_named_skin_binds;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFState"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFState"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static GLTFState *_new();

	// methods
	Array get_accessors();
	AnimationPlayer *get_animation_player(const int64_t idx);
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
	Node *get_scene_node(const int64_t idx);
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

};

}

#endif