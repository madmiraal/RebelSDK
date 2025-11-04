// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/generic6dofjoint.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t Generic6DOFJoint::_get_angular_hi_limit_x() const {
    return rebel_icall_float(
        method_bindings.mb__get_angular_hi_limit_x,
        (const Object*)this
    );
}

real_t Generic6DOFJoint::_get_angular_hi_limit_y() const {
    return rebel_icall_float(
        method_bindings.mb__get_angular_hi_limit_y,
        (const Object*)this
    );
}

real_t Generic6DOFJoint::_get_angular_hi_limit_z() const {
    return rebel_icall_float(
        method_bindings.mb__get_angular_hi_limit_z,
        (const Object*)this
    );
}

real_t Generic6DOFJoint::_get_angular_lo_limit_x() const {
    return rebel_icall_float(
        method_bindings.mb__get_angular_lo_limit_x,
        (const Object*)this
    );
}

real_t Generic6DOFJoint::_get_angular_lo_limit_y() const {
    return rebel_icall_float(
        method_bindings.mb__get_angular_lo_limit_y,
        (const Object*)this
    );
}

real_t Generic6DOFJoint::_get_angular_lo_limit_z() const {
    return rebel_icall_float(
        method_bindings.mb__get_angular_lo_limit_z,
        (const Object*)this
    );
}

void Generic6DOFJoint::_set_angular_hi_limit_x(const real_t angle) {
    rebel_icall_void_float(
        method_bindings.mb__set_angular_hi_limit_x,
        (const Object*)this,
        angle
    );
}

void Generic6DOFJoint::_set_angular_hi_limit_y(const real_t angle) {
    rebel_icall_void_float(
        method_bindings.mb__set_angular_hi_limit_y,
        (const Object*)this,
        angle
    );
}

void Generic6DOFJoint::_set_angular_hi_limit_z(const real_t angle) {
    rebel_icall_void_float(
        method_bindings.mb__set_angular_hi_limit_z,
        (const Object*)this,
        angle
    );
}

void Generic6DOFJoint::_set_angular_lo_limit_x(const real_t angle) {
    rebel_icall_void_float(
        method_bindings.mb__set_angular_lo_limit_x,
        (const Object*)this,
        angle
    );
}

void Generic6DOFJoint::_set_angular_lo_limit_y(const real_t angle) {
    rebel_icall_void_float(
        method_bindings.mb__set_angular_lo_limit_y,
        (const Object*)this,
        angle
    );
}

void Generic6DOFJoint::_set_angular_lo_limit_z(const real_t angle) {
    rebel_icall_void_float(
        method_bindings.mb__set_angular_lo_limit_z,
        (const Object*)this,
        angle
    );
}

bool Generic6DOFJoint::get_flag_x(const int64_t flag) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_flag_x,
        (const Object*)this,
        flag
    );
}

bool Generic6DOFJoint::get_flag_y(const int64_t flag) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_flag_y,
        (const Object*)this,
        flag
    );
}

bool Generic6DOFJoint::get_flag_z(const int64_t flag) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_flag_z,
        (const Object*)this,
        flag
    );
}

real_t Generic6DOFJoint::get_param_x(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param_x,
        (const Object*)this,
        param
    );
}

real_t Generic6DOFJoint::get_param_y(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param_y,
        (const Object*)this,
        param
    );
}

real_t Generic6DOFJoint::get_param_z(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param_z,
        (const Object*)this,
        param
    );
}

void Generic6DOFJoint::set_flag_x(const int64_t flag, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_flag_x,
        (const Object*)this,
        flag,
        value
    );
}

void Generic6DOFJoint::set_flag_y(const int64_t flag, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_flag_y,
        (const Object*)this,
        flag,
        value
    );
}

void Generic6DOFJoint::set_flag_z(const int64_t flag, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_flag_z,
        (const Object*)this,
        flag,
        value
    );
}

void Generic6DOFJoint::set_param_x(const int64_t param, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param_x,
        (const Object*)this,
        param,
        value
    );
}

void Generic6DOFJoint::set_param_y(const int64_t param, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param_y,
        (const Object*)this,
        param,
        value
    );
}

void Generic6DOFJoint::set_param_z(const int64_t param, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param_z,
        (const Object*)this,
        param,
        value
    );
}

Generic6DOFJoint* Generic6DOFJoint::create() {
    return (Generic6DOFJoint*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Generic6DOFJoint")()
         );
}

void Generic6DOFJoint::init_method_bindings() {
    method_bindings.mb__get_angular_hi_limit_x =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_get_angular_hi_limit_x"
        );
    method_bindings.mb__get_angular_hi_limit_y =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_get_angular_hi_limit_y"
        );
    method_bindings.mb__get_angular_hi_limit_z =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_get_angular_hi_limit_z"
        );
    method_bindings.mb__get_angular_lo_limit_x =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_get_angular_lo_limit_x"
        );
    method_bindings.mb__get_angular_lo_limit_y =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_get_angular_lo_limit_y"
        );
    method_bindings.mb__get_angular_lo_limit_z =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_get_angular_lo_limit_z"
        );
    method_bindings.mb__set_angular_hi_limit_x =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_set_angular_hi_limit_x"
        );
    method_bindings.mb__set_angular_hi_limit_y =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_set_angular_hi_limit_y"
        );
    method_bindings.mb__set_angular_hi_limit_z =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_set_angular_hi_limit_z"
        );
    method_bindings.mb__set_angular_lo_limit_x =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_set_angular_lo_limit_x"
        );
    method_bindings.mb__set_angular_lo_limit_y =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_set_angular_lo_limit_y"
        );
    method_bindings.mb__set_angular_lo_limit_z =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "_set_angular_lo_limit_z"
        );
    method_bindings.mb_get_flag_x =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "get_flag_x"
        );
    method_bindings.mb_get_flag_y =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "get_flag_y"
        );
    method_bindings.mb_get_flag_z =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "get_flag_z"
        );
    method_bindings.mb_get_param_x =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "get_param_x"
        );
    method_bindings.mb_get_param_y =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "get_param_y"
        );
    method_bindings.mb_get_param_z =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "get_param_z"
        );
    method_bindings.mb_set_flag_x =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "set_flag_x"
        );
    method_bindings.mb_set_flag_y =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "set_flag_y"
        );
    method_bindings.mb_set_flag_z =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "set_flag_z"
        );
    method_bindings.mb_set_param_x =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "set_param_x"
        );
    method_bindings.mb_set_param_y =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "set_param_y"
        );
    method_bindings.mb_set_param_z =
        api->rebel_method_bind_get_method(
            "Generic6DOFJoint",
            "set_param_z"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Generic6DOFJoint");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Generic6DOFJoint::MethodBindings Generic6DOFJoint::method_bindings = {};
void* Generic6DOFJoint::class_tag = nullptr;
} // namespace Rebel
