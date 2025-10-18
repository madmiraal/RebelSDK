#include "RoomManager.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


RoomManager::___method_bindings RoomManager::___mb = {};

void *RoomManager::_detail_class_tag = nullptr;

void RoomManager::___init_method_bindings() {
	___mb.mb_get_debug_sprawl = godot::api->godot_method_bind_get_method("RoomManager", "get_debug_sprawl");
	___mb.mb_get_default_portal_margin = godot::api->godot_method_bind_get_method("RoomManager", "get_default_portal_margin");
	___mb.mb_get_gameplay_monitor_enabled = godot::api->godot_method_bind_get_method("RoomManager", "get_gameplay_monitor_enabled");
	___mb.mb_get_merge_meshes = godot::api->godot_method_bind_get_method("RoomManager", "get_merge_meshes");
	___mb.mb_get_overlap_warning_threshold = godot::api->godot_method_bind_get_method("RoomManager", "get_overlap_warning_threshold");
	___mb.mb_get_portal_depth_limit = godot::api->godot_method_bind_get_method("RoomManager", "get_portal_depth_limit");
	___mb.mb_get_preview_camera_path = godot::api->godot_method_bind_get_method("RoomManager", "get_preview_camera_path");
	___mb.mb_get_pvs_mode = godot::api->godot_method_bind_get_method("RoomManager", "get_pvs_mode");
	___mb.mb_get_roaming_expansion_margin = godot::api->godot_method_bind_get_method("RoomManager", "get_roaming_expansion_margin");
	___mb.mb_get_room_simplify = godot::api->godot_method_bind_get_method("RoomManager", "get_room_simplify");
	___mb.mb_get_roomlist_path = godot::api->godot_method_bind_get_method("RoomManager", "get_roomlist_path");
	___mb.mb_get_show_margins = godot::api->godot_method_bind_get_method("RoomManager", "get_show_margins");
	___mb.mb_get_use_secondary_pvs = godot::api->godot_method_bind_get_method("RoomManager", "get_use_secondary_pvs");
	___mb.mb_rooms_clear = godot::api->godot_method_bind_get_method("RoomManager", "rooms_clear");
	___mb.mb_rooms_convert = godot::api->godot_method_bind_get_method("RoomManager", "rooms_convert");
	___mb.mb_rooms_get_active = godot::api->godot_method_bind_get_method("RoomManager", "rooms_get_active");
	___mb.mb_rooms_set_active = godot::api->godot_method_bind_get_method("RoomManager", "rooms_set_active");
	___mb.mb_set_debug_sprawl = godot::api->godot_method_bind_get_method("RoomManager", "set_debug_sprawl");
	___mb.mb_set_default_portal_margin = godot::api->godot_method_bind_get_method("RoomManager", "set_default_portal_margin");
	___mb.mb_set_gameplay_monitor_enabled = godot::api->godot_method_bind_get_method("RoomManager", "set_gameplay_monitor_enabled");
	___mb.mb_set_merge_meshes = godot::api->godot_method_bind_get_method("RoomManager", "set_merge_meshes");
	___mb.mb_set_overlap_warning_threshold = godot::api->godot_method_bind_get_method("RoomManager", "set_overlap_warning_threshold");
	___mb.mb_set_portal_depth_limit = godot::api->godot_method_bind_get_method("RoomManager", "set_portal_depth_limit");
	___mb.mb_set_preview_camera_path = godot::api->godot_method_bind_get_method("RoomManager", "set_preview_camera_path");
	___mb.mb_set_pvs_mode = godot::api->godot_method_bind_get_method("RoomManager", "set_pvs_mode");
	___mb.mb_set_roaming_expansion_margin = godot::api->godot_method_bind_get_method("RoomManager", "set_roaming_expansion_margin");
	___mb.mb_set_room_simplify = godot::api->godot_method_bind_get_method("RoomManager", "set_room_simplify");
	___mb.mb_set_roomlist_path = godot::api->godot_method_bind_get_method("RoomManager", "set_roomlist_path");
	___mb.mb_set_show_margins = godot::api->godot_method_bind_get_method("RoomManager", "set_show_margins");
	___mb.mb_set_use_secondary_pvs = godot::api->godot_method_bind_get_method("RoomManager", "set_use_secondary_pvs");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "RoomManager");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

RoomManager *RoomManager::_new()
{
	return (RoomManager *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"RoomManager")());
}
bool RoomManager::get_debug_sprawl() const {
	return ___godot_icall_bool(___mb.mb_get_debug_sprawl, (const Object *) this);
}

real_t RoomManager::get_default_portal_margin() const {
	return ___godot_icall_float(___mb.mb_get_default_portal_margin, (const Object *) this);
}

bool RoomManager::get_gameplay_monitor_enabled() const {
	return ___godot_icall_bool(___mb.mb_get_gameplay_monitor_enabled, (const Object *) this);
}

bool RoomManager::get_merge_meshes() const {
	return ___godot_icall_bool(___mb.mb_get_merge_meshes, (const Object *) this);
}

int64_t RoomManager::get_overlap_warning_threshold() const {
	return ___godot_icall_int(___mb.mb_get_overlap_warning_threshold, (const Object *) this);
}

int64_t RoomManager::get_portal_depth_limit() const {
	return ___godot_icall_int(___mb.mb_get_portal_depth_limit, (const Object *) this);
}

NodePath RoomManager::get_preview_camera_path() const {
	return ___godot_icall_NodePath(___mb.mb_get_preview_camera_path, (const Object *) this);
}

RoomManager::PVSMode RoomManager::get_pvs_mode() const {
	return (RoomManager::PVSMode) ___godot_icall_int(___mb.mb_get_pvs_mode, (const Object *) this);
}

real_t RoomManager::get_roaming_expansion_margin() const {
	return ___godot_icall_float(___mb.mb_get_roaming_expansion_margin, (const Object *) this);
}

real_t RoomManager::get_room_simplify() const {
	return ___godot_icall_float(___mb.mb_get_room_simplify, (const Object *) this);
}

NodePath RoomManager::get_roomlist_path() const {
	return ___godot_icall_NodePath(___mb.mb_get_roomlist_path, (const Object *) this);
}

bool RoomManager::get_show_margins() const {
	return ___godot_icall_bool(___mb.mb_get_show_margins, (const Object *) this);
}

bool RoomManager::get_use_secondary_pvs() const {
	return ___godot_icall_bool(___mb.mb_get_use_secondary_pvs, (const Object *) this);
}

void RoomManager::rooms_clear() {
	___godot_icall_void(___mb.mb_rooms_clear, (const Object *) this);
}

void RoomManager::rooms_convert() {
	___godot_icall_void(___mb.mb_rooms_convert, (const Object *) this);
}

bool RoomManager::rooms_get_active() const {
	return ___godot_icall_bool(___mb.mb_rooms_get_active, (const Object *) this);
}

void RoomManager::rooms_set_active(const bool active) {
	___godot_icall_void_bool(___mb.mb_rooms_set_active, (const Object *) this, active);
}

void RoomManager::set_debug_sprawl(const bool debug_sprawl) {
	___godot_icall_void_bool(___mb.mb_set_debug_sprawl, (const Object *) this, debug_sprawl);
}

void RoomManager::set_default_portal_margin(const real_t default_portal_margin) {
	___godot_icall_void_float(___mb.mb_set_default_portal_margin, (const Object *) this, default_portal_margin);
}

void RoomManager::set_gameplay_monitor_enabled(const bool gameplay_monitor) {
	___godot_icall_void_bool(___mb.mb_set_gameplay_monitor_enabled, (const Object *) this, gameplay_monitor);
}

void RoomManager::set_merge_meshes(const bool merge_meshes) {
	___godot_icall_void_bool(___mb.mb_set_merge_meshes, (const Object *) this, merge_meshes);
}

void RoomManager::set_overlap_warning_threshold(const int64_t overlap_warning_threshold) {
	___godot_icall_void_int(___mb.mb_set_overlap_warning_threshold, (const Object *) this, overlap_warning_threshold);
}

void RoomManager::set_portal_depth_limit(const int64_t portal_depth_limit) {
	___godot_icall_void_int(___mb.mb_set_portal_depth_limit, (const Object *) this, portal_depth_limit);
}

void RoomManager::set_preview_camera_path(const NodePath preview_camera) {
	___godot_icall_void_NodePath(___mb.mb_set_preview_camera_path, (const Object *) this, preview_camera);
}

void RoomManager::set_pvs_mode(const int64_t pvs_mode) {
	___godot_icall_void_int(___mb.mb_set_pvs_mode, (const Object *) this, pvs_mode);
}

void RoomManager::set_roaming_expansion_margin(const real_t roaming_expansion_margin) {
	___godot_icall_void_float(___mb.mb_set_roaming_expansion_margin, (const Object *) this, roaming_expansion_margin);
}

void RoomManager::set_room_simplify(const real_t room_simplify) {
	___godot_icall_void_float(___mb.mb_set_room_simplify, (const Object *) this, room_simplify);
}

void RoomManager::set_roomlist_path(const NodePath p_path) {
	___godot_icall_void_NodePath(___mb.mb_set_roomlist_path, (const Object *) this, p_path);
}

void RoomManager::set_show_margins(const bool show_margins) {
	___godot_icall_void_bool(___mb.mb_set_show_margins, (const Object *) this, show_margins);
}

void RoomManager::set_use_secondary_pvs(const bool use_secondary_pvs) {
	___godot_icall_void_bool(___mb.mb_set_use_secondary_pvs, (const Object *) this, use_secondary_pvs);
}

}