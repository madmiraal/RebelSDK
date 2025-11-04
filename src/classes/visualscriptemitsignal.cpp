// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptemitsignal.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualScriptEmitSignal::get_signal() const {
    return rebel_icall_string(
        method_bindings.mb_get_signal,
        (const Object*)this
    );
}

void VisualScriptEmitSignal::set_signal(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_signal,
        (const Object*)this,
        name
    );
}

VisualScriptEmitSignal* VisualScriptEmitSignal::create() {
    return (VisualScriptEmitSignal*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptEmitSignal")()
         );
}

void VisualScriptEmitSignal::init_method_bindings() {
    method_bindings.mb_get_signal =
        api->rebel_method_bind_get_method(
            "VisualScriptEmitSignal",
            "get_signal"
        );
    method_bindings.mb_set_signal =
        api->rebel_method_bind_get_method(
            "VisualScriptEmitSignal",
            "set_signal"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptEmitSignal");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptEmitSignal::MethodBindings VisualScriptEmitSignal::method_bindings = {};
void* VisualScriptEmitSignal::class_tag = nullptr;
} // namespace Rebel
