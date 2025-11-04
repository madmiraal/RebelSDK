// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/cpuparticles2d.h"

#include "classes/curve.h"
#include "classes/gradient.h"
#include "classes/icalls.h"
#include "classes/node.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void CPUParticles2D::_texture_changed() {
    rebel_icall_void(
        method_bindings.mb__texture_changed,
        (const Object*)this
    );
}

void CPUParticles2D::_update_render_thread() {
    rebel_icall_void(
        method_bindings.mb__update_render_thread,
        (const Object*)this
    );
}

void CPUParticles2D::convert_from_particles(const Node* particles) {
    rebel_icall_void_object(
        method_bindings.mb_convert_from_particles,
        (const Object*)this,
        particles
    );
}

int64_t CPUParticles2D::get_amount() const {
    return rebel_icall_int(
        method_bindings.mb_get_amount,
        (const Object*)this
    );
}

Color CPUParticles2D::get_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_color,
        (const Object*)this
    );
}

Ref<Gradient> CPUParticles2D::get_color_ramp() const {
    return Ref<Gradient>::create_ref(rebel_icall_object(
        method_bindings.mb_get_color_ramp,
        (const Object*)this
    ));
}

Vector2 CPUParticles2D::get_direction() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_direction,
        (const Object*)this
    );
}

CPUParticles2D::DrawOrder CPUParticles2D::get_draw_order() const {
    return (CPUParticles2D::DrawOrder)rebel_icall_int(
        method_bindings.mb_get_draw_order,
        (const Object*)this
    );
}

PoolColorArray CPUParticles2D::get_emission_colors() const {
    return rebel_icall_poolcolorarray(
        method_bindings.mb_get_emission_colors,
        (const Object*)this
    );
}

PoolVector2Array CPUParticles2D::get_emission_normals() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_emission_normals,
        (const Object*)this
    );
}

PoolVector2Array CPUParticles2D::get_emission_points() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb_get_emission_points,
        (const Object*)this
    );
}

Vector2 CPUParticles2D::get_emission_rect_extents() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_emission_rect_extents,
        (const Object*)this
    );
}

CPUParticles2D::EmissionShape CPUParticles2D::get_emission_shape() const {
    return (CPUParticles2D::EmissionShape)rebel_icall_int(
        method_bindings.mb_get_emission_shape,
        (const Object*)this
    );
}

real_t CPUParticles2D::get_emission_sphere_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_sphere_radius,
        (const Object*)this
    );
}

real_t CPUParticles2D::get_explosiveness_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_explosiveness_ratio,
        (const Object*)this
    );
}

int64_t CPUParticles2D::get_fixed_fps() const {
    return rebel_icall_int(
        method_bindings.mb_get_fixed_fps,
        (const Object*)this
    );
}

bool CPUParticles2D::get_fractional_delta() const {
    return rebel_icall_bool(
        method_bindings.mb_get_fractional_delta,
        (const Object*)this
    );
}

Vector2 CPUParticles2D::get_gravity() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_gravity,
        (const Object*)this
    );
}

real_t CPUParticles2D::get_lifetime() const {
    return rebel_icall_float(
        method_bindings.mb_get_lifetime,
        (const Object*)this
    );
}

real_t CPUParticles2D::get_lifetime_randomness() const {
    return rebel_icall_float(
        method_bindings.mb_get_lifetime_randomness,
        (const Object*)this
    );
}

Ref<Texture> CPUParticles2D::get_normalmap() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_normalmap,
        (const Object*)this
    ));
}

bool CPUParticles2D::get_one_shot() const {
    return rebel_icall_bool(
        method_bindings.mb_get_one_shot,
        (const Object*)this
    );
}

real_t CPUParticles2D::get_param(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param,
        (const Object*)this,
        param
    );
}

Ref<Curve> CPUParticles2D::get_param_curve(const int64_t param) const {
    return Ref<Curve>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_param_curve,
        (const Object*)this,
        param
    ));
}

real_t CPUParticles2D::get_param_randomness(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param_randomness,
        (const Object*)this,
        param
    );
}

bool CPUParticles2D::get_particle_flag(const int64_t flag) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_particle_flag,
        (const Object*)this,
        flag
    );
}

real_t CPUParticles2D::get_pre_process_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_pre_process_time,
        (const Object*)this
    );
}

real_t CPUParticles2D::get_randomness_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_randomness_ratio,
        (const Object*)this
    );
}

real_t CPUParticles2D::get_speed_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_speed_scale,
        (const Object*)this
    );
}

real_t CPUParticles2D::get_spread() const {
    return rebel_icall_float(
        method_bindings.mb_get_spread,
        (const Object*)this
    );
}

Ref<Texture> CPUParticles2D::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

bool CPUParticles2D::get_use_local_coordinates() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_local_coordinates,
        (const Object*)this
    );
}

bool CPUParticles2D::is_emitting() const {
    return rebel_icall_bool(
        method_bindings.mb_is_emitting,
        (const Object*)this
    );
}

void CPUParticles2D::restart() {
    rebel_icall_void(
        method_bindings.mb_restart,
        (const Object*)this
    );
}

void CPUParticles2D::set_amount(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_amount,
        (const Object*)this,
        amount
    );
}

void CPUParticles2D::set_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        color
    );
}

void CPUParticles2D::set_color_ramp(const Ref<Gradient> ramp) {
    rebel_icall_void_object(
        method_bindings.mb_set_color_ramp,
        (const Object*)this,
        ramp.ptr()
    );
}

void CPUParticles2D::set_direction(const Vector2 direction) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_direction,
        (const Object*)this,
        direction
    );
}

void CPUParticles2D::set_draw_order(const int64_t order) {
    rebel_icall_void_int(
        method_bindings.mb_set_draw_order,
        (const Object*)this,
        order
    );
}

void CPUParticles2D::set_emission_colors(const PoolColorArray array) {
    rebel_icall_void_poolcolorarray(
        method_bindings.mb_set_emission_colors,
        (const Object*)this,
        array
    );
}

void CPUParticles2D::set_emission_normals(const PoolVector2Array array) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_emission_normals,
        (const Object*)this,
        array
    );
}

void CPUParticles2D::set_emission_points(const PoolVector2Array array) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_emission_points,
        (const Object*)this,
        array
    );
}

void CPUParticles2D::set_emission_rect_extents(const Vector2 extents) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_emission_rect_extents,
        (const Object*)this,
        extents
    );
}

void CPUParticles2D::set_emission_shape(const int64_t shape) {
    rebel_icall_void_int(
        method_bindings.mb_set_emission_shape,
        (const Object*)this,
        shape
    );
}

void CPUParticles2D::set_emission_sphere_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_sphere_radius,
        (const Object*)this,
        radius
    );
}

void CPUParticles2D::set_emitting(const bool emitting) {
    rebel_icall_void_bool(
        method_bindings.mb_set_emitting,
        (const Object*)this,
        emitting
    );
}

void CPUParticles2D::set_explosiveness_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_set_explosiveness_ratio,
        (const Object*)this,
        ratio
    );
}

void CPUParticles2D::set_fixed_fps(const int64_t fps) {
    rebel_icall_void_int(
        method_bindings.mb_set_fixed_fps,
        (const Object*)this,
        fps
    );
}

void CPUParticles2D::set_fractional_delta(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_fractional_delta,
        (const Object*)this,
        enable
    );
}

void CPUParticles2D::set_gravity(const Vector2 accel_vec) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_gravity,
        (const Object*)this,
        accel_vec
    );
}

void CPUParticles2D::set_lifetime(const real_t secs) {
    rebel_icall_void_float(
        method_bindings.mb_set_lifetime,
        (const Object*)this,
        secs
    );
}

void CPUParticles2D::set_lifetime_randomness(const real_t random) {
    rebel_icall_void_float(
        method_bindings.mb_set_lifetime_randomness,
        (const Object*)this,
        random
    );
}

void CPUParticles2D::set_normalmap(const Ref<Texture> normalmap) {
    rebel_icall_void_object(
        method_bindings.mb_set_normalmap,
        (const Object*)this,
        normalmap.ptr()
    );
}

void CPUParticles2D::set_one_shot(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_one_shot,
        (const Object*)this,
        enable
    );
}

void CPUParticles2D::set_param(const int64_t param, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param,
        (const Object*)this,
        param,
        value
    );
}

void CPUParticles2D::set_param_curve(const int64_t param, const Ref<Curve> curve) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_param_curve,
        (const Object*)this,
        param,
        curve.ptr()
    );
}

void CPUParticles2D::set_param_randomness(const int64_t param, const real_t randomness) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param_randomness,
        (const Object*)this,
        param,
        randomness
    );
}

void CPUParticles2D::set_particle_flag(const int64_t flag, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_particle_flag,
        (const Object*)this,
        flag,
        enable
    );
}

void CPUParticles2D::set_pre_process_time(const real_t secs) {
    rebel_icall_void_float(
        method_bindings.mb_set_pre_process_time,
        (const Object*)this,
        secs
    );
}

void CPUParticles2D::set_randomness_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_set_randomness_ratio,
        (const Object*)this,
        ratio
    );
}

void CPUParticles2D::set_speed_scale(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_speed_scale,
        (const Object*)this,
        scale
    );
}

void CPUParticles2D::set_spread(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_spread,
        (const Object*)this,
        degrees
    );
}

void CPUParticles2D::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void CPUParticles2D::set_use_local_coordinates(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_local_coordinates,
        (const Object*)this,
        enable
    );
}

CPUParticles2D* CPUParticles2D::create() {
    return (CPUParticles2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CPUParticles2D")()
         );
}

void CPUParticles2D::init_method_bindings() {
    method_bindings.mb__texture_changed =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "_texture_changed"
        );
    method_bindings.mb__update_render_thread =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "_update_render_thread"
        );
    method_bindings.mb_convert_from_particles =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "convert_from_particles"
        );
    method_bindings.mb_get_amount =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_amount"
        );
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_color"
        );
    method_bindings.mb_get_color_ramp =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_color_ramp"
        );
    method_bindings.mb_get_direction =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_direction"
        );
    method_bindings.mb_get_draw_order =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_draw_order"
        );
    method_bindings.mb_get_emission_colors =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_emission_colors"
        );
    method_bindings.mb_get_emission_normals =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_emission_normals"
        );
    method_bindings.mb_get_emission_points =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_emission_points"
        );
    method_bindings.mb_get_emission_rect_extents =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_emission_rect_extents"
        );
    method_bindings.mb_get_emission_shape =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_emission_shape"
        );
    method_bindings.mb_get_emission_sphere_radius =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_emission_sphere_radius"
        );
    method_bindings.mb_get_explosiveness_ratio =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_explosiveness_ratio"
        );
    method_bindings.mb_get_fixed_fps =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_fixed_fps"
        );
    method_bindings.mb_get_fractional_delta =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_fractional_delta"
        );
    method_bindings.mb_get_gravity =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_gravity"
        );
    method_bindings.mb_get_lifetime =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_lifetime"
        );
    method_bindings.mb_get_lifetime_randomness =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_lifetime_randomness"
        );
    method_bindings.mb_get_normalmap =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_normalmap"
        );
    method_bindings.mb_get_one_shot =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_one_shot"
        );
    method_bindings.mb_get_param =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_param"
        );
    method_bindings.mb_get_param_curve =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_param_curve"
        );
    method_bindings.mb_get_param_randomness =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_param_randomness"
        );
    method_bindings.mb_get_particle_flag =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_particle_flag"
        );
    method_bindings.mb_get_pre_process_time =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_pre_process_time"
        );
    method_bindings.mb_get_randomness_ratio =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_randomness_ratio"
        );
    method_bindings.mb_get_speed_scale =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_speed_scale"
        );
    method_bindings.mb_get_spread =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_spread"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_texture"
        );
    method_bindings.mb_get_use_local_coordinates =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "get_use_local_coordinates"
        );
    method_bindings.mb_is_emitting =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "is_emitting"
        );
    method_bindings.mb_restart =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "restart"
        );
    method_bindings.mb_set_amount =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_amount"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_color"
        );
    method_bindings.mb_set_color_ramp =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_color_ramp"
        );
    method_bindings.mb_set_direction =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_direction"
        );
    method_bindings.mb_set_draw_order =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_draw_order"
        );
    method_bindings.mb_set_emission_colors =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_emission_colors"
        );
    method_bindings.mb_set_emission_normals =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_emission_normals"
        );
    method_bindings.mb_set_emission_points =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_emission_points"
        );
    method_bindings.mb_set_emission_rect_extents =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_emission_rect_extents"
        );
    method_bindings.mb_set_emission_shape =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_emission_shape"
        );
    method_bindings.mb_set_emission_sphere_radius =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_emission_sphere_radius"
        );
    method_bindings.mb_set_emitting =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_emitting"
        );
    method_bindings.mb_set_explosiveness_ratio =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_explosiveness_ratio"
        );
    method_bindings.mb_set_fixed_fps =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_fixed_fps"
        );
    method_bindings.mb_set_fractional_delta =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_fractional_delta"
        );
    method_bindings.mb_set_gravity =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_gravity"
        );
    method_bindings.mb_set_lifetime =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_lifetime"
        );
    method_bindings.mb_set_lifetime_randomness =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_lifetime_randomness"
        );
    method_bindings.mb_set_normalmap =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_normalmap"
        );
    method_bindings.mb_set_one_shot =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_one_shot"
        );
    method_bindings.mb_set_param =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_param"
        );
    method_bindings.mb_set_param_curve =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_param_curve"
        );
    method_bindings.mb_set_param_randomness =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_param_randomness"
        );
    method_bindings.mb_set_particle_flag =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_particle_flag"
        );
    method_bindings.mb_set_pre_process_time =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_pre_process_time"
        );
    method_bindings.mb_set_randomness_ratio =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_randomness_ratio"
        );
    method_bindings.mb_set_speed_scale =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_speed_scale"
        );
    method_bindings.mb_set_spread =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_spread"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_texture"
        );
    method_bindings.mb_set_use_local_coordinates =
        api->rebel_method_bind_get_method(
            "CPUParticles2D",
            "set_use_local_coordinates"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CPUParticles2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CPUParticles2D::MethodBindings CPUParticles2D::method_bindings = {};
void* CPUParticles2D::class_tag = nullptr;
} // namespace Rebel
