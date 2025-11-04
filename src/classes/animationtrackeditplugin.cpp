// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationtrackeditplugin.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AnimationTrackEditPlugin::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationTrackEditPlugin");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationTrackEditPlugin::MethodBindings AnimationTrackEditPlugin::method_bindings = {};
void* AnimationTrackEditPlugin::class_tag = nullptr;
} // namespace Rebel
