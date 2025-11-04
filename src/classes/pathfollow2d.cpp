// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/pathfollow2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool PathFollow2D::get_cubic_interpolation() const {
    return rebel_icall_bool(
        method_bindings.mb_get_cubic_interpolation,
        (const Object*)this
    );
}

real_t PathFollow2D::get_h_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_h_offset,
        (const Object*)this
    );
}

real_t PathFollow2D::get_lookahead() const {
    return rebel_icall_float(
        method_bindings.mb_get_lookahead,
        (const Object*)this
    );
}

real_t PathFollow2D::get_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_offset,
        (const Object*)this
    );
}

real_t PathFollow2D::get_unit_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_unit_offset,
        (const Object*)this
    );
}

real_t PathFollow2D::get_v_offset() const {
    return rebel_icall_float(
        method_bindings.mb_get_v_offset,
        (const Object*)this
    );
}

bool PathFollow2D::has_loop() const {
    return rebel_icall_bool(
        method_bindings.mb_has_loop,
        (const Object*)this
    );
}

bool PathFollow2D::is_rotating() const {
    return rebel_icall_bool(
        method_bindings.mb_is_rotating,
        (const Object*)this
    );
}

void PathFollow2D::set_cubic_interpolation(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_cubic_interpolation,
        (const Object*)this,
        enable
    );
}

void PathFollow2D::set_h_offset(const real_t h_offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_h_offset,
        (const Object*)this,
        h_offset
    );
}

void PathFollow2D::set_lookahead(const real_t lookahead) {
    rebel_icall_void_float(
        method_bindings.mb_set_lookahead,
        (const Object*)this,
        lookahead
    );
}

void PathFollow2D::set_loop(const bool loop) {
    rebel_icall_void_bool(
        method_bindings.mb_set_loop,
        (const Object*)this,
        loop
    );
}

void PathFollow2D::set_offset(const real_t offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_offset,
        (const Object*)this,
        offset
    );
}

void PathFollow2D::set_rotate(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_rotate,
        (const Object*)this,
        enable
    );
}

void PathFollow2D::set_unit_offset(const real_t unit_offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_unit_offset,
        (const Object*)this,
        unit_offset
    );
}

void PathFollow2D::set_v_offset(const real_t v_offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_v_offset,
        (const Object*)this,
        v_offset
    );
}

PathFollow2D* PathFollow2D::create() {
    return (PathFollow2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PathFollow2D")()
         );
}

void PathFollow2D::init_method_bindings() {
    method_bindings.mb_get_cubic_interpolation =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "get_cubic_interpolation"
        );
    method_bindings.mb_get_h_offset =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "get_h_offset"
        );
    method_bindings.mb_get_lookahead =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "get_lookahead"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "get_offset"
        );
    method_bindings.mb_get_unit_offset =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "get_unit_offset"
        );
    method_bindings.mb_get_v_offset =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "get_v_offset"
        );
    method_bindings.mb_has_loop =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "has_loop"
        );
    method_bindings.mb_is_rotating =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "is_rotating"
        );
    method_bindings.mb_set_cubic_interpolation =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "set_cubic_interpolation"
        );
    method_bindings.mb_set_h_offset =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "set_h_offset"
        );
    method_bindings.mb_set_lookahead =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "set_lookahead"
        );
    method_bindings.mb_set_loop =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "set_loop"
        );
    method_bindings.mb_set_offset =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "set_offset"
        );
    method_bindings.mb_set_rotate =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "set_rotate"
        );
    method_bindings.mb_set_unit_offset =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "set_unit_offset"
        );
    method_bindings.mb_set_v_offset =
        api->rebel_method_bind_get_method(
            "PathFollow2D",
            "set_v_offset"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PathFollow2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PathFollow2D::MethodBindings PathFollow2D::method_bindings = {};
void* PathFollow2D::class_tag = nullptr;
} // namespace Rebel
