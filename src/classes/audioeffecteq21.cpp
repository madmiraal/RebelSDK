// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffecteq21.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
AudioEffectEQ21* AudioEffectEQ21::create() {
    return (AudioEffectEQ21*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectEQ21")()
         );
}

void AudioEffectEQ21::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectEQ21");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectEQ21::MethodBindings AudioEffectEQ21::method_bindings = {};
void* AudioEffectEQ21::class_tag = nullptr;
} // namespace Rebel
