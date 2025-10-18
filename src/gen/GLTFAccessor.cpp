#include "GLTFAccessor.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


GLTFAccessor::___method_bindings GLTFAccessor::___mb = {};

void *GLTFAccessor::_detail_class_tag = nullptr;

void GLTFAccessor::___init_method_bindings() {
	___mb.mb_get_buffer_view = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_buffer_view");
	___mb.mb_get_byte_offset = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_byte_offset");
	___mb.mb_get_component_type = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_component_type");
	___mb.mb_get_count = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_count");
	___mb.mb_get_max = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_max");
	___mb.mb_get_min = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_min");
	___mb.mb_get_normalized = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_normalized");
	___mb.mb_get_sparse_count = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_count");
	___mb.mb_get_sparse_indices_buffer_view = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_indices_buffer_view");
	___mb.mb_get_sparse_indices_byte_offset = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_indices_byte_offset");
	___mb.mb_get_sparse_indices_component_type = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_indices_component_type");
	___mb.mb_get_sparse_values_buffer_view = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_values_buffer_view");
	___mb.mb_get_sparse_values_byte_offset = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_sparse_values_byte_offset");
	___mb.mb_get_type = godot::api->godot_method_bind_get_method("GLTFAccessor", "get_type");
	___mb.mb_set_buffer_view = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_buffer_view");
	___mb.mb_set_byte_offset = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_byte_offset");
	___mb.mb_set_component_type = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_component_type");
	___mb.mb_set_count = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_count");
	___mb.mb_set_max = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_max");
	___mb.mb_set_min = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_min");
	___mb.mb_set_normalized = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_normalized");
	___mb.mb_set_sparse_count = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_count");
	___mb.mb_set_sparse_indices_buffer_view = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_indices_buffer_view");
	___mb.mb_set_sparse_indices_byte_offset = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_indices_byte_offset");
	___mb.mb_set_sparse_indices_component_type = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_indices_component_type");
	___mb.mb_set_sparse_values_buffer_view = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_values_buffer_view");
	___mb.mb_set_sparse_values_byte_offset = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_sparse_values_byte_offset");
	___mb.mb_set_type = godot::api->godot_method_bind_get_method("GLTFAccessor", "set_type");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFAccessor");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GLTFAccessor *GLTFAccessor::_new()
{
	return (GLTFAccessor *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GLTFAccessor")());
}
int64_t GLTFAccessor::get_buffer_view() {
	return ___godot_icall_int(___mb.mb_get_buffer_view, (const Object *) this);
}

int64_t GLTFAccessor::get_byte_offset() {
	return ___godot_icall_int(___mb.mb_get_byte_offset, (const Object *) this);
}

int64_t GLTFAccessor::get_component_type() {
	return ___godot_icall_int(___mb.mb_get_component_type, (const Object *) this);
}

int64_t GLTFAccessor::get_count() {
	return ___godot_icall_int(___mb.mb_get_count, (const Object *) this);
}

PoolRealArray GLTFAccessor::get_max() {
	return ___godot_icall_PoolRealArray(___mb.mb_get_max, (const Object *) this);
}

PoolRealArray GLTFAccessor::get_min() {
	return ___godot_icall_PoolRealArray(___mb.mb_get_min, (const Object *) this);
}

bool GLTFAccessor::get_normalized() {
	return ___godot_icall_bool(___mb.mb_get_normalized, (const Object *) this);
}

int64_t GLTFAccessor::get_sparse_count() {
	return ___godot_icall_int(___mb.mb_get_sparse_count, (const Object *) this);
}

int64_t GLTFAccessor::get_sparse_indices_buffer_view() {
	return ___godot_icall_int(___mb.mb_get_sparse_indices_buffer_view, (const Object *) this);
}

int64_t GLTFAccessor::get_sparse_indices_byte_offset() {
	return ___godot_icall_int(___mb.mb_get_sparse_indices_byte_offset, (const Object *) this);
}

int64_t GLTFAccessor::get_sparse_indices_component_type() {
	return ___godot_icall_int(___mb.mb_get_sparse_indices_component_type, (const Object *) this);
}

int64_t GLTFAccessor::get_sparse_values_buffer_view() {
	return ___godot_icall_int(___mb.mb_get_sparse_values_buffer_view, (const Object *) this);
}

int64_t GLTFAccessor::get_sparse_values_byte_offset() {
	return ___godot_icall_int(___mb.mb_get_sparse_values_byte_offset, (const Object *) this);
}

int64_t GLTFAccessor::get_type() {
	return ___godot_icall_int(___mb.mb_get_type, (const Object *) this);
}

void GLTFAccessor::set_buffer_view(const int64_t buffer_view) {
	___godot_icall_void_int(___mb.mb_set_buffer_view, (const Object *) this, buffer_view);
}

void GLTFAccessor::set_byte_offset(const int64_t byte_offset) {
	___godot_icall_void_int(___mb.mb_set_byte_offset, (const Object *) this, byte_offset);
}

void GLTFAccessor::set_component_type(const int64_t component_type) {
	___godot_icall_void_int(___mb.mb_set_component_type, (const Object *) this, component_type);
}

void GLTFAccessor::set_count(const int64_t count) {
	___godot_icall_void_int(___mb.mb_set_count, (const Object *) this, count);
}

void GLTFAccessor::set_max(const PoolRealArray max) {
	___godot_icall_void_PoolRealArray(___mb.mb_set_max, (const Object *) this, max);
}

void GLTFAccessor::set_min(const PoolRealArray min) {
	___godot_icall_void_PoolRealArray(___mb.mb_set_min, (const Object *) this, min);
}

void GLTFAccessor::set_normalized(const bool normalized) {
	___godot_icall_void_bool(___mb.mb_set_normalized, (const Object *) this, normalized);
}

void GLTFAccessor::set_sparse_count(const int64_t sparse_count) {
	___godot_icall_void_int(___mb.mb_set_sparse_count, (const Object *) this, sparse_count);
}

void GLTFAccessor::set_sparse_indices_buffer_view(const int64_t sparse_indices_buffer_view) {
	___godot_icall_void_int(___mb.mb_set_sparse_indices_buffer_view, (const Object *) this, sparse_indices_buffer_view);
}

void GLTFAccessor::set_sparse_indices_byte_offset(const int64_t sparse_indices_byte_offset) {
	___godot_icall_void_int(___mb.mb_set_sparse_indices_byte_offset, (const Object *) this, sparse_indices_byte_offset);
}

void GLTFAccessor::set_sparse_indices_component_type(const int64_t sparse_indices_component_type) {
	___godot_icall_void_int(___mb.mb_set_sparse_indices_component_type, (const Object *) this, sparse_indices_component_type);
}

void GLTFAccessor::set_sparse_values_buffer_view(const int64_t sparse_values_buffer_view) {
	___godot_icall_void_int(___mb.mb_set_sparse_values_buffer_view, (const Object *) this, sparse_values_buffer_view);
}

void GLTFAccessor::set_sparse_values_byte_offset(const int64_t sparse_values_byte_offset) {
	___godot_icall_void_int(___mb.mb_set_sparse_values_byte_offset, (const Object *) this, sparse_values_byte_offset);
}

void GLTFAccessor::set_type(const int64_t type) {
	___godot_icall_void_int(___mb.mb_set_type, (const Object *) this, type);
}

}