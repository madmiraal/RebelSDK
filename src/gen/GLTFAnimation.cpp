#include "GLTFAnimation.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


GLTFAnimation::___method_bindings GLTFAnimation::___mb = {};

void *GLTFAnimation::_detail_class_tag = nullptr;

void GLTFAnimation::___init_method_bindings() {
	___mb.mb_get_loop = godot::api->godot_method_bind_get_method("GLTFAnimation", "get_loop");
	___mb.mb_set_loop = godot::api->godot_method_bind_get_method("GLTFAnimation", "set_loop");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFAnimation");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GLTFAnimation *GLTFAnimation::_new()
{
	return (GLTFAnimation *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GLTFAnimation")());
}
bool GLTFAnimation::get_loop() const {
	return ___godot_icall_bool(___mb.mb_get_loop, (const Object *) this);
}

void GLTFAnimation::set_loop(const bool loop) {
	___godot_icall_void_bool(___mb.mb_set_loop, (const Object *) this, loop);
}

}