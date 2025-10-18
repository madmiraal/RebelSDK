#ifndef GODOT_CPP_GLTFCAMERA_HPP
#define GODOT_CPP_GLTFCAMERA_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {


class GLTFCamera : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_fov_size;
		godot_method_bind *mb_get_perspective;
		godot_method_bind *mb_get_zfar;
		godot_method_bind *mb_get_znear;
		godot_method_bind *mb_set_fov_size;
		godot_method_bind *mb_set_perspective;
		godot_method_bind *mb_set_zfar;
		godot_method_bind *mb_set_znear;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFCamera"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFCamera"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static GLTFCamera *_new();

	// methods
	real_t get_fov_size() const;
	bool get_perspective() const;
	real_t get_zfar() const;
	real_t get_znear() const;
	void set_fov_size(const real_t fov_size);
	void set_perspective(const bool perspective);
	void set_zfar(const real_t zfar);
	void set_znear(const real_t znear);

};

}

#endif