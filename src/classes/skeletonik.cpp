// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/skeletonik.h"

#include "classes/icalls.h"
#include "classes/skeleton.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t SkeletonIK::get_interpolation() const {
    return rebel_icall_float(
        method_bindings.mb_get_interpolation,
        (const Object*)this
    );
}

Vector3 SkeletonIK::get_magnet_position() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_magnet_position,
        (const Object*)this
    );
}

int64_t SkeletonIK::get_max_iterations() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_iterations,
        (const Object*)this
    );
}

real_t SkeletonIK::get_min_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_min_distance,
        (const Object*)this
    );
}

Skeleton* SkeletonIK::get_parent_skeleton() const {
    return (Skeleton*)rebel_icall_object(
        method_bindings.mb_get_parent_skeleton,
        (const Object*)this
    );
}

String SkeletonIK::get_root_bone() const {
    return rebel_icall_string(
        method_bindings.mb_get_root_bone,
        (const Object*)this
    );
}

NodePath SkeletonIK::get_target_node() {
    return rebel_icall_nodepath(
        method_bindings.mb_get_target_node,
        (const Object*)this
    );
}

Transform SkeletonIK::get_target_transform() const {
    return rebel_icall_transform(
        method_bindings.mb_get_target_transform,
        (const Object*)this
    );
}

String SkeletonIK::get_tip_bone() const {
    return rebel_icall_string(
        method_bindings.mb_get_tip_bone,
        (const Object*)this
    );
}

bool SkeletonIK::is_override_tip_basis() const {
    return rebel_icall_bool(
        method_bindings.mb_is_override_tip_basis,
        (const Object*)this
    );
}

bool SkeletonIK::is_running() {
    return rebel_icall_bool(
        method_bindings.mb_is_running,
        (const Object*)this
    );
}

bool SkeletonIK::is_using_magnet() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_magnet,
        (const Object*)this
    );
}

void SkeletonIK::set_interpolation(const real_t interpolation) {
    rebel_icall_void_float(
        method_bindings.mb_set_interpolation,
        (const Object*)this,
        interpolation
    );
}

void SkeletonIK::set_magnet_position(const Vector3 local_position) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_magnet_position,
        (const Object*)this,
        local_position
    );
}

void SkeletonIK::set_max_iterations(const int64_t iterations) {
    rebel_icall_void_int(
        method_bindings.mb_set_max_iterations,
        (const Object*)this,
        iterations
    );
}

void SkeletonIK::set_min_distance(const real_t min_distance) {
    rebel_icall_void_float(
        method_bindings.mb_set_min_distance,
        (const Object*)this,
        min_distance
    );
}

void SkeletonIK::set_override_tip_basis(const bool override) {
    rebel_icall_void_bool(
        method_bindings.mb_set_override_tip_basis,
        (const Object*)this,
        override
    );
}

void SkeletonIK::set_root_bone(const String root_bone) {
    rebel_icall_void_string(
        method_bindings.mb_set_root_bone,
        (const Object*)this,
        root_bone
    );
}

void SkeletonIK::set_target_node(const NodePath node) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_target_node,
        (const Object*)this,
        node
    );
}

void SkeletonIK::set_target_transform(const Transform target) {
    rebel_icall_void_transform(
        method_bindings.mb_set_target_transform,
        (const Object*)this,
        target
    );
}

void SkeletonIK::set_tip_bone(const String tip_bone) {
    rebel_icall_void_string(
        method_bindings.mb_set_tip_bone,
        (const Object*)this,
        tip_bone
    );
}

void SkeletonIK::set_use_magnet(const bool use) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_magnet,
        (const Object*)this,
        use
    );
}

void SkeletonIK::start(const bool one_time) {
    rebel_icall_void_bool(
        method_bindings.mb_start,
        (const Object*)this,
        one_time
    );
}

void SkeletonIK::stop() {
    rebel_icall_void(
        method_bindings.mb_stop,
        (const Object*)this
    );
}

SkeletonIK* SkeletonIK::create() {
    return (SkeletonIK*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SkeletonIK")()
         );
}

void SkeletonIK::init_method_bindings() {
    method_bindings.mb_get_interpolation =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "get_interpolation"
        );
    method_bindings.mb_get_magnet_position =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "get_magnet_position"
        );
    method_bindings.mb_get_max_iterations =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "get_max_iterations"
        );
    method_bindings.mb_get_min_distance =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "get_min_distance"
        );
    method_bindings.mb_get_parent_skeleton =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "get_parent_skeleton"
        );
    method_bindings.mb_get_root_bone =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "get_root_bone"
        );
    method_bindings.mb_get_target_node =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "get_target_node"
        );
    method_bindings.mb_get_target_transform =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "get_target_transform"
        );
    method_bindings.mb_get_tip_bone =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "get_tip_bone"
        );
    method_bindings.mb_is_override_tip_basis =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "is_override_tip_basis"
        );
    method_bindings.mb_is_running =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "is_running"
        );
    method_bindings.mb_is_using_magnet =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "is_using_magnet"
        );
    method_bindings.mb_set_interpolation =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "set_interpolation"
        );
    method_bindings.mb_set_magnet_position =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "set_magnet_position"
        );
    method_bindings.mb_set_max_iterations =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "set_max_iterations"
        );
    method_bindings.mb_set_min_distance =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "set_min_distance"
        );
    method_bindings.mb_set_override_tip_basis =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "set_override_tip_basis"
        );
    method_bindings.mb_set_root_bone =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "set_root_bone"
        );
    method_bindings.mb_set_target_node =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "set_target_node"
        );
    method_bindings.mb_set_target_transform =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "set_target_transform"
        );
    method_bindings.mb_set_tip_bone =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "set_tip_bone"
        );
    method_bindings.mb_set_use_magnet =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "set_use_magnet"
        );
    method_bindings.mb_start =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "start"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "SkeletonIK",
            "stop"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SkeletonIK");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SkeletonIK::MethodBindings SkeletonIK::method_bindings = {};
void* SkeletonIK::class_tag = nullptr;
} // namespace Rebel
