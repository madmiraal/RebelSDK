// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/globalconstants.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
GlobalConstants* GlobalConstants::singleton = nullptr;

GlobalConstants::GlobalConstants() {
    owner = api->rebel_global_get_singleton((char*) "GlobalConstants");
}

void GlobalConstants::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GlobalConstants");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GlobalConstants::MethodBindings GlobalConstants::method_bindings = {};
void* GlobalConstants::class_tag = nullptr;
} // namespace Rebel
