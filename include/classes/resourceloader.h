// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RESOURCELOADER_H
#define REBEL_RESOURCELOADER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Resource;
class ResourceInteractiveLoader;

class ResourceLoader : public Object {
public:
    bool exists(const String path, const String type_hint = "");
    PoolStringArray get_dependencies(const String path);
    PoolStringArray get_recognized_extensions_for_type(const String type);
    bool has(const String path);
    bool has_cached(const String path);
    Ref<Resource> load(const String path, const String type_hint = "", const bool no_cache = false);
    Ref<ResourceInteractiveLoader> load_interactive(const String path, const String type_hint = "");
    void set_abort_on_missing_resources(const bool abort);

    static inline ResourceLoader* get_singleton() {
        if (!ResourceLoader::singleton) {
            ResourceLoader::singleton = new ResourceLoader;
        }
        return ResourceLoader::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ResourceLoader";
    }

    inline static const char* get_rebel_class_name() {
        return "ResourceLoader";
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
    ResourceLoader();
    static ResourceLoader* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_exists;
        rebel_method_bind* mb_get_dependencies;
        rebel_method_bind* mb_get_recognized_extensions_for_type;
        rebel_method_bind* mb_has;
        rebel_method_bind* mb_has_cached;
        rebel_method_bind* mb_load;
        rebel_method_bind* mb_load_interactive;
        rebel_method_bind* mb_set_abort_on_missing_resources;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RESOURCELOADER_H
