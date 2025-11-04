// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gradient.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Gradient::add_point(const real_t offset, const Color color) {
    rebel_icall_void_float_color(
        method_bindings.mb_add_point,
        (const Object*)this,
        offset,
        color
    );
}

Color Gradient::get_color(const int64_t point) {
    return rebel_icall_color_int(
        method_bindings.mb_get_color,
        (const Object*)this,
        point
    );
}

PoolColorArray Gradient::get_colors() const {
    return rebel_icall_poolcolorarray(
        method_bindings.mb_get_colors,
        (const Object*)this
    );
}

real_t Gradient::get_offset(const int64_t point) {
    return rebel_icall_float_int(
        method_bindings.mb_get_offset,
        (const Object*)this,
        point
    );
}

PoolRealArray Gradient::get_offsets() const {
    return rebel_icall_poolrealarray(
        method_bindings.mb_get_offsets,
        (const Object*)this
    );
}

int64_t Gradient::get_point_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_point_count,
        (const Object*)this
    );
}

Color Gradient::interpolate(const real_t offset) {
    return rebel_icall_color_float(
        method_bindings.mb_interpolate,
        (const Object*)this,
        offset
    );
}

void Gradient::remove_point(const int64_t point) {
    rebel_icall_void_int(
        method_bindings.mb_remove_point,
        (const Object*)this,
        point
    );
}

void Gradient::set_color(const int64_t point, const Color color) {
    rebel_icall_void_int_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        point,
        color
    );
}

void Gradient::set_colors(const PoolColorArray colors) {
    rebel_icall_void_poolcolorarray(
        method_bindings.mb_set_colors,
        (const Object*)this,
        colors
    );
}

void Gradient::set_offset(const int64_t point, const real_t offset) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_offset,
        (const Object*)this,
        point,
        offset
    );
}

void Gradient::set_offsets(const PoolRealArray offsets) {
    rebel_icall_void_poolrealarray(
        method_bindings.mb_set_offsets,
        (const Object*)this,
        offsets
    );
}

Gradient* Gradient::create() {
    return (Gradient*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Gradient")()
         );
}

void Gradient::init_method_bindings() {
    method_bindings.mb_add_point =
        api->rebel_method_bind_get_method(
            "Gradient",
            "add_point"
        );
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "Gradient",
            "get_color"
        );
    method_bindings.mb_get_colors =
        api->rebel_method_bind_get_method(
            "Gradient",
            "get_colors"
        );
    method_bindings.mb_get_offset =
        api->rebel_method_bind_get_method(
            "Gradient",
            "get_offset"
        );
    method_bindings.mb_get_offsets =
        api->rebel_method_bind_get_method(
            "Gradient",
            "get_offsets"
        );
    method_bindings.mb_get_point_count =
        api->rebel_method_bind_get_method(
            "Gradient",
            "get_point_count"
        );
    method_bindings.mb_interpolate =
        api->rebel_method_bind_get_method(
            "Gradient",
            "interpolate"
        );
    method_bindings.mb_remove_point =
        api->rebel_method_bind_get_method(
            "Gradient",
            "remove_point"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "Gradient",
            "set_color"
        );
    method_bindings.mb_set_colors =
        api->rebel_method_bind_get_method(
            "Gradient",
            "set_colors"
        );
    method_bindings.mb_set_offset =
        api->rebel_method_bind_get_method(
            "Gradient",
            "set_offset"
        );
    method_bindings.mb_set_offsets =
        api->rebel_method_bind_get_method(
            "Gradient",
            "set_offsets"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Gradient");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Gradient::MethodBindings Gradient::method_bindings = {};
void* Gradient::class_tag = nullptr;
} // namespace Rebel
