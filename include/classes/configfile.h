// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CONFIGFILE_H
#define REBEL_CONFIGFILE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ConfigFile : public Reference {
public:
    void clear();
    void erase_section(const String section);
    void erase_section_key(const String section, const String key);
    PoolStringArray get_section_keys(const String section) const;
    PoolStringArray get_sections() const;
    Variant get_value(const String section, const String key, const Variant _default = Variant()) const;
    bool has_section(const String section) const;
    bool has_section_key(const String section, const String key) const;
    Error load(const String path);
    Error load_encrypted(const String path, const PoolByteArray key);
    Error load_encrypted_pass(const String path, const String password);
    Error parse(const String data);
    Error save(const String path) const;
    Error save_encrypted(const String path, const PoolByteArray key) const;
    Error save_encrypted_pass(const String path, const String password) const;
    void set_value(const String section, const String key, const Variant value);

    static ConfigFile* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ConfigFile";
    }

    inline static const char* get_rebel_class_name() {
        return "ConfigFile";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_erase_section;
        rebel_method_bind* mb_erase_section_key;
        rebel_method_bind* mb_get_section_keys;
        rebel_method_bind* mb_get_sections;
        rebel_method_bind* mb_get_value;
        rebel_method_bind* mb_has_section;
        rebel_method_bind* mb_has_section_key;
        rebel_method_bind* mb_load;
        rebel_method_bind* mb_load_encrypted;
        rebel_method_bind* mb_load_encrypted_pass;
        rebel_method_bind* mb_parse;
        rebel_method_bind* mb_save;
        rebel_method_bind* mb_save_encrypted;
        rebel_method_bind* mb_save_encrypted_pass;
        rebel_method_bind* mb_set_value;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CONFIGFILE_H
