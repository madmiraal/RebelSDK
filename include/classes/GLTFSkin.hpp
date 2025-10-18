#ifndef GODOT_CPP_GLTFSKIN_HPP
#define GODOT_CPP_GLTFSKIN_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {

class Skin;

class GLTFSkin : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_godot_skin;
		godot_method_bind *mb_get_inverse_binds;
		godot_method_bind *mb_get_joint_i_to_bone_i;
		godot_method_bind *mb_get_joint_i_to_name;
		godot_method_bind *mb_get_joints;
		godot_method_bind *mb_get_joints_original;
		godot_method_bind *mb_get_non_joints;
		godot_method_bind *mb_get_roots;
		godot_method_bind *mb_get_skeleton;
		godot_method_bind *mb_get_skin_root;
		godot_method_bind *mb_set_godot_skin;
		godot_method_bind *mb_set_inverse_binds;
		godot_method_bind *mb_set_joint_i_to_bone_i;
		godot_method_bind *mb_set_joint_i_to_name;
		godot_method_bind *mb_set_joints;
		godot_method_bind *mb_set_joints_original;
		godot_method_bind *mb_set_non_joints;
		godot_method_bind *mb_set_roots;
		godot_method_bind *mb_set_skeleton;
		godot_method_bind *mb_set_skin_root;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFSkin"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFSkin"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static GLTFSkin *_new();

	// methods
	Ref<Skin> get_godot_skin();
	Array get_inverse_binds();
	Dictionary get_joint_i_to_bone_i();
	Dictionary get_joint_i_to_name();
	PoolIntArray get_joints();
	PoolIntArray get_joints_original();
	PoolIntArray get_non_joints();
	PoolIntArray get_roots();
	int64_t get_skeleton();
	int64_t get_skin_root();
	void set_godot_skin(const Ref<Skin> godot_skin);
	void set_inverse_binds(const Array inverse_binds);
	void set_joint_i_to_bone_i(const Dictionary joint_i_to_bone_i);
	void set_joint_i_to_name(const Dictionary joint_i_to_name);
	void set_joints(const PoolIntArray joints);
	void set_joints_original(const PoolIntArray joints_original);
	void set_non_joints(const PoolIntArray non_joints);
	void set_roots(const PoolIntArray roots);
	void set_skeleton(const int64_t skeleton);
	void set_skin_root(const int64_t skin_root);

};

}

#endif