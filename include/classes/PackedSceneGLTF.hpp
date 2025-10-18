#ifndef GODOT_CPP_PACKEDSCENEGLTF_HPP
#define GODOT_CPP_PACKEDSCENEGLTF_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "PackedScene.hpp"
namespace godot {

class Node;
class GLTFState;

class PackedSceneGLTF : public PackedScene {
	struct ___method_bindings {
		godot_method_bind *mb_export_gltf;
		godot_method_bind *mb_import_gltf_scene;
		godot_method_bind *mb_pack_gltf;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PackedSceneGLTF"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PackedSceneGLTF"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static PackedSceneGLTF *_new();

	// methods
	Error export_gltf(const Node *node, const String path, const int64_t flags = 0, const real_t bake_fps = 1000);
	Node *import_gltf_scene(const String path, const int64_t flags = 0, const real_t bake_fps = 1000, const int64_t compress_flags = 2194432, const Ref<GLTFState> state = nullptr);
	void pack_gltf(const String path, const int64_t flags = 0, const real_t bake_fps = 1000, const int64_t compress_flags = 2194432, const Ref<GLTFState> state = nullptr);

};

}

#endif