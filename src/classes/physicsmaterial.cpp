// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physicsmaterial.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t PhysicsMaterial::get_bounce() const {
    return rebel_icall_float(
        method_bindings.mb_get_bounce,
        (const Object*)this
    );
}

real_t PhysicsMaterial::get_friction() const {
    return rebel_icall_float(
        method_bindings.mb_get_friction,
        (const Object*)this
    );
}

bool PhysicsMaterial::is_absorbent() const {
    return rebel_icall_bool(
        method_bindings.mb_is_absorbent,
        (const Object*)this
    );
}

bool PhysicsMaterial::is_rough() const {
    return rebel_icall_bool(
        method_bindings.mb_is_rough,
        (const Object*)this
    );
}

void PhysicsMaterial::set_absorbent(const bool absorbent) {
    rebel_icall_void_bool(
        method_bindings.mb_set_absorbent,
        (const Object*)this,
        absorbent
    );
}

void PhysicsMaterial::set_bounce(const real_t bounce) {
    rebel_icall_void_float(
        method_bindings.mb_set_bounce,
        (const Object*)this,
        bounce
    );
}

void PhysicsMaterial::set_friction(const real_t friction) {
    rebel_icall_void_float(
        method_bindings.mb_set_friction,
        (const Object*)this,
        friction
    );
}

void PhysicsMaterial::set_rough(const bool rough) {
    rebel_icall_void_bool(
        method_bindings.mb_set_rough,
        (const Object*)this,
        rough
    );
}

PhysicsMaterial* PhysicsMaterial::create() {
    return (PhysicsMaterial*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PhysicsMaterial")()
         );
}

void PhysicsMaterial::init_method_bindings() {
    method_bindings.mb_get_bounce =
        api->rebel_method_bind_get_method(
            "PhysicsMaterial",
            "get_bounce"
        );
    method_bindings.mb_get_friction =
        api->rebel_method_bind_get_method(
            "PhysicsMaterial",
            "get_friction"
        );
    method_bindings.mb_is_absorbent =
        api->rebel_method_bind_get_method(
            "PhysicsMaterial",
            "is_absorbent"
        );
    method_bindings.mb_is_rough =
        api->rebel_method_bind_get_method(
            "PhysicsMaterial",
            "is_rough"
        );
    method_bindings.mb_set_absorbent =
        api->rebel_method_bind_get_method(
            "PhysicsMaterial",
            "set_absorbent"
        );
    method_bindings.mb_set_bounce =
        api->rebel_method_bind_get_method(
            "PhysicsMaterial",
            "set_bounce"
        );
    method_bindings.mb_set_friction =
        api->rebel_method_bind_get_method(
            "PhysicsMaterial",
            "set_friction"
        );
    method_bindings.mb_set_rough =
        api->rebel_method_bind_get_method(
            "PhysicsMaterial",
            "set_rough"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PhysicsMaterial");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PhysicsMaterial::MethodBindings PhysicsMaterial::method_bindings = {};
void* PhysicsMaterial::class_tag = nullptr;
} // namespace Rebel
