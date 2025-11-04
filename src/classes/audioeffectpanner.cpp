// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectpanner.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioEffectPanner::get_pan() const {
    return rebel_icall_float(
        method_bindings.mb_get_pan,
        (const Object*)this
    );
}

void AudioEffectPanner::set_pan(const real_t cpanume) {
    rebel_icall_void_float(
        method_bindings.mb_set_pan,
        (const Object*)this,
        cpanume
    );
}

AudioEffectPanner* AudioEffectPanner::create() {
    return (AudioEffectPanner*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectPanner")()
         );
}

void AudioEffectPanner::init_method_bindings() {
    method_bindings.mb_get_pan =
        api->rebel_method_bind_get_method(
            "AudioEffectPanner",
            "get_pan"
        );
    method_bindings.mb_set_pan =
        api->rebel_method_bind_get_method(
            "AudioEffectPanner",
            "set_pan"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectPanner");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectPanner::MethodBindings AudioEffectPanner::method_bindings = {};
void* AudioEffectPanner::class_tag = nullptr;
} // namespace Rebel
