// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/opensimplexnoise.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Image> OpenSimplexNoise::get_image(const int64_t width, const int64_t height, const Vector2 noise_offset) const {
    return Ref<Image>::create_ref(rebel_icall_object_int_int_vector2(
        method_bindings.mb_get_image,
        (const Object*)this,
        width,
        height,
        noise_offset
    ));
}

real_t OpenSimplexNoise::get_lacunarity() const {
    return rebel_icall_float(
        method_bindings.mb_get_lacunarity,
        (const Object*)this
    );
}

real_t OpenSimplexNoise::get_noise_1d(const real_t x) const {
    return rebel_icall_float_float(
        method_bindings.mb_get_noise_1d,
        (const Object*)this,
        x
    );
}

real_t OpenSimplexNoise::get_noise_2d(const real_t x, const real_t y) const {
    return rebel_icall_float_float_float(
        method_bindings.mb_get_noise_2d,
        (const Object*)this,
        x,
        y
    );
}

real_t OpenSimplexNoise::get_noise_2dv(const Vector2 pos) const {
    return rebel_icall_float_vector2(
        method_bindings.mb_get_noise_2dv,
        (const Object*)this,
        pos
    );
}

real_t OpenSimplexNoise::get_noise_3d(const real_t x, const real_t y, const real_t z) const {
    return rebel_icall_float_float_float_float(
        method_bindings.mb_get_noise_3d,
        (const Object*)this,
        x,
        y,
        z
    );
}

real_t OpenSimplexNoise::get_noise_3dv(const Vector3 pos) const {
    return rebel_icall_float_vector3(
        method_bindings.mb_get_noise_3dv,
        (const Object*)this,
        pos
    );
}

real_t OpenSimplexNoise::get_noise_4d(const real_t x, const real_t y, const real_t z, const real_t w) const {
    return rebel_icall_float_float_float_float_float(
        method_bindings.mb_get_noise_4d,
        (const Object*)this,
        x,
        y,
        z,
        w
    );
}

int64_t OpenSimplexNoise::get_octaves() const {
    return rebel_icall_int(
        method_bindings.mb_get_octaves,
        (const Object*)this
    );
}

real_t OpenSimplexNoise::get_period() const {
    return rebel_icall_float(
        method_bindings.mb_get_period,
        (const Object*)this
    );
}

real_t OpenSimplexNoise::get_persistence() const {
    return rebel_icall_float(
        method_bindings.mb_get_persistence,
        (const Object*)this
    );
}

Ref<Image> OpenSimplexNoise::get_seamless_image(const int64_t size) const {
    return Ref<Image>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_seamless_image,
        (const Object*)this,
        size
    ));
}

int64_t OpenSimplexNoise::get_seed() const {
    return rebel_icall_int(
        method_bindings.mb_get_seed,
        (const Object*)this
    );
}

void OpenSimplexNoise::set_lacunarity(const real_t lacunarity) {
    rebel_icall_void_float(
        method_bindings.mb_set_lacunarity,
        (const Object*)this,
        lacunarity
    );
}

void OpenSimplexNoise::set_octaves(const int64_t octave_count) {
    rebel_icall_void_int(
        method_bindings.mb_set_octaves,
        (const Object*)this,
        octave_count
    );
}

void OpenSimplexNoise::set_period(const real_t period) {
    rebel_icall_void_float(
        method_bindings.mb_set_period,
        (const Object*)this,
        period
    );
}

void OpenSimplexNoise::set_persistence(const real_t persistence) {
    rebel_icall_void_float(
        method_bindings.mb_set_persistence,
        (const Object*)this,
        persistence
    );
}

void OpenSimplexNoise::set_seed(const int64_t seed) {
    rebel_icall_void_int(
        method_bindings.mb_set_seed,
        (const Object*)this,
        seed
    );
}

OpenSimplexNoise* OpenSimplexNoise::create() {
    return (OpenSimplexNoise*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"OpenSimplexNoise")()
         );
}

void OpenSimplexNoise::init_method_bindings() {
    method_bindings.mb_get_image =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_image"
        );
    method_bindings.mb_get_lacunarity =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_lacunarity"
        );
    method_bindings.mb_get_noise_1d =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_noise_1d"
        );
    method_bindings.mb_get_noise_2d =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_noise_2d"
        );
    method_bindings.mb_get_noise_2dv =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_noise_2dv"
        );
    method_bindings.mb_get_noise_3d =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_noise_3d"
        );
    method_bindings.mb_get_noise_3dv =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_noise_3dv"
        );
    method_bindings.mb_get_noise_4d =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_noise_4d"
        );
    method_bindings.mb_get_octaves =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_octaves"
        );
    method_bindings.mb_get_period =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_period"
        );
    method_bindings.mb_get_persistence =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_persistence"
        );
    method_bindings.mb_get_seamless_image =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_seamless_image"
        );
    method_bindings.mb_get_seed =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "get_seed"
        );
    method_bindings.mb_set_lacunarity =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "set_lacunarity"
        );
    method_bindings.mb_set_octaves =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "set_octaves"
        );
    method_bindings.mb_set_period =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "set_period"
        );
    method_bindings.mb_set_persistence =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "set_persistence"
        );
    method_bindings.mb_set_seed =
        api->rebel_method_bind_get_method(
            "OpenSimplexNoise",
            "set_seed"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "OpenSimplexNoise");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

OpenSimplexNoise::MethodBindings OpenSimplexNoise::method_bindings = {};
void* OpenSimplexNoise::class_tag = nullptr;
} // namespace Rebel
