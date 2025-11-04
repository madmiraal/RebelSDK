// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/portal.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
NodePath Portal::get_linked_room() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_linked_room,
        (const Object*)this
    );
}

PoolVector2Array Portal::get_points() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_points,
        (const Object*)this
    );
}

bool Portal::get_portal_active() const {
    return rebel_icall_bool(
        method_bindings.mb_get_portal_active,
        (const Object*)this
    );
}

real_t Portal::get_portal_margin() const {
    return rebel_icall_float(
        method_bindings.mb_get_portal_margin,
        (const Object*)this
    );
}

bool Portal::get_use_default_margin() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_default_margin,
        (const Object*)this
    );
}

bool Portal::is_two_way() const {
    return rebel_icall_bool(
        method_bindings.mb_is_two_way,
        (const Object*)this
    );
}

void Portal::set_linked_room(const NodePath p_room) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_linked_room,
        (const Object*)this,
        p_room
    );
}

void Portal::set_point(const int64_t index, const Vector2 position) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_set_point,
        (const Object*)this,
        index,
        position
    );
}

void Portal::set_points(const PoolVector2Array points) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_points,
        (const Object*)this,
        points
    );
}

void Portal::set_portal_active(const bool p_active) {
    rebel_icall_void_bool(
        method_bindings.mb_set_portal_active,
        (const Object*)this,
        p_active
    );
}

void Portal::set_portal_margin(const real_t p_margin) {
    rebel_icall_void_float(
        method_bindings.mb_set_portal_margin,
        (const Object*)this,
        p_margin
    );
}

void Portal::set_two_way(const bool p_two_way) {
    rebel_icall_void_bool(
        method_bindings.mb_set_two_way,
        (const Object*)this,
        p_two_way
    );
}

void Portal::set_use_default_margin(const bool p_use) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_default_margin,
        (const Object*)this,
        p_use
    );
}

Portal* Portal::create() {
    return (Portal*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Portal")()
         );
}

void Portal::init_method_bindings() {
    method_bindings.mb_get_linked_room =
        api->rebel_method_bind_get_method(
            "Portal",
            "get_linked_room"
        );
    method_bindings.mb_get_points =
        api->rebel_method_bind_get_method(
            "Portal",
            "get_points"
        );
    method_bindings.mb_get_portal_active =
        api->rebel_method_bind_get_method(
            "Portal",
            "get_portal_active"
        );
    method_bindings.mb_get_portal_margin =
        api->rebel_method_bind_get_method(
            "Portal",
            "get_portal_margin"
        );
    method_bindings.mb_get_use_default_margin =
        api->rebel_method_bind_get_method(
            "Portal",
            "get_use_default_margin"
        );
    method_bindings.mb_is_two_way =
        api->rebel_method_bind_get_method(
            "Portal",
            "is_two_way"
        );
    method_bindings.mb_set_linked_room =
        api->rebel_method_bind_get_method(
            "Portal",
            "set_linked_room"
        );
    method_bindings.mb_set_point =
        api->rebel_method_bind_get_method(
            "Portal",
            "set_point"
        );
    method_bindings.mb_set_points =
        api->rebel_method_bind_get_method(
            "Portal",
            "set_points"
        );
    method_bindings.mb_set_portal_active =
        api->rebel_method_bind_get_method(
            "Portal",
            "set_portal_active"
        );
    method_bindings.mb_set_portal_margin =
        api->rebel_method_bind_get_method(
            "Portal",
            "set_portal_margin"
        );
    method_bindings.mb_set_two_way =
        api->rebel_method_bind_get_method(
            "Portal",
            "set_two_way"
        );
    method_bindings.mb_set_use_default_margin =
        api->rebel_method_bind_get_method(
            "Portal",
            "set_use_default_margin"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Portal");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Portal::MethodBindings Portal::method_bindings = {};
void* Portal::class_tag = nullptr;
} // namespace Rebel
