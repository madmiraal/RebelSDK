#include "CullInstance.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


CullInstance::___method_bindings CullInstance::___mb = {};

void *CullInstance::_detail_class_tag = nullptr;

void CullInstance::___init_method_bindings() {
	___mb.mb_get_include_in_bound = godot::api->godot_method_bind_get_method("CullInstance", "get_include_in_bound");
	___mb.mb_get_portal_autoplace_priority = godot::api->godot_method_bind_get_method("CullInstance", "get_portal_autoplace_priority");
	___mb.mb_get_portal_mode = godot::api->godot_method_bind_get_method("CullInstance", "get_portal_mode");
	___mb.mb_set_include_in_bound = godot::api->godot_method_bind_get_method("CullInstance", "set_include_in_bound");
	___mb.mb_set_portal_autoplace_priority = godot::api->godot_method_bind_get_method("CullInstance", "set_portal_autoplace_priority");
	___mb.mb_set_portal_mode = godot::api->godot_method_bind_get_method("CullInstance", "set_portal_mode");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "CullInstance");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

bool CullInstance::get_include_in_bound() const {
	return ___godot_icall_bool(___mb.mb_get_include_in_bound, (const Object *) this);
}

int64_t CullInstance::get_portal_autoplace_priority() const {
	return ___godot_icall_int(___mb.mb_get_portal_autoplace_priority, (const Object *) this);
}

CullInstance::PortalMode CullInstance::get_portal_mode() const {
	return (CullInstance::PortalMode) ___godot_icall_int(___mb.mb_get_portal_mode, (const Object *) this);
}

void CullInstance::set_include_in_bound(const bool arg0) {
	___godot_icall_void_bool(___mb.mb_set_include_in_bound, (const Object *) this, arg0);
}

void CullInstance::set_portal_autoplace_priority(const int64_t priority) {
	___godot_icall_void_int(___mb.mb_set_portal_autoplace_priority, (const Object *) this, priority);
}

void CullInstance::set_portal_mode(const int64_t mode) {
	___godot_icall_void_int(___mb.mb_set_portal_mode, (const Object *) this, mode);
}

}