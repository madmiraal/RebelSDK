// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/csgcombiner.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
CSGCombiner* CSGCombiner::create() {
    return (CSGCombiner*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CSGCombiner")()
         );
}

void CSGCombiner::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CSGCombiner");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CSGCombiner::MethodBindings CSGCombiner::method_bindings = {};
void* CSGCombiner::class_tag = nullptr;
} // namespace Rebel
