// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/dampedspringjoint2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t DampedSpringJoint2D::get_damping() const {
    return rebel_icall_float(
        method_bindings.mb_get_damping,
        (const Object*)this
    );
}

real_t DampedSpringJoint2D::get_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_length,
        (const Object*)this
    );
}

real_t DampedSpringJoint2D::get_rest_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_rest_length,
        (const Object*)this
    );
}

real_t DampedSpringJoint2D::get_stiffness() const {
    return rebel_icall_float(
        method_bindings.mb_get_stiffness,
        (const Object*)this
    );
}

void DampedSpringJoint2D::set_damping(const real_t damping) {
    rebel_icall_void_float(
        method_bindings.mb_set_damping,
        (const Object*)this,
        damping
    );
}

void DampedSpringJoint2D::set_length(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_length,
        (const Object*)this,
        length
    );
}

void DampedSpringJoint2D::set_rest_length(const real_t rest_length) {
    rebel_icall_void_float(
        method_bindings.mb_set_rest_length,
        (const Object*)this,
        rest_length
    );
}

void DampedSpringJoint2D::set_stiffness(const real_t stiffness) {
    rebel_icall_void_float(
        method_bindings.mb_set_stiffness,
        (const Object*)this,
        stiffness
    );
}

DampedSpringJoint2D* DampedSpringJoint2D::create() {
    return (DampedSpringJoint2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"DampedSpringJoint2D")()
         );
}

void DampedSpringJoint2D::init_method_bindings() {
    method_bindings.mb_get_damping =
        api->rebel_method_bind_get_method(
            "DampedSpringJoint2D",
            "get_damping"
        );
    method_bindings.mb_get_length =
        api->rebel_method_bind_get_method(
            "DampedSpringJoint2D",
            "get_length"
        );
    method_bindings.mb_get_rest_length =
        api->rebel_method_bind_get_method(
            "DampedSpringJoint2D",
            "get_rest_length"
        );
    method_bindings.mb_get_stiffness =
        api->rebel_method_bind_get_method(
            "DampedSpringJoint2D",
            "get_stiffness"
        );
    method_bindings.mb_set_damping =
        api->rebel_method_bind_get_method(
            "DampedSpringJoint2D",
            "set_damping"
        );
    method_bindings.mb_set_length =
        api->rebel_method_bind_get_method(
            "DampedSpringJoint2D",
            "set_length"
        );
    method_bindings.mb_set_rest_length =
        api->rebel_method_bind_get_method(
            "DampedSpringJoint2D",
            "set_rest_length"
        );
    method_bindings.mb_set_stiffness =
        api->rebel_method_bind_get_method(
            "DampedSpringJoint2D",
            "set_stiffness"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "DampedSpringJoint2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

DampedSpringJoint2D::MethodBindings DampedSpringJoint2D::method_bindings = {};
void* DampedSpringJoint2D::class_tag = nullptr;
} // namespace Rebel
