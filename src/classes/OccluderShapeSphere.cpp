#include "OccluderShapeSphere.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


OccluderShapeSphere::___method_bindings OccluderShapeSphere::___mb = {};

void *OccluderShapeSphere::_detail_class_tag = nullptr;

void OccluderShapeSphere::___init_method_bindings() {
	___mb.mb_get_spheres = godot::api->godot_method_bind_get_method("OccluderShapeSphere", "get_spheres");
	___mb.mb_set_sphere_position = godot::api->godot_method_bind_get_method("OccluderShapeSphere", "set_sphere_position");
	___mb.mb_set_sphere_radius = godot::api->godot_method_bind_get_method("OccluderShapeSphere", "set_sphere_radius");
	___mb.mb_set_spheres = godot::api->godot_method_bind_get_method("OccluderShapeSphere", "set_spheres");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "OccluderShapeSphere");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

OccluderShapeSphere *OccluderShapeSphere::_new()
{
	return (OccluderShapeSphere *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"OccluderShapeSphere")());
}
Array OccluderShapeSphere::get_spheres() const {
	return ___godot_icall_Array(___mb.mb_get_spheres, (const Object *) this);
}

void OccluderShapeSphere::set_sphere_position(const int64_t index, const Vector3 position) {
	___godot_icall_void_int_Vector3(___mb.mb_set_sphere_position, (const Object *) this, index, position);
}

void OccluderShapeSphere::set_sphere_radius(const int64_t index, const real_t radius) {
	___godot_icall_void_int_float(___mb.mb_set_sphere_radius, (const Object *) this, index, radius);
}

void OccluderShapeSphere::set_spheres(const Array spheres) {
	___godot_icall_void_Array(___mb.mb_set_spheres, (const Object *) this, spheres);
}

}