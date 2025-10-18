#ifndef GODOT_CPP_GLTFTEXTURE_HPP
#define GODOT_CPP_GLTFTEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {


class GLTFTexture : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_src_image;
		godot_method_bind *mb_set_src_image;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFTexture"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFTexture"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static GLTFTexture *_new();

	// methods
	int64_t get_src_image() const;
	void set_src_image(const int64_t src_image);

};

}

#endif