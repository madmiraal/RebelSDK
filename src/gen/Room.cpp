#include "Room.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Room::___method_bindings Room::___mb = {};

void *Room::_detail_class_tag = nullptr;

void Room::___init_method_bindings() {
	___mb.mb_get_points = godot::api->godot_method_bind_get_method("Room", "get_points");
	___mb.mb_get_room_simplify = godot::api->godot_method_bind_get_method("Room", "get_room_simplify");
	___mb.mb_get_use_default_simplify = godot::api->godot_method_bind_get_method("Room", "get_use_default_simplify");
	___mb.mb_set_point = godot::api->godot_method_bind_get_method("Room", "set_point");
	___mb.mb_set_points = godot::api->godot_method_bind_get_method("Room", "set_points");
	___mb.mb_set_room_simplify = godot::api->godot_method_bind_get_method("Room", "set_room_simplify");
	___mb.mb_set_use_default_simplify = godot::api->godot_method_bind_get_method("Room", "set_use_default_simplify");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Room");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Room *Room::_new()
{
	return (Room *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Room")());
}
PoolVector3Array Room::get_points() const {
	return ___godot_icall_PoolVector3Array(___mb.mb_get_points, (const Object *) this);
}

real_t Room::get_room_simplify() const {
	return ___godot_icall_float(___mb.mb_get_room_simplify, (const Object *) this);
}

bool Room::get_use_default_simplify() const {
	return ___godot_icall_bool(___mb.mb_get_use_default_simplify, (const Object *) this);
}

void Room::set_point(const int64_t index, const Vector3 position) {
	___godot_icall_void_int_Vector3(___mb.mb_set_point, (const Object *) this, index, position);
}

void Room::set_points(const PoolVector3Array points) {
	___godot_icall_void_PoolVector3Array(___mb.mb_set_points, (const Object *) this, points);
}

void Room::set_room_simplify(const real_t p_value) {
	___godot_icall_void_float(___mb.mb_set_room_simplify, (const Object *) this, p_value);
}

void Room::set_use_default_simplify(const bool p_use) {
	___godot_icall_void_bool(___mb.mb_set_use_default_simplify, (const Object *) this, p_use);
}

}