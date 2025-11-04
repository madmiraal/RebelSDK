// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/hingejoint.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t HingeJoint::_get_lower_limit() const {
    return rebel_icall_float(
        method_bindings.mb__get_lower_limit,
        (const Object*)this
    );
}

real_t HingeJoint::_get_upper_limit() const {
    return rebel_icall_float(
        method_bindings.mb__get_upper_limit,
        (const Object*)this
    );
}

void HingeJoint::_set_lower_limit(const real_t lower_limit) {
    rebel_icall_void_float(
        method_bindings.mb__set_lower_limit,
        (const Object*)this,
        lower_limit
    );
}

void HingeJoint::_set_upper_limit(const real_t upper_limit) {
    rebel_icall_void_float(
        method_bindings.mb__set_upper_limit,
        (const Object*)this,
        upper_limit
    );
}

bool HingeJoint::get_flag(const int64_t flag) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_flag,
        (const Object*)this,
        flag
    );
}

real_t HingeJoint::get_param(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param,
        (const Object*)this,
        param
    );
}

void HingeJoint::set_flag(const int64_t flag, const bool enabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_flag,
        (const Object*)this,
        flag,
        enabled
    );
}

void HingeJoint::set_param(const int64_t param, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param,
        (const Object*)this,
        param,
        value
    );
}

HingeJoint* HingeJoint::create() {
    return (HingeJoint*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"HingeJoint")()
         );
}

void HingeJoint::init_method_bindings() {
    method_bindings.mb__get_lower_limit =
        api->rebel_method_bind_get_method(
            "HingeJoint",
            "_get_lower_limit"
        );
    method_bindings.mb__get_upper_limit =
        api->rebel_method_bind_get_method(
            "HingeJoint",
            "_get_upper_limit"
        );
    method_bindings.mb__set_lower_limit =
        api->rebel_method_bind_get_method(
            "HingeJoint",
            "_set_lower_limit"
        );
    method_bindings.mb__set_upper_limit =
        api->rebel_method_bind_get_method(
            "HingeJoint",
            "_set_upper_limit"
        );
    method_bindings.mb_get_flag =
        api->rebel_method_bind_get_method(
            "HingeJoint",
            "get_flag"
        );
    method_bindings.mb_get_param =
        api->rebel_method_bind_get_method(
            "HingeJoint",
            "get_param"
        );
    method_bindings.mb_set_flag =
        api->rebel_method_bind_get_method(
            "HingeJoint",
            "set_flag"
        );
    method_bindings.mb_set_param =
        api->rebel_method_bind_get_method(
            "HingeJoint",
            "set_param"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "HingeJoint");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

HingeJoint::MethodBindings HingeJoint::method_bindings = {};
void* HingeJoint::class_tag = nullptr;
} // namespace Rebel
