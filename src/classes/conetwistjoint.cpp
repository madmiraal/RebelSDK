// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/conetwistjoint.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t ConeTwistJoint::_get_swing_span() const {
    return rebel_icall_float(
        method_bindings.mb__get_swing_span,
        (const Object*)this
    );
}

real_t ConeTwistJoint::_get_twist_span() const {
    return rebel_icall_float(
        method_bindings.mb__get_twist_span,
        (const Object*)this
    );
}

void ConeTwistJoint::_set_swing_span(const real_t swing_span) {
    rebel_icall_void_float(
        method_bindings.mb__set_swing_span,
        (const Object*)this,
        swing_span
    );
}

void ConeTwistJoint::_set_twist_span(const real_t twist_span) {
    rebel_icall_void_float(
        method_bindings.mb__set_twist_span,
        (const Object*)this,
        twist_span
    );
}

real_t ConeTwistJoint::get_param(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param,
        (const Object*)this,
        param
    );
}

void ConeTwistJoint::set_param(const int64_t param, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param,
        (const Object*)this,
        param,
        value
    );
}

ConeTwistJoint* ConeTwistJoint::create() {
    return (ConeTwistJoint*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ConeTwistJoint")()
         );
}

void ConeTwistJoint::init_method_bindings() {
    method_bindings.mb__get_swing_span =
        api->rebel_method_bind_get_method(
            "ConeTwistJoint",
            "_get_swing_span"
        );
    method_bindings.mb__get_twist_span =
        api->rebel_method_bind_get_method(
            "ConeTwistJoint",
            "_get_twist_span"
        );
    method_bindings.mb__set_swing_span =
        api->rebel_method_bind_get_method(
            "ConeTwistJoint",
            "_set_swing_span"
        );
    method_bindings.mb__set_twist_span =
        api->rebel_method_bind_get_method(
            "ConeTwistJoint",
            "_set_twist_span"
        );
    method_bindings.mb_get_param =
        api->rebel_method_bind_get_method(
            "ConeTwistJoint",
            "get_param"
        );
    method_bindings.mb_set_param =
        api->rebel_method_bind_get_method(
            "ConeTwistJoint",
            "set_param"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ConeTwistJoint");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ConeTwistJoint::MethodBindings ConeTwistJoint::method_bindings = {};
void* ConeTwistJoint::class_tag = nullptr;
} // namespace Rebel
