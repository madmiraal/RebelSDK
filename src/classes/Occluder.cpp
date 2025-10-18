#include "Occluder.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "OccluderShape.hpp"
#include "Resource.hpp"


namespace godot {


Occluder::___method_bindings Occluder::___mb = {};

void *Occluder::_detail_class_tag = nullptr;

void Occluder::___init_method_bindings() {
	___mb.mb_get_shape = godot::api->godot_method_bind_get_method("Occluder", "get_shape");
	___mb.mb_resource_changed = godot::api->godot_method_bind_get_method("Occluder", "resource_changed");
	___mb.mb_set_shape = godot::api->godot_method_bind_get_method("Occluder", "set_shape");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Occluder");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Occluder *Occluder::_new()
{
	return (Occluder *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Occluder")());
}
Ref<OccluderShape> Occluder::get_shape() const {
	return Ref<OccluderShape>::__internal_constructor(___godot_icall_Object(___mb.mb_get_shape, (const Object *) this));
}

void Occluder::resource_changed(const Ref<Resource> resource) {
	___godot_icall_void_Object(___mb.mb_resource_changed, (const Object *) this, resource.ptr());
}

void Occluder::set_shape(const Ref<OccluderShape> shape) {
	___godot_icall_void_Object(___mb.mb_set_shape, (const Object *) this, shape.ptr());
}

}