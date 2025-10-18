#include "JavaScript.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "JavaScriptObject.hpp"
#include "Object.hpp"


namespace godot {


JavaScript *JavaScript::_singleton = NULL;


JavaScript::JavaScript() {
	_owner = godot::api->godot_global_get_singleton((char *) "JavaScript");
}


JavaScript::___method_bindings JavaScript::___mb = {};

void *JavaScript::_detail_class_tag = nullptr;

void JavaScript::___init_method_bindings() {
	___mb.mb_create_callback = godot::api->godot_method_bind_get_method("JavaScript", "create_callback");
	___mb.mb_create_object = godot::api->godot_method_bind_get_method("JavaScript", "create_object");
	___mb.mb_download_buffer = godot::api->godot_method_bind_get_method("JavaScript", "download_buffer");
	___mb.mb_eval = godot::api->godot_method_bind_get_method("JavaScript", "eval");
	___mb.mb_get_interface = godot::api->godot_method_bind_get_method("JavaScript", "get_interface");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "JavaScript");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Ref<JavaScriptObject> JavaScript::create_callback(const Object *object, const String method) {
	return Ref<JavaScriptObject>::__internal_constructor(___godot_icall_Object_Object_String(___mb.mb_create_callback, (const Object *) this, object, method));
}

Variant JavaScript::create_object(const String object, const Array& __var_args) {
	Variant __given_args[1];
	godot::api->godot_variant_new_nil((godot_variant *) &__given_args[0]);

	__given_args[0] = object;

	godot_variant **__args = (godot_variant **) alloca(sizeof(godot_variant *) * (__var_args.size() + 1));

	__args[0] = (godot_variant *) &__given_args[0];

	for (int i = 0; i < __var_args.size(); i++) {
		__args[i + 1] = (godot_variant *) &((Array &) __var_args)[i];
	}

	Variant __result;
	*(godot_variant *) &__result = godot::api->godot_method_bind_call(___mb.mb_create_object, ((const Object *) this)->_owner, (const godot_variant **) __args, (__var_args.size() + 1), nullptr);

	godot::api->godot_variant_destroy((godot_variant *) &__given_args[0]);

	return __result;
}

void JavaScript::download_buffer(const PoolByteArray buffer, const String name, const String mime) {
	___godot_icall_void_PoolByteArray_String_String(___mb.mb_download_buffer, (const Object *) this, buffer, name, mime);
}

Variant JavaScript::eval(const String code, const bool use_global_execution_context) {
	return ___godot_icall_Variant_String_bool(___mb.mb_eval, (const Object *) this, code, use_global_execution_context);
}

Ref<JavaScriptObject> JavaScript::get_interface(const String interface) {
	return Ref<JavaScriptObject>::__internal_constructor(___godot_icall_Object_String(___mb.mb_get_interface, (const Object *) this, interface));
}

}