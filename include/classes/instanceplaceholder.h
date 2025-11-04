// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INSTANCEPLACEHOLDER_H
#define REBEL_INSTANCEPLACEHOLDER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PackedScene;

class InstancePlaceholder : public Node {
public:
    Node* create_instance(const bool replace = false, const Ref<PackedScene> custom_scene = nullptr);
    String get_instance_path() const;
    Dictionary get_stored_values(const bool with_order = false);
    void replace_by_instance(const Ref<PackedScene> custom_scene = nullptr);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InstancePlaceholder";
    }

    inline static const char* get_rebel_class_name() {
        return "InstancePlaceholder";
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
        rebel_method_bind* mb_create_instance;
        rebel_method_bind* mb_get_instance_path;
        rebel_method_bind* mb_get_stored_values;
        rebel_method_bind* mb_replace_by_instance;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INSTANCEPLACEHOLDER_H
