// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/particlesmaterial.h"

#include "classes/curvetexture.h"
#include "classes/gradienttexture.h"
#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Color ParticlesMaterial::get_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_color,
        (const Object*)this
    );
}

Ref<Texture> ParticlesMaterial::get_color_ramp() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_color_ramp,
        (const Object*)this
    ));
}

Vector3 ParticlesMaterial::get_direction() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_direction,
        (const Object*)this
    );
}

Vector3 ParticlesMaterial::get_emission_box_extents() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_emission_box_extents,
        (const Object*)this
    );
}

Ref<Texture> ParticlesMaterial::get_emission_color_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_emission_color_texture,
        (const Object*)this
    ));
}

Ref<Texture> ParticlesMaterial::get_emission_normal_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_emission_normal_texture,
        (const Object*)this
    ));
}

int64_t ParticlesMaterial::get_emission_point_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_emission_point_count,
        (const Object*)this
    );
}

Ref<Texture> ParticlesMaterial::get_emission_point_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_emission_point_texture,
        (const Object*)this
    ));
}

Vector3 ParticlesMaterial::get_emission_ring_axis() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_emission_ring_axis,
        (const Object*)this
    );
}

real_t ParticlesMaterial::get_emission_ring_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_ring_height,
        (const Object*)this
    );
}

real_t ParticlesMaterial::get_emission_ring_inner_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_ring_inner_radius,
        (const Object*)this
    );
}

real_t ParticlesMaterial::get_emission_ring_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_ring_radius,
        (const Object*)this
    );
}

ParticlesMaterial::EmissionShape ParticlesMaterial::get_emission_shape() const {
    return (ParticlesMaterial::EmissionShape)rebel_icall_int(
        method_bindings.mb_get_emission_shape,
        (const Object*)this
    );
}

real_t ParticlesMaterial::get_emission_sphere_radius() const {
    return rebel_icall_float(
        method_bindings.mb_get_emission_sphere_radius,
        (const Object*)this
    );
}

bool ParticlesMaterial::get_flag(const int64_t flag) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_flag,
        (const Object*)this,
        flag
    );
}

real_t ParticlesMaterial::get_flatness() const {
    return rebel_icall_float(
        method_bindings.mb_get_flatness,
        (const Object*)this
    );
}

Vector3 ParticlesMaterial::get_gravity() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_gravity,
        (const Object*)this
    );
}

real_t ParticlesMaterial::get_lifetime_randomness() const {
    return rebel_icall_float(
        method_bindings.mb_get_lifetime_randomness,
        (const Object*)this
    );
}

real_t ParticlesMaterial::get_param(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param,
        (const Object*)this,
        param
    );
}

real_t ParticlesMaterial::get_param_randomness(const int64_t param) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_param_randomness,
        (const Object*)this,
        param
    );
}

Ref<Texture> ParticlesMaterial::get_param_texture(const int64_t param) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_param_texture,
        (const Object*)this,
        param
    ));
}

real_t ParticlesMaterial::get_spread() const {
    return rebel_icall_float(
        method_bindings.mb_get_spread,
        (const Object*)this
    );
}

Ref<GradientTexture> ParticlesMaterial::get_trail_color_modifier() const {
    return Ref<GradientTexture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_trail_color_modifier,
        (const Object*)this
    ));
}

int64_t ParticlesMaterial::get_trail_divisor() const {
    return rebel_icall_int(
        method_bindings.mb_get_trail_divisor,
        (const Object*)this
    );
}

Ref<CurveTexture> ParticlesMaterial::get_trail_size_modifier() const {
    return Ref<CurveTexture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_trail_size_modifier,
        (const Object*)this
    ));
}

void ParticlesMaterial::set_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_color,
        (const Object*)this,
        color
    );
}

void ParticlesMaterial::set_color_ramp(const Ref<Texture> ramp) {
    rebel_icall_void_object(
        method_bindings.mb_set_color_ramp,
        (const Object*)this,
        ramp.ptr()
    );
}

void ParticlesMaterial::set_direction(const Vector3 degrees) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_direction,
        (const Object*)this,
        degrees
    );
}

void ParticlesMaterial::set_emission_box_extents(const Vector3 extents) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_emission_box_extents,
        (const Object*)this,
        extents
    );
}

void ParticlesMaterial::set_emission_color_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_emission_color_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void ParticlesMaterial::set_emission_normal_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_emission_normal_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void ParticlesMaterial::set_emission_point_count(const int64_t point_count) {
    rebel_icall_void_int(
        method_bindings.mb_set_emission_point_count,
        (const Object*)this,
        point_count
    );
}

void ParticlesMaterial::set_emission_point_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_emission_point_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void ParticlesMaterial::set_emission_ring_axis(const Vector3 axis) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_emission_ring_axis,
        (const Object*)this,
        axis
    );
}

void ParticlesMaterial::set_emission_ring_height(const real_t height) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_ring_height,
        (const Object*)this,
        height
    );
}

void ParticlesMaterial::set_emission_ring_inner_radius(const real_t offset) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_ring_inner_radius,
        (const Object*)this,
        offset
    );
}

void ParticlesMaterial::set_emission_ring_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_ring_radius,
        (const Object*)this,
        radius
    );
}

void ParticlesMaterial::set_emission_shape(const int64_t shape) {
    rebel_icall_void_int(
        method_bindings.mb_set_emission_shape,
        (const Object*)this,
        shape
    );
}

void ParticlesMaterial::set_emission_sphere_radius(const real_t radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_emission_sphere_radius,
        (const Object*)this,
        radius
    );
}

void ParticlesMaterial::set_flag(const int64_t flag, const bool enable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_flag,
        (const Object*)this,
        flag,
        enable
    );
}

void ParticlesMaterial::set_flatness(const real_t amount) {
    rebel_icall_void_float(
        method_bindings.mb_set_flatness,
        (const Object*)this,
        amount
    );
}

void ParticlesMaterial::set_gravity(const Vector3 accel_vec) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_gravity,
        (const Object*)this,
        accel_vec
    );
}

void ParticlesMaterial::set_lifetime_randomness(const real_t randomness) {
    rebel_icall_void_float(
        method_bindings.mb_set_lifetime_randomness,
        (const Object*)this,
        randomness
    );
}

void ParticlesMaterial::set_param(const int64_t param, const real_t value) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param,
        (const Object*)this,
        param,
        value
    );
}

void ParticlesMaterial::set_param_randomness(const int64_t param, const real_t randomness) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_param_randomness,
        (const Object*)this,
        param,
        randomness
    );
}

void ParticlesMaterial::set_param_texture(const int64_t param, const Ref<Texture> texture) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_param_texture,
        (const Object*)this,
        param,
        texture.ptr()
    );
}

void ParticlesMaterial::set_spread(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_spread,
        (const Object*)this,
        degrees
    );
}

void ParticlesMaterial::set_trail_color_modifier(const Ref<GradientTexture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_trail_color_modifier,
        (const Object*)this,
        texture.ptr()
    );
}

void ParticlesMaterial::set_trail_divisor(const int64_t divisor) {
    rebel_icall_void_int(
        method_bindings.mb_set_trail_divisor,
        (const Object*)this,
        divisor
    );
}

void ParticlesMaterial::set_trail_size_modifier(const Ref<CurveTexture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_trail_size_modifier,
        (const Object*)this,
        texture.ptr()
    );
}

ParticlesMaterial* ParticlesMaterial::create() {
    return (ParticlesMaterial*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ParticlesMaterial")()
         );
}

void ParticlesMaterial::init_method_bindings() {
    method_bindings.mb_get_color =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_color"
        );
    method_bindings.mb_get_color_ramp =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_color_ramp"
        );
    method_bindings.mb_get_direction =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_direction"
        );
    method_bindings.mb_get_emission_box_extents =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_emission_box_extents"
        );
    method_bindings.mb_get_emission_color_texture =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_emission_color_texture"
        );
    method_bindings.mb_get_emission_normal_texture =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_emission_normal_texture"
        );
    method_bindings.mb_get_emission_point_count =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_emission_point_count"
        );
    method_bindings.mb_get_emission_point_texture =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_emission_point_texture"
        );
    method_bindings.mb_get_emission_ring_axis =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_emission_ring_axis"
        );
    method_bindings.mb_get_emission_ring_height =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_emission_ring_height"
        );
    method_bindings.mb_get_emission_ring_inner_radius =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_emission_ring_inner_radius"
        );
    method_bindings.mb_get_emission_ring_radius =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_emission_ring_radius"
        );
    method_bindings.mb_get_emission_shape =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_emission_shape"
        );
    method_bindings.mb_get_emission_sphere_radius =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_emission_sphere_radius"
        );
    method_bindings.mb_get_flag =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_flag"
        );
    method_bindings.mb_get_flatness =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_flatness"
        );
    method_bindings.mb_get_gravity =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_gravity"
        );
    method_bindings.mb_get_lifetime_randomness =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_lifetime_randomness"
        );
    method_bindings.mb_get_param =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_param"
        );
    method_bindings.mb_get_param_randomness =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_param_randomness"
        );
    method_bindings.mb_get_param_texture =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_param_texture"
        );
    method_bindings.mb_get_spread =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_spread"
        );
    method_bindings.mb_get_trail_color_modifier =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_trail_color_modifier"
        );
    method_bindings.mb_get_trail_divisor =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_trail_divisor"
        );
    method_bindings.mb_get_trail_size_modifier =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "get_trail_size_modifier"
        );
    method_bindings.mb_set_color =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_color"
        );
    method_bindings.mb_set_color_ramp =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_color_ramp"
        );
    method_bindings.mb_set_direction =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_direction"
        );
    method_bindings.mb_set_emission_box_extents =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_emission_box_extents"
        );
    method_bindings.mb_set_emission_color_texture =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_emission_color_texture"
        );
    method_bindings.mb_set_emission_normal_texture =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_emission_normal_texture"
        );
    method_bindings.mb_set_emission_point_count =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_emission_point_count"
        );
    method_bindings.mb_set_emission_point_texture =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_emission_point_texture"
        );
    method_bindings.mb_set_emission_ring_axis =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_emission_ring_axis"
        );
    method_bindings.mb_set_emission_ring_height =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_emission_ring_height"
        );
    method_bindings.mb_set_emission_ring_inner_radius =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_emission_ring_inner_radius"
        );
    method_bindings.mb_set_emission_ring_radius =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_emission_ring_radius"
        );
    method_bindings.mb_set_emission_shape =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_emission_shape"
        );
    method_bindings.mb_set_emission_sphere_radius =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_emission_sphere_radius"
        );
    method_bindings.mb_set_flag =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_flag"
        );
    method_bindings.mb_set_flatness =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_flatness"
        );
    method_bindings.mb_set_gravity =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_gravity"
        );
    method_bindings.mb_set_lifetime_randomness =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_lifetime_randomness"
        );
    method_bindings.mb_set_param =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_param"
        );
    method_bindings.mb_set_param_randomness =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_param_randomness"
        );
    method_bindings.mb_set_param_texture =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_param_texture"
        );
    method_bindings.mb_set_spread =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_spread"
        );
    method_bindings.mb_set_trail_color_modifier =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_trail_color_modifier"
        );
    method_bindings.mb_set_trail_divisor =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_trail_divisor"
        );
    method_bindings.mb_set_trail_size_modifier =
        api->rebel_method_bind_get_method(
            "ParticlesMaterial",
            "set_trail_size_modifier"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ParticlesMaterial");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ParticlesMaterial::MethodBindings ParticlesMaterial::method_bindings = {};
void* ParticlesMaterial::class_tag = nullptr;
} // namespace Rebel
