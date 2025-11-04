// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/proceduralsky.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ProceduralSky::_thread_done(const Ref<Image> image) {
    rebel_icall_void_object(
        method_bindings.mb__thread_done,
        (const Object*)this,
        image.ptr()
    );
}

void ProceduralSky::_update_sky() {
    rebel_icall_void(
        method_bindings.mb__update_sky,
        (const Object*)this
    );
}

Color ProceduralSky::get_ground_bottom_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_ground_bottom_color,
        (const Object*)this
    );
}

real_t ProceduralSky::get_ground_curve() const {
    return rebel_icall_float(
        method_bindings.mb_get_ground_curve,
        (const Object*)this
    );
}

real_t ProceduralSky::get_ground_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_ground_energy,
        (const Object*)this
    );
}

Color ProceduralSky::get_ground_horizon_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_ground_horizon_color,
        (const Object*)this
    );
}

real_t ProceduralSky::get_sky_curve() const {
    return rebel_icall_float(
        method_bindings.mb_get_sky_curve,
        (const Object*)this
    );
}

real_t ProceduralSky::get_sky_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_sky_energy,
        (const Object*)this
    );
}

Color ProceduralSky::get_sky_horizon_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_sky_horizon_color,
        (const Object*)this
    );
}

Color ProceduralSky::get_sky_top_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_sky_top_color,
        (const Object*)this
    );
}

real_t ProceduralSky::get_sun_angle_max() const {
    return rebel_icall_float(
        method_bindings.mb_get_sun_angle_max,
        (const Object*)this
    );
}

real_t ProceduralSky::get_sun_angle_min() const {
    return rebel_icall_float(
        method_bindings.mb_get_sun_angle_min,
        (const Object*)this
    );
}

Color ProceduralSky::get_sun_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_sun_color,
        (const Object*)this
    );
}

real_t ProceduralSky::get_sun_curve() const {
    return rebel_icall_float(
        method_bindings.mb_get_sun_curve,
        (const Object*)this
    );
}

real_t ProceduralSky::get_sun_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_sun_energy,
        (const Object*)this
    );
}

real_t ProceduralSky::get_sun_latitude() const {
    return rebel_icall_float(
        method_bindings.mb_get_sun_latitude,
        (const Object*)this
    );
}

real_t ProceduralSky::get_sun_longitude() const {
    return rebel_icall_float(
        method_bindings.mb_get_sun_longitude,
        (const Object*)this
    );
}

ProceduralSky::TextureSize ProceduralSky::get_texture_size() const {
    return (ProceduralSky::TextureSize)rebel_icall_int(
        method_bindings.mb_get_texture_size,
        (const Object*)this
    );
}

void ProceduralSky::set_ground_bottom_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_ground_bottom_color,
        (const Object*)this,
        color
    );
}

void ProceduralSky::set_ground_curve(const real_t curve) {
    rebel_icall_void_float(
        method_bindings.mb_set_ground_curve,
        (const Object*)this,
        curve
    );
}

void ProceduralSky::set_ground_energy(const real_t energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_ground_energy,
        (const Object*)this,
        energy
    );
}

void ProceduralSky::set_ground_horizon_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_ground_horizon_color,
        (const Object*)this,
        color
    );
}

void ProceduralSky::set_sky_curve(const real_t curve) {
    rebel_icall_void_float(
        method_bindings.mb_set_sky_curve,
        (const Object*)this,
        curve
    );
}

void ProceduralSky::set_sky_energy(const real_t energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_sky_energy,
        (const Object*)this,
        energy
    );
}

void ProceduralSky::set_sky_horizon_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_sky_horizon_color,
        (const Object*)this,
        color
    );
}

void ProceduralSky::set_sky_top_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_sky_top_color,
        (const Object*)this,
        color
    );
}

void ProceduralSky::set_sun_angle_max(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_sun_angle_max,
        (const Object*)this,
        degrees
    );
}

void ProceduralSky::set_sun_angle_min(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_sun_angle_min,
        (const Object*)this,
        degrees
    );
}

void ProceduralSky::set_sun_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_sun_color,
        (const Object*)this,
        color
    );
}

void ProceduralSky::set_sun_curve(const real_t curve) {
    rebel_icall_void_float(
        method_bindings.mb_set_sun_curve,
        (const Object*)this,
        curve
    );
}

void ProceduralSky::set_sun_energy(const real_t energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_sun_energy,
        (const Object*)this,
        energy
    );
}

void ProceduralSky::set_sun_latitude(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_sun_latitude,
        (const Object*)this,
        degrees
    );
}

void ProceduralSky::set_sun_longitude(const real_t degrees) {
    rebel_icall_void_float(
        method_bindings.mb_set_sun_longitude,
        (const Object*)this,
        degrees
    );
}

void ProceduralSky::set_texture_size(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb_set_texture_size,
        (const Object*)this,
        size
    );
}

ProceduralSky* ProceduralSky::create() {
    return (ProceduralSky*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ProceduralSky")()
         );
}

void ProceduralSky::init_method_bindings() {
    method_bindings.mb__thread_done =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "_thread_done"
        );
    method_bindings.mb__update_sky =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "_update_sky"
        );
    method_bindings.mb_get_ground_bottom_color =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_ground_bottom_color"
        );
    method_bindings.mb_get_ground_curve =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_ground_curve"
        );
    method_bindings.mb_get_ground_energy =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_ground_energy"
        );
    method_bindings.mb_get_ground_horizon_color =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_ground_horizon_color"
        );
    method_bindings.mb_get_sky_curve =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_sky_curve"
        );
    method_bindings.mb_get_sky_energy =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_sky_energy"
        );
    method_bindings.mb_get_sky_horizon_color =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_sky_horizon_color"
        );
    method_bindings.mb_get_sky_top_color =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_sky_top_color"
        );
    method_bindings.mb_get_sun_angle_max =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_sun_angle_max"
        );
    method_bindings.mb_get_sun_angle_min =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_sun_angle_min"
        );
    method_bindings.mb_get_sun_color =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_sun_color"
        );
    method_bindings.mb_get_sun_curve =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_sun_curve"
        );
    method_bindings.mb_get_sun_energy =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_sun_energy"
        );
    method_bindings.mb_get_sun_latitude =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_sun_latitude"
        );
    method_bindings.mb_get_sun_longitude =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_sun_longitude"
        );
    method_bindings.mb_get_texture_size =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "get_texture_size"
        );
    method_bindings.mb_set_ground_bottom_color =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_ground_bottom_color"
        );
    method_bindings.mb_set_ground_curve =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_ground_curve"
        );
    method_bindings.mb_set_ground_energy =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_ground_energy"
        );
    method_bindings.mb_set_ground_horizon_color =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_ground_horizon_color"
        );
    method_bindings.mb_set_sky_curve =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_sky_curve"
        );
    method_bindings.mb_set_sky_energy =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_sky_energy"
        );
    method_bindings.mb_set_sky_horizon_color =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_sky_horizon_color"
        );
    method_bindings.mb_set_sky_top_color =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_sky_top_color"
        );
    method_bindings.mb_set_sun_angle_max =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_sun_angle_max"
        );
    method_bindings.mb_set_sun_angle_min =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_sun_angle_min"
        );
    method_bindings.mb_set_sun_color =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_sun_color"
        );
    method_bindings.mb_set_sun_curve =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_sun_curve"
        );
    method_bindings.mb_set_sun_energy =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_sun_energy"
        );
    method_bindings.mb_set_sun_latitude =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_sun_latitude"
        );
    method_bindings.mb_set_sun_longitude =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_sun_longitude"
        );
    method_bindings.mb_set_texture_size =
        api->rebel_method_bind_get_method(
            "ProceduralSky",
            "set_texture_size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ProceduralSky");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ProceduralSky::MethodBindings ProceduralSky::method_bindings = {};
void* ProceduralSky::class_tag = nullptr;
} // namespace Rebel
