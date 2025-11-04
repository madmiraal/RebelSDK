// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/astar2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AStar2D::_compute_cost(const int64_t from_id, const int64_t to_id) {
    return rebel_icall_float_int_int(
        method_bindings.mb__compute_cost,
        (const Object*)this,
        from_id,
        to_id
    );
}

real_t AStar2D::_estimate_cost(const int64_t from_id, const int64_t to_id) {
    return rebel_icall_float_int_int(
        method_bindings.mb__estimate_cost,
        (const Object*)this,
        from_id,
        to_id
    );
}

void AStar2D::add_point(const int64_t id, const Vector2 position, const real_t weight_scale) {
    rebel_icall_void_int_vector2_float(
        method_bindings.mb_add_point,
        (const Object*)this,
        id,
        position,
        weight_scale
    );
}

bool AStar2D::are_points_connected(const int64_t id, const int64_t to_id) const {
    return rebel_icall_bool_int_int(
        method_bindings.mb_are_points_connected,
        (const Object*)this,
        id,
        to_id
    );
}

void AStar2D::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void AStar2D::connect_points(const int64_t id, const int64_t to_id, const bool bidirectional) {
    rebel_icall_void_int_int_bool(
        method_bindings.mb_connect_points,
        (const Object*)this,
        id,
        to_id,
        bidirectional
    );
}

void AStar2D::disconnect_points(const int64_t id, const int64_t to_id) {
    rebel_icall_void_int_int(
        method_bindings.mb_disconnect_points,
        (const Object*)this,
        id,
        to_id
    );
}

int64_t AStar2D::get_available_point_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_available_point_id,
        (const Object*)this
    );
}

int64_t AStar2D::get_closest_point(const Vector2 to_position, const bool include_disabled) const {
    return rebel_icall_int_vector2_bool(
        method_bindings.mb_get_closest_point,
        (const Object*)this,
        to_position,
        include_disabled
    );
}

Vector2 AStar2D::get_closest_position_in_segment(const Vector2 to_position) const {
    return rebel_icall_vector2_vector2(
        method_bindings.mb_get_closest_position_in_segment,
        (const Object*)this,
        to_position
    );
}

PoolIntArray AStar2D::get_id_path(const int64_t from_id, const int64_t to_id) {
    return rebel_icall_poolintarray_int_int(
        method_bindings.mb_get_id_path,
        (const Object*)this,
        from_id,
        to_id
    );
}

int64_t AStar2D::get_point_capacity() const {
    return rebel_icall_int(
        method_bindings.mb_get_point_capacity,
        (const Object*)this
    );
}

PoolIntArray AStar2D::get_point_connections(const int64_t id) {
    return rebel_icall_poolintarray_int(
        method_bindings.mb_get_point_connections,
        (const Object*)this,
        id
    );
}

int64_t AStar2D::get_point_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_point_count,
        (const Object*)this
    );
}

PoolVector2Array AStar2D::get_point_path(const int64_t from_id, const int64_t to_id) {
    return rebel_icall_poolvector2array_int_int(
        method_bindings.mb_get_point_path,
        (const Object*)this,
        from_id,
        to_id
    );
}

Vector2 AStar2D::get_point_position(const int64_t id) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_point_position,
        (const Object*)this,
        id
    );
}

real_t AStar2D::get_point_weight_scale(const int64_t id) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_point_weight_scale,
        (const Object*)this,
        id
    );
}

Array AStar2D::get_points() {
    return rebel_icall_array(
        method_bindings.mb_get_points,
        (const Object*)this
    );
}

bool AStar2D::has_point(const int64_t id) const {
    return rebel_icall_bool_int(
        method_bindings.mb_has_point,
        (const Object*)this,
        id
    );
}

bool AStar2D::is_point_disabled(const int64_t id) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_point_disabled,
        (const Object*)this,
        id
    );
}

void AStar2D::remove_point(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_remove_point,
        (const Object*)this,
        id
    );
}

void AStar2D::reserve_space(const int64_t num_nodes) {
    rebel_icall_void_int(
        method_bindings.mb_reserve_space,
        (const Object*)this,
        num_nodes
    );
}

void AStar2D::set_point_disabled(const int64_t id, const bool disabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_point_disabled,
        (const Object*)this,
        id,
        disabled
    );
}

void AStar2D::set_point_position(const int64_t id, const Vector2 position) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_set_point_position,
        (const Object*)this,
        id,
        position
    );
}

void AStar2D::set_point_weight_scale(const int64_t id, const real_t weight_scale) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_point_weight_scale,
        (const Object*)this,
        id,
        weight_scale
    );
}

AStar2D* AStar2D::create() {
    return (AStar2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AStar2D")()
         );
}

void AStar2D::init_method_bindings() {
    method_bindings.mb__compute_cost =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "_compute_cost"
        );
    method_bindings.mb__estimate_cost =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "_estimate_cost"
        );
    method_bindings.mb_add_point =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "add_point"
        );
    method_bindings.mb_are_points_connected =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "are_points_connected"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "clear"
        );
    method_bindings.mb_connect_points =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "connect_points"
        );
    method_bindings.mb_disconnect_points =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "disconnect_points"
        );
    method_bindings.mb_get_available_point_id =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "get_available_point_id"
        );
    method_bindings.mb_get_closest_point =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "get_closest_point"
        );
    method_bindings.mb_get_closest_position_in_segment =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "get_closest_position_in_segment"
        );
    method_bindings.mb_get_id_path =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "get_id_path"
        );
    method_bindings.mb_get_point_capacity =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "get_point_capacity"
        );
    method_bindings.mb_get_point_connections =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "get_point_connections"
        );
    method_bindings.mb_get_point_count =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "get_point_count"
        );
    method_bindings.mb_get_point_path =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "get_point_path"
        );
    method_bindings.mb_get_point_position =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "get_point_position"
        );
    method_bindings.mb_get_point_weight_scale =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "get_point_weight_scale"
        );
    method_bindings.mb_get_points =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "get_points"
        );
    method_bindings.mb_has_point =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "has_point"
        );
    method_bindings.mb_is_point_disabled =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "is_point_disabled"
        );
    method_bindings.mb_remove_point =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "remove_point"
        );
    method_bindings.mb_reserve_space =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "reserve_space"
        );
    method_bindings.mb_set_point_disabled =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "set_point_disabled"
        );
    method_bindings.mb_set_point_position =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "set_point_position"
        );
    method_bindings.mb_set_point_weight_scale =
        api->rebel_method_bind_get_method(
            "AStar2D",
            "set_point_weight_scale"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AStar2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AStar2D::MethodBindings AStar2D::method_bindings = {};
void* AStar2D::class_tag = nullptr;
} // namespace Rebel
