#include "GLTFCamera.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


GLTFCamera::___method_bindings GLTFCamera::___mb = {};

void *GLTFCamera::_detail_class_tag = nullptr;

void GLTFCamera::___init_method_bindings() {
	___mb.mb_get_fov_size = godot::api->godot_method_bind_get_method("GLTFCamera", "get_fov_size");
	___mb.mb_get_perspective = godot::api->godot_method_bind_get_method("GLTFCamera", "get_perspective");
	___mb.mb_get_zfar = godot::api->godot_method_bind_get_method("GLTFCamera", "get_zfar");
	___mb.mb_get_znear = godot::api->godot_method_bind_get_method("GLTFCamera", "get_znear");
	___mb.mb_set_fov_size = godot::api->godot_method_bind_get_method("GLTFCamera", "set_fov_size");
	___mb.mb_set_perspective = godot::api->godot_method_bind_get_method("GLTFCamera", "set_perspective");
	___mb.mb_set_zfar = godot::api->godot_method_bind_get_method("GLTFCamera", "set_zfar");
	___mb.mb_set_znear = godot::api->godot_method_bind_get_method("GLTFCamera", "set_znear");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFCamera");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GLTFCamera *GLTFCamera::_new()
{
	return (GLTFCamera *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GLTFCamera")());
}
real_t GLTFCamera::get_fov_size() const {
	return ___godot_icall_float(___mb.mb_get_fov_size, (const Object *) this);
}

bool GLTFCamera::get_perspective() const {
	return ___godot_icall_bool(___mb.mb_get_perspective, (const Object *) this);
}

real_t GLTFCamera::get_zfar() const {
	return ___godot_icall_float(___mb.mb_get_zfar, (const Object *) this);
}

real_t GLTFCamera::get_znear() const {
	return ___godot_icall_float(___mb.mb_get_znear, (const Object *) this);
}

void GLTFCamera::set_fov_size(const real_t fov_size) {
	___godot_icall_void_float(___mb.mb_set_fov_size, (const Object *) this, fov_size);
}

void GLTFCamera::set_perspective(const bool perspective) {
	___godot_icall_void_bool(___mb.mb_set_perspective, (const Object *) this, perspective);
}

void GLTFCamera::set_zfar(const real_t zfar) {
	___godot_icall_void_float(___mb.mb_set_zfar, (const Object *) this, zfar);
}

void GLTFCamera::set_znear(const real_t znear) {
	___godot_icall_void_float(___mb.mb_set_znear, (const Object *) this, znear);
}

}