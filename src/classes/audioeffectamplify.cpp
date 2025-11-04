// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectamplify.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectAmplify::get_volume_db() const {
    return rebel_icall_float(
        method_bindings.mb_get_volume_db,
        (const Object*)this
    );
}

void AudioEffectAmplify::set_volume_db(const real_t volume) {
    rebel_icall_void_float(
        method_bindings.mb_set_volume_db,
        (const Object*)this,
        volume
    );
}

AudioEffectAmplify* AudioEffectAmplify::create() {
    return (AudioEffectAmplify*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectAmplify")()
         );
}

void AudioEffectAmplify::init_method_bindings() {
    method_bindings.mb_get_volume_db =
        api->rebel_method_bind_get_method(
            "AudioEffectAmplify",
            "get_volume_db"
        );
    method_bindings.mb_set_volume_db =
        api->rebel_method_bind_get_method(
            "AudioEffectAmplify",
            "set_volume_db"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectAmplify");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectAmplify::MethodBindings AudioEffectAmplify::method_bindings = {};
void* AudioEffectAmplify::class_tag = nullptr;
} // namespace Rebel
