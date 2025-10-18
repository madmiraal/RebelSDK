#include "AESContext.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AESContext::___method_bindings AESContext::___mb = {};

void *AESContext::_detail_class_tag = nullptr;

void AESContext::___init_method_bindings() {
	___mb.mb_finish = godot::api->godot_method_bind_get_method("AESContext", "finish");
	___mb.mb_get_iv_state = godot::api->godot_method_bind_get_method("AESContext", "get_iv_state");
	___mb.mb_start = godot::api->godot_method_bind_get_method("AESContext", "start");
	___mb.mb_update = godot::api->godot_method_bind_get_method("AESContext", "update");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "AESContext");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

AESContext *AESContext::_new()
{
	return (AESContext *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AESContext")());
}
void AESContext::finish() {
	___godot_icall_void(___mb.mb_finish, (const Object *) this);
}

PoolByteArray AESContext::get_iv_state() {
	return ___godot_icall_PoolByteArray(___mb.mb_get_iv_state, (const Object *) this);
}

Error AESContext::start(const int64_t mode, const PoolByteArray key, const PoolByteArray iv) {
	return (Error) ___godot_icall_int_int_PoolByteArray_PoolByteArray(___mb.mb_start, (const Object *) this, mode, key, iv);
}

PoolByteArray AESContext::update(const PoolByteArray src) {
	return ___godot_icall_PoolByteArray_PoolByteArray(___mb.mb_update, (const Object *) this, src);
}

}