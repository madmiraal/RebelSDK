// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/cpuparticles.h"

#include "classes/curve.h"
#include "classes/gradient.h"
#include "classes/icalls.h"
#include "classes/mesh.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void CPUParticles::_update_render_thread() {
    rebel_icall_void(
        method_bindings.mb__update_render_thread,
        (const Object*)this
    );
}

void CPUParticles::convert_from_particles(const Node* particles) {
    rebel_icall_void_object(
        method_bindings.mb_convert_from_particles,
        (const Object*)this,
        particles
    );
}

int64_t CPUParticles::get_amount() const {
    return rebel_icall_int(
        method_bindings.mb_get_amount,
        (const Object*)this
    );
}

Color CPUParticles::get_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_color,
        (const Object*)this
    );
}

Ref<Gradient> CPUParticles::get_color_ramp() const {
    return Ref<Gradient>::create_ref(rebel_icall_object(
        method_bindings.mb_get_color_ramp,
        (const Object*)this
    ));
}

Vector3 CPUParticles::get_direction() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_direction,
        (const Object*)this
    );
}

CPUParticles::DrawOrder CPUParticles::get_draw_order() const {
    return (CPUParticles::DrawOrder)rebel_icall_int(
        method_bindings.mb_get_draw_order,
        (const Object*)this
    );
}

Vector3 CPUParticles::get_emission_box_extents() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_emission_box_extents,
        (const Object*)this
    );
}

PoolColorArray CPUParticles::get_emission_colors() const {
    return rebel_icall_poolcolorarray(
        method_bindings.mb_get_emission_colors,
        (const Object*)this
    );
}

PoolVector3Array CPUParticles::get_emission_normals() const {
    return rebel_icall_poolvector3array(
        method_bindings.mb_get_emission_normals,
        (const Object*)this
    );
}

PoolVector3Array CPUParticles::get_emission_points() const {
    return rebel_icall_poolvector3array(
        method_bindings.mb_get_emission_points,
        (const Object*)this
    );
}

Vector3 CPUParticles::get_emission_ring_axis() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_emission_ring_axis,
        (const Object*)this
    );
}

real_t CPUParticles::get_emission_ring_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_ring_height,
        (const Object*)this
    );
}

real_t CPUParticles::get_emission_ring_inner_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_ring_inner_radius,
        (const Object*)this
    );
}

real_t CPUParticles::get_emission_ring_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_ring_radius,
        (const Object*)this
    );
}

CPUParticles::EmissionShape CPUParticles::get_emission_shape() const {
    return (CPUParticles::EmissionShape)rebel_icall_int(
        method_bindings.mb_get_emission_shape,
        (const Object*)this
    );
}

real_t CPUParticles::get_emission_sphere_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_sphere_radius,
        (const Object*)this
    );
}

real_t CPUParticles::get_explosiveness_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_explosiveness_ratio,
        (const Object*)this
    );
}

int64_t CPUParticles::get_fixed_fps() const {
    return rebel_icall_int(
        method_bindings.mb_get_fixed_fps,
        (const Object*)this
    );
}

real_t CPUParticles::get_flatness() const {
    return rebel_icall_float(
        method_bindings.mb_get_flatness,
        (const Object*)this
    );
}

bool CPUParticles::get_fractional_delta() const {
    return rebel_icall_bool(
        method_bindings.mb_get_fractional_delta,
        (const Object*)this
    );
}

Vector3 CPUParticles::get_gravity() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_gravity,
        (const Object*)this
    );
}

real_t CPUParticles::get_lifetime() const {
    return rebel_icall_float(
        method_bindings.mb_get_lifetime,
        (const Object*)this
    );
}

real_t CPUParticles::get_lifetime_randomness() const {
    return rebel_icall_float(
        method_bindings.mb_get_lifetime_randomness,
        (const Object*)this
    );
}

Ref<Mesh> CPUParticles::get_mesh() const {
    return Ref<Mesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_mesh,
        (const Object*)this
    ));
}

bool CPUParticles::get_one_shot() const {
    return rebel_icall_bool(
        method_bindings.mb_get_one_shot,
        (const Object*)this
    );
}

real_t CPUParticles::get_param(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param,
        (const Object*)this,
        param
    );
}

Ref<Curve> CPUParticles::get_param_curve(const int64_t param) const {
    return Ref<Curve>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_param_curve,
        (const Object*)this,
        param
    ));
}

real_t CPUParticles::get_param_randomness(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param_randomness,
        (const Object*)this,
        param
    );
}

bool CPUParticles::get_particle_flag(const int64_t flag) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_particle_flag,
        (const Object*)this,
        flag
    );
}

real_t CPUParticles::get_pre_process_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_pre_process_time,
        (const Object*)this
    );
}

real_t CPUParticles::get_randomness_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_randomness_ratio,
        (const Object*)this
    );
}

real_t CPUParticles::get_speed_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_speed_scale,
        (const Object*)this
    );
}

real_t CPUParticles::get_spread() const {
    return rebel_icall_float(
        method_bindings.mb_get_spread,
        (const Object*)this
    );
}

bool CPUParticles::get_use_local_coordinates() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_local_coordinates,
        (const Object*)this
    );
}

bool CPUParticles::is_emitting() const {
    return rebel_icall_bool(
        method_bindings.mb_is_emitting,
        (const Object*)this
    );
}

void CPUParticles::restart() {
    rebel_icall_void(
        method_bindings.mb_restart,
        (const Object*)this
    );
}

void CPUParticles::set_amount(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_amount,
        (const Object*)this,
        amount
    );
}

void CPUParticles::set_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        color
    );
}

void CPUParticles::set_color_ramp(const Ref<Gradient> ramp) {
    rebel_icall_void_object(
        method_bindings.mb_set_color_ramp,
        (const Object*)this,
        ramp.ptr()
    );
}

void CPUParticles::set_direction(const Vector3 direction) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_direction,
        (const Object*)this,
        direction
    );
}

void CPUParticles::set_draw_order(const int64_t order) {
    rebel_icall_void_int(
        method_bindings.mb_set_draw_order,
        (const Object*)this,
        order
    );
}

void CPUParticles::set_emission_box_extents(const Vector3 extents) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_emission_box_extents,
        (const Object*)this,
        extents
    );
}

void CPUParticles::set_emission_colors(const PoolColorArray array) {
    rebel_icall_void_poolcolorarray(
        method_bindings.mb_set_emission_colors,
        (const Object*)this,
        array
    );
}

void CPUParticles::set_emission_normals(const PoolVector3Array array) {
    rebel_icall_void_poolvector3array(
        method_bindings.mb_set_emission_normals,
        (const Object*)this,
        array
    );
}

void CPUParticles::set_emission_points(const PoolVector3Array array) {
    rebel_icall_void_poolvector3array(
        method_bindings.mb_set_emission_points,
        (const Object*)this,
        array
    );
}

void CPUParticles::set_emission_ring_axis(const Vector3 axis) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_emission_ring_axis,
        (const Object*)this,
        axis
    );
}

void CPUParticles::set_emission_ring_height(const real_t height) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_ring_height,
        (const Object*)this,
        height
    );
}

void CPUParticles::set_emission_ring_inner_radius(const real_t offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_ring_inner_radius,
        (const Object*)this,
        offset
    );
}

void CPUParticles::set_emission_ring_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_ring_radius,
        (const Object*)this,
        radius
    );
}

void CPUParticles::set_emission_shape(const int64_t shape) {
    rebel_icall_void_int(
        method_bindings.mb_set_emission_shape,
        (const Object*)this,
        shape
    );
}

void CPUParticles::set_emission_sphere_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_sphere_radius,
        (const Object*)this,
        radius
    );
}

void CPUParticles::set_emitting(const bool emitting) {
    rebel_icall_void_bool(
        method_bindings.mb_set_emitting,
        (const Object*)this,
        emitting
    );
}

void CPUParticles::set_explosiveness_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_set_explosiveness_ratio,
        (const Object*)this,
        ratio
    );
}

void CPUParticles::set_fixed_fps(const int64_t fps) {
    rebel_icall_void_int(
        method_bindings.mb_set_fixed_fps,
        (const Object*)this,
        fps
    );
}

void CPUParticles::set_flatness(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_flatness,
        (const Object*)this,
        amount
    );
}

void CPUParticles::set_fractional_delta(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_fractional_delta,
        (const Object*)this,
        enable
    );
}

void CPUParticles::set_gravity(const Vector3 accel_vec) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_gravity,
        (const Object*)this,
        accel_vec
    );
}

void CPUParticles::set_lifetime(const real_t secs) {
    rebel_icall_void_float(
        method_bindings.mb_set_lifetime,
        (const Object*)this,
        secs
    );
}

void CPUParticles::set_lifetime_randomness(const real_t random) {
    rebel_icall_void_float(
        method_bindings.mb_set_lifetime_randomness,
        (const Object*)this,
        random
    );
}

void CPUParticles::set_mesh(const Ref<Mesh> mesh) {
    rebel_icall_void_object(
        method_bindings.mb_set_mesh,
        (const Object*)this,
        mesh.ptr()
    );
}

void CPUParticles::set_one_shot(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_one_shot,
        (const Object*)this,
        enable
    );
}

void CPUParticles::set_param(const int64_t param, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param,
        (const Object*)this,
        param,
        value
    );
}

void CPUParticles::set_param_curve(const int64_t param, const Ref<Curve> curve) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_param_curve,
        (const Object*)this,
        param,
        curve.ptr()
    );
}

void CPUParticles::set_param_randomness(const int64_t param, const real_t randomness) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param_randomness,
        (const Object*)this,
        param,
        randomness
    );
}

void CPUParticles::set_particle_flag(const int64_t flag, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_particle_flag,
        (const Object*)this,
        flag,
        enable
    );
}

void CPUParticles::set_pre_process_time(const real_t secs) {
    rebel_icall_void_float(
        method_bindings.mb_set_pre_process_time,
        (const Object*)this,
        secs
    );
}

void CPUParticles::set_randomness_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_set_randomness_ratio,
        (const Object*)this,
        ratio
    );
}

void CPUParticles::set_speed_scale(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_speed_scale,
        (const Object*)this,
        scale
    );
}

void CPUParticles::set_spread(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_spread,
        (const Object*)this,
        degrees
    );
}

void CPUParticles::set_use_local_coordinates(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_local_coordinates,
        (const Object*)this,
        enable
    );
}

CPUParticles* CPUParticles::create() {
    return (CPUParticles*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CPUParticles")()
         );
}

void CPUParticles::init_method_bindings() {
    method_bindings.mb__update_render_thread =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "_update_render_thread"
        );
    method_bindings.mb_convert_from_particles =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "convert_from_particles"
        );
    method_bindings.mb_get_amount =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_amount"
        );
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_color"
        );
    method_bindings.mb_get_color_ramp =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_color_ramp"
        );
    method_bindings.mb_get_direction =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_direction"
        );
    method_bindings.mb_get_draw_order =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_draw_order"
        );
    method_bindings.mb_get_emission_box_extents =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_emission_box_extents"
        );
    method_bindings.mb_get_emission_colors =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_emission_colors"
        );
    method_bindings.mb_get_emission_normals =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_emission_normals"
        );
    method_bindings.mb_get_emission_points =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_emission_points"
        );
    method_bindings.mb_get_emission_ring_axis =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_emission_ring_axis"
        );
    method_bindings.mb_get_emission_ring_height =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_emission_ring_height"
        );
    method_bindings.mb_get_emission_ring_inner_radius =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_emission_ring_inner_radius"
        );
    method_bindings.mb_get_emission_ring_radius =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_emission_ring_radius"
        );
    method_bindings.mb_get_emission_shape =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_emission_shape"
        );
    method_bindings.mb_get_emission_sphere_radius =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_emission_sphere_radius"
        );
    method_bindings.mb_get_explosiveness_ratio =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_explosiveness_ratio"
        );
    method_bindings.mb_get_fixed_fps =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_fixed_fps"
        );
    method_bindings.mb_get_flatness =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_flatness"
        );
    method_bindings.mb_get_fractional_delta =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_fractional_delta"
        );
    method_bindings.mb_get_gravity =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_gravity"
        );
    method_bindings.mb_get_lifetime =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_lifetime"
        );
    method_bindings.mb_get_lifetime_randomness =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_lifetime_randomness"
        );
    method_bindings.mb_get_mesh =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_mesh"
        );
    method_bindings.mb_get_one_shot =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_one_shot"
        );
    method_bindings.mb_get_param =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_param"
        );
    method_bindings.mb_get_param_curve =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_param_curve"
        );
    method_bindings.mb_get_param_randomness =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_param_randomness"
        );
    method_bindings.mb_get_particle_flag =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_particle_flag"
        );
    method_bindings.mb_get_pre_process_time =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_pre_process_time"
        );
    method_bindings.mb_get_randomness_ratio =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_randomness_ratio"
        );
    method_bindings.mb_get_speed_scale =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_speed_scale"
        );
    method_bindings.mb_get_spread =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_spread"
        );
    method_bindings.mb_get_use_local_coordinates =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "get_use_local_coordinates"
        );
    method_bindings.mb_is_emitting =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "is_emitting"
        );
    method_bindings.mb_restart =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "restart"
        );
    method_bindings.mb_set_amount =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_amount"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_color"
        );
    method_bindings.mb_set_color_ramp =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_color_ramp"
        );
    method_bindings.mb_set_direction =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_direction"
        );
    method_bindings.mb_set_draw_order =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_draw_order"
        );
    method_bindings.mb_set_emission_box_extents =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_emission_box_extents"
        );
    method_bindings.mb_set_emission_colors =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_emission_colors"
        );
    method_bindings.mb_set_emission_normals =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_emission_normals"
        );
    method_bindings.mb_set_emission_points =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_emission_points"
        );
    method_bindings.mb_set_emission_ring_axis =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_emission_ring_axis"
        );
    method_bindings.mb_set_emission_ring_height =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_emission_ring_height"
        );
    method_bindings.mb_set_emission_ring_inner_radius =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_emission_ring_inner_radius"
        );
    method_bindings.mb_set_emission_ring_radius =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_emission_ring_radius"
        );
    method_bindings.mb_set_emission_shape =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_emission_shape"
        );
    method_bindings.mb_set_emission_sphere_radius =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_emission_sphere_radius"
        );
    method_bindings.mb_set_emitting =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_emitting"
        );
    method_bindings.mb_set_explosiveness_ratio =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_explosiveness_ratio"
        );
    method_bindings.mb_set_fixed_fps =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_fixed_fps"
        );
    method_bindings.mb_set_flatness =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_flatness"
        );
    method_bindings.mb_set_fractional_delta =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_fractional_delta"
        );
    method_bindings.mb_set_gravity =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_gravity"
        );
    method_bindings.mb_set_lifetime =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_lifetime"
        );
    method_bindings.mb_set_lifetime_randomness =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_lifetime_randomness"
        );
    method_bindings.mb_set_mesh =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_mesh"
        );
    method_bindings.mb_set_one_shot =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_one_shot"
        );
    method_bindings.mb_set_param =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_param"
        );
    method_bindings.mb_set_param_curve =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_param_curve"
        );
    method_bindings.mb_set_param_randomness =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_param_randomness"
        );
    method_bindings.mb_set_particle_flag =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_particle_flag"
        );
    method_bindings.mb_set_pre_process_time =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_pre_process_time"
        );
    method_bindings.mb_set_randomness_ratio =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_randomness_ratio"
        );
    method_bindings.mb_set_speed_scale =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_speed_scale"
        );
    method_bindings.mb_set_spread =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_spread"
        );
    method_bindings.mb_set_use_local_coordinates =
        api->rebel_method_bind_get_method(
            "CPUParticles",
            "set_use_local_coordinates"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CPUParticles");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CPUParticles::MethodBindings CPUParticles::method_bindings = {};
void* CPUParticles::class_tag = nullptr;
} // namespace Rebel
