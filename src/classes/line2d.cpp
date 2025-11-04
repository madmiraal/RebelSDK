// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/line2d.h"

#include "classes/curve.h"
#include "classes/gradient.h"
#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Line2D::_curve_changed() {
    rebel_icall_void(
        method_bindings.mb__curve_changed,
        (const Object*)this
    );
}

void Line2D::_gradient_changed() {
    rebel_icall_void(
        method_bindings.mb__gradient_changed,
        (const Object*)this
    );
}

void Line2D::add_point(const Vector2 position, const int64_t at_position) {
    rebel_icall_void_vector2_int(
        method_bindings.mb_add_point,
        (const Object*)this,
        position,
        at_position
    );
}

void Line2D::clear_points() {
    rebel_icall_void(
        method_bindings.mb_clear_points,
        (const Object*)this
    );
}

bool Line2D::get_antialiased() const {
    return rebel_icall_bool(
        method_bindings.mb_get_antialiased,
        (const Object*)this
    );
}

Line2D::LineCapMode Line2D::get_begin_cap_mode() const {
    return (Line2D::LineCapMode)rebel_icall_int(
        method_bindings.mb_get_begin_cap_mode,
        (const Object*)this
    );
}

Ref<Curve> Line2D::get_curve() const {
    return Ref<Curve>::create_ref(rebel_icall_object(
        method_bindings.mb_get_curve,
        (const Object*)this
    ));
}

Color Line2D::get_default_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_default_color,
        (const Object*)this
    );
}

Line2D::LineCapMode Line2D::get_end_cap_mode() const {
    return (Line2D::LineCapMode)rebel_icall_int(
        method_bindings.mb_get_end_cap_mode,
        (const Object*)this
    );
}

Ref<Gradient> Line2D::get_gradient() const {
    return Ref<Gradient>::create_ref(rebel_icall_object(
        method_bindings.mb_get_gradient,
        (const Object*)this
    ));
}

Line2D::LineJointMode Line2D::get_joint_mode() const {
    return (Line2D::LineJointMode)rebel_icall_int(
        method_bindings.mb_get_joint_mode,
        (const Object*)this
    );
}

int64_t Line2D::get_point_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_point_count,
        (const Object*)this
    );
}

Vector2 Line2D::get_point_position(const int64_t i) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_point_position,
        (const Object*)this,
        i
    );
}

PoolVector2Array Line2D::get_points() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_points,
        (const Object*)this
    );
}

int64_t Line2D::get_round_precision() const {
    return rebel_icall_int(
        method_bindings.mb_get_round_precision,
        (const Object*)this
    );
}

real_t Line2D::get_sharp_limit() const {
    return rebel_icall_float(
        method_bindings.mb_get_sharp_limit,
        (const Object*)this
    );
}

Ref<Texture> Line2D::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

Line2D::LineTextureMode Line2D::get_texture_mode() const {
    return (Line2D::LineTextureMode)rebel_icall_int(
        method_bindings.mb_get_texture_mode,
        (const Object*)this
    );
}

real_t Line2D::get_width() const {
    return rebel_icall_float(
        method_bindings.mb_get_width,
        (const Object*)this
    );
}

void Line2D::remove_point(const int64_t i) {
    rebel_icall_void_int(
        method_bindings.mb_remove_point,
        (const Object*)this,
        i
    );
}

void Line2D::set_antialiased(const bool antialiased) {
    rebel_icall_void_bool(
        method_bindings.mb_set_antialiased,
        (const Object*)this,
        antialiased
    );
}

void Line2D::set_begin_cap_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_begin_cap_mode,
        (const Object*)this,
        mode
    );
}

void Line2D::set_curve(const Ref<Curve> curve) {
    rebel_icall_void_object(
        method_bindings.mb_set_curve,
        (const Object*)this,
        curve.ptr()
    );
}

void Line2D::set_default_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_default_color,
        (const Object*)this,
        color
    );
}

void Line2D::set_end_cap_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_end_cap_mode,
        (const Object*)this,
        mode
    );
}

void Line2D::set_gradient(const Ref<Gradient> color) {
    rebel_icall_void_object(
        method_bindings.mb_set_gradient,
        (const Object*)this,
        color.ptr()
    );
}

void Line2D::set_joint_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_joint_mode,
        (const Object*)this,
        mode
    );
}

void Line2D::set_point_position(const int64_t i, const Vector2 position) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_set_point_position,
        (const Object*)this,
        i,
        position
    );
}

void Line2D::set_points(const PoolVector2Array points) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_points,
        (const Object*)this,
        points
    );
}

void Line2D::set_round_precision(const int64_t precision) {
    rebel_icall_void_int(
        method_bindings.mb_set_round_precision,
        (const Object*)this,
        precision
    );
}

void Line2D::set_sharp_limit(const real_t limit) {
    rebel_icall_void_float(
        method_bindings.mb_set_sharp_limit,
        (const Object*)this,
        limit
    );
}

void Line2D::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void Line2D::set_texture_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_texture_mode,
        (const Object*)this,
        mode
    );
}

void Line2D::set_width(const real_t width) {
    rebel_icall_void_float(
        method_bindings.mb_set_width,
        (const Object*)this,
        width
    );
}

Line2D* Line2D::create() {
    return (Line2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Line2D")()
         );
}

void Line2D::init_method_bindings() {
    method_bindings.mb__curve_changed =
        api->rebel_method_bind_get_method(
            "Line2D",
            "_curve_changed"
        );
    method_bindings.mb__gradient_changed =
        api->rebel_method_bind_get_method(
            "Line2D",
            "_gradient_changed"
        );
    method_bindings.mb_add_point =
        api->rebel_method_bind_get_method(
            "Line2D",
            "add_point"
        );
    method_bindings.mb_clear_points =
        api->rebel_method_bind_get_method(
            "Line2D",
            "clear_points"
        );
    method_bindings.mb_get_antialiased =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_antialiased"
        );
    method_bindings.mb_get_begin_cap_mode =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_begin_cap_mode"
        );
    method_bindings.mb_get_curve =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_curve"
        );
    method_bindings.mb_get_default_color =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_default_color"
        );
    method_bindings.mb_get_end_cap_mode =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_end_cap_mode"
        );
    method_bindings.mb_get_gradient =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_gradient"
        );
    method_bindings.mb_get_joint_mode =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_joint_mode"
        );
    method_bindings.mb_get_point_count =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_point_count"
        );
    method_bindings.mb_get_point_position =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_point_position"
        );
    method_bindings.mb_get_points =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_points"
        );
    method_bindings.mb_get_round_precision =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_round_precision"
        );
    method_bindings.mb_get_sharp_limit =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_sharp_limit"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_texture"
        );
    method_bindings.mb_get_texture_mode =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_texture_mode"
        );
    method_bindings.mb_get_width =
        api->rebel_method_bind_get_method(
            "Line2D",
            "get_width"
        );
    method_bindings.mb_remove_point =
        api->rebel_method_bind_get_method(
            "Line2D",
            "remove_point"
        );
    method_bindings.mb_set_antialiased =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_antialiased"
        );
    method_bindings.mb_set_begin_cap_mode =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_begin_cap_mode"
        );
    method_bindings.mb_set_curve =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_curve"
        );
    method_bindings.mb_set_default_color =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_default_color"
        );
    method_bindings.mb_set_end_cap_mode =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_end_cap_mode"
        );
    method_bindings.mb_set_gradient =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_gradient"
        );
    method_bindings.mb_set_joint_mode =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_joint_mode"
        );
    method_bindings.mb_set_point_position =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_point_position"
        );
    method_bindings.mb_set_points =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_points"
        );
    method_bindings.mb_set_round_precision =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_round_precision"
        );
    method_bindings.mb_set_sharp_limit =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_sharp_limit"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_texture"
        );
    method_bindings.mb_set_texture_mode =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_texture_mode"
        );
    method_bindings.mb_set_width =
        api->rebel_method_bind_get_method(
            "Line2D",
            "set_width"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Line2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Line2D::MethodBindings Line2D::method_bindings = {};
void* Line2D::class_tag = nullptr;
} // namespace Rebel
