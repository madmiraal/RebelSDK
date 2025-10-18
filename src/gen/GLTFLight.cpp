#include "GLTFLight.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


GLTFLight::___method_bindings GLTFLight::___mb = {};

void *GLTFLight::_detail_class_tag = nullptr;

void GLTFLight::___init_method_bindings() {
	___mb.mb_get_color = godot::api->godot_method_bind_get_method("GLTFLight", "get_color");
	___mb.mb_get_inner_cone_angle = godot::api->godot_method_bind_get_method("GLTFLight", "get_inner_cone_angle");
	___mb.mb_get_intensity = godot::api->godot_method_bind_get_method("GLTFLight", "get_intensity");
	___mb.mb_get_outer_cone_angle = godot::api->godot_method_bind_get_method("GLTFLight", "get_outer_cone_angle");
	___mb.mb_get_range = godot::api->godot_method_bind_get_method("GLTFLight", "get_range");
	___mb.mb_get_type = godot::api->godot_method_bind_get_method("GLTFLight", "get_type");
	___mb.mb_set_color = godot::api->godot_method_bind_get_method("GLTFLight", "set_color");
	___mb.mb_set_inner_cone_angle = godot::api->godot_method_bind_get_method("GLTFLight", "set_inner_cone_angle");
	___mb.mb_set_intensity = godot::api->godot_method_bind_get_method("GLTFLight", "set_intensity");
	___mb.mb_set_outer_cone_angle = godot::api->godot_method_bind_get_method("GLTFLight", "set_outer_cone_angle");
	___mb.mb_set_range = godot::api->godot_method_bind_get_method("GLTFLight", "set_range");
	___mb.mb_set_type = godot::api->godot_method_bind_get_method("GLTFLight", "set_type");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFLight");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GLTFLight *GLTFLight::_new()
{
	return (GLTFLight *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GLTFLight")());
}
Color GLTFLight::get_color() {
	return ___godot_icall_Color(___mb.mb_get_color, (const Object *) this);
}

real_t GLTFLight::get_inner_cone_angle() {
	return ___godot_icall_float(___mb.mb_get_inner_cone_angle, (const Object *) this);
}

real_t GLTFLight::get_intensity() {
	return ___godot_icall_float(___mb.mb_get_intensity, (const Object *) this);
}

real_t GLTFLight::get_outer_cone_angle() {
	return ___godot_icall_float(___mb.mb_get_outer_cone_angle, (const Object *) this);
}

real_t GLTFLight::get_range() {
	return ___godot_icall_float(___mb.mb_get_range, (const Object *) this);
}

String GLTFLight::get_type() {
	return ___godot_icall_String(___mb.mb_get_type, (const Object *) this);
}

void GLTFLight::set_color(const Color color) {
	___godot_icall_void_Color(___mb.mb_set_color, (const Object *) this, color);
}

void GLTFLight::set_inner_cone_angle(const real_t inner_cone_angle) {
	___godot_icall_void_float(___mb.mb_set_inner_cone_angle, (const Object *) this, inner_cone_angle);
}

void GLTFLight::set_intensity(const real_t intensity) {
	___godot_icall_void_float(___mb.mb_set_intensity, (const Object *) this, intensity);
}

void GLTFLight::set_outer_cone_angle(const real_t outer_cone_angle) {
	___godot_icall_void_float(___mb.mb_set_outer_cone_angle, (const Object *) this, outer_cone_angle);
}

void GLTFLight::set_range(const real_t range) {
	___godot_icall_void_float(___mb.mb_set_range, (const Object *) this, range);
}

void GLTFLight::set_type(const String type) {
	___godot_icall_void_String(___mb.mb_set_type, (const Object *) this, type);
}

}