// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/audioeffecthighshelffilter.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
AudioEffectHighShelfFilter* AudioEffectHighShelfFilter::create() {
    return (AudioEffectHighShelfFilter*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AudioEffectHighShelfFilter")()
         );
}

void AudioEffectHighShelfFilter::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AudioEffectHighShelfFilter");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AudioEffectHighShelfFilter::MethodBindings AudioEffectHighShelfFilter::method_bindings = {};
void* AudioEffectHighShelfFilter::class_tag = nullptr;
} // namespace Rebel
