// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/area2d.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Area2D::_area_enter_tree(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb__area_enter_tree,
        (const Object*)this,
        id
    );
}

void Area2D::_area_exit_tree(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb__area_exit_tree,
        (const Object*)this,
        id
    );
}

void Area2D::_area_inout(const int64_t arg0, const RID arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
    rebel_icall_void_int_rid_int_int_int(
        method_bindings.mb__area_inout,
        (const Object*)this,
        arg0,
        arg1,
        arg2,
        arg3,
        arg4
    );
}

void Area2D::_body_enter_tree(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb__body_enter_tree,
        (const Object*)this,
        id
    );
}

void Area2D::_body_exit_tree(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb__body_exit_tree,
        (const Object*)this,
        id
    );
}

void Area2D::_body_inout(const int64_t arg0, const RID arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
    rebel_icall_void_int_rid_int_int_int(
        method_bindings.mb__body_inout,
        (const Object*)this,
        arg0,
        arg1,
        arg2,
        arg3,
        arg4
    );
}

real_t Area2D::get_angular_damp() const {
    return rebel_icall_float(
        method_bindings.mb_get_angular_damp,
        (const Object*)this
    );
}

String Area2D::get_audio_bus_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_audio_bus_name,
        (const Object*)this
    );
}

real_t Area2D::get_gravity() const {
    return rebel_icall_float(
        method_bindings.mb_get_gravity,
        (const Object*)this
    );
}

real_t Area2D::get_gravity_distance_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_gravity_distance_scale,
        (const Object*)this
    );
}

Vector2 Area2D::get_gravity_vector() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_gravity_vector,
        (const Object*)this
    );
}

real_t Area2D::get_linear_damp() const {
    return rebel_icall_float(
        method_bindings.mb_get_linear_damp,
        (const Object*)this
    );
}

Array Area2D::get_overlapping_areas() const {
    return rebel_icall_array(
        method_bindings.mb_get_overlapping_areas,
        (const Object*)this
    );
}

Array Area2D::get_overlapping_bodies() const {
    return rebel_icall_array(
        method_bindings.mb_get_overlapping_bodies,
        (const Object*)this
    );
}

real_t Area2D::get_priority() const {
    return rebel_icall_float(
        method_bindings.mb_get_priority,
        (const Object*)this
    );
}

Area2D::SpaceOverride Area2D::get_space_override_mode() const {
    return (Area2D::SpaceOverride)rebel_icall_int(
        method_bindings.mb_get_space_override_mode,
        (const Object*)this
    );
}

bool Area2D::is_gravity_a_point() const {
    return rebel_icall_bool(
        method_bindings.mb_is_gravity_a_point,
        (const Object*)this
    );
}

bool Area2D::is_monitorable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_monitorable,
        (const Object*)this
    );
}

bool Area2D::is_monitoring() const {
    return rebel_icall_bool(
        method_bindings.mb_is_monitoring,
        (const Object*)this
    );
}

bool Area2D::is_overriding_audio_bus() const {
    return rebel_icall_bool(
        method_bindings.mb_is_overriding_audio_bus,
        (const Object*)this
    );
}

bool Area2D::overlaps_area(const Node* area) const {
    return rebel_icall_bool_object(
        method_bindings.mb_overlaps_area,
        (const Object*)this,
        area
    );
}

bool Area2D::overlaps_body(const Node* body) const {
    return rebel_icall_bool_object(
        method_bindings.mb_overlaps_body,
        (const Object*)this,
        body
    );
}

void Area2D::set_angular_damp(const real_t angular_damp) {
    rebel_icall_void_float(
        method_bindings.mb_set_angular_damp,
        (const Object*)this,
        angular_damp
    );
}

void Area2D::set_audio_bus_name(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_audio_bus_name,
        (const Object*)this,
        name
    );
}

void Area2D::set_audio_bus_override(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_audio_bus_override,
        (const Object*)this,
        enable
    );
}

void Area2D::set_gravity(const real_t gravity) {
    rebel_icall_void_float(
        method_bindings.mb_set_gravity,
        (const Object*)this,
        gravity
    );
}

void Area2D::set_gravity_distance_scale(const real_t distance_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_gravity_distance_scale,
        (const Object*)this,
        distance_scale
    );
}

void Area2D::set_gravity_is_point(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_gravity_is_point,
        (const Object*)this,
        enable
    );
}

void Area2D::set_gravity_vector(const Vector2 vector) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_gravity_vector,
        (const Object*)this,
        vector
    );
}

void Area2D::set_linear_damp(const real_t linear_damp) {
    rebel_icall_void_float(
        method_bindings.mb_set_linear_damp,
        (const Object*)this,
        linear_damp
    );
}

void Area2D::set_monitorable(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_monitorable,
        (const Object*)this,
        enable
    );
}

void Area2D::set_monitoring(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_monitoring,
        (const Object*)this,
        enable
    );
}

void Area2D::set_priority(const real_t priority) {
    rebel_icall_void_float(
        method_bindings.mb_set_priority,
        (const Object*)this,
        priority
    );
}

void Area2D::set_space_override_mode(const int64_t space_override_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_space_override_mode,
        (const Object*)this,
        space_override_mode
    );
}

Area2D* Area2D::create() {
    return (Area2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Area2D")()
         );
}

void Area2D::init_method_bindings() {
    method_bindings.mb__area_enter_tree =
        api->rebel_method_bind_get_method(
            "Area2D",
            "_area_enter_tree"
        );
    method_bindings.mb__area_exit_tree =
        api->rebel_method_bind_get_method(
            "Area2D",
            "_area_exit_tree"
        );
    method_bindings.mb__area_inout =
        api->rebel_method_bind_get_method(
            "Area2D",
            "_area_inout"
        );
    method_bindings.mb__body_enter_tree =
        api->rebel_method_bind_get_method(
            "Area2D",
            "_body_enter_tree"
        );
    method_bindings.mb__body_exit_tree =
        api->rebel_method_bind_get_method(
            "Area2D",
            "_body_exit_tree"
        );
    method_bindings.mb__body_inout =
        api->rebel_method_bind_get_method(
            "Area2D",
            "_body_inout"
        );
    method_bindings.mb_get_angular_damp =
        api->rebel_method_bind_get_method(
            "Area2D",
            "get_angular_damp"
        );
    method_bindings.mb_get_audio_bus_name =
        api->rebel_method_bind_get_method(
            "Area2D",
            "get_audio_bus_name"
        );
    method_bindings.mb_get_gravity =
        api->rebel_method_bind_get_method(
            "Area2D",
            "get_gravity"
        );
    method_bindings.mb_get_gravity_distance_scale =
        api->rebel_method_bind_get_method(
            "Area2D",
            "get_gravity_distance_scale"
        );
    method_bindings.mb_get_gravity_vector =
        api->rebel_method_bind_get_method(
            "Area2D",
            "get_gravity_vector"
        );
    method_bindings.mb_get_linear_damp =
        api->rebel_method_bind_get_method(
            "Area2D",
            "get_linear_damp"
        );
    method_bindings.mb_get_overlapping_areas =
        api->rebel_method_bind_get_method(
            "Area2D",
            "get_overlapping_areas"
        );
    method_bindings.mb_get_overlapping_bodies =
        api->rebel_method_bind_get_method(
            "Area2D",
            "get_overlapping_bodies"
        );
    method_bindings.mb_get_priority =
        api->rebel_method_bind_get_method(
            "Area2D",
            "get_priority"
        );
    method_bindings.mb_get_space_override_mode =
        api->rebel_method_bind_get_method(
            "Area2D",
            "get_space_override_mode"
        );
    method_bindings.mb_is_gravity_a_point =
        api->rebel_method_bind_get_method(
            "Area2D",
            "is_gravity_a_point"
        );
    method_bindings.mb_is_monitorable =
        api->rebel_method_bind_get_method(
            "Area2D",
            "is_monitorable"
        );
    method_bindings.mb_is_monitoring =
        api->rebel_method_bind_get_method(
            "Area2D",
            "is_monitoring"
        );
    method_bindings.mb_is_overriding_audio_bus =
        api->rebel_method_bind_get_method(
            "Area2D",
            "is_overriding_audio_bus"
        );
    method_bindings.mb_overlaps_area =
        api->rebel_method_bind_get_method(
            "Area2D",
            "overlaps_area"
        );
    method_bindings.mb_overlaps_body =
        api->rebel_method_bind_get_method(
            "Area2D",
            "overlaps_body"
        );
    method_bindings.mb_set_angular_damp =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_angular_damp"
        );
    method_bindings.mb_set_audio_bus_name =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_audio_bus_name"
        );
    method_bindings.mb_set_audio_bus_override =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_audio_bus_override"
        );
    method_bindings.mb_set_gravity =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_gravity"
        );
    method_bindings.mb_set_gravity_distance_scale =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_gravity_distance_scale"
        );
    method_bindings.mb_set_gravity_is_point =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_gravity_is_point"
        );
    method_bindings.mb_set_gravity_vector =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_gravity_vector"
        );
    method_bindings.mb_set_linear_damp =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_linear_damp"
        );
    method_bindings.mb_set_monitorable =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_monitorable"
        );
    method_bindings.mb_set_monitoring =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_monitoring"
        );
    method_bindings.mb_set_priority =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_priority"
        );
    method_bindings.mb_set_space_override_mode =
        api->rebel_method_bind_get_method(
            "Area2D",
            "set_space_override_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Area2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Area2D::MethodBindings Area2D::method_bindings = {};
void* Area2D::class_tag = nullptr;
} // namespace Rebel
