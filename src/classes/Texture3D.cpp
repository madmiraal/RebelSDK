#include "Texture3D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Texture3D::___method_bindings Texture3D::___mb = {};

void *Texture3D::_detail_class_tag = nullptr;

void Texture3D::___init_method_bindings() {
	___mb.mb_create = godot::api->godot_method_bind_get_method("Texture3D", "create");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Texture3D");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Texture3D *Texture3D::_new()
{
	return (Texture3D *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Texture3D")());
}
void Texture3D::create(const int64_t width, const int64_t height, const int64_t depth, const int64_t format, const int64_t flags) {
	___godot_icall_void_int_int_int_int_int(___mb.mb_create, (const Object *) this, width, height, depth, format, flags);
}

}