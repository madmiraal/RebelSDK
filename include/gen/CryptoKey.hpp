#ifndef GODOT_CPP_CRYPTOKEY_HPP
#define GODOT_CPP_CRYPTOKEY_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {


class CryptoKey : public Resource {
	struct ___method_bindings {
		godot_method_bind *mb_is_public_only;
		godot_method_bind *mb_load;
		godot_method_bind *mb_load_from_string;
		godot_method_bind *mb_save;
		godot_method_bind *mb_save_to_string;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CryptoKey"; }
	static inline const char *___get_godot_class_name() { return (const char *) "CryptoKey"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static CryptoKey *_new();

	// methods
	bool is_public_only() const;
	Error load(const String path, const bool public_only = false);
	Error load_from_string(const String string_key, const bool public_only = false);
	Error save(const String path, const bool public_only = false);
	String save_to_string(const bool public_only = false);

};

}

#endif