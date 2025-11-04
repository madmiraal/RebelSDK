// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptindexget.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualScriptIndexGet* VisualScriptIndexGet::create() {
    return (VisualScriptIndexGet*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptIndexGet")()
         );
}

void VisualScriptIndexGet::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptIndexGet");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptIndexGet::MethodBindings VisualScriptIndexGet::method_bindings = {};
void* VisualScriptIndexGet::class_tag = nullptr;
} // namespace Rebel
