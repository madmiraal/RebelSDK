#include "HMACContext.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


HMACContext::___method_bindings HMACContext::___mb = {};

void *HMACContext::_detail_class_tag = nullptr;

void HMACContext::___init_method_bindings() {
	___mb.mb_finish = godot::api->godot_method_bind_get_method("HMACContext", "finish");
	___mb.mb_start = godot::api->godot_method_bind_get_method("HMACContext", "start");
	___mb.mb_update = godot::api->godot_method_bind_get_method("HMACContext", "update");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "HMACContext");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

HMACContext *HMACContext::_new()
{
	return (HMACContext *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"HMACContext")());
}
PoolByteArray HMACContext::finish() {
	return ___godot_icall_PoolByteArray(___mb.mb_finish, (const Object *) this);
}

Error HMACContext::start(const int64_t hash_type, const PoolByteArray key) {
	return (Error) ___godot_icall_int_int_PoolByteArray(___mb.mb_start, (const Object *) this, hash_type, key);
}

Error HMACContext::update(const PoolByteArray data) {
	return (Error) ___godot_icall_int_PoolByteArray(___mb.mb_update, (const Object *) this, data);
}

}