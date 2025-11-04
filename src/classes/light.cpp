// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/light.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Light::BakeMode Light::get_bake_mode() const {
    return (Light::BakeMode)rebel_icall_int(
        method_bindings.mb_get_bake_mode,
        (const Object*)this
    );
}

Color Light::get_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_color,
        (const Object*)this
    );
}

int64_t Light::get_cull_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_cull_mask,
        (const Object*)this
    );
}

real_t Light::get_param(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param,
        (const Object*)this,
        param
    );
}

Color Light::get_shadow_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_shadow_color,
        (const Object*)this
    );
}

bool Light::get_shadow_reverse_cull_face() const {
    return rebel_icall_bool(
        method_bindings.mb_get_shadow_reverse_cull_face,
        (const Object*)this
    );
}

bool Light::has_shadow() const {
    return rebel_icall_bool(
        method_bindings.mb_has_shadow,
        (const Object*)this
    );
}

bool Light::is_editor_only() const {
    return rebel_icall_bool(
        method_bindings.mb_is_editor_only,
        (const Object*)this
    );
}

bool Light::is_negative() const {
    return rebel_icall_bool(
        method_bindings.mb_is_negative,
        (const Object*)this
    );
}

void Light::set_bake_mode(const int64_t bake_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_bake_mode,
        (const Object*)this,
        bake_mode
    );
}

void Light::set_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        color
    );
}

void Light::set_cull_mask(const int64_t cull_mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_cull_mask,
        (const Object*)this,
        cull_mask
    );
}

void Light::set_editor_only(const bool editor_only) {
    rebel_icall_void_bool(
        method_bindings.mb_set_editor_only,
        (const Object*)this,
        editor_only
    );
}

void Light::set_negative(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_negative,
        (const Object*)this,
        enabled
    );
}

void Light::set_param(const int64_t param, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param,
        (const Object*)this,
        param,
        value
    );
}

void Light::set_shadow(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_shadow,
        (const Object*)this,
        enabled
    );
}

void Light::set_shadow_color(const Color shadow_color) {
    rebel_icall_void_color(
        method_bindings.mb_set_shadow_color,
        (const Object*)this,
        shadow_color
    );
}

void Light::set_shadow_reverse_cull_face(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_shadow_reverse_cull_face,
        (const Object*)this,
        enable
    );
}

void Light::init_method_bindings() {
    method_bindings.mb_get_bake_mode =
        api->rebel_method_bind_get_method(
            "Light",
            "get_bake_mode"
        );
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "Light",
            "get_color"
        );
    method_bindings.mb_get_cull_mask =
        api->rebel_method_bind_get_method(
            "Light",
            "get_cull_mask"
        );
    method_bindings.mb_get_param =
        api->rebel_method_bind_get_method(
            "Light",
            "get_param"
        );
    method_bindings.mb_get_shadow_color =
        api->rebel_method_bind_get_method(
            "Light",
            "get_shadow_color"
        );
    method_bindings.mb_get_shadow_reverse_cull_face =
        api->rebel_method_bind_get_method(
            "Light",
            "get_shadow_reverse_cull_face"
        );
    method_bindings.mb_has_shadow =
        api->rebel_method_bind_get_method(
            "Light",
            "has_shadow"
        );
    method_bindings.mb_is_editor_only =
        api->rebel_method_bind_get_method(
            "Light",
            "is_editor_only"
        );
    method_bindings.mb_is_negative =
        api->rebel_method_bind_get_method(
            "Light",
            "is_negative"
        );
    method_bindings.mb_set_bake_mode =
        api->rebel_method_bind_get_method(
            "Light",
            "set_bake_mode"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "Light",
            "set_color"
        );
    method_bindings.mb_set_cull_mask =
        api->rebel_method_bind_get_method(
            "Light",
            "set_cull_mask"
        );
    method_bindings.mb_set_editor_only =
        api->rebel_method_bind_get_method(
            "Light",
            "set_editor_only"
        );
    method_bindings.mb_set_negative =
        api->rebel_method_bind_get_method(
            "Light",
            "set_negative"
        );
    method_bindings.mb_set_param =
        api->rebel_method_bind_get_method(
            "Light",
            "set_param"
        );
    method_bindings.mb_set_shadow =
        api->rebel_method_bind_get_method(
            "Light",
            "set_shadow"
        );
    method_bindings.mb_set_shadow_color =
        api->rebel_method_bind_get_method(
            "Light",
            "set_shadow_color"
        );
    method_bindings.mb_set_shadow_reverse_cull_face =
        api->rebel_method_bind_get_method(
            "Light",
            "set_shadow_reverse_cull_face"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Light");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Light::MethodBindings Light::method_bindings = {};
void* Light::class_tag = nullptr;
} // namespace Rebel
