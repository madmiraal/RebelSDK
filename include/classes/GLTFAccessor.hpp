#ifndef GODOT_CPP_GLTFACCESSOR_HPP
#define GODOT_CPP_GLTFACCESSOR_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {


class GLTFAccessor : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb_get_buffer_view;
		godot_method_bind *mb_get_byte_offset;
		godot_method_bind *mb_get_component_type;
		godot_method_bind *mb_get_count;
		godot_method_bind *mb_get_max;
		godot_method_bind *mb_get_min;
		godot_method_bind *mb_get_normalized;
		godot_method_bind *mb_get_sparse_count;
		godot_method_bind *mb_get_sparse_indices_buffer_view;
		godot_method_bind *mb_get_sparse_indices_byte_offset;
		godot_method_bind *mb_get_sparse_indices_component_type;
		godot_method_bind *mb_get_sparse_values_buffer_view;
		godot_method_bind *mb_get_sparse_values_byte_offset;
		godot_method_bind *mb_get_type;
		godot_method_bind *mb_set_buffer_view;
		godot_method_bind *mb_set_byte_offset;
		godot_method_bind *mb_set_component_type;
		godot_method_bind *mb_set_count;
		godot_method_bind *mb_set_max;
		godot_method_bind *mb_set_min;
		godot_method_bind *mb_set_normalized;
		godot_method_bind *mb_set_sparse_count;
		godot_method_bind *mb_set_sparse_indices_buffer_view;
		godot_method_bind *mb_set_sparse_indices_byte_offset;
		godot_method_bind *mb_set_sparse_indices_component_type;
		godot_method_bind *mb_set_sparse_values_buffer_view;
		godot_method_bind *mb_set_sparse_values_byte_offset;
		godot_method_bind *mb_set_type;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "GLTFAccessor"; }
	static inline const char *___get_godot_class_name() { return (const char *) "GLTFAccessor"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static GLTFAccessor *_new();

	// methods
	int64_t get_buffer_view();
	int64_t get_byte_offset();
	int64_t get_component_type();
	int64_t get_count();
	PoolRealArray get_max();
	PoolRealArray get_min();
	bool get_normalized();
	int64_t get_sparse_count();
	int64_t get_sparse_indices_buffer_view();
	int64_t get_sparse_indices_byte_offset();
	int64_t get_sparse_indices_component_type();
	int64_t get_sparse_values_buffer_view();
	int64_t get_sparse_values_byte_offset();
	int64_t get_type();
	void set_buffer_view(const int64_t buffer_view);
	void set_byte_offset(const int64_t byte_offset);
	void set_component_type(const int64_t component_type);
	void set_count(const int64_t count);
	void set_max(const PoolRealArray max);
	void set_min(const PoolRealArray min);
	void set_normalized(const bool normalized);
	void set_sparse_count(const int64_t sparse_count);
	void set_sparse_indices_buffer_view(const int64_t sparse_indices_buffer_view);
	void set_sparse_indices_byte_offset(const int64_t sparse_indices_byte_offset);
	void set_sparse_indices_component_type(const int64_t sparse_indices_component_type);
	void set_sparse_values_buffer_view(const int64_t sparse_values_buffer_view);
	void set_sparse_values_byte_offset(const int64_t sparse_values_byte_offset);
	void set_type(const int64_t type);

};

}

#endif