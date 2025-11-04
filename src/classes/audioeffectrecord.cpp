// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffectrecord.h"

#include "classes/audiostreamsample.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
AudioStreamSample::Format AudioEffectRecord::get_format() const {
    return (AudioStreamSample::Format)rebel_icall_int(
        method_bindings.mb_get_format,
        (const Object*)this
    );
}

Ref<AudioStreamSample> AudioEffectRecord::get_recording() const {
    return Ref<AudioStreamSample>::create_ref(rebel_icall_object(
        method_bindings.mb_get_recording,
        (const Object*)this
    ));
}

bool AudioEffectRecord::is_recording_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_recording_active,
        (const Object*)this
    );
}

void AudioEffectRecord::set_format(const int64_t format) {
    rebel_icall_void_int(
        method_bindings.mb_set_format,
        (const Object*)this,
        format
    );
}

void AudioEffectRecord::set_recording_active(const bool record) {
    rebel_icall_void_bool(
        method_bindings.mb_set_recording_active,
        (const Object*)this,
        record
    );
}

AudioEffectRecord* AudioEffectRecord::create() {
    return (AudioEffectRecord*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectRecord")()
         );
}

void AudioEffectRecord::init_method_bindings() {
    method_bindings.mb_get_format =
        api->rebel_method_bind_get_method(
            "AudioEffectRecord",
            "get_format"
        );
    method_bindings.mb_get_recording =
        api->rebel_method_bind_get_method(
            "AudioEffectRecord",
            "get_recording"
        );
    method_bindings.mb_is_recording_active =
        api->rebel_method_bind_get_method(
            "AudioEffectRecord",
            "is_recording_active"
        );
    method_bindings.mb_set_format =
        api->rebel_method_bind_get_method(
            "AudioEffectRecord",
            "set_format"
        );
    method_bindings.mb_set_recording_active =
        api->rebel_method_bind_get_method(
            "AudioEffectRecord",
            "set_recording_active"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectRecord");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectRecord::MethodBindings AudioEffectRecord::method_bindings = {};
void* AudioEffectRecord::class_tag = nullptr;
} // namespace Rebel
