#include "Listener2D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Listener2D::___method_bindings Listener2D::___mb = {};

void *Listener2D::_detail_class_tag = nullptr;

void Listener2D::___init_method_bindings() {
	___mb.mb_clear_current = godot::api->godot_method_bind_get_method("Listener2D", "clear_current");
	___mb.mb_is_current = godot::api->godot_method_bind_get_method("Listener2D", "is_current");
	___mb.mb_make_current = godot::api->godot_method_bind_get_method("Listener2D", "make_current");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Listener2D");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Listener2D *Listener2D::_new()
{
	return (Listener2D *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Listener2D")());
}
void Listener2D::clear_current() {
	___godot_icall_void(___mb.mb_clear_current, (const Object *) this);
}

bool Listener2D::is_current() const {
	return ___godot_icall_bool(___mb.mb_is_current, (const Object *) this);
}

void Listener2D::make_current() {
	___godot_icall_void(___mb.mb_make_current, (const Object *) this);
}

}