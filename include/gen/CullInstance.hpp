#ifndef GODOT_CPP_CULLINSTANCE_HPP
#define GODOT_CPP_CULLINSTANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "CullInstance.hpp"

#include "Spatial.hpp"
namespace godot {


class CullInstance : public Spatial {
	struct ___method_bindings {
		godot_method_bind *mb_get_include_in_bound;
		godot_method_bind *mb_get_portal_autoplace_priority;
		godot_method_bind *mb_get_portal_mode;
		godot_method_bind *mb_set_include_in_bound;
		godot_method_bind *mb_set_portal_autoplace_priority;
		godot_method_bind *mb_set_portal_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CullInstance"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CullInstance"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum PortalMode {
		PORTAL_MODE_STATIC = 0,
		PORTAL_MODE_DYNAMIC = 1,
		PORTAL_MODE_ROAMING = 2,
		PORTAL_MODE_GLOBAL = 3,
		PORTAL_MODE_IGNORE = 4,
	};

	// constants

	// methods
	bool get_include_in_bound() const;
	int64_t get_portal_autoplace_priority() const;
	CullInstance::PortalMode get_portal_mode() const;
	void set_include_in_bound(const bool arg0);
	void set_portal_autoplace_priority(const int64_t priority);
	void set_portal_mode(const int64_t mode);

};

}

#endif