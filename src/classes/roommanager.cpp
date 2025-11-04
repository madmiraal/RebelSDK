// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/roommanager.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool RoomManager::get_debug_sprawl() const {
    return rebel_icall_bool(
        method_bindings.mb_get_debug_sprawl,
        (const Object*)this
    );
}

real_t RoomManager::get_default_portal_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_default_portal_margin,
        (const Object*)this
    );
}

bool RoomManager::get_gameplay_monitor_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_get_gameplay_monitor_enabled,
        (const Object*)this
    );
}

bool RoomManager::get_merge_meshes() const {
    return rebel_icall_bool(
        method_bindings.mb_get_merge_meshes,
        (const Object*)this
    );
}

int64_t RoomManager::get_overlap_warning_threshold() const {
    return rebel_icall_int(
        method_bindings.mb_get_overlap_warning_threshold,
        (const Object*)this
    );
}

int64_t RoomManager::get_portal_depth_limit() const {
    return rebel_icall_int(
        method_bindings.mb_get_portal_depth_limit,
        (const Object*)this
    );
}

NodePath RoomManager::get_preview_camera_path() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_preview_camera_path,
        (const Object*)this
    );
}

RoomManager::PVSMode RoomManager::get_pvs_mode() const {
    return (RoomManager::PVSMode)rebel_icall_int(
        method_bindings.mb_get_pvs_mode,
        (const Object*)this
    );
}

real_t RoomManager::get_roaming_expansion_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_roaming_expansion_margin,
        (const Object*)this
    );
}

real_t RoomManager::get_room_simplify() const {
    return rebel_icall_float(
        method_bindings.mb_get_room_simplify,
        (const Object*)this
    );
}

NodePath RoomManager::get_roomlist_path() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_roomlist_path,
        (const Object*)this
    );
}

bool RoomManager::get_show_margins() const {
    return rebel_icall_bool(
        method_bindings.mb_get_show_margins,
        (const Object*)this
    );
}

bool RoomManager::get_use_secondary_pvs() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_secondary_pvs,
        (const Object*)this
    );
}

void RoomManager::rooms_clear() {
    rebel_icall_void(
        method_bindings.mb_rooms_clear,
        (const Object*)this
    );
}

void RoomManager::rooms_convert() {
    rebel_icall_void(
        method_bindings.mb_rooms_convert,
        (const Object*)this
    );
}

bool RoomManager::rooms_get_active() const {
    return rebel_icall_bool(
        method_bindings.mb_rooms_get_active,
        (const Object*)this
    );
}

void RoomManager::rooms_set_active(const bool active) {
    rebel_icall_void_bool(
        method_bindings.mb_rooms_set_active,
        (const Object*)this,
        active
    );
}

void RoomManager::set_debug_sprawl(const bool debug_sprawl) {
    rebel_icall_void_bool(
        method_bindings.mb_set_debug_sprawl,
        (const Object*)this,
        debug_sprawl
    );
}

void RoomManager::set_default_portal_margin(const real_t default_portal_margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_default_portal_margin,
        (const Object*)this,
        default_portal_margin
    );
}

void RoomManager::set_gameplay_monitor_enabled(const bool gameplay_monitor) {
    rebel_icall_void_bool(
        method_bindings.mb_set_gameplay_monitor_enabled,
        (const Object*)this,
        gameplay_monitor
    );
}

void RoomManager::set_merge_meshes(const bool merge_meshes) {
    rebel_icall_void_bool(
        method_bindings.mb_set_merge_meshes,
        (const Object*)this,
        merge_meshes
    );
}

void RoomManager::set_overlap_warning_threshold(const int64_t overlap_warning_threshold) {
    rebel_icall_void_int(
        method_bindings.mb_set_overlap_warning_threshold,
        (const Object*)this,
        overlap_warning_threshold
    );
}

void RoomManager::set_portal_depth_limit(const int64_t portal_depth_limit) {
    rebel_icall_void_int(
        method_bindings.mb_set_portal_depth_limit,
        (const Object*)this,
        portal_depth_limit
    );
}

void RoomManager::set_preview_camera_path(const NodePath preview_camera) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_preview_camera_path,
        (const Object*)this,
        preview_camera
    );
}

void RoomManager::set_pvs_mode(const int64_t pvs_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_pvs_mode,
        (const Object*)this,
        pvs_mode
    );
}

void RoomManager::set_roaming_expansion_margin(const real_t roaming_expansion_margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_roaming_expansion_margin,
        (const Object*)this,
        roaming_expansion_margin
    );
}

void RoomManager::set_room_simplify(const real_t room_simplify) {
    rebel_icall_void_float(
        method_bindings.mb_set_room_simplify,
        (const Object*)this,
        room_simplify
    );
}

void RoomManager::set_roomlist_path(const NodePath p_path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_roomlist_path,
        (const Object*)this,
        p_path
    );
}

void RoomManager::set_show_margins(const bool show_margins) {
    rebel_icall_void_bool(
        method_bindings.mb_set_show_margins,
        (const Object*)this,
        show_margins
    );
}

void RoomManager::set_use_secondary_pvs(const bool use_secondary_pvs) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_secondary_pvs,
        (const Object*)this,
        use_secondary_pvs
    );
}

RoomManager* RoomManager::create() {
    return (RoomManager*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RoomManager")()
         );
}

void RoomManager::init_method_bindings() {
    method_bindings.mb_get_debug_sprawl =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_debug_sprawl"
        );
    method_bindings.mb_get_default_portal_margin =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_default_portal_margin"
        );
    method_bindings.mb_get_gameplay_monitor_enabled =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_gameplay_monitor_enabled"
        );
    method_bindings.mb_get_merge_meshes =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_merge_meshes"
        );
    method_bindings.mb_get_overlap_warning_threshold =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_overlap_warning_threshold"
        );
    method_bindings.mb_get_portal_depth_limit =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_portal_depth_limit"
        );
    method_bindings.mb_get_preview_camera_path =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_preview_camera_path"
        );
    method_bindings.mb_get_pvs_mode =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_pvs_mode"
        );
    method_bindings.mb_get_roaming_expansion_margin =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_roaming_expansion_margin"
        );
    method_bindings.mb_get_room_simplify =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_room_simplify"
        );
    method_bindings.mb_get_roomlist_path =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_roomlist_path"
        );
    method_bindings.mb_get_show_margins =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_show_margins"
        );
    method_bindings.mb_get_use_secondary_pvs =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "get_use_secondary_pvs"
        );
    method_bindings.mb_rooms_clear =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "rooms_clear"
        );
    method_bindings.mb_rooms_convert =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "rooms_convert"
        );
    method_bindings.mb_rooms_get_active =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "rooms_get_active"
        );
    method_bindings.mb_rooms_set_active =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "rooms_set_active"
        );
    method_bindings.mb_set_debug_sprawl =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_debug_sprawl"
        );
    method_bindings.mb_set_default_portal_margin =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_default_portal_margin"
        );
    method_bindings.mb_set_gameplay_monitor_enabled =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_gameplay_monitor_enabled"
        );
    method_bindings.mb_set_merge_meshes =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_merge_meshes"
        );
    method_bindings.mb_set_overlap_warning_threshold =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_overlap_warning_threshold"
        );
    method_bindings.mb_set_portal_depth_limit =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_portal_depth_limit"
        );
    method_bindings.mb_set_preview_camera_path =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_preview_camera_path"
        );
    method_bindings.mb_set_pvs_mode =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_pvs_mode"
        );
    method_bindings.mb_set_roaming_expansion_margin =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_roaming_expansion_margin"
        );
    method_bindings.mb_set_room_simplify =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_room_simplify"
        );
    method_bindings.mb_set_roomlist_path =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_roomlist_path"
        );
    method_bindings.mb_set_show_margins =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_show_margins"
        );
    method_bindings.mb_set_use_secondary_pvs =
        api->rebel_method_bind_get_method(
            "RoomManager",
            "set_use_secondary_pvs"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RoomManager");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RoomManager::MethodBindings RoomManager::method_bindings = {};
void* RoomManager::class_tag = nullptr;
} // namespace Rebel
