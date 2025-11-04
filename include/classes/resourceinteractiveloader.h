// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RESOURCEINTERACTIVELOADER_H
#define REBEL_RESOURCEINTERACTIVELOADER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Resource;

class ResourceInteractiveLoader : public Reference {
public:
    Ref<Resource> get_resource();
    int64_t get_stage() const;
    int64_t get_stage_count() const;
    Error poll();
    Error wait();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ResourceInteractiveLoader";
    }

    inline static const char* get_rebel_class_name() {
        return "ResourceInteractiveLoader";
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
        rebel_method_bind* mb_get_resource;
        rebel_method_bind* mb_get_stage;
        rebel_method_bind* mb_get_stage_count;
        rebel_method_bind* mb_poll;
        rebel_method_bind* mb_wait;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RESOURCEINTERACTIVELOADER_H
