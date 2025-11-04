// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/area.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Area::_area_enter_tree(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb__area_enter_tree,
        (const Object*)this,
        id
    );
}

void Area::_area_exit_tree(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb__area_exit_tree,
        (const Object*)this,
        id
    );
}

void Area::_area_inout(const int64_t arg0, const RID arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
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

void Area::_body_enter_tree(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb__body_enter_tree,
        (const Object*)this,
        id
    );
}

void Area::_body_exit_tree(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb__body_exit_tree,
        (const Object*)this,
        id
    );
}

void Area::_body_inout(const int64_t arg0, const RID arg1, const int64_t arg2, const int64_t arg3, const int64_t arg4) {
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

real_t Area::get_angular_damp() const {
    return rebel_icall_float(
        method_bindings.mb_get_angular_damp,
        (const Object*)this
    );
}

String Area::get_audio_bus() const {
    return rebel_icall_string(
        method_bindings.mb_get_audio_bus,
        (const Object*)this
    );
}

real_t Area::get_gravity() const {
    return rebel_icall_float(
        method_bindings.mb_get_gravity,
        (const Object*)this
    );
}

real_t Area::get_gravity_distance_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_gravity_distance_scale,
        (const Object*)this
    );
}

Vector3 Area::get_gravity_vector() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_gravity_vector,
        (const Object*)this
    );
}

real_t Area::get_linear_damp() const {
    return rebel_icall_float(
        method_bindings.mb_get_linear_damp,
        (const Object*)this
    );
}

Array Area::get_overlapping_areas() const {
    return rebel_icall_array(
        method_bindings.mb_get_overlapping_areas,
        (const Object*)this
    );
}

Array Area::get_overlapping_bodies() const {
    return rebel_icall_array(
        method_bindings.mb_get_overlapping_bodies,
        (const Object*)this
    );
}

real_t Area::get_priority() const {
    return rebel_icall_float(
        method_bindings.mb_get_priority,
        (const Object*)this
    );
}

real_t Area::get_reverb_amount() const {
    return rebel_icall_float(
        method_bindings.mb_get_reverb_amount,
        (const Object*)this
    );
}

String Area::get_reverb_bus() const {
    return rebel_icall_string(
        method_bindings.mb_get_reverb_bus,
        (const Object*)this
    );
}

real_t Area::get_reverb_uniformity() const {
    return rebel_icall_float(
        method_bindings.mb_get_reverb_uniformity,
        (const Object*)this
    );
}

Area::SpaceOverride Area::get_space_override_mode() const {
    return (Area::SpaceOverride)rebel_icall_int(
        method_bindings.mb_get_space_override_mode,
        (const Object*)this
    );
}

bool Area::is_gravity_a_point() const {
    return rebel_icall_bool(
        method_bindings.mb_is_gravity_a_point,
        (const Object*)this
    );
}

bool Area::is_monitorable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_monitorable,
        (const Object*)this
    );
}

bool Area::is_monitoring() const {
    return rebel_icall_bool(
        method_bindings.mb_is_monitoring,
        (const Object*)this
    );
}

bool Area::is_overriding_audio_bus() const {
    return rebel_icall_bool(
        method_bindings.mb_is_overriding_audio_bus,
        (const Object*)this
    );
}

bool Area::is_using_reverb_bus() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_reverb_bus,
        (const Object*)this
    );
}

bool Area::overlaps_area(const Node* area) const {
    return rebel_icall_bool_object(
        method_bindings.mb_overlaps_area,
        (const Object*)this,
        area
    );
}

bool Area::overlaps_body(const Node* body) const {
    return rebel_icall_bool_object(
        method_bindings.mb_overlaps_body,
        (const Object*)this,
        body
    );
}

void Area::set_angular_damp(const real_t angular_damp) {
    rebel_icall_void_float(
        method_bindings.mb_set_angular_damp,
        (const Object*)this,
        angular_damp
    );
}

void Area::set_audio_bus(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_audio_bus,
        (const Object*)this,
        name
    );
}

void Area::set_audio_bus_override(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_audio_bus_override,
        (const Object*)this,
        enable
    );
}

void Area::set_gravity(const real_t gravity) {
    rebel_icall_void_float(
        method_bindings.mb_set_gravity,
        (const Object*)this,
        gravity
    );
}

void Area::set_gravity_distance_scale(const real_t distance_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_gravity_distance_scale,
        (const Object*)this,
        distance_scale
    );
}

void Area::set_gravity_is_point(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_gravity_is_point,
        (const Object*)this,
        enable
    );
}

void Area::set_gravity_vector(const Vector3 vector) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_gravity_vector,
        (const Object*)this,
        vector
    );
}

void Area::set_linear_damp(const real_t linear_damp) {
    rebel_icall_void_float(
        method_bindings.mb_set_linear_damp,
        (const Object*)this,
        linear_damp
    );
}

void Area::set_monitorable(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_monitorable,
        (const Object*)this,
        enable
    );
}

void Area::set_monitoring(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_monitoring,
        (const Object*)this,
        enable
    );
}

void Area::set_priority(const real_t priority) {
    rebel_icall_void_float(
        method_bindings.mb_set_priority,
        (const Object*)this,
        priority
    );
}

void Area::set_reverb_amount(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_reverb_amount,
        (const Object*)this,
        amount
    );
}

void Area::set_reverb_bus(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_reverb_bus,
        (const Object*)this,
        name
    );
}

void Area::set_reverb_uniformity(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_reverb_uniformity,
        (const Object*)this,
        amount
    );
}

void Area::set_space_override_mode(const int64_t enable) {
    rebel_icall_void_int(
        method_bindings.mb_set_space_override_mode,
        (const Object*)this,
        enable
    );
}

void Area::set_use_reverb_bus(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_reverb_bus,
        (const Object*)this,
        enable
    );
}

Area* Area::create() {
    return (Area*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Area")()
         );
}

void Area::init_method_bindings() {
    method_bindings.mb__area_enter_tree =
        api->rebel_method_bind_get_method(
            "Area",
            "_area_enter_tree"
        );
    method_bindings.mb__area_exit_tree =
        api->rebel_method_bind_get_method(
            "Area",
            "_area_exit_tree"
        );
    method_bindings.mb__area_inout =
        api->rebel_method_bind_get_method(
            "Area",
            "_area_inout"
        );
    method_bindings.mb__body_enter_tree =
        api->rebel_method_bind_get_method(
            "Area",
            "_body_enter_tree"
        );
    method_bindings.mb__body_exit_tree =
        api->rebel_method_bind_get_method(
            "Area",
            "_body_exit_tree"
        );
    method_bindings.mb__body_inout =
        api->rebel_method_bind_get_method(
            "Area",
            "_body_inout"
        );
    method_bindings.mb_get_angular_damp =
        api->rebel_method_bind_get_method(
            "Area",
            "get_angular_damp"
        );
    method_bindings.mb_get_audio_bus =
        api->rebel_method_bind_get_method(
            "Area",
            "get_audio_bus"
        );
    method_bindings.mb_get_gravity =
        api->rebel_method_bind_get_method(
            "Area",
            "get_gravity"
        );
    method_bindings.mb_get_gravity_distance_scale =
        api->rebel_method_bind_get_method(
            "Area",
            "get_gravity_distance_scale"
        );
    method_bindings.mb_get_gravity_vector =
        api->rebel_method_bind_get_method(
            "Area",
            "get_gravity_vector"
        );
    method_bindings.mb_get_linear_damp =
        api->rebel_method_bind_get_method(
            "Area",
            "get_linear_damp"
        );
    method_bindings.mb_get_overlapping_areas =
        api->rebel_method_bind_get_method(
            "Area",
            "get_overlapping_areas"
        );
    method_bindings.mb_get_overlapping_bodies =
        api->rebel_method_bind_get_method(
            "Area",
            "get_overlapping_bodies"
        );
    method_bindings.mb_get_priority =
        api->rebel_method_bind_get_method(
            "Area",
            "get_priority"
        );
    method_bindings.mb_get_reverb_amount =
        api->rebel_method_bind_get_method(
            "Area",
            "get_reverb_amount"
        );
    method_bindings.mb_get_reverb_bus =
        api->rebel_method_bind_get_method(
            "Area",
            "get_reverb_bus"
        );
    method_bindings.mb_get_reverb_uniformity =
        api->rebel_method_bind_get_method(
            "Area",
            "get_reverb_uniformity"
        );
    method_bindings.mb_get_space_override_mode =
        api->rebel_method_bind_get_method(
            "Area",
            "get_space_override_mode"
        );
    method_bindings.mb_is_gravity_a_point =
        api->rebel_method_bind_get_method(
            "Area",
            "is_gravity_a_point"
        );
    method_bindings.mb_is_monitorable =
        api->rebel_method_bind_get_method(
            "Area",
            "is_monitorable"
        );
    method_bindings.mb_is_monitoring =
        api->rebel_method_bind_get_method(
            "Area",
            "is_monitoring"
        );
    method_bindings.mb_is_overriding_audio_bus =
        api->rebel_method_bind_get_method(
            "Area",
            "is_overriding_audio_bus"
        );
    method_bindings.mb_is_using_reverb_bus =
        api->rebel_method_bind_get_method(
            "Area",
            "is_using_reverb_bus"
        );
    method_bindings.mb_overlaps_area =
        api->rebel_method_bind_get_method(
            "Area",
            "overlaps_area"
        );
    method_bindings.mb_overlaps_body =
        api->rebel_method_bind_get_method(
            "Area",
            "overlaps_body"
        );
    method_bindings.mb_set_angular_damp =
        api->rebel_method_bind_get_method(
            "Area",
            "set_angular_damp"
        );
    method_bindings.mb_set_audio_bus =
        api->rebel_method_bind_get_method(
            "Area",
            "set_audio_bus"
        );
    method_bindings.mb_set_audio_bus_override =
        api->rebel_method_bind_get_method(
            "Area",
            "set_audio_bus_override"
        );
    method_bindings.mb_set_gravity =
        api->rebel_method_bind_get_method(
            "Area",
            "set_gravity"
        );
    method_bindings.mb_set_gravity_distance_scale =
        api->rebel_method_bind_get_method(
            "Area",
            "set_gravity_distance_scale"
        );
    method_bindings.mb_set_gravity_is_point =
        api->rebel_method_bind_get_method(
            "Area",
            "set_gravity_is_point"
        );
    method_bindings.mb_set_gravity_vector =
        api->rebel_method_bind_get_method(
            "Area",
            "set_gravity_vector"
        );
    method_bindings.mb_set_linear_damp =
        api->rebel_method_bind_get_method(
            "Area",
            "set_linear_damp"
        );
    method_bindings.mb_set_monitorable =
        api->rebel_method_bind_get_method(
            "Area",
            "set_monitorable"
        );
    method_bindings.mb_set_monitoring =
        api->rebel_method_bind_get_method(
            "Area",
            "set_monitoring"
        );
    method_bindings.mb_set_priority =
        api->rebel_method_bind_get_method(
            "Area",
            "set_priority"
        );
    method_bindings.mb_set_reverb_amount =
        api->rebel_method_bind_get_method(
            "Area",
            "set_reverb_amount"
        );
    method_bindings.mb_set_reverb_bus =
        api->rebel_method_bind_get_method(
            "Area",
            "set_reverb_bus"
        );
    method_bindings.mb_set_reverb_uniformity =
        api->rebel_method_bind_get_method(
            "Area",
            "set_reverb_uniformity"
        );
    method_bindings.mb_set_space_override_mode =
        api->rebel_method_bind_get_method(
            "Area",
            "set_space_override_mode"
        );
    method_bindings.mb_set_use_reverb_bus =
        api->rebel_method_bind_get_method(
            "Area",
            "set_use_reverb_bus"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Area");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Area::MethodBindings Area::method_bindings = {};
void* Area::class_tag = nullptr;
} // namespace Rebel
