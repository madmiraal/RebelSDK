// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audiostreamgeneratorplayback.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool AudioStreamGeneratorPlayback::can_push_buffer(const int64_t amount) const {
    return rebel_icall_bool_int(
        method_bindings.mb_can_push_buffer,
        (const Object*)this,
        amount
    );
}

void AudioStreamGeneratorPlayback::clear_buffer() {
    rebel_icall_void(
        method_bindings.mb_clear_buffer,
        (const Object*)this
    );
}

int64_t AudioStreamGeneratorPlayback::get_frames_available() const {
    return rebel_icall_int(
        method_bindings.mb_get_frames_available,
        (const Object*)this
    );
}

int64_t AudioStreamGeneratorPlayback::get_skips() const {
    return rebel_icall_int(
        method_bindings.mb_get_skips,
        (const Object*)this
    );
}

bool AudioStreamGeneratorPlayback::push_buffer(const PoolVector2Array frames) {
    return rebel_icall_bool_poolvector2array(
        method_bindings.mb_push_buffer,
        (const Object*)this,
        frames
    );
}

bool AudioStreamGeneratorPlayback::push_frame(const Vector2 frame) {
    return rebel_icall_bool_vector2(
        method_bindings.mb_push_frame,
        (const Object*)this,
        frame
    );
}

void AudioStreamGeneratorPlayback::init_method_bindings() {
    method_bindings.mb_can_push_buffer =
        api->rebel_method_bind_get_method(
            "AudioStreamGeneratorPlayback",
            "can_push_buffer"
        );
    method_bindings.mb_clear_buffer =
        api->rebel_method_bind_get_method(
            "AudioStreamGeneratorPlayback",
            "clear_buffer"
        );
    method_bindings.mb_get_frames_available =
        api->rebel_method_bind_get_method(
            "AudioStreamGeneratorPlayback",
            "get_frames_available"
        );
    method_bindings.mb_get_skips =
        api->rebel_method_bind_get_method(
            "AudioStreamGeneratorPlayback",
            "get_skips"
        );
    method_bindings.mb_push_buffer =
        api->rebel_method_bind_get_method(
            "AudioStreamGeneratorPlayback",
            "push_buffer"
        );
    method_bindings.mb_push_frame =
        api->rebel_method_bind_get_method(
            "AudioStreamGeneratorPlayback",
            "push_frame"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioStreamGeneratorPlayback");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioStreamGeneratorPlayback::MethodBindings AudioStreamGeneratorPlayback::method_bindings = {};
void* AudioStreamGeneratorPlayback::class_tag = nullptr;
} // namespace Rebel
