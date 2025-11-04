// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/remotetransform2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void RemoteTransform2D::force_update_cache() {
    rebel_icall_void(
        method_bindings.mb_force_update_cache,
        (const Object*)this
    );
}

NodePath RemoteTransform2D::get_remote_node() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_remote_node,
        (const Object*)this
    );
}

bool RemoteTransform2D::get_update_position() const {
    return rebel_icall_bool(
        method_bindings.mb_get_update_position,
        (const Object*)this
    );
}

bool RemoteTransform2D::get_update_rotation() const {
    return rebel_icall_bool(
        method_bindings.mb_get_update_rotation,
        (const Object*)this
    );
}

bool RemoteTransform2D::get_update_scale() const {
    return rebel_icall_bool(
        method_bindings.mb_get_update_scale,
        (const Object*)this
    );
}

bool RemoteTransform2D::get_use_global_coordinates() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_global_coordinates,
        (const Object*)this
    );
}

void RemoteTransform2D::set_remote_node(const NodePath path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_remote_node,
        (const Object*)this,
        path
    );
}

void RemoteTransform2D::set_update_position(const bool update_remote_position) {
    rebel_icall_void_bool(
        method_bindings.mb_set_update_position,
        (const Object*)this,
        update_remote_position
    );
}

void RemoteTransform2D::set_update_rotation(const bool update_remote_rotation) {
    rebel_icall_void_bool(
        method_bindings.mb_set_update_rotation,
        (const Object*)this,
        update_remote_rotation
    );
}

void RemoteTransform2D::set_update_scale(const bool update_remote_scale) {
    rebel_icall_void_bool(
        method_bindings.mb_set_update_scale,
        (const Object*)this,
        update_remote_scale
    );
}

void RemoteTransform2D::set_use_global_coordinates(const bool use_global_coordinates) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_global_coordinates,
        (const Object*)this,
        use_global_coordinates
    );
}

RemoteTransform2D* RemoteTransform2D::create() {
    return (RemoteTransform2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RemoteTransform2D")()
         );
}

void RemoteTransform2D::init_method_bindings() {
    method_bindings.mb_force_update_cache =
        api->rebel_method_bind_get_method(
            "RemoteTransform2D",
            "force_update_cache"
        );
    method_bindings.mb_get_remote_node =
        api->rebel_method_bind_get_method(
            "RemoteTransform2D",
            "get_remote_node"
        );
    method_bindings.mb_get_update_position =
        api->rebel_method_bind_get_method(
            "RemoteTransform2D",
            "get_update_position"
        );
    method_bindings.mb_get_update_rotation =
        api->rebel_method_bind_get_method(
            "RemoteTransform2D",
            "get_update_rotation"
        );
    method_bindings.mb_get_update_scale =
        api->rebel_method_bind_get_method(
            "RemoteTransform2D",
            "get_update_scale"
        );
    method_bindings.mb_get_use_global_coordinates =
        api->rebel_method_bind_get_method(
            "RemoteTransform2D",
            "get_use_global_coordinates"
        );
    method_bindings.mb_set_remote_node =
        api->rebel_method_bind_get_method(
            "RemoteTransform2D",
            "set_remote_node"
        );
    method_bindings.mb_set_update_position =
        api->rebel_method_bind_get_method(
            "RemoteTransform2D",
            "set_update_position"
        );
    method_bindings.mb_set_update_rotation =
        api->rebel_method_bind_get_method(
            "RemoteTransform2D",
            "set_update_rotation"
        );
    method_bindings.mb_set_update_scale =
        api->rebel_method_bind_get_method(
            "RemoteTransform2D",
            "set_update_scale"
        );
    method_bindings.mb_set_use_global_coordinates =
        api->rebel_method_bind_get_method(
            "RemoteTransform2D",
            "set_use_global_coordinates"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RemoteTransform2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RemoteTransform2D::MethodBindings RemoteTransform2D::method_bindings = {};
void* RemoteTransform2D::class_tag = nullptr;
} // namespace Rebel
