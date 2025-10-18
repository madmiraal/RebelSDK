#ifndef GODOT_CPP_GLTFMESH_HPP
#define GODOT_CPP_GLTFMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {

class ArrayMesh;

class GLTFMesh : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_blend_weights;
		godot_method_bind *mb_get_instance_materials;
		godot_method_bind *mb_get_mesh;
		godot_method_bind *mb_set_blend_weights;
		godot_method_bind *mb_set_instance_materials;
		godot_method_bind *mb_set_mesh;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFMesh"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFMesh"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	PoolRealArray get_blend_weights();
	Array get_instance_materials();
	Ref<ArrayMesh> get_mesh();
	void set_blend_weights(const PoolRealArray blend_weights);
	void set_instance_materials(const Array instance_materials);
	void set_mesh(const Ref<ArrayMesh> mesh);

};

}

#endif