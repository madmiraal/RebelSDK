// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltflight.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Color GLTFLight::get_color() {
    return rebel_icall_color(
        method_bindings.mb_get_color,
        (const Object*)this
    );
}

real_t GLTFLight::get_inner_cone_angle() {
    return rebel_icall_float(
        method_bindings.mb_get_inner_cone_angle,
        (const Object*)this
    );
}

real_t GLTFLight::get_intensity() {
    return rebel_icall_float(
        method_bindings.mb_get_intensity,
        (const Object*)this
    );
}

real_t GLTFLight::get_outer_cone_angle() {
    return rebel_icall_float(
        method_bindings.mb_get_outer_cone_angle,
        (const Object*)this
    );
}

real_t GLTFLight::get_range() {
    return rebel_icall_float(
        method_bindings.mb_get_range,
        (const Object*)this
    );
}

String GLTFLight::get_type() {
    return rebel_icall_string(
        method_bindings.mb_get_type,
        (const Object*)this
    );
}

void GLTFLight::set_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        color
    );
}

void GLTFLight::set_inner_cone_angle(const real_t inner_cone_angle) {
    rebel_icall_void_float(
        method_bindings.mb_set_inner_cone_angle,
        (const Object*)this,
        inner_cone_angle
    );
}

void GLTFLight::set_intensity(const real_t intensity) {
    rebel_icall_void_float(
        method_bindings.mb_set_intensity,
        (const Object*)this,
        intensity
    );
}

void GLTFLight::set_outer_cone_angle(const real_t outer_cone_angle) {
    rebel_icall_void_float(
        method_bindings.mb_set_outer_cone_angle,
        (const Object*)this,
        outer_cone_angle
    );
}

void GLTFLight::set_range(const real_t range) {
    rebel_icall_void_float(
        method_bindings.mb_set_range,
        (const Object*)this,
        range
    );
}

void GLTFLight::set_type(const String type) {
    rebel_icall_void_string(
        method_bindings.mb_set_type,
        (const Object*)this,
        type
    );
}

GLTFLight* GLTFLight::create() {
    return (GLTFLight*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GLTFLight")()
         );
}

void GLTFLight::init_method_bindings() {
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "get_color"
        );
    method_bindings.mb_get_inner_cone_angle =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "get_inner_cone_angle"
        );
    method_bindings.mb_get_intensity =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "get_intensity"
        );
    method_bindings.mb_get_outer_cone_angle =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "get_outer_cone_angle"
        );
    method_bindings.mb_get_range =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "get_range"
        );
    method_bindings.mb_get_type =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "get_type"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "set_color"
        );
    method_bindings.mb_set_inner_cone_angle =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "set_inner_cone_angle"
        );
    method_bindings.mb_set_intensity =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "set_intensity"
        );
    method_bindings.mb_set_outer_cone_angle =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "set_outer_cone_angle"
        );
    method_bindings.mb_set_range =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "set_range"
        );
    method_bindings.mb_set_type =
        api->rebel_method_bind_get_method(
            "GLTFLight",
            "set_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFLight");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFLight::MethodBindings GLTFLight::method_bindings = {};
void* GLTFLight::class_tag = nullptr;
} // namespace Rebel
