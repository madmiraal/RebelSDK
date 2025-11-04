// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptvariableget.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualScriptVariableGet::get_variable() const {
    return rebel_icall_string(
        method_bindings.mb_get_variable,
        (const Object*)this
    );
}

void VisualScriptVariableGet::set_variable(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_variable,
        (const Object*)this,
        name
    );
}

VisualScriptVariableGet* VisualScriptVariableGet::create() {
    return (VisualScriptVariableGet*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptVariableGet")()
         );
}

void VisualScriptVariableGet::init_method_bindings() {
    method_bindings.mb_get_variable =
        api->rebel_method_bind_get_method(
            "VisualScriptVariableGet",
            "get_variable"
        );
    method_bindings.mb_set_variable =
        api->rebel_method_bind_get_method(
            "VisualScriptVariableGet",
            "set_variable"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptVariableGet");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptVariableGet::MethodBindings VisualScriptVariableGet::method_bindings = {};
void* VisualScriptVariableGet::class_tag = nullptr;
} // namespace Rebel
