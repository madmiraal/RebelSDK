// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RESOURCE_H
#define REBEL_RESOURCE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;

class Resource : public Reference {
public:
    void _setup_local_to_scene();
    Ref<Resource> duplicate(const bool subresources = false) const;
    void emit_changed();
    Node* get_local_scene() const;
    String get_name() const;
    String get_path() const;
    RID get_rid() const;
    bool is_local_to_scene() const;
    void set_local_to_scene(const bool enable);
    void set_name(const String name);
    void set_path(const String path);
    void setup_local_to_scene();
    void take_over_path(const String path);

    static Resource* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Resource";
    }

    inline static const char* get_rebel_class_name() {
        return "Resource";
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
        rebel_method_bind* mb__setup_local_to_scene;
        rebel_method_bind* mb_duplicate;
        rebel_method_bind* mb_emit_changed;
        rebel_method_bind* mb_get_local_scene;
        rebel_method_bind* mb_get_name;
        rebel_method_bind* mb_get_path;
        rebel_method_bind* mb_get_rid;
        rebel_method_bind* mb_is_local_to_scene;
        rebel_method_bind* mb_set_local_to_scene;
        rebel_method_bind* mb_set_name;
        rebel_method_bind* mb_set_path;
        rebel_method_bind* mb_setup_local_to_scene;
        rebel_method_bind* mb_take_over_path;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RESOURCE_H
