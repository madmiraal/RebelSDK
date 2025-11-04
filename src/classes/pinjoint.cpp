// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/pinjoint.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t PinJoint::get_param(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param,
        (const Object*)this,
        param
    );
}

void PinJoint::set_param(const int64_t param, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param,
        (const Object*)this,
        param,
        value
    );
}

PinJoint* PinJoint::create() {
    return (PinJoint*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PinJoint")()
         );
}

void PinJoint::init_method_bindings() {
    method_bindings.mb_get_param =
        api->rebel_method_bind_get_method(
            "PinJoint",
            "get_param"
        );
    method_bindings.mb_set_param =
        api->rebel_method_bind_get_method(
            "PinJoint",
            "set_param"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PinJoint");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PinJoint::MethodBindings PinJoint::method_bindings = {};
void* PinJoint::class_tag = nullptr;
} // namespace Rebel
