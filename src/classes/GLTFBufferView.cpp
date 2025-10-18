#include "GLTFBufferView.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


GLTFBufferView::___method_bindings GLTFBufferView::___mb = {};

void *GLTFBufferView::_detail_class_tag = nullptr;

void GLTFBufferView::___init_method_bindings() {
	___mb.mb_get_buffer = godot::api->godot_method_bind_get_method("GLTFBufferView", "get_buffer");
	___mb.mb_get_byte_length = godot::api->godot_method_bind_get_method("GLTFBufferView", "get_byte_length");
	___mb.mb_get_byte_offset = godot::api->godot_method_bind_get_method("GLTFBufferView", "get_byte_offset");
	___mb.mb_get_byte_stride = godot::api->godot_method_bind_get_method("GLTFBufferView", "get_byte_stride");
	___mb.mb_get_indices = godot::api->godot_method_bind_get_method("GLTFBufferView", "get_indices");
	___mb.mb_set_buffer = godot::api->godot_method_bind_get_method("GLTFBufferView", "set_buffer");
	___mb.mb_set_byte_length = godot::api->godot_method_bind_get_method("GLTFBufferView", "set_byte_length");
	___mb.mb_set_byte_offset = godot::api->godot_method_bind_get_method("GLTFBufferView", "set_byte_offset");
	___mb.mb_set_byte_stride = godot::api->godot_method_bind_get_method("GLTFBufferView", "set_byte_stride");
	___mb.mb_set_indices = godot::api->godot_method_bind_get_method("GLTFBufferView", "set_indices");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFBufferView");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GLTFBufferView *GLTFBufferView::_new()
{
	return (GLTFBufferView *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GLTFBufferView")());
}
int64_t GLTFBufferView::get_buffer() {
	return ___godot_icall_int(___mb.mb_get_buffer, (const Object *) this);
}

int64_t GLTFBufferView::get_byte_length() {
	return ___godot_icall_int(___mb.mb_get_byte_length, (const Object *) this);
}

int64_t GLTFBufferView::get_byte_offset() {
	return ___godot_icall_int(___mb.mb_get_byte_offset, (const Object *) this);
}

int64_t GLTFBufferView::get_byte_stride() {
	return ___godot_icall_int(___mb.mb_get_byte_stride, (const Object *) this);
}

bool GLTFBufferView::get_indices() {
	return ___godot_icall_bool(___mb.mb_get_indices, (const Object *) this);
}

void GLTFBufferView::set_buffer(const int64_t buffer) {
	___godot_icall_void_int(___mb.mb_set_buffer, (const Object *) this, buffer);
}

void GLTFBufferView::set_byte_length(const int64_t byte_length) {
	___godot_icall_void_int(___mb.mb_set_byte_length, (const Object *) this, byte_length);
}

void GLTFBufferView::set_byte_offset(const int64_t byte_offset) {
	___godot_icall_void_int(___mb.mb_set_byte_offset, (const Object *) this, byte_offset);
}

void GLTFBufferView::set_byte_stride(const int64_t byte_stride) {
	___godot_icall_void_int(___mb.mb_set_byte_stride, (const Object *) this, byte_stride);
}

void GLTFBufferView::set_indices(const bool indices) {
	___godot_icall_void_bool(___mb.mb_set_indices, (const Object *) this, indices);
}

}