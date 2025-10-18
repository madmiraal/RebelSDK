#include "EditorScriptPicker.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Node.hpp"


namespace godot {


EditorScriptPicker::___method_bindings EditorScriptPicker::___mb = {};

void *EditorScriptPicker::_detail_class_tag = nullptr;

void EditorScriptPicker::___init_method_bindings() {
	___mb.mb_get_script_owner = godot::api->godot_method_bind_get_method("EditorScriptPicker", "get_script_owner");
	___mb.mb_set_script_owner = godot::api->godot_method_bind_get_method("EditorScriptPicker", "set_script_owner");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "EditorScriptPicker");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Node *EditorScriptPicker::get_script_owner() const {
	return (Node *) ___godot_icall_Object(___mb.mb_get_script_owner, (const Object *) this);
}

void EditorScriptPicker::set_script_owner(const Node *owner_node) {
	___godot_icall_void_Object(___mb.mb_set_script_owner, (const Object *) this, owner_node);
}

}