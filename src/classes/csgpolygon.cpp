// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/csgpolygon.h"

#include "classes/icalls.h"
#include "classes/material.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool CSGPolygon::_has_editable_3d_polygon_no_depth() const {
    return rebel_icall_bool(
        method_bindings.mb__has_editable_3d_polygon_no_depth,
        (const Object*)this
    );
}

bool CSGPolygon::_is_editable_3d_polygon() const {
    return rebel_icall_bool(
        method_bindings.mb__is_editable_3d_polygon,
        (const Object*)this
    );
}

void CSGPolygon::_path_changed() {
    rebel_icall_void(
        method_bindings.mb__path_changed,
        (const Object*)this
    );
}

void CSGPolygon::_path_exited() {
    rebel_icall_void(
        method_bindings.mb__path_exited,
        (const Object*)this
    );
}

real_t CSGPolygon::get_depth() const {
    return rebel_icall_float(
        method_bindings.mb_get_depth,
        (const Object*)this
    );
}

Ref<Material> CSGPolygon::get_material() const {
    return Ref<Material>::create_ref(rebel_icall_object(
        method_bindings.mb_get_material,
        (const Object*)this
    ));
}

CSGPolygon::Mode CSGPolygon::get_mode() const {
    return (CSGPolygon::Mode)rebel_icall_int(
        method_bindings.mb_get_mode,
        (const Object*)this
    );
}

real_t CSGPolygon::get_path_interval() const {
    return rebel_icall_float(
        method_bindings.mb_get_path_interval,
        (const Object*)this
    );
}

CSGPolygon::PathIntervalType CSGPolygon::get_path_interval_type() const {
    return (CSGPolygon::PathIntervalType)rebel_icall_int(
        method_bindings.mb_get_path_interval_type,
        (const Object*)this
    );
}

NodePath CSGPolygon::get_path_node() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_path_node,
        (const Object*)this
    );
}

CSGPolygon::PathRotation CSGPolygon::get_path_rotation() const {
    return (CSGPolygon::PathRotation)rebel_icall_int(
        method_bindings.mb_get_path_rotation,
        (const Object*)this
    );
}

real_t CSGPolygon::get_path_simplify_angle() const {
    return rebel_icall_float(
        method_bindings.mb_get_path_simplify_angle,
        (const Object*)this
    );
}

real_t CSGPolygon::get_path_u_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_path_u_distance,
        (const Object*)this
    );
}

PoolVector2Array CSGPolygon::get_polygon() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_polygon,
        (const Object*)this
    );
}

bool CSGPolygon::get_smooth_faces() const {
    return rebel_icall_bool(
        method_bindings.mb_get_smooth_faces,
        (const Object*)this
    );
}

real_t CSGPolygon::get_spin_degrees() const {
    return rebel_icall_float(
        method_bindings.mb_get_spin_degrees,
        (const Object*)this
    );
}

int64_t CSGPolygon::get_spin_sides() const {
    return rebel_icall_int(
        method_bindings.mb_get_spin_sides,
        (const Object*)this
    );
}

bool CSGPolygon::is_path_continuous_u() const {
    return rebel_icall_bool(
        method_bindings.mb_is_path_continuous_u,
        (const Object*)this
    );
}

bool CSGPolygon::is_path_joined() const {
    return rebel_icall_bool(
        method_bindings.mb_is_path_joined,
        (const Object*)this
    );
}

bool CSGPolygon::is_path_local() const {
    return rebel_icall_bool(
        method_bindings.mb_is_path_local,
        (const Object*)this
    );
}

void CSGPolygon::set_depth(const real_t depth) {
    rebel_icall_void_float(
        method_bindings.mb_set_depth,
        (const Object*)this,
        depth
    );
}

void CSGPolygon::set_material(const Ref<Material> material) {
    rebel_icall_void_object(
        method_bindings.mb_set_material,
        (const Object*)this,
        material.ptr()
    );
}

void CSGPolygon::set_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_mode,
        (const Object*)this,
        mode
    );
}

void CSGPolygon::set_path_continuous_u(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_path_continuous_u,
        (const Object*)this,
        enable
    );
}

void CSGPolygon::set_path_interval(const real_t path_interval) {
    rebel_icall_void_float(
        method_bindings.mb_set_path_interval,
        (const Object*)this,
        path_interval
    );
}

void CSGPolygon::set_path_interval_type(const int64_t interval_type) {
    rebel_icall_void_int(
        method_bindings.mb_set_path_interval_type,
        (const Object*)this,
        interval_type
    );
}

void CSGPolygon::set_path_joined(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_path_joined,
        (const Object*)this,
        enable
    );
}

void CSGPolygon::set_path_local(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_path_local,
        (const Object*)this,
        enable
    );
}

void CSGPolygon::set_path_node(const NodePath path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_path_node,
        (const Object*)this,
        path
    );
}

void CSGPolygon::set_path_rotation(const int64_t path_rotation) {
    rebel_icall_void_int(
        method_bindings.mb_set_path_rotation,
        (const Object*)this,
        path_rotation
    );
}

void CSGPolygon::set_path_simplify_angle(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_path_simplify_angle,
        (const Object*)this,
        degrees
    );
}

void CSGPolygon::set_path_u_distance(const real_t distance) {
    rebel_icall_void_float(
        method_bindings.mb_set_path_u_distance,
        (const Object*)this,
        distance
    );
}

void CSGPolygon::set_polygon(const PoolVector2Array polygon) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_polygon,
        (const Object*)this,
        polygon
    );
}

void CSGPolygon::set_smooth_faces(const bool smooth_faces) {
    rebel_icall_void_bool(
        method_bindings.mb_set_smooth_faces,
        (const Object*)this,
        smooth_faces
    );
}

void CSGPolygon::set_spin_degrees(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_spin_degrees,
        (const Object*)this,
        degrees
    );
}

void CSGPolygon::set_spin_sides(const int64_t spin_sides) {
    rebel_icall_void_int(
        method_bindings.mb_set_spin_sides,
        (const Object*)this,
        spin_sides
    );
}

CSGPolygon* CSGPolygon::create() {
    return (CSGPolygon*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CSGPolygon")()
         );
}

void CSGPolygon::init_method_bindings() {
    method_bindings.mb__has_editable_3d_polygon_no_depth =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "_has_editable_3d_polygon_no_depth"
        );
    method_bindings.mb__is_editable_3d_polygon =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "_is_editable_3d_polygon"
        );
    method_bindings.mb__path_changed =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "_path_changed"
        );
    method_bindings.mb__path_exited =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "_path_exited"
        );
    method_bindings.mb_get_depth =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_depth"
        );
    method_bindings.mb_get_material =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_material"
        );
    method_bindings.mb_get_mode =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_mode"
        );
    method_bindings.mb_get_path_interval =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_path_interval"
        );
    method_bindings.mb_get_path_interval_type =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_path_interval_type"
        );
    method_bindings.mb_get_path_node =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_path_node"
        );
    method_bindings.mb_get_path_rotation =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_path_rotation"
        );
    method_bindings.mb_get_path_simplify_angle =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_path_simplify_angle"
        );
    method_bindings.mb_get_path_u_distance =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_path_u_distance"
        );
    method_bindings.mb_get_polygon =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_polygon"
        );
    method_bindings.mb_get_smooth_faces =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_smooth_faces"
        );
    method_bindings.mb_get_spin_degrees =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_spin_degrees"
        );
    method_bindings.mb_get_spin_sides =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "get_spin_sides"
        );
    method_bindings.mb_is_path_continuous_u =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "is_path_continuous_u"
        );
    method_bindings.mb_is_path_joined =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "is_path_joined"
        );
    method_bindings.mb_is_path_local =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "is_path_local"
        );
    method_bindings.mb_set_depth =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_depth"
        );
    method_bindings.mb_set_material =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_material"
        );
    method_bindings.mb_set_mode =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_mode"
        );
    method_bindings.mb_set_path_continuous_u =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_path_continuous_u"
        );
    method_bindings.mb_set_path_interval =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_path_interval"
        );
    method_bindings.mb_set_path_interval_type =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_path_interval_type"
        );
    method_bindings.mb_set_path_joined =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_path_joined"
        );
    method_bindings.mb_set_path_local =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_path_local"
        );
    method_bindings.mb_set_path_node =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_path_node"
        );
    method_bindings.mb_set_path_rotation =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_path_rotation"
        );
    method_bindings.mb_set_path_simplify_angle =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_path_simplify_angle"
        );
    method_bindings.mb_set_path_u_distance =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_path_u_distance"
        );
    method_bindings.mb_set_polygon =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_polygon"
        );
    method_bindings.mb_set_smooth_faces =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_smooth_faces"
        );
    method_bindings.mb_set_spin_degrees =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_spin_degrees"
        );
    method_bindings.mb_set_spin_sides =
        api->rebel_method_bind_get_method(
            "CSGPolygon",
            "set_spin_sides"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CSGPolygon");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CSGPolygon::MethodBindings CSGPolygon::method_bindings = {};
void* CSGPolygon::class_tag = nullptr;
} // namespace Rebel
