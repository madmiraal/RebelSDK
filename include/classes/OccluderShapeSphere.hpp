#ifndef GODOT_CPP_OCCLUDERSHAPESPHERE_HPP
#define GODOT_CPP_OCCLUDERSHAPESPHERE_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "OccluderShape.hpp"
namespace godot {


class OccluderShapeSphere : public OccluderShape {
	struct ___method_bindings {
		godot_method_bind *mb_get_spheres;
		godot_method_bind *mb_set_sphere_position;
		godot_method_bind *mb_set_sphere_radius;
		godot_method_bind *mb_set_spheres;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "OccluderShapeSphere"; }
	static inline const char *___get_godot_class_name() { return (const char *) "OccluderShapeSphere"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static OccluderShapeSphere *_new();

	// methods
	Array get_spheres() const;
	void set_sphere_position(const int64_t index, const Vector3 position);
	void set_sphere_radius(const int64_t index, const real_t radius);
	void set_spheres(const Array spheres);

};

}

#endif