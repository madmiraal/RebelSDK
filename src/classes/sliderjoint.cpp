// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/sliderjoint.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t SliderJoint::_get_lower_limit_angular() const {
    return rebel_icall_float(
        method_bindings.mb__get_lower_limit_angular,
        (const Object*)this
    );
}

real_t SliderJoint::_get_upper_limit_angular() const {
    return rebel_icall_float(
        method_bindings.mb__get_upper_limit_angular,
        (const Object*)this
    );
}

void SliderJoint::_set_lower_limit_angular(const real_t lower_limit_angular) {
    rebel_icall_void_float(
        method_bindings.mb__set_lower_limit_angular,
        (const Object*)this,
        lower_limit_angular
    );
}

void SliderJoint::_set_upper_limit_angular(const real_t upper_limit_angular) {
    rebel_icall_void_float(
        method_bindings.mb__set_upper_limit_angular,
        (const Object*)this,
        upper_limit_angular
    );
}

real_t SliderJoint::get_param(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param,
        (const Object*)this,
        param
    );
}

void SliderJoint::set_param(const int64_t param, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param,
        (const Object*)this,
        param,
        value
    );
}

SliderJoint* SliderJoint::create() {
    return (SliderJoint*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SliderJoint")()
         );
}

void SliderJoint::init_method_bindings() {
    method_bindings.mb__get_lower_limit_angular =
        api->rebel_method_bind_get_method(
            "SliderJoint",
            "_get_lower_limit_angular"
        );
    method_bindings.mb__get_upper_limit_angular =
        api->rebel_method_bind_get_method(
            "SliderJoint",
            "_get_upper_limit_angular"
        );
    method_bindings.mb__set_lower_limit_angular =
        api->rebel_method_bind_get_method(
            "SliderJoint",
            "_set_lower_limit_angular"
        );
    method_bindings.mb__set_upper_limit_angular =
        api->rebel_method_bind_get_method(
            "SliderJoint",
            "_set_upper_limit_angular"
        );
    method_bindings.mb_get_param =
        api->rebel_method_bind_get_method(
            "SliderJoint",
            "get_param"
        );
    method_bindings.mb_set_param =
        api->rebel_method_bind_get_method(
            "SliderJoint",
            "set_param"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SliderJoint");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SliderJoint::MethodBindings SliderJoint::method_bindings = {};
void* SliderJoint::class_tag = nullptr;
} // namespace Rebel
