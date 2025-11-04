// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/room.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolVector3Array Room::get_points() const {
    return rebel_icall_poolvector3array(
        method_bindings.mb_get_points,
        (const Object*)this
    );
}

real_t Room::get_room_simplify() const {
    return rebel_icall_float(
        method_bindings.mb_get_room_simplify,
        (const Object*)this
    );
}

bool Room::get_use_default_simplify() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_default_simplify,
        (const Object*)this
    );
}

void Room::set_point(const int64_t index, const Vector3 position) {
    rebel_icall_void_int_vector3(
        method_bindings.mb_set_point,
        (const Object*)this,
        index,
        position
    );
}

void Room::set_points(const PoolVector3Array points) {
    rebel_icall_void_poolvector3array(
        method_bindings.mb_set_points,
        (const Object*)this,
        points
    );
}

void Room::set_room_simplify(const real_t p_value) {
    rebel_icall_void_float(
        method_bindings.mb_set_room_simplify,
        (const Object*)this,
        p_value
    );
}

void Room::set_use_default_simplify(const bool p_use) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_default_simplify,
        (const Object*)this,
        p_use
    );
}

Room* Room::create() {
    return (Room*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Room")()
         );
}

void Room::init_method_bindings() {
    method_bindings.mb_get_points =
        api->rebel_method_bind_get_method(
            "Room",
            "get_points"
        );
    method_bindings.mb_get_room_simplify =
        api->rebel_method_bind_get_method(
            "Room",
            "get_room_simplify"
        );
    method_bindings.mb_get_use_default_simplify =
        api->rebel_method_bind_get_method(
            "Room",
            "get_use_default_simplify"
        );
    method_bindings.mb_set_point =
        api->rebel_method_bind_get_method(
            "Room",
            "set_point"
        );
    method_bindings.mb_set_points =
        api->rebel_method_bind_get_method(
            "Room",
            "set_points"
        );
    method_bindings.mb_set_room_simplify =
        api->rebel_method_bind_get_method(
            "Room",
            "set_room_simplify"
        );
    method_bindings.mb_set_use_default_simplify =
        api->rebel_method_bind_get_method(
            "Room",
            "set_use_default_simplify"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Room");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Room::MethodBindings Room::method_bindings = {};
void* Room::class_tag = nullptr;
} // namespace Rebel
