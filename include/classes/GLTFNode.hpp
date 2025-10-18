#ifndef GODOT_CPP_GLTFNODE_HPP
#define GODOT_CPP_GLTFNODE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {


class GLTFNode : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_camera;
		godot_method_bind *mb_get_children;
		godot_method_bind *mb_get_height;
		godot_method_bind *mb_get_joint;
		godot_method_bind *mb_get_light;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_get_parent;
		godot_method_bind *mb_get_rotation;
		godot_method_bind *mb_get_scale;
		godot_method_bind *mb_get_skeleton;
		godot_method_bind *mb_get_skin;
		godot_method_bind *mb_get_translation;
		godot_method_bind *mb_get_xform;
		godot_method_bind *mb_set_camera;
		godot_method_bind *mb_set_children;
		godot_method_bind *mb_set_height;
		godot_method_bind *mb_set_joint;
		godot_method_bind *mb_set_light;
		godot_method_bind *mb_set_mesh;
		godot_method_bind *mb_set_parent;
		godot_method_bind *mb_set_rotation;
		godot_method_bind *mb_set_scale;
		godot_method_bind *mb_set_skeleton;
		godot_method_bind *mb_set_skin;
		godot_method_bind *mb_set_translation;
		godot_method_bind *mb_set_xform;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFNode"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFNode"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static GLTFNode *_new();

	// methods
	int64_t get_camera();
	PoolIntArray get_children();
	int64_t get_height();
	bool get_joint();
	int64_t get_light();
	int64_t get_mesh();
	int64_t get_parent();
	Quat get_rotation();
	Vector3 get_scale();
	int64_t get_skeleton();
	int64_t get_skin();
	Vector3 get_translation();
	Transform get_xform();
	void set_camera(const int64_t camera);
	void set_children(const PoolIntArray children);
	void set_height(const int64_t height);
	void set_joint(const bool joint);
	void set_light(const int64_t light);
	void set_mesh(const int64_t mesh);
	void set_parent(const int64_t parent);
	void set_rotation(const Quat rotation);
	void set_scale(const Vector3 scale);
	void set_skeleton(const int64_t skeleton);
	void set_skin(const int64_t skin);
	void set_translation(const Vector3 translation);
	void set_xform(const Transform xform);

};

}

#endif