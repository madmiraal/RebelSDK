// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/pathfollow.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool PathFollow::get_cubic_interpolation() const {
    return rebel_icall_bool(
        method_bindings.mb_get_cubic_interpolation,
        (const Object*)this
    );
}

real_t PathFollow::get_h_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_h_offset,
        (const Object*)this
    );
}

real_t PathFollow::get_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_offset,
        (const Object*)this
    );
}

PathFollow::RotationMode PathFollow::get_rotation_mode() const {
    return (PathFollow::RotationMode)rebel_icall_int(
        method_bindings.mb_get_rotation_mode,
        (const Object*)this
    );
}

real_t PathFollow::get_unit_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_unit_offset,
        (const Object*)this
    );
}

real_t PathFollow::get_v_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_v_offset,
        (const Object*)this
    );
}

bool PathFollow::has_loop() const {
    return rebel_icall_bool(
        method_bindings.mb_has_loop,
        (const Object*)this
    );
}

void PathFollow::set_cubic_interpolation(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_cubic_interpolation,
        (const Object*)this,
        enable
    );
}

void PathFollow::set_h_offset(const real_t h_offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_h_offset,
        (const Object*)this,
        h_offset
    );
}

void PathFollow::set_loop(const bool loop) {
    rebel_icall_void_bool(
        method_bindings.mb_set_loop,
        (const Object*)this,
        loop
    );
}

void PathFollow::set_offset(const real_t offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_offset,
        (const Object*)this,
        offset
    );
}

void PathFollow::set_rotation_mode(const int64_t rotation_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_rotation_mode,
        (const Object*)this,
        rotation_mode
    );
}

void PathFollow::set_unit_offset(const real_t unit_offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_unit_offset,
        (const Object*)this,
        unit_offset
    );
}

void PathFollow::set_v_offset(const real_t v_offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_v_offset,
        (const Object*)this,
        v_offset
    );
}

PathFollow* PathFollow::create() {
    return (PathFollow*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PathFollow")()
         );
}

void PathFollow::init_method_bindings() {
    method_bindings.mb_get_cubic_interpolation =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "get_cubic_interpolation"
        );
    method_bindings.mb_get_h_offset =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "get_h_offset"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "get_offset"
        );
    method_bindings.mb_get_rotation_mode =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "get_rotation_mode"
        );
    method_bindings.mb_get_unit_offset =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "get_unit_offset"
        );
    method_bindings.mb_get_v_offset =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "get_v_offset"
        );
    method_bindings.mb_has_loop =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "has_loop"
        );
    method_bindings.mb_set_cubic_interpolation =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "set_cubic_interpolation"
        );
    method_bindings.mb_set_h_offset =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "set_h_offset"
        );
    method_bindings.mb_set_loop =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "set_loop"
        );
    method_bindings.mb_set_offset =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "set_offset"
        );
    method_bindings.mb_set_rotation_mode =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "set_rotation_mode"
        );
    method_bindings.mb_set_unit_offset =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "set_unit_offset"
        );
    method_bindings.mb_set_v_offset =
        api->rebel_method_bind_get_method(
            "PathFollow",
            "set_v_offset"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PathFollow");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PathFollow::MethodBindings PathFollow::method_bindings = {};
void* PathFollow::class_tag = nullptr;
} // namespace Rebel
