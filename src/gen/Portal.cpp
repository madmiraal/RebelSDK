#include "Portal.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Portal::___method_bindings Portal::___mb = {};

void *Portal::_detail_class_tag = nullptr;

void Portal::___init_method_bindings() {
	___mb.mb_get_linked_room = godot::api->godot_method_bind_get_method("Portal", "get_linked_room");
	___mb.mb_get_points = godot::api->godot_method_bind_get_method("Portal", "get_points");
	___mb.mb_get_portal_active = godot::api->godot_method_bind_get_method("Portal", "get_portal_active");
	___mb.mb_get_portal_margin = godot::api->godot_method_bind_get_method("Portal", "get_portal_margin");
	___mb.mb_get_use_default_margin = godot::api->godot_method_bind_get_method("Portal", "get_use_default_margin");
	___mb.mb_is_two_way = godot::api->godot_method_bind_get_method("Portal", "is_two_way");
	___mb.mb_set_linked_room = godot::api->godot_method_bind_get_method("Portal", "set_linked_room");
	___mb.mb_set_point = godot::api->godot_method_bind_get_method("Portal", "set_point");
	___mb.mb_set_points = godot::api->godot_method_bind_get_method("Portal", "set_points");
	___mb.mb_set_portal_active = godot::api->godot_method_bind_get_method("Portal", "set_portal_active");
	___mb.mb_set_portal_margin = godot::api->godot_method_bind_get_method("Portal", "set_portal_margin");
	___mb.mb_set_two_way = godot::api->godot_method_bind_get_method("Portal", "set_two_way");
	___mb.mb_set_use_default_margin = godot::api->godot_method_bind_get_method("Portal", "set_use_default_margin");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Portal");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Portal *Portal::_new()
{
	return (Portal *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Portal")());
}
NodePath Portal::get_linked_room() const {
	return ___godot_icall_NodePath(___mb.mb_get_linked_room, (const Object *) this);
}

PoolVector2Array Portal::get_points() const {
	return ___godot_icall_PoolVector2Array(___mb.mb_get_points, (const Object *) this);
}

bool Portal::get_portal_active() const {
	return ___godot_icall_bool(___mb.mb_get_portal_active, (const Object *) this);
}

real_t Portal::get_portal_margin() const {
	return ___godot_icall_float(___mb.mb_get_portal_margin, (const Object *) this);
}

bool Portal::get_use_default_margin() const {
	return ___godot_icall_bool(___mb.mb_get_use_default_margin, (const Object *) this);
}

bool Portal::is_two_way() const {
	return ___godot_icall_bool(___mb.mb_is_two_way, (const Object *) this);
}

void Portal::set_linked_room(const NodePath p_room) {
	___godot_icall_void_NodePath(___mb.mb_set_linked_room, (const Object *) this, p_room);
}

void Portal::set_point(const int64_t index, const Vector2 position) {
	___godot_icall_void_int_Vector2(___mb.mb_set_point, (const Object *) this, index, position);
}

void Portal::set_points(const PoolVector2Array points) {
	___godot_icall_void_PoolVector2Array(___mb.mb_set_points, (const Object *) this, points);
}

void Portal::set_portal_active(const bool p_active) {
	___godot_icall_void_bool(___mb.mb_set_portal_active, (const Object *) this, p_active);
}

void Portal::set_portal_margin(const real_t p_margin) {
	___godot_icall_void_float(___mb.mb_set_portal_margin, (const Object *) this, p_margin);
}

void Portal::set_two_way(const bool p_two_way) {
	___godot_icall_void_bool(___mb.mb_set_two_way, (const Object *) this, p_two_way);
}

void Portal::set_use_default_margin(const bool p_use) {
	___godot_icall_void_bool(___mb.mb_set_use_default_margin, (const Object *) this, p_use);
}

}