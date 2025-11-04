// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffecteq.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t AudioEffectEQ::get_band_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_band_count,
        (const Object*)this
    );
}

real_t AudioEffectEQ::get_band_gain_db(const int64_t band_idx) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_band_gain_db,
        (const Object*)this,
        band_idx
    );
}

void AudioEffectEQ::set_band_gain_db(const int64_t band_idx, const real_t volume_db) {
    rebel_icall_void_int_float(
        method_bindings.mb_set_band_gain_db,
        (const Object*)this,
        band_idx,
        volume_db
    );
}

AudioEffectEQ* AudioEffectEQ::create() {
    return (AudioEffectEQ*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectEQ")()
         );
}

void AudioEffectEQ::init_method_bindings() {
    method_bindings.mb_get_band_count =
        api->rebel_method_bind_get_method(
            "AudioEffectEQ",
            "get_band_count"
        );
    method_bindings.mb_get_band_gain_db =
        api->rebel_method_bind_get_method(
            "AudioEffectEQ",
            "get_band_gain_db"
        );
    method_bindings.mb_set_band_gain_db =
        api->rebel_method_bind_get_method(
            "AudioEffectEQ",
            "set_band_gain_db"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectEQ");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectEQ::MethodBindings AudioEffectEQ::method_bindings = {};
void* AudioEffectEQ::class_tag = nullptr;
} // namespace Rebel
