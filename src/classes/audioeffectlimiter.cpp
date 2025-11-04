// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectlimiter.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectLimiter::get_ceiling_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_ceiling_db,
        (const Object*)this
    );
}

real_t AudioEffectLimiter::get_soft_clip_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_soft_clip_db,
        (const Object*)this
    );
}

real_t AudioEffectLimiter::get_soft_clip_ratio() const {
    return rebel_icall_float(
        method_bindings.mb_get_soft_clip_ratio,
        (const Object*)this
    );
}

real_t AudioEffectLimiter::get_threshold_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_threshold_db,
        (const Object*)this
    );
}

void AudioEffectLimiter::set_ceiling_db(const real_t ceiling) {
    rebel_icall_void_float(
        method_bindings.mb_set_ceiling_db,
        (const Object*)this,
        ceiling
    );
}

void AudioEffectLimiter::set_soft_clip_db(const real_t soft_clip) {
    rebel_icall_void_float(
        method_bindings.mb_set_soft_clip_db,
        (const Object*)this,
        soft_clip
    );
}

void AudioEffectLimiter::set_soft_clip_ratio(const real_t soft_clip) {
    rebel_icall_void_float(
        method_bindings.mb_set_soft_clip_ratio,
        (const Object*)this,
        soft_clip
    );
}

void AudioEffectLimiter::set_threshold_db(const real_t threshold) {
    rebel_icall_void_float(
        method_bindings.mb_set_threshold_db,
        (const Object*)this,
        threshold
    );
}

AudioEffectLimiter* AudioEffectLimiter::create() {
    return (AudioEffectLimiter*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectLimiter")()
         );
}

void AudioEffectLimiter::init_method_bindings() {
    method_bindings.mb_get_ceiling_db =
        api->rebel_method_bind_get_method(
            "AudioEffectLimiter",
            "get_ceiling_db"
        );
    method_bindings.mb_get_soft_clip_db =
        api->rebel_method_bind_get_method(
            "AudioEffectLimiter",
            "get_soft_clip_db"
        );
    method_bindings.mb_get_soft_clip_ratio =
        api->rebel_method_bind_get_method(
            "AudioEffectLimiter",
            "get_soft_clip_ratio"
        );
    method_bindings.mb_get_threshold_db =
        api->rebel_method_bind_get_method(
            "AudioEffectLimiter",
            "get_threshold_db"
        );
    method_bindings.mb_set_ceiling_db =
        api->rebel_method_bind_get_method(
            "AudioEffectLimiter",
            "set_ceiling_db"
        );
    method_bindings.mb_set_soft_clip_db =
        api->rebel_method_bind_get_method(
            "AudioEffectLimiter",
            "set_soft_clip_db"
        );
    method_bindings.mb_set_soft_clip_ratio =
        api->rebel_method_bind_get_method(
            "AudioEffectLimiter",
            "set_soft_clip_ratio"
        );
    method_bindings.mb_set_threshold_db =
        api->rebel_method_bind_get_method(
            "AudioEffectLimiter",
            "set_threshold_db"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectLimiter");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectLimiter::MethodBindings AudioEffectLimiter::method_bindings = {};
void* AudioEffectLimiter::class_tag = nullptr;
} // namespace Rebel
