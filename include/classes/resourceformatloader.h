// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RESOURCEFORMATLOADER_H
#define REBEL_RESOURCEFORMATLOADER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ResourceFormatLoader : public Reference {
public:
    void get_dependencies(const String path, const String add_types);
    PoolStringArray get_recognized_extensions();
    String get_resource_type(const String path);
    bool handles_type(const String _typename);
    Variant load(const String path, const String original_path);
    int64_t rename_dependencies(const String path, const String renames);

    static ResourceFormatLoader* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ResourceFormatLoader";
    }

    inline static const char* get_rebel_class_name() {
        return "ResourceFormatLoader";
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
        rebel_method_bind* mb_get_dependencies;
        rebel_method_bind* mb_get_recognized_extensions;
        rebel_method_bind* mb_get_resource_type;
        rebel_method_bind* mb_handles_type;
        rebel_method_bind* mb_load;
        rebel_method_bind* mb_rename_dependencies;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RESOURCEFORMATLOADER_H
