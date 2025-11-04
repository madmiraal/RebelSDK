// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RESOURCESAVER_H
#define REBEL_RESOURCESAVER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Resource;

class ResourceSaver : public Object {
public:
    enum SaverFlags {
        FLAG_RELATIVE_PATHS = 1,
        FLAG_BUNDLE_RESOURCES = 2,
        FLAG_CHANGE_PATH = 4,
        FLAG_OMIT_EDITOR_PROPERTIES = 8,
        FLAG_SAVE_BIG_ENDIAN = 16,
        FLAG_COMPRESS = 32,
        FLAG_REPLACE_SUBRESOURCE_PATHS = 64,
    };

    PoolStringArray get_recognized_extensions(const Ref<Resource> type);
    Error save(const String path, const Ref<Resource> resource, const int64_t flags = 0);

    static inline ResourceSaver* get_singleton() {
        if (!ResourceSaver::singleton) {
            ResourceSaver::singleton = new ResourceSaver;
        }
        return ResourceSaver::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ResourceSaver";
    }

    inline static const char* get_rebel_class_name() {
        return "ResourceSaver";
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
    ResourceSaver();
    static ResourceSaver* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_get_recognized_extensions;
        rebel_method_bind* mb_save;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RESOURCESAVER_H
