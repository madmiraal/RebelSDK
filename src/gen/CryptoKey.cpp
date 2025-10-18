#include "CryptoKey.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


CryptoKey::___method_bindings CryptoKey::___mb = {};

void *CryptoKey::_detail_class_tag = nullptr;

void CryptoKey::___init_method_bindings() {
	___mb.mb_is_public_only = godot::api->godot_method_bind_get_method("CryptoKey", "is_public_only");
	___mb.mb_load = godot::api->godot_method_bind_get_method("CryptoKey", "load");
	___mb.mb_load_from_string = godot::api->godot_method_bind_get_method("CryptoKey", "load_from_string");
	___mb.mb_save = godot::api->godot_method_bind_get_method("CryptoKey", "save");
	___mb.mb_save_to_string = godot::api->godot_method_bind_get_method("CryptoKey", "save_to_string");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "CryptoKey");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

CryptoKey *CryptoKey::_new()
{
	return (CryptoKey *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CryptoKey")());
}
bool CryptoKey::is_public_only() const {
	return ___godot_icall_bool(___mb.mb_is_public_only, (const Object *) this);
}

Error CryptoKey::load(const String path, const bool public_only) {
	return (Error) ___godot_icall_int_String_bool(___mb.mb_load, (const Object *) this, path, public_only);
}

Error CryptoKey::load_from_string(const String string_key, const bool public_only) {
	return (Error) ___godot_icall_int_String_bool(___mb.mb_load_from_string, (const Object *) this, string_key, public_only);
}

Error CryptoKey::save(const String path, const bool public_only) {
	return (Error) ___godot_icall_int_String_bool(___mb.mb_save, (const Object *) this, path, public_only);
}

String CryptoKey::save_to_string(const bool public_only) {
	return ___godot_icall_String_bool(___mb.mb_save_to_string, (const Object *) this, public_only);
}

}