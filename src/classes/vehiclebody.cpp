// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/vehiclebody.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t VehicleBody::get_brake() const {
    return rebel_icall_float(
        method_bindings.mb_get_brake,
        (const Object*)this
    );
}

real_t VehicleBody::get_engine_force() const {
    return rebel_icall_float(
        method_bindings.mb_get_engine_force,
        (const Object*)this
    );
}

real_t VehicleBody::get_steering() const {
    return rebel_icall_float(
        method_bindings.mb_get_steering,
        (const Object*)this
    );
}

void VehicleBody::set_brake(const real_t brake) {
    rebel_icall_void_float(
        method_bindings.mb_set_brake,
        (const Object*)this,
        brake
    );
}

void VehicleBody::set_engine_force(const real_t engine_force) {
    rebel_icall_void_float(
        method_bindings.mb_set_engine_force,
        (const Object*)this,
        engine_force
    );
}

void VehicleBody::set_steering(const real_t steering) {
    rebel_icall_void_float(
        method_bindings.mb_set_steering,
        (const Object*)this,
        steering
    );
}

VehicleBody* VehicleBody::create() {
    return (VehicleBody*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VehicleBody")()
         );
}

void VehicleBody::init_method_bindings() {
    method_bindings.mb_get_brake =
        api->rebel_method_bind_get_method(
            "VehicleBody",
            "get_brake"
        );
    method_bindings.mb_get_engine_force =
        api->rebel_method_bind_get_method(
            "VehicleBody",
            "get_engine_force"
        );
    method_bindings.mb_get_steering =
        api->rebel_method_bind_get_method(
            "VehicleBody",
            "get_steering"
        );
    method_bindings.mb_set_brake =
        api->rebel_method_bind_get_method(
            "VehicleBody",
            "set_brake"
        );
    method_bindings.mb_set_engine_force =
        api->rebel_method_bind_get_method(
            "VehicleBody",
            "set_engine_force"
        );
    method_bindings.mb_set_steering =
        api->rebel_method_bind_get_method(
            "VehicleBody",
            "set_steering"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VehicleBody");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VehicleBody::MethodBindings VehicleBody::method_bindings = {};
void* VehicleBody::class_tag = nullptr;
} // namespace Rebel
