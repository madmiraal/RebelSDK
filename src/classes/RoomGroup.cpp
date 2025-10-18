#include "RoomGroup.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


RoomGroup::___method_bindings RoomGroup::___mb = {};

void *RoomGroup::_detail_class_tag = nullptr;

void RoomGroup::___init_method_bindings() {
	___mb.mb_get_roomgroup_priority = godot::api->godot_method_bind_get_method("RoomGroup", "get_roomgroup_priority");
	___mb.mb_set_roomgroup_priority = godot::api->godot_method_bind_get_method("RoomGroup", "set_roomgroup_priority");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "RoomGroup");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

RoomGroup *RoomGroup::_new()
{
	return (RoomGroup *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"RoomGroup")());
}
int64_t RoomGroup::get_roomgroup_priority() const {
	return ___godot_icall_int(___mb.mb_get_roomgroup_priority, (const Object *) this);
}

void RoomGroup::set_roomgroup_priority(const int64_t p_priority) {
	___godot_icall_void_int(___mb.mb_set_roomgroup_priority, (const Object *) this, p_priority);
}

}