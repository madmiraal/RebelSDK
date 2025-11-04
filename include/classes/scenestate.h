// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SCENESTATE_H
#define REBEL_SCENESTATE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PackedScene;

class SceneState : public Reference {
public:
    enum GenEditState {
        GEN_EDIT_STATE_DISABLED = 0,
        GEN_EDIT_STATE_INSTANCE = 1,
        GEN_EDIT_STATE_MAIN = 2,
    };

    Array get_connection_binds(const int64_t idx) const;
    int64_t get_connection_count() const;
    int64_t get_connection_flags(const int64_t idx) const;
    String get_connection_method(const int64_t idx) const;
    String get_connection_signal(const int64_t idx) const;
    NodePath get_connection_source(const int64_t idx) const;
    NodePath get_connection_target(const int64_t idx) const;
    int64_t get_node_count() const;
    PoolStringArray get_node_groups(const int64_t idx) const;
    int64_t get_node_index(const int64_t idx) const;
    Ref<PackedScene> get_node_instance(const int64_t idx) const;
    String get_node_instance_placeholder(const int64_t idx) const;
    String get_node_name(const int64_t idx) const;
    NodePath get_node_owner_path(const int64_t idx) const;
    NodePath get_node_path(const int64_t idx, const bool for_parent = false) const;
    int64_t get_node_property_count(const int64_t idx) const;
    String get_node_property_name(const int64_t idx, const int64_t prop_idx) const;
    Variant get_node_property_value(const int64_t idx, const int64_t prop_idx) const;
    String get_node_type(const int64_t idx) const;
    bool is_node_instance_placeholder(const int64_t idx) const;

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SceneState";
    }

    inline static const char* get_rebel_class_name() {
        return "SceneState";
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
        rebel_method_bind* mb_get_connection_binds;
        rebel_method_bind* mb_get_connection_count;
        rebel_method_bind* mb_get_connection_flags;
        rebel_method_bind* mb_get_connection_method;
        rebel_method_bind* mb_get_connection_signal;
        rebel_method_bind* mb_get_connection_source;
        rebel_method_bind* mb_get_connection_target;
        rebel_method_bind* mb_get_node_count;
        rebel_method_bind* mb_get_node_groups;
        rebel_method_bind* mb_get_node_index;
        rebel_method_bind* mb_get_node_instance;
        rebel_method_bind* mb_get_node_instance_placeholder;
        rebel_method_bind* mb_get_node_name;
        rebel_method_bind* mb_get_node_owner_path;
        rebel_method_bind* mb_get_node_path;
        rebel_method_bind* mb_get_node_property_count;
        rebel_method_bind* mb_get_node_property_name;
        rebel_method_bind* mb_get_node_property_value;
        rebel_method_bind* mb_get_node_type;
        rebel_method_bind* mb_is_node_instance_placeholder;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SCENESTATE_H
