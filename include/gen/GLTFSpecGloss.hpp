#ifndef GODOT_CPP_GLTFSPECGLOSS_HPP
#define GODOT_CPP_GLTFSPECGLOSS_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {

class Image;

class GLTFSpecGloss : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_diffuse_factor;
		godot_method_bind *mb_get_diffuse_img;
		godot_method_bind *mb_get_gloss_factor;
		godot_method_bind *mb_get_spec_gloss_img;
		godot_method_bind *mb_get_specular_factor;
		godot_method_bind *mb_set_diffuse_factor;
		godot_method_bind *mb_set_diffuse_img;
		godot_method_bind *mb_set_gloss_factor;
		godot_method_bind *mb_set_spec_gloss_img;
		godot_method_bind *mb_set_specular_factor;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFSpecGloss"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFSpecGloss"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static GLTFSpecGloss *_new();

	// methods
	Color get_diffuse_factor();
	Ref<Image> get_diffuse_img();
	real_t get_gloss_factor();
	Ref<Image> get_spec_gloss_img();
	Color get_specular_factor();
	void set_diffuse_factor(const Color diffuse_factor);
	void set_diffuse_img(const Ref<Image> diffuse_img);
	void set_gloss_factor(const real_t gloss_factor);
	void set_spec_gloss_img(const Ref<Image> spec_gloss_img);
	void set_specular_factor(const Color specular_factor);

};

}

#endif