#include "GLTFSpecGloss.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Image.hpp"


namespace godot {


GLTFSpecGloss::___method_bindings GLTFSpecGloss::___mb = {};

void *GLTFSpecGloss::_detail_class_tag = nullptr;

void GLTFSpecGloss::___init_method_bindings() {
	___mb.mb_get_diffuse_factor = godot::api->godot_method_bind_get_method("GLTFSpecGloss", "get_diffuse_factor");
	___mb.mb_get_diffuse_img = godot::api->godot_method_bind_get_method("GLTFSpecGloss", "get_diffuse_img");
	___mb.mb_get_gloss_factor = godot::api->godot_method_bind_get_method("GLTFSpecGloss", "get_gloss_factor");
	___mb.mb_get_spec_gloss_img = godot::api->godot_method_bind_get_method("GLTFSpecGloss", "get_spec_gloss_img");
	___mb.mb_get_specular_factor = godot::api->godot_method_bind_get_method("GLTFSpecGloss", "get_specular_factor");
	___mb.mb_set_diffuse_factor = godot::api->godot_method_bind_get_method("GLTFSpecGloss", "set_diffuse_factor");
	___mb.mb_set_diffuse_img = godot::api->godot_method_bind_get_method("GLTFSpecGloss", "set_diffuse_img");
	___mb.mb_set_gloss_factor = godot::api->godot_method_bind_get_method("GLTFSpecGloss", "set_gloss_factor");
	___mb.mb_set_spec_gloss_img = godot::api->godot_method_bind_get_method("GLTFSpecGloss", "set_spec_gloss_img");
	___mb.mb_set_specular_factor = godot::api->godot_method_bind_get_method("GLTFSpecGloss", "set_specular_factor");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFSpecGloss");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GLTFSpecGloss *GLTFSpecGloss::_new()
{
	return (GLTFSpecGloss *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GLTFSpecGloss")());
}
Color GLTFSpecGloss::get_diffuse_factor() {
	return ___godot_icall_Color(___mb.mb_get_diffuse_factor, (const Object *) this);
}

Ref<Image> GLTFSpecGloss::get_diffuse_img() {
	return Ref<Image>::__internal_constructor(___godot_icall_Object(___mb.mb_get_diffuse_img, (const Object *) this));
}

real_t GLTFSpecGloss::get_gloss_factor() {
	return ___godot_icall_float(___mb.mb_get_gloss_factor, (const Object *) this);
}

Ref<Image> GLTFSpecGloss::get_spec_gloss_img() {
	return Ref<Image>::__internal_constructor(___godot_icall_Object(___mb.mb_get_spec_gloss_img, (const Object *) this));
}

Color GLTFSpecGloss::get_specular_factor() {
	return ___godot_icall_Color(___mb.mb_get_specular_factor, (const Object *) this);
}

void GLTFSpecGloss::set_diffuse_factor(const Color diffuse_factor) {
	___godot_icall_void_Color(___mb.mb_set_diffuse_factor, (const Object *) this, diffuse_factor);
}

void GLTFSpecGloss::set_diffuse_img(const Ref<Image> diffuse_img) {
	___godot_icall_void_Object(___mb.mb_set_diffuse_img, (const Object *) this, diffuse_img.ptr());
}

void GLTFSpecGloss::set_gloss_factor(const real_t gloss_factor) {
	___godot_icall_void_float(___mb.mb_set_gloss_factor, (const Object *) this, gloss_factor);
}

void GLTFSpecGloss::set_spec_gloss_img(const Ref<Image> spec_gloss_img) {
	___godot_icall_void_Object(___mb.mb_set_spec_gloss_img, (const Object *) this, spec_gloss_img.ptr());
}

void GLTFSpecGloss::set_specular_factor(const Color specular_factor) {
	___godot_icall_void_Color(___mb.mb_set_specular_factor, (const Object *) this, specular_factor);
}

}