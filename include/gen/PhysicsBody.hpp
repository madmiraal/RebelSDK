#ifndef GODOT_CPP_PHYSICSBODY_HPP
#define GODOT_CPP_PHYSICSBODY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "CollisionObject.hpp"
namespace godot {

class Node;

class PhysicsBody : public CollisionObject {
	struct ___method_bindings {
		godot_method_bind *mb__get_layers;
		godot_method_bind *mb__set_layers;
		godot_method_bind *mb_add_collision_exception_with;
		godot_method_bind *mb_get_collision_exceptions;
		godot_method_bind *mb_remove_collision_exception_with;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PhysicsBody"; }
	static inline const char *___get_godot_class_name() { return (const char *) "PhysicsBody"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	int64_t _get_layers() const;
	void _set_layers(const int64_t mask);
	void add_collision_exception_with(const Node *body);
	Array get_collision_exceptions();
	void remove_collision_exception_with(const Node *body);

};

}

#endif