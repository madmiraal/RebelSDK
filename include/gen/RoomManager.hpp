#ifndef GODOT_CPP_ROOMMANAGER_HPP
#define GODOT_CPP_ROOMMANAGER_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "RoomManager.hpp"

#include "Spatial.hpp"
namespace godot {


class RoomManager : public Spatial {
	struct ___method_bindings {
		godot_method_bind *mb_get_debug_sprawl;
		godot_method_bind *mb_get_default_portal_margin;
		godot_method_bind *mb_get_gameplay_monitor_enabled;
		godot_method_bind *mb_get_merge_meshes;
		godot_method_bind *mb_get_overlap_warning_threshold;
		godot_method_bind *mb_get_portal_depth_limit;
		godot_method_bind *mb_get_preview_camera_path;
		godot_method_bind *mb_get_pvs_mode;
		godot_method_bind *mb_get_roaming_expansion_margin;
		godot_method_bind *mb_get_room_simplify;
		godot_method_bind *mb_get_roomlist_path;
		godot_method_bind *mb_get_show_margins;
		godot_method_bind *mb_get_use_secondary_pvs;
		godot_method_bind *mb_rooms_clear;
		godot_method_bind *mb_rooms_convert;
		godot_method_bind *mb_rooms_get_active;
		godot_method_bind *mb_rooms_set_active;
		godot_method_bind *mb_set_debug_sprawl;
		godot_method_bind *mb_set_default_portal_margin;
		godot_method_bind *mb_set_gameplay_monitor_enabled;
		godot_method_bind *mb_set_merge_meshes;
		godot_method_bind *mb_set_overlap_warning_threshold;
		godot_method_bind *mb_set_portal_depth_limit;
		godot_method_bind *mb_set_preview_camera_path;
		godot_method_bind *mb_set_pvs_mode;
		godot_method_bind *mb_set_roaming_expansion_margin;
		godot_method_bind *mb_set_room_simplify;
		godot_method_bind *mb_set_roomlist_path;
		godot_method_bind *mb_set_show_margins;
		godot_method_bind *mb_set_use_secondary_pvs;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "RoomManager"; }
	static inline const char *___get_godot_class_name() { return (const char *) "RoomManager"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum PVSMode {
		PVS_MODE_DISABLED = 0,
		PVS_MODE_PARTIAL = 1,
		PVS_MODE_FULL = 2,
	};

	// constants


	static RoomManager *_new();

	// methods
	bool get_debug_sprawl() const;
	real_t get_default_portal_margin() const;
	bool get_gameplay_monitor_enabled() const;
	bool get_merge_meshes() const;
	int64_t get_overlap_warning_threshold() const;
	int64_t get_portal_depth_limit() const;
	NodePath get_preview_camera_path() const;
	RoomManager::PVSMode get_pvs_mode() const;
	real_t get_roaming_expansion_margin() const;
	real_t get_room_simplify() const;
	NodePath get_roomlist_path() const;
	bool get_show_margins() const;
	bool get_use_secondary_pvs() const;
	void rooms_clear();
	void rooms_convert();
	bool rooms_get_active() const;
	void rooms_set_active(const bool active);
	void set_debug_sprawl(const bool debug_sprawl);
	void set_default_portal_margin(const real_t default_portal_margin);
	void set_gameplay_monitor_enabled(const bool gameplay_monitor);
	void set_merge_meshes(const bool merge_meshes);
	void set_overlap_warning_threshold(const int64_t overlap_warning_threshold);
	void set_portal_depth_limit(const int64_t portal_depth_limit);
	void set_preview_camera_path(const NodePath preview_camera);
	void set_pvs_mode(const int64_t pvs_mode);
	void set_roaming_expansion_margin(const real_t roaming_expansion_margin);
	void set_room_simplify(const real_t room_simplify);
	void set_roomlist_path(const NodePath p_path);
	void set_show_margins(const bool show_margins);
	void set_use_secondary_pvs(const bool use_secondary_pvs);

};

}

#endif