// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/configfile.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ConfigFile::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void ConfigFile::erase_section(const String section) {
    rebel_icall_void_string(
        method_bindings.mb_erase_section,
        (const Object*)this,
        section
    );
}

void ConfigFile::erase_section_key(const String section, const String key) {
    rebel_icall_void_string_string(
        method_bindings.mb_erase_section_key,
        (const Object*)this,
        section,
        key
    );
}

PoolStringArray ConfigFile::get_section_keys(const String section) const {
    return rebel_icall_poolstringarray_string(
        method_bindings.mb_get_section_keys,
        (const Object*)this,
        section
    );
}

PoolStringArray ConfigFile::get_sections() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_sections,
        (const Object*)this
    );
}

Variant ConfigFile::get_value(const String section, const String key, const Variant _default) const {
    return rebel_icall_variant_string_string_variant(
        method_bindings.mb_get_value,
        (const Object*)this,
        section,
        key,
        _default
    );
}

bool ConfigFile::has_section(const String section) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_section,
        (const Object*)this,
        section
    );
}

bool ConfigFile::has_section_key(const String section, const String key) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_has_section_key,
        (const Object*)this,
        section,
        key
    );
}

Error ConfigFile::load(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_load,
        (const Object*)this,
        path
    );
}

Error ConfigFile::load_encrypted(const String path, const PoolByteArray key) {
    return (Error)rebel_icall_int_string_poolbytearray(
        method_bindings.mb_load_encrypted,
        (const Object*)this,
        path,
        key
    );
}

Error ConfigFile::load_encrypted_pass(const String path, const String password) {
    return (Error)rebel_icall_int_string_string(
        method_bindings.mb_load_encrypted_pass,
        (const Object*)this,
        path,
        password
    );
}

Error ConfigFile::parse(const String data) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_parse,
        (const Object*)this,
        data
    );
}

Error ConfigFile::save(const String path) const {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_save,
        (const Object*)this,
        path
    );
}

Error ConfigFile::save_encrypted(const String path, const PoolByteArray key) const {
    return (Error)rebel_icall_int_string_poolbytearray(
        method_bindings.mb_save_encrypted,
        (const Object*)this,
        path,
        key
    );
}

Error ConfigFile::save_encrypted_pass(const String path, const String password) const {
    return (Error)rebel_icall_int_string_string(
        method_bindings.mb_save_encrypted_pass,
        (const Object*)this,
        path,
        password
    );
}

void ConfigFile::set_value(const String section, const String key, const Variant value) {
    rebel_icall_void_string_string_variant(
        method_bindings.mb_set_value,
        (const Object*)this,
        section,
        key,
        value
    );
}

ConfigFile* ConfigFile::create() {
    return (ConfigFile*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ConfigFile")()
         );
}

void ConfigFile::init_method_bindings() {
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "clear"
        );
    method_bindings.mb_erase_section =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "erase_section"
        );
    method_bindings.mb_erase_section_key =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "erase_section_key"
        );
    method_bindings.mb_get_section_keys =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "get_section_keys"
        );
    method_bindings.mb_get_sections =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "get_sections"
        );
    method_bindings.mb_get_value =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "get_value"
        );
    method_bindings.mb_has_section =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "has_section"
        );
    method_bindings.mb_has_section_key =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "has_section_key"
        );
    method_bindings.mb_load =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "load"
        );
    method_bindings.mb_load_encrypted =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "load_encrypted"
        );
    method_bindings.mb_load_encrypted_pass =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "load_encrypted_pass"
        );
    method_bindings.mb_parse =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "parse"
        );
    method_bindings.mb_save =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "save"
        );
    method_bindings.mb_save_encrypted =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "save_encrypted"
        );
    method_bindings.mb_save_encrypted_pass =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "save_encrypted_pass"
        );
    method_bindings.mb_set_value =
        api->rebel_method_bind_get_method(
            "ConfigFile",
            "set_value"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ConfigFile");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ConfigFile::MethodBindings ConfigFile::method_bindings = {};
void* ConfigFile::class_tag = nullptr;
} // namespace Rebel
