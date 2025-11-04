// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptvariableset.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualScriptVariableSet::get_variable() const {
    return rebel_icall_string(
        method_bindings.mb_get_variable,
        (const Object*)this
    );
}

void VisualScriptVariableSet::set_variable(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_variable,
        (const Object*)this,
        name
    );
}

VisualScriptVariableSet* VisualScriptVariableSet::create() {
    return (VisualScriptVariableSet*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptVariableSet")()
         );
}

void VisualScriptVariableSet::init_method_bindings() {
    method_bindings.mb_get_variable =
        api->rebel_method_bind_get_method(
            "VisualScriptVariableSet",
            "get_variable"
        );
    method_bindings.mb_set_variable =
        api->rebel_method_bind_get_method(
            "VisualScriptVariableSet",
            "set_variable"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptVariableSet");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptVariableSet::MethodBindings VisualScriptVariableSet::method_bindings = {};
void* VisualScriptVariableSet::class_tag = nullptr;
} // namespace Rebel
