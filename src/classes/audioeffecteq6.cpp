// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffecteq6.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
AudioEffectEQ6* AudioEffectEQ6::create() {
    return (AudioEffectEQ6*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectEQ6")()
         );
}

void AudioEffectEQ6::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectEQ6");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectEQ6::MethodBindings AudioEffectEQ6::method_bindings = {};
void* AudioEffectEQ6::class_tag = nullptr;
} // namespace Rebel
