// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/vehiclewheel.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t VehicleWheel::get_brake() const {
    return rebel_icall_float(
        method_bindings.mb_get_brake,
        (const Object*)this
    );
}

real_t VehicleWheel::get_damping_compression() const {
    return rebel_icall_float(
        method_bindings.mb_get_damping_compression,
        (const Object*)this
    );
}

real_t VehicleWheel::get_damping_relaxation() const {
    return rebel_icall_float(
        method_bindings.mb_get_damping_relaxation,
        (const Object*)this
    );
}

real_t VehicleWheel::get_engine_force() const {
    return rebel_icall_float(
        method_bindings.mb_get_engine_force,
        (const Object*)this
    );
}

real_t VehicleWheel::get_friction_slip() const {
    return rebel_icall_float(
        method_bindings.mb_get_friction_slip,
        (const Object*)this
    );
}

real_t VehicleWheel::get_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_radius,
        (const Object*)this
    );
}

real_t VehicleWheel::get_roll_influence() const {
    return rebel_icall_float(
        method_bindings.mb_get_roll_influence,
        (const Object*)this
    );
}

real_t VehicleWheel::get_rpm() const {
    return rebel_icall_float(
        method_bindings.mb_get_rpm,
        (const Object*)this
    );
}

real_t VehicleWheel::get_skidinfo() const {
    return rebel_icall_float(
        method_bindings.mb_get_skidinfo,
        (const Object*)this
    );
}

real_t VehicleWheel::get_steering() const {
    return rebel_icall_float(
        method_bindings.mb_get_steering,
        (const Object*)this
    );
}

real_t VehicleWheel::get_suspension_max_force() const {
    return rebel_icall_float(
        method_bindings.mb_get_suspension_max_force,
        (const Object*)this
    );
}

real_t VehicleWheel::get_suspension_rest_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_suspension_rest_length,
        (const Object*)this
    );
}

real_t VehicleWheel::get_suspension_stiffness() const {
    return rebel_icall_float(
        method_bindings.mb_get_suspension_stiffness,
        (const Object*)this
    );
}

real_t VehicleWheel::get_suspension_travel() const {
    return rebel_icall_float(
        method_bindings.mb_get_suspension_travel,
        (const Object*)this
    );
}

bool VehicleWheel::is_in_contact() const {
    return rebel_icall_bool(
        method_bindings.mb_is_in_contact,
        (const Object*)this
    );
}

bool VehicleWheel::is_used_as_steering() const {
    return rebel_icall_bool(
        method_bindings.mb_is_used_as_steering,
        (const Object*)this
    );
}

bool VehicleWheel::is_used_as_traction() const {
    return rebel_icall_bool(
        method_bindings.mb_is_used_as_traction,
        (const Object*)this
    );
}

void VehicleWheel::set_brake(const real_t brake) {
    rebel_icall_void_float(
        method_bindings.mb_set_brake,
        (const Object*)this,
        brake
    );
}

void VehicleWheel::set_damping_compression(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_damping_compression,
        (const Object*)this,
        length
    );
}

void VehicleWheel::set_damping_relaxation(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_damping_relaxation,
        (const Object*)this,
        length
    );
}

void VehicleWheel::set_engine_force(const real_t engine_force) {
    rebel_icall_void_float(
        method_bindings.mb_set_engine_force,
        (const Object*)this,
        engine_force
    );
}

void VehicleWheel::set_friction_slip(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_friction_slip,
        (const Object*)this,
        length
    );
}

void VehicleWheel::set_radius(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_radius,
        (const Object*)this,
        length
    );
}

void VehicleWheel::set_roll_influence(const real_t roll_influence) {
    rebel_icall_void_float(
        method_bindings.mb_set_roll_influence,
        (const Object*)this,
        roll_influence
    );
}

void VehicleWheel::set_steering(const real_t steering) {
    rebel_icall_void_float(
        method_bindings.mb_set_steering,
        (const Object*)this,
        steering
    );
}

void VehicleWheel::set_suspension_max_force(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_suspension_max_force,
        (const Object*)this,
        length
    );
}

void VehicleWheel::set_suspension_rest_length(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_suspension_rest_length,
        (const Object*)this,
        length
    );
}

void VehicleWheel::set_suspension_stiffness(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_suspension_stiffness,
        (const Object*)this,
        length
    );
}

void VehicleWheel::set_suspension_travel(const real_t length) {
    rebel_icall_void_float(
        method_bindings.mb_set_suspension_travel,
        (const Object*)this,
        length
    );
}

void VehicleWheel::set_use_as_steering(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_as_steering,
        (const Object*)this,
        enable
    );
}

void VehicleWheel::set_use_as_traction(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_as_traction,
        (const Object*)this,
        enable
    );
}

VehicleWheel* VehicleWheel::create() {
    return (VehicleWheel*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VehicleWheel")()
         );
}

void VehicleWheel::init_method_bindings() {
    method_bindings.mb_get_brake =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_brake"
        );
    method_bindings.mb_get_damping_compression =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_damping_compression"
        );
    method_bindings.mb_get_damping_relaxation =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_damping_relaxation"
        );
    method_bindings.mb_get_engine_force =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_engine_force"
        );
    method_bindings.mb_get_friction_slip =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_friction_slip"
        );
    method_bindings.mb_get_radius =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_radius"
        );
    method_bindings.mb_get_roll_influence =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_roll_influence"
        );
    method_bindings.mb_get_rpm =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_rpm"
        );
    method_bindings.mb_get_skidinfo =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_skidinfo"
        );
    method_bindings.mb_get_steering =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_steering"
        );
    method_bindings.mb_get_suspension_max_force =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_suspension_max_force"
        );
    method_bindings.mb_get_suspension_rest_length =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_suspension_rest_length"
        );
    method_bindings.mb_get_suspension_stiffness =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_suspension_stiffness"
        );
    method_bindings.mb_get_suspension_travel =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "get_suspension_travel"
        );
    method_bindings.mb_is_in_contact =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "is_in_contact"
        );
    method_bindings.mb_is_used_as_steering =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "is_used_as_steering"
        );
    method_bindings.mb_is_used_as_traction =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "is_used_as_traction"
        );
    method_bindings.mb_set_brake =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_brake"
        );
    method_bindings.mb_set_damping_compression =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_damping_compression"
        );
    method_bindings.mb_set_damping_relaxation =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_damping_relaxation"
        );
    method_bindings.mb_set_engine_force =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_engine_force"
        );
    method_bindings.mb_set_friction_slip =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_friction_slip"
        );
    method_bindings.mb_set_radius =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_radius"
        );
    method_bindings.mb_set_roll_influence =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_roll_influence"
        );
    method_bindings.mb_set_steering =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_steering"
        );
    method_bindings.mb_set_suspension_max_force =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_suspension_max_force"
        );
    method_bindings.mb_set_suspension_rest_length =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_suspension_rest_length"
        );
    method_bindings.mb_set_suspension_stiffness =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_suspension_stiffness"
        );
    method_bindings.mb_set_suspension_travel =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_suspension_travel"
        );
    method_bindings.mb_set_use_as_steering =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_use_as_steering"
        );
    method_bindings.mb_set_use_as_traction =
        api->rebel_method_bind_get_method(
            "VehicleWheel",
            "set_use_as_traction"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VehicleWheel");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VehicleWheel::MethodBindings VehicleWheel::method_bindings = {};
void* VehicleWheel::class_tag = nullptr;
} // namespace Rebel
