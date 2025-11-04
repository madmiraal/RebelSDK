// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/noisetexture.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "classes/opensimplexnoise.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Image> NoiseTexture::_generate_texture() {
    return Ref<Image>::create_ref(rebel_icall_object(
        method_bindings.mb__generate_texture,
        (const Object*)this
    ));
}

void NoiseTexture::_queue_update() {
    rebel_icall_void(
        method_bindings.mb__queue_update,
        (const Object*)this
    );
}

void NoiseTexture::_thread_done(const Ref<Image> image) {
    rebel_icall_void_object(
        method_bindings.mb__thread_done,
        (const Object*)this,
        image.ptr()
    );
}

void NoiseTexture::_update_texture() {
    rebel_icall_void(
        method_bindings.mb__update_texture,
        (const Object*)this
    );
}

real_t NoiseTexture::get_bump_strength() {
    return rebel_icall_float(
        method_bindings.mb_get_bump_strength,
        (const Object*)this
    );
}

Ref<OpenSimplexNoise> NoiseTexture::get_noise() {
    return Ref<OpenSimplexNoise>::create_ref(rebel_icall_object(
        method_bindings.mb_get_noise,
        (const Object*)this
    ));
}

Vector2 NoiseTexture::get_noise_offset() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_noise_offset,
        (const Object*)this
    );
}

bool NoiseTexture::get_seamless() {
    return rebel_icall_bool(
        method_bindings.mb_get_seamless,
        (const Object*)this
    );
}

bool NoiseTexture::is_normalmap() {
    return rebel_icall_bool(
        method_bindings.mb_is_normalmap,
        (const Object*)this
    );
}

void NoiseTexture::set_as_normalmap(const bool as_normalmap) {
    rebel_icall_void_bool(
        method_bindings.mb_set_as_normalmap,
        (const Object*)this,
        as_normalmap
    );
}

void NoiseTexture::set_bump_strength(const real_t bump_strength) {
    rebel_icall_void_float(
        method_bindings.mb_set_bump_strength,
        (const Object*)this,
        bump_strength
    );
}

void NoiseTexture::set_height(const int64_t height) {
    rebel_icall_void_int(
        method_bindings.mb_set_height,
        (const Object*)this,
        height
    );
}

void NoiseTexture::set_noise(const Ref<OpenSimplexNoise> noise) {
    rebel_icall_void_object(
        method_bindings.mb_set_noise,
        (const Object*)this,
        noise.ptr()
    );
}

void NoiseTexture::set_noise_offset(const Vector2 noise_offset) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_noise_offset,
        (const Object*)this,
        noise_offset
    );
}

void NoiseTexture::set_seamless(const bool seamless) {
    rebel_icall_void_bool(
        method_bindings.mb_set_seamless,
        (const Object*)this,
        seamless
    );
}

void NoiseTexture::set_width(const int64_t width) {
    rebel_icall_void_int(
        method_bindings.mb_set_width,
        (const Object*)this,
        width
    );
}

NoiseTexture* NoiseTexture::create() {
    return (NoiseTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"NoiseTexture")()
         );
}

void NoiseTexture::init_method_bindings() {
    method_bindings.mb__generate_texture =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "_generate_texture"
        );
    method_bindings.mb__queue_update =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "_queue_update"
        );
    method_bindings.mb__thread_done =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "_thread_done"
        );
    method_bindings.mb__update_texture =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "_update_texture"
        );
    method_bindings.mb_get_bump_strength =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "get_bump_strength"
        );
    method_bindings.mb_get_noise =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "get_noise"
        );
    method_bindings.mb_get_noise_offset =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "get_noise_offset"
        );
    method_bindings.mb_get_seamless =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "get_seamless"
        );
    method_bindings.mb_is_normalmap =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "is_normalmap"
        );
    method_bindings.mb_set_as_normalmap =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "set_as_normalmap"
        );
    method_bindings.mb_set_bump_strength =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "set_bump_strength"
        );
    method_bindings.mb_set_height =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "set_height"
        );
    method_bindings.mb_set_noise =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "set_noise"
        );
    method_bindings.mb_set_noise_offset =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "set_noise_offset"
        );
    method_bindings.mb_set_seamless =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "set_seamless"
        );
    method_bindings.mb_set_width =
        api->rebel_method_bind_get_method(
            "NoiseTexture",
            "set_width"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "NoiseTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

NoiseTexture::MethodBindings NoiseTexture::method_bindings = {};
void* NoiseTexture::class_tag = nullptr;
} // namespace Rebel
