#include "JavaScriptObject.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


JavaScriptObject::___method_bindings JavaScriptObject::___mb = {};

void *JavaScriptObject::_detail_class_tag = nullptr;

void JavaScriptObject::___init_method_bindings() {
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "JavaScriptObject");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

}