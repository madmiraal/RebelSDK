// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/scenestate.h"

#include "classes/icalls.h"
#include "classes/packedscene.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array SceneState::get_connection_binds(const int64_t idx) const {
    return rebel_icall_array_int(
        method_bindings.mb_get_connection_binds,
        (const Object*)this,
        idx
    );
}

int64_t SceneState::get_connection_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_connection_count,
        (const Object*)this
    );
}

int64_t SceneState::get_connection_flags(const int64_t idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_connection_flags,
        (const Object*)this,
        idx
    );
}

String SceneState::get_connection_method(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_connection_method,
        (const Object*)this,
        idx
    );
}

String SceneState::get_connection_signal(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_connection_signal,
        (const Object*)this,
        idx
    );
}

NodePath SceneState::get_connection_source(const int64_t idx) const {
    return rebel_icall_nodepath_int(
        method_bindings.mb_get_connection_source,
        (const Object*)this,
        idx
    );
}

NodePath SceneState::get_connection_target(const int64_t idx) const {
    return rebel_icall_nodepath_int(
        method_bindings.mb_get_connection_target,
        (const Object*)this,
        idx
    );
}

int64_t SceneState::get_node_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_node_count,
        (const Object*)this
    );
}

PoolStringArray SceneState::get_node_groups(const int64_t idx) const {
    return rebel_icall_poolstringarray_int(
        method_bindings.mb_get_node_groups,
        (const Object*)this,
        idx
    );
}

int64_t SceneState::get_node_index(const int64_t idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_node_index,
        (const Object*)this,
        idx
    );
}

Ref<PackedScene> SceneState::get_node_instance(const int64_t idx) const {
    return Ref<PackedScene>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_node_instance,
        (const Object*)this,
        idx
    ));
}

String SceneState::get_node_instance_placeholder(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_node_instance_placeholder,
        (const Object*)this,
        idx
    );
}

String SceneState::get_node_name(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_node_name,
        (const Object*)this,
        idx
    );
}

NodePath SceneState::get_node_owner_path(const int64_t idx) const {
    return rebel_icall_nodepath_int(
        method_bindings.mb_get_node_owner_path,
        (const Object*)this,
        idx
    );
}

NodePath SceneState::get_node_path(const int64_t idx, const bool for_parent) const {
    return rebel_icall_nodepath_int_bool(
        method_bindings.mb_get_node_path,
        (const Object*)this,
        idx,
        for_parent
    );
}

int64_t SceneState::get_node_property_count(const int64_t idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_node_property_count,
        (const Object*)this,
        idx
    );
}

String SceneState::get_node_property_name(const int64_t idx, const int64_t prop_idx) const {
    return rebel_icall_string_int_int(
        method_bindings.mb_get_node_property_name,
        (const Object*)this,
        idx,
        prop_idx
    );
}

Variant SceneState::get_node_property_value(const int64_t idx, const int64_t prop_idx) const {
    return rebel_icall_variant_int_int(
        method_bindings.mb_get_node_property_value,
        (const Object*)this,
        idx,
        prop_idx
    );
}

String SceneState::get_node_type(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_node_type,
        (const Object*)this,
        idx
    );
}

bool SceneState::is_node_instance_placeholder(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_node_instance_placeholder,
        (const Object*)this,
        idx
    );
}

void SceneState::init_method_bindings() {
    method_bindings.mb_get_connection_binds =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_connection_binds"
        );
    method_bindings.mb_get_connection_count =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_connection_count"
        );
    method_bindings.mb_get_connection_flags =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_connection_flags"
        );
    method_bindings.mb_get_connection_method =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_connection_method"
        );
    method_bindings.mb_get_connection_signal =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_connection_signal"
        );
    method_bindings.mb_get_connection_source =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_connection_source"
        );
    method_bindings.mb_get_connection_target =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_connection_target"
        );
    method_bindings.mb_get_node_count =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_count"
        );
    method_bindings.mb_get_node_groups =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_groups"
        );
    method_bindings.mb_get_node_index =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_index"
        );
    method_bindings.mb_get_node_instance =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_instance"
        );
    method_bindings.mb_get_node_instance_placeholder =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_instance_placeholder"
        );
    method_bindings.mb_get_node_name =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_name"
        );
    method_bindings.mb_get_node_owner_path =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_owner_path"
        );
    method_bindings.mb_get_node_path =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_path"
        );
    method_bindings.mb_get_node_property_count =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_property_count"
        );
    method_bindings.mb_get_node_property_name =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_property_name"
        );
    method_bindings.mb_get_node_property_value =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_property_value"
        );
    method_bindings.mb_get_node_type =
        api->rebel_method_bind_get_method(
            "SceneState",
            "get_node_type"
        );
    method_bindings.mb_is_node_instance_placeholder =
        api->rebel_method_bind_get_method(
            "SceneState",
            "is_node_instance_placeholder"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SceneState");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SceneState::MethodBindings SceneState::method_bindings = {};
void* SceneState::class_tag = nullptr;
} // namespace Rebel
