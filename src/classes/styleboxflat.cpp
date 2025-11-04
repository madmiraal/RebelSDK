// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/styleboxflat.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t StyleBoxFlat::get_aa_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_aa_size,
        (const Object*)this
    );
}

Color StyleBoxFlat::get_bg_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_bg_color,
        (const Object*)this
    );
}

bool StyleBoxFlat::get_border_blend() const {
    return rebel_icall_bool(
        method_bindings.mb_get_border_blend,
        (const Object*)this
    );
}

Color StyleBoxFlat::get_border_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_border_color,
        (const Object*)this
    );
}

int64_t StyleBoxFlat::get_border_width(const int64_t margin) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_border_width,
        (const Object*)this,
        margin
    );
}

int64_t StyleBoxFlat::get_border_width_min() const {
    return rebel_icall_int(
        method_bindings.mb_get_border_width_min,
        (const Object*)this
    );
}

int64_t StyleBoxFlat::get_corner_detail() const {
    return rebel_icall_int(
        method_bindings.mb_get_corner_detail,
        (const Object*)this
    );
}

int64_t StyleBoxFlat::get_corner_radius(const int64_t corner) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_corner_radius,
        (const Object*)this,
        corner
    );
}

real_t StyleBoxFlat::get_expand_margin(const int64_t margin) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_expand_margin,
        (const Object*)this,
        margin
    );
}

Color StyleBoxFlat::get_shadow_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_shadow_color,
        (const Object*)this
    );
}

Vector2 StyleBoxFlat::get_shadow_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_shadow_offset,
        (const Object*)this
    );
}

int64_t StyleBoxFlat::get_shadow_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_shadow_size,
        (const Object*)this
    );
}

bool StyleBoxFlat::is_anti_aliased() const {
    return rebel_icall_bool(
        method_bindings.mb_is_anti_aliased,
        (const Object*)this
    );
}

bool StyleBoxFlat::is_draw_center_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_draw_center_enabled,
        (const Object*)this
    );
}

void StyleBoxFlat::set_aa_size(const real_t size) {
    rebel_icall_void_float(
        method_bindings.mb_set_aa_size,
        (const Object*)this,
        size
    );
}

void StyleBoxFlat::set_anti_aliased(const bool anti_aliased) {
    rebel_icall_void_bool(
        method_bindings.mb_set_anti_aliased,
        (const Object*)this,
        anti_aliased
    );
}

void StyleBoxFlat::set_bg_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_bg_color,
        (const Object*)this,
        color
    );
}

void StyleBoxFlat::set_border_blend(const bool blend) {
    rebel_icall_void_bool(
        method_bindings.mb_set_border_blend,
        (const Object*)this,
        blend
    );
}

void StyleBoxFlat::set_border_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_border_color,
        (const Object*)this,
        color
    );
}

void StyleBoxFlat::set_border_width(const int64_t margin, const int64_t width) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_border_width,
        (const Object*)this,
        margin,
        width
    );
}

void StyleBoxFlat::set_border_width_all(const int64_t width) {
    rebel_icall_void_int(
        method_bindings.mb_set_border_width_all,
        (const Object*)this,
        width
    );
}

void StyleBoxFlat::set_corner_detail(const int64_t detail) {
    rebel_icall_void_int(
        method_bindings.mb_set_corner_detail,
        (const Object*)this,
        detail
    );
}

void StyleBoxFlat::set_corner_radius(const int64_t corner, const int64_t radius) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_corner_radius,
        (const Object*)this,
        corner,
        radius
    );
}

void StyleBoxFlat::set_corner_radius_all(const int64_t radius) {
    rebel_icall_void_int(
        method_bindings.mb_set_corner_radius_all,
        (const Object*)this,
        radius
    );
}

void StyleBoxFlat::set_corner_radius_individual(const int64_t radius_top_left, const int64_t radius_top_right, const int64_t radius_bottom_right, const int64_t radius_bottom_left) {
    rebel_icall_void_int_int_int_int(
        method_bindings.mb_set_corner_radius_individual,
        (const Object*)this,
        radius_top_left,
        radius_top_right,
        radius_bottom_right,
        radius_bottom_left
    );
}

void StyleBoxFlat::set_draw_center(const bool draw_center) {
    rebel_icall_void_bool(
        method_bindings.mb_set_draw_center,
        (const Object*)this,
        draw_center
    );
}

void StyleBoxFlat::set_expand_margin(const int64_t margin, const real_t size) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_expand_margin,
        (const Object*)this,
        margin,
        size
    );
}

void StyleBoxFlat::set_expand_margin_all(const real_t size) {
    rebel_icall_void_float(
        method_bindings.mb_set_expand_margin_all,
        (const Object*)this,
        size
    );
}

void StyleBoxFlat::set_expand_margin_individual(const real_t size_left, const real_t size_top, const real_t size_right, const real_t size_bottom) {
    rebel_icall_void_float_float_float_float(
        method_bindings.mb_set_expand_margin_individual,
        (const Object*)this,
        size_left,
        size_top,
        size_right,
        size_bottom
    );
}

void StyleBoxFlat::set_shadow_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_shadow_color,
        (const Object*)this,
        color
    );
}

void StyleBoxFlat::set_shadow_offset(const Vector2 offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_shadow_offset,
        (const Object*)this,
        offset
    );
}

void StyleBoxFlat::set_shadow_size(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb_set_shadow_size,
        (const Object*)this,
        size
    );
}

StyleBoxFlat* StyleBoxFlat::create() {
    return (StyleBoxFlat*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"StyleBoxFlat")()
         );
}

void StyleBoxFlat::init_method_bindings() {
    method_bindings.mb_get_aa_size =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_aa_size"
        );
    method_bindings.mb_get_bg_color =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_bg_color"
        );
    method_bindings.mb_get_border_blend =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_border_blend"
        );
    method_bindings.mb_get_border_color =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_border_color"
        );
    method_bindings.mb_get_border_width =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_border_width"
        );
    method_bindings.mb_get_border_width_min =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_border_width_min"
        );
    method_bindings.mb_get_corner_detail =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_corner_detail"
        );
    method_bindings.mb_get_corner_radius =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_corner_radius"
        );
    method_bindings.mb_get_expand_margin =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_expand_margin"
        );
    method_bindings.mb_get_shadow_color =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_shadow_color"
        );
    method_bindings.mb_get_shadow_offset =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_shadow_offset"
        );
    method_bindings.mb_get_shadow_size =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "get_shadow_size"
        );
    method_bindings.mb_is_anti_aliased =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "is_anti_aliased"
        );
    method_bindings.mb_is_draw_center_enabled =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "is_draw_center_enabled"
        );
    method_bindings.mb_set_aa_size =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_aa_size"
        );
    method_bindings.mb_set_anti_aliased =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_anti_aliased"
        );
    method_bindings.mb_set_bg_color =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_bg_color"
        );
    method_bindings.mb_set_border_blend =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_border_blend"
        );
    method_bindings.mb_set_border_color =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_border_color"
        );
    method_bindings.mb_set_border_width =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_border_width"
        );
    method_bindings.mb_set_border_width_all =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_border_width_all"
        );
    method_bindings.mb_set_corner_detail =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_corner_detail"
        );
    method_bindings.mb_set_corner_radius =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_corner_radius"
        );
    method_bindings.mb_set_corner_radius_all =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_corner_radius_all"
        );
    method_bindings.mb_set_corner_radius_individual =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_corner_radius_individual"
        );
    method_bindings.mb_set_draw_center =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_draw_center"
        );
    method_bindings.mb_set_expand_margin =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_expand_margin"
        );
    method_bindings.mb_set_expand_margin_all =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_expand_margin_all"
        );
    method_bindings.mb_set_expand_margin_individual =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_expand_margin_individual"
        );
    method_bindings.mb_set_shadow_color =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_shadow_color"
        );
    method_bindings.mb_set_shadow_offset =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_shadow_offset"
        );
    method_bindings.mb_set_shadow_size =
        api->rebel_method_bind_get_method(
            "StyleBoxFlat",
            "set_shadow_size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "StyleBoxFlat");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

StyleBoxFlat::MethodBindings StyleBoxFlat::method_bindings = {};
void* StyleBoxFlat::class_tag = nullptr;
} // namespace Rebel
