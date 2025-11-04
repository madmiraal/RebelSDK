// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/interpolatedcamera.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t InterpolatedCamera::get_speed() const {
    return rebel_icall_float(
        method_bindings.mb_get_speed,
        (const Object*)this
    );
}

NodePath InterpolatedCamera::get_target_path() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_target_path,
        (const Object*)this
    );
}

bool InterpolatedCamera::is_interpolation_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_interpolation_enabled,
        (const Object*)this
    );
}

void InterpolatedCamera::set_interpolation_enabled(const bool target_path) {
    rebel_icall_void_bool(
        method_bindings.mb_set_interpolation_enabled,
        (const Object*)this,
        target_path
    );
}

void InterpolatedCamera::set_speed(const real_t speed) {
    rebel_icall_void_float(
        method_bindings.mb_set_speed,
        (const Object*)this,
        speed
    );
}

void InterpolatedCamera::set_target(const Object* target) {
    rebel_icall_void_object(
        method_bindings.mb_set_target,
        (const Object*)this,
        target
    );
}

void InterpolatedCamera::set_target_path(const NodePath target_path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_target_path,
        (const Object*)this,
        target_path
    );
}

InterpolatedCamera* InterpolatedCamera::create() {
    return (InterpolatedCamera*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InterpolatedCamera")()
         );
}

void InterpolatedCamera::init_method_bindings() {
    method_bindings.mb_get_speed =
        api->rebel_method_bind_get_method(
            "InterpolatedCamera",
            "get_speed"
        );
    method_bindings.mb_get_target_path =
        api->rebel_method_bind_get_method(
            "InterpolatedCamera",
            "get_target_path"
        );
    method_bindings.mb_is_interpolation_enabled =
        api->rebel_method_bind_get_method(
            "InterpolatedCamera",
            "is_interpolation_enabled"
        );
    method_bindings.mb_set_interpolation_enabled =
        api->rebel_method_bind_get_method(
            "InterpolatedCamera",
            "set_interpolation_enabled"
        );
    method_bindings.mb_set_speed =
        api->rebel_method_bind_get_method(
            "InterpolatedCamera",
            "set_speed"
        );
    method_bindings.mb_set_target =
        api->rebel_method_bind_get_method(
            "InterpolatedCamera",
            "set_target"
        );
    method_bindings.mb_set_target_path =
        api->rebel_method_bind_get_method(
            "InterpolatedCamera",
            "set_target_path"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InterpolatedCamera");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InterpolatedCamera::MethodBindings InterpolatedCamera::method_bindings = {};
void* InterpolatedCamera::class_tag = nullptr;
} // namespace Rebel
