// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/staticbody.h"

#include "classes/icalls.h"
#include "classes/physicsmaterial.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void StaticBody::_reload_physics_characteristics() {
    rebel_icall_void(
        method_bindings.mb__reload_physics_characteristics,
        (const Object*)this
    );
}

real_t StaticBody::get_bounce() const {
    return rebel_icall_float(
        method_bindings.mb_get_bounce,
        (const Object*)this
    );
}

Vector3 StaticBody::get_constant_angular_velocity() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_constant_angular_velocity,
        (const Object*)this
    );
}

Vector3 StaticBody::get_constant_linear_velocity() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_constant_linear_velocity,
        (const Object*)this
    );
}

real_t StaticBody::get_friction() const {
    return rebel_icall_float(
        method_bindings.mb_get_friction,
        (const Object*)this
    );
}

Ref<PhysicsMaterial> StaticBody::get_physics_material_override() const {
    return Ref<PhysicsMaterial>::create_ref(rebel_icall_object(
        method_bindings.mb_get_physics_material_override,
        (const Object*)this
    ));
}

void StaticBody::set_bounce(const real_t bounce) {
    rebel_icall_void_float(
        method_bindings.mb_set_bounce,
        (const Object*)this,
        bounce
    );
}

void StaticBody::set_constant_angular_velocity(const Vector3 vel) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_constant_angular_velocity,
        (const Object*)this,
        vel
    );
}

void StaticBody::set_constant_linear_velocity(const Vector3 vel) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_constant_linear_velocity,
        (const Object*)this,
        vel
    );
}

void StaticBody::set_friction(const real_t friction) {
    rebel_icall_void_float(
        method_bindings.mb_set_friction,
        (const Object*)this,
        friction
    );
}

void StaticBody::set_physics_material_override(const Ref<PhysicsMaterial> physics_material_override) {
    rebel_icall_void_object(
        method_bindings.mb_set_physics_material_override,
        (const Object*)this,
        physics_material_override.ptr()
    );
}

StaticBody* StaticBody::create() {
    return (StaticBody*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"StaticBody")()
         );
}

void StaticBody::init_method_bindings() {
    method_bindings.mb__reload_physics_characteristics =
        api->rebel_method_bind_get_method(
            "StaticBody",
            "_reload_physics_characteristics"
        );
    method_bindings.mb_get_bounce =
        api->rebel_method_bind_get_method(
            "StaticBody",
            "get_bounce"
        );
    method_bindings.mb_get_constant_angular_velocity =
        api->rebel_method_bind_get_method(
            "StaticBody",
            "get_constant_angular_velocity"
        );
    method_bindings.mb_get_constant_linear_velocity =
        api->rebel_method_bind_get_method(
            "StaticBody",
            "get_constant_linear_velocity"
        );
    method_bindings.mb_get_friction =
        api->rebel_method_bind_get_method(
            "StaticBody",
            "get_friction"
        );
    method_bindings.mb_get_physics_material_override =
        api->rebel_method_bind_get_method(
            "StaticBody",
            "get_physics_material_override"
        );
    method_bindings.mb_set_bounce =
        api->rebel_method_bind_get_method(
            "StaticBody",
            "set_bounce"
        );
    method_bindings.mb_set_constant_angular_velocity =
        api->rebel_method_bind_get_method(
            "StaticBody",
            "set_constant_angular_velocity"
        );
    method_bindings.mb_set_constant_linear_velocity =
        api->rebel_method_bind_get_method(
            "StaticBody",
            "set_constant_linear_velocity"
        );
    method_bindings.mb_set_friction =
        api->rebel_method_bind_get_method(
            "StaticBody",
            "set_friction"
        );
    method_bindings.mb_set_physics_material_override =
        api->rebel_method_bind_get_method(
            "StaticBody",
            "set_physics_material_override"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "StaticBody");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

StaticBody::MethodBindings StaticBody::method_bindings = {};
void* StaticBody::class_tag = nullptr;
} // namespace Rebel
