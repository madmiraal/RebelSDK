#ifndef GODOT_CPP_JAVASCRIPT_HPP
#define GODOT_CPP_JAVASCRIPT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Object.hpp"
namespace godot {

class JavaScriptObject;
class Object;

class JavaScript : public Object {
	static JavaScript *_singleton;

	JavaScript();

	struct ___method_bindings {
		godot_method_bind *mb_create_callback;
		godot_method_bind *mb_create_object;
		godot_method_bind *mb_download_buffer;
		godot_method_bind *mb_eval;
		godot_method_bind *mb_get_interface;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline JavaScript *get_singleton()
	{
		if (!JavaScript::_singleton) {
			JavaScript::_singleton = new JavaScript;
		}
		return JavaScript::_singleton;
	}

	static inline const char *___get_class_name() { return (const char *) "JavaScript"; }
	static inline const char *___get_godot_class_name() { return (const char *) "JavaScript"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	Ref<JavaScriptObject> create_callback(const Object *object, const String method);
	Variant create_object(const String object, const Array& __var_args = Array());
	void download_buffer(const PoolByteArray buffer, const String name, const String mime = "application/octet-stream");
	Variant eval(const String code, const bool use_global_execution_context = false);
	Ref<JavaScriptObject> get_interface(const String interface);
	template <class... Args> Variant create_object(const String object, Args... args){
		return create_object(object, Array::make(args...));
	}

};

}

#endif