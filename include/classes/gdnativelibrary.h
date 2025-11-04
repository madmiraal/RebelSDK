// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GDNATIVELIBRARY_H
#define REBEL_GDNATIVELIBRARY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ConfigFile;

class GDNativeLibrary : public Resource {
public:
    Ref<ConfigFile> get_config_file();
    PoolStringArray get_current_dependencies() const;
    String get_current_library_path() const;
    String get_symbol_prefix() const;
    bool is_reloadable() const;
    bool is_singleton() const;
    void set_config_file(const Ref<ConfigFile> config_file);
    void set_load_once(const bool load_once);
    void set_reloadable(const bool reloadable);
    void set_singleton(const bool singleton);
    void set_symbol_prefix(const String symbol_prefix);
    bool should_load_once() const;

    static GDNativeLibrary* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GDNativeLibrary";
    }

    inline static const char* get_rebel_class_name() {
        return "GDNativeLibrary";
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
        rebel_method_bind* mb_get_config_file;
        rebel_method_bind* mb_get_current_dependencies;
        rebel_method_bind* mb_get_current_library_path;
        rebel_method_bind* mb_get_symbol_prefix;
        rebel_method_bind* mb_is_reloadable;
        rebel_method_bind* mb_is_singleton;
        rebel_method_bind* mb_set_config_file;
        rebel_method_bind* mb_set_load_once;
        rebel_method_bind* mb_set_reloadable;
        rebel_method_bind* mb_set_singleton;
        rebel_method_bind* mb_set_symbol_prefix;
        rebel_method_bind* mb_should_load_once;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GDNATIVELIBRARY_H
