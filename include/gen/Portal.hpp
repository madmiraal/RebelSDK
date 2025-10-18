#ifndef GODOT_CPP_PORTAL_HPP
#define GODOT_CPP_PORTAL_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Spatial.hpp"
namespace godot {


class Portal : public Spatial {
	struct ___method_bindings {
		godot_method_bind *mb_get_linked_room;
		godot_method_bind *mb_get_points;
		godot_method_bind *mb_get_portal_active;
		godot_method_bind *mb_get_portal_margin;
		godot_method_bind *mb_get_use_default_margin;
		godot_method_bind *mb_is_two_way;
		godot_method_bind *mb_set_linked_room;
		godot_method_bind *mb_set_point;
		godot_method_bind *mb_set_points;
		godot_method_bind *mb_set_portal_active;
		godot_method_bind *mb_set_portal_margin;
		godot_method_bind *mb_set_two_way;
		godot_method_bind *mb_set_use_default_margin;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Portal"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Portal"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static Portal *_new();

	// methods
	NodePath get_linked_room() const;
	PoolVector2Array get_points() const;
	bool get_portal_active() const;
	real_t get_portal_margin() const;
	bool get_use_default_margin() const;
	bool is_two_way() const;
	void set_linked_room(const NodePath p_room);
	void set_point(const int64_t index, const Vector2 position);
	void set_points(const PoolVector2Array points);
	void set_portal_active(const bool p_active);
	void set_portal_margin(const real_t p_margin);
	void set_two_way(const bool p_two_way);
	void set_use_default_margin(const bool p_use);

};

}

#endif