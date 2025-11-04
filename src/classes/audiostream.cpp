// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audiostream.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t AudioStream::get_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_length,
        (const Object*)this
    );
}

void AudioStream::init_method_bindings() {
    method_bindings.mb_get_length =
        api->rebel_method_bind_get_method(
            "AudioStream",
            "get_length"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioStream");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioStream::MethodBindings AudioStream::method_bindings = {};
void* AudioStream::class_tag = nullptr;
} // namespace Rebel
