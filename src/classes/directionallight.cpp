// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/directionallight.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
DirectionalLight::ShadowDepthRange DirectionalLight::get_shadow_depth_range() const {
    return (DirectionalLight::ShadowDepthRange)rebel_icall_int(
        method_bindings.mb_get_shadow_depth_range,
        (const Object*)this
    );
}

DirectionalLight::ShadowMode DirectionalLight::get_shadow_mode() const {
    return (DirectionalLight::ShadowMode)rebel_icall_int(
        method_bindings.mb_get_shadow_mode,
        (const Object*)this
    );
}

bool DirectionalLight::is_blend_splits_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_blend_splits_enabled,
        (const Object*)this
    );
}

void DirectionalLight::set_blend_splits(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_blend_splits,
        (const Object*)this,
        enabled
    );
}

void DirectionalLight::set_shadow_depth_range(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_shadow_depth_range,
        (const Object*)this,
        mode
    );
}

void DirectionalLight::set_shadow_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_shadow_mode,
        (const Object*)this,
        mode
    );
}

DirectionalLight* DirectionalLight::create() {
    return (DirectionalLight*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"DirectionalLight")()
         );
}

void DirectionalLight::init_method_bindings() {
    method_bindings.mb_get_shadow_depth_range =
        api->rebel_method_bind_get_method(
            "DirectionalLight",
            "get_shadow_depth_range"
        );
    method_bindings.mb_get_shadow_mode =
        api->rebel_method_bind_get_method(
            "DirectionalLight",
            "get_shadow_mode"
        );
    method_bindings.mb_is_blend_splits_enabled =
        api->rebel_method_bind_get_method(
            "DirectionalLight",
            "is_blend_splits_enabled"
        );
    method_bindings.mb_set_blend_splits =
        api->rebel_method_bind_get_method(
            "DirectionalLight",
            "set_blend_splits"
        );
    method_bindings.mb_set_shadow_depth_range =
        api->rebel_method_bind_get_method(
            "DirectionalLight",
            "set_shadow_depth_range"
        );
    method_bindings.mb_set_shadow_mode =
        api->rebel_method_bind_get_method(
            "DirectionalLight",
            "set_shadow_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "DirectionalLight");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

DirectionalLight::MethodBindings DirectionalLight::method_bindings = {};
void* DirectionalLight::class_tag = nullptr;
} // namespace Rebel
