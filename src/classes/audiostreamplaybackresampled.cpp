// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audiostreamplaybackresampled.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AudioStreamPlaybackResampled::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioStreamPlaybackResampled");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioStreamPlaybackResampled::MethodBindings AudioStreamPlaybackResampled::method_bindings = {};
void* AudioStreamPlaybackResampled::class_tag = nullptr;
} // namespace Rebel
