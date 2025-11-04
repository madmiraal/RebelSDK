// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RESOURCEPRELOADER_H
#define REBEL_RESOURCEPRELOADER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Resource;

class ResourcePreloader : public Node {
public:
    Array _get_resources() const;
    void _set_resources(const Array arg0);
    void add_resource(const String name, const Ref<Resource> resource);
    Ref<Resource> get_resource(const String name) const;
    PoolStringArray get_resource_list() const;
    bool has_resource(const String name) const;
    void remove_resource(const String name);
    void rename_resource(const String name, const String newname);

    static ResourcePreloader* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ResourcePreloader";
    }

    inline static const char* get_rebel_class_name() {
        return "ResourcePreloader";
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
        rebel_method_bind* mb__get_resources;
        rebel_method_bind* mb__set_resources;
        rebel_method_bind* mb_add_resource;
        rebel_method_bind* mb_get_resource;
        rebel_method_bind* mb_get_resource_list;
        rebel_method_bind* mb_has_resource;
        rebel_method_bind* mb_remove_resource;
        rebel_method_bind* mb_rename_resource;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RESOURCEPRELOADER_H
