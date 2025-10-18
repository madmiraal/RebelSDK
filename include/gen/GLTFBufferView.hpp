#ifndef GODOT_CPP_GLTFBUFFERVIEW_HPP
#define GODOT_CPP_GLTFBUFFERVIEW_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {


class GLTFBufferView : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_buffer;
		godot_method_bind *mb_get_byte_length;
		godot_method_bind *mb_get_byte_offset;
		godot_method_bind *mb_get_byte_stride;
		godot_method_bind *mb_get_indices;
		godot_method_bind *mb_set_buffer;
		godot_method_bind *mb_set_byte_length;
		godot_method_bind *mb_set_byte_offset;
		godot_method_bind *mb_set_byte_stride;
		godot_method_bind *mb_set_indices;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFBufferView"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFBufferView"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static GLTFBufferView *_new();

	// methods
	int64_t get_buffer();
	int64_t get_byte_length();
	int64_t get_byte_offset();
	int64_t get_byte_stride();
	bool get_indices();
	void set_buffer(const int64_t buffer);
	void set_byte_length(const int64_t byte_length);
	void set_byte_offset(const int64_t byte_offset);
	void set_byte_stride(const int64_t byte_stride);
	void set_indices(const bool indices);

};

}

#endif