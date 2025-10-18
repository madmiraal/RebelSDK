#include "GLTFTexture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


GLTFTexture::___method_bindings GLTFTexture::___mb = {};

void *GLTFTexture::_detail_class_tag = nullptr;

void GLTFTexture::___init_method_bindings() {
	___mb.mb_get_src_image = godot::api->godot_method_bind_get_method("GLTFTexture", "get_src_image");
	___mb.mb_set_src_image = godot::api->godot_method_bind_get_method("GLTFTexture", "set_src_image");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFTexture");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GLTFTexture *GLTFTexture::_new()
{
	return (GLTFTexture *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GLTFTexture")());
}
int64_t GLTFTexture::get_src_image() const {
	return ___godot_icall_int(___mb.mb_get_src_image, (const Object *) this);
}

void GLTFTexture::set_src_image(const int64_t src_image) {
	___godot_icall_void_int(___mb.mb_set_src_image, (const Object *) this, src_image);
}

}