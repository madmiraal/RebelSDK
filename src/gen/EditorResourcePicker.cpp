#include "EditorResourcePicker.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "InputEvent.hpp"
#include "Texture.hpp"
#include "Control.hpp"
#include "Resource.hpp"
#include "Object.hpp"


namespace godot {


EditorResourcePicker::___method_bindings EditorResourcePicker::___mb = {};

void *EditorResourcePicker::_detail_class_tag = nullptr;

void EditorResourcePicker::___init_method_bindings() {
	___mb.mb__button_draw = godot::api->godot_method_bind_get_method("EditorResourcePicker", "_button_draw");
	___mb.mb__button_input = godot::api->godot_method_bind_get_method("EditorResourcePicker", "_button_input");
	___mb.mb__edit_menu_cbk = godot::api->godot_method_bind_get_method("EditorResourcePicker", "_edit_menu_cbk");
	___mb.mb__file_quick_selected = godot::api->godot_method_bind_get_method("EditorResourcePicker", "_file_quick_selected");
	___mb.mb__file_selected = godot::api->godot_method_bind_get_method("EditorResourcePicker", "_file_selected");
	___mb.mb__resource_selected = godot::api->godot_method_bind_get_method("EditorResourcePicker", "_resource_selected");
	___mb.mb__update_menu = godot::api->godot_method_bind_get_method("EditorResourcePicker", "_update_menu");
	___mb.mb__update_resource_preview = godot::api->godot_method_bind_get_method("EditorResourcePicker", "_update_resource_preview");
	___mb.mb_can_drop_data_fw = godot::api->godot_method_bind_get_method("EditorResourcePicker", "can_drop_data_fw");
	___mb.mb_drop_data_fw = godot::api->godot_method_bind_get_method("EditorResourcePicker", "drop_data_fw");
	___mb.mb_get_allowed_types = godot::api->godot_method_bind_get_method("EditorResourcePicker", "get_allowed_types");
	___mb.mb_get_base_type = godot::api->godot_method_bind_get_method("EditorResourcePicker", "get_base_type");
	___mb.mb_get_drag_data_fw = godot::api->godot_method_bind_get_method("EditorResourcePicker", "get_drag_data_fw");
	___mb.mb_get_edited_resource = godot::api->godot_method_bind_get_method("EditorResourcePicker", "get_edited_resource");
	___mb.mb_handle_menu_selected = godot::api->godot_method_bind_get_method("EditorResourcePicker", "handle_menu_selected");
	___mb.mb_is_editable = godot::api->godot_method_bind_get_method("EditorResourcePicker", "is_editable");
	___mb.mb_is_toggle_mode = godot::api->godot_method_bind_get_method("EditorResourcePicker", "is_toggle_mode");
	___mb.mb_set_base_type = godot::api->godot_method_bind_get_method("EditorResourcePicker", "set_base_type");
	___mb.mb_set_create_options = godot::api->godot_method_bind_get_method("EditorResourcePicker", "set_create_options");
	___mb.mb_set_editable = godot::api->godot_method_bind_get_method("EditorResourcePicker", "set_editable");
	___mb.mb_set_edited_resource = godot::api->godot_method_bind_get_method("EditorResourcePicker", "set_edited_resource");
	___mb.mb_set_toggle_mode = godot::api->godot_method_bind_get_method("EditorResourcePicker", "set_toggle_mode");
	___mb.mb_set_toggle_pressed = godot::api->godot_method_bind_get_method("EditorResourcePicker", "set_toggle_pressed");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "EditorResourcePicker");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

void EditorResourcePicker::_button_draw() {
	___godot_icall_void(___mb.mb__button_draw, (const Object *) this);
}

void EditorResourcePicker::_button_input(const Ref<InputEvent> arg0) {
	___godot_icall_void_Object(___mb.mb__button_input, (const Object *) this, arg0.ptr());
}

void EditorResourcePicker::_edit_menu_cbk(const int64_t arg0) {
	___godot_icall_void_int(___mb.mb__edit_menu_cbk, (const Object *) this, arg0);
}

void EditorResourcePicker::_file_quick_selected() {
	___godot_icall_void(___mb.mb__file_quick_selected, (const Object *) this);
}

void EditorResourcePicker::_file_selected(const String arg0) {
	___godot_icall_void_String(___mb.mb__file_selected, (const Object *) this, arg0);
}

void EditorResourcePicker::_resource_selected() {
	___godot_icall_void(___mb.mb__resource_selected, (const Object *) this);
}

void EditorResourcePicker::_update_menu() {
	___godot_icall_void(___mb.mb__update_menu, (const Object *) this);
}

void EditorResourcePicker::_update_resource_preview(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const int64_t arg3) {
	___godot_icall_void_String_Object_Object_int(___mb.mb__update_resource_preview, (const Object *) this, arg0, arg1.ptr(), arg2.ptr(), arg3);
}

bool EditorResourcePicker::can_drop_data_fw(const Vector2 position, const Variant data, const Control *from) const {
	return ___godot_icall_bool_Vector2_Variant_Object(___mb.mb_can_drop_data_fw, (const Object *) this, position, data, from);
}

void EditorResourcePicker::drop_data_fw(const Vector2 position, const Variant data, const Control *from) {
	___godot_icall_void_Vector2_Variant_Object(___mb.mb_drop_data_fw, (const Object *) this, position, data, from);
}

PoolStringArray EditorResourcePicker::get_allowed_types() const {
	return ___godot_icall_PoolStringArray(___mb.mb_get_allowed_types, (const Object *) this);
}

String EditorResourcePicker::get_base_type() const {
	return ___godot_icall_String(___mb.mb_get_base_type, (const Object *) this);
}

Variant EditorResourcePicker::get_drag_data_fw(const Vector2 position, const Control *from) {
	return ___godot_icall_Variant_Vector2_Object(___mb.mb_get_drag_data_fw, (const Object *) this, position, from);
}

Ref<Resource> EditorResourcePicker::get_edited_resource() {
	return Ref<Resource>::__internal_constructor(___godot_icall_Object(___mb.mb_get_edited_resource, (const Object *) this));
}

bool EditorResourcePicker::handle_menu_selected(const int64_t id) {
	return ___godot_icall_bool_int(___mb.mb_handle_menu_selected, (const Object *) this, id);
}

bool EditorResourcePicker::is_editable() const {
	return ___godot_icall_bool(___mb.mb_is_editable, (const Object *) this);
}

bool EditorResourcePicker::is_toggle_mode() const {
	return ___godot_icall_bool(___mb.mb_is_toggle_mode, (const Object *) this);
}

void EditorResourcePicker::set_base_type(const String base_type) {
	___godot_icall_void_String(___mb.mb_set_base_type, (const Object *) this, base_type);
}

void EditorResourcePicker::set_create_options(const Object *menu_node) {
	___godot_icall_void_Object(___mb.mb_set_create_options, (const Object *) this, menu_node);
}

void EditorResourcePicker::set_editable(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_editable, (const Object *) this, enable);
}

void EditorResourcePicker::set_edited_resource(const Ref<Resource> resource) {
	___godot_icall_void_Object(___mb.mb_set_edited_resource, (const Object *) this, resource.ptr());
}

void EditorResourcePicker::set_toggle_mode(const bool enable) {
	___godot_icall_void_bool(___mb.mb_set_toggle_mode, (const Object *) this, enable);
}

void EditorResourcePicker::set_toggle_pressed(const bool pressed) {
	___godot_icall_void_bool(___mb.mb_set_toggle_pressed, (const Object *) this, pressed);
}

}