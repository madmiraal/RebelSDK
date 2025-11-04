// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptinputaction.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualScriptInputAction::Mode VisualScriptInputAction::get_action_mode() const {
    return (VisualScriptInputAction::Mode)rebel_icall_int(
        method_bindings.mb_get_action_mode,
        (const Object*)this
    );
}

String VisualScriptInputAction::get_action_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_action_name,
        (const Object*)this
    );
}

void VisualScriptInputAction::set_action_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_action_mode,
        (const Object*)this,
        mode
    );
}

void VisualScriptInputAction::set_action_name(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_action_name,
        (const Object*)this,
        name
    );
}

VisualScriptInputAction* VisualScriptInputAction::create() {
    return (VisualScriptInputAction*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptInputAction")()
         );
}

void VisualScriptInputAction::init_method_bindings() {
    method_bindings.mb_get_action_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptInputAction",
            "get_action_mode"
        );
    method_bindings.mb_get_action_name =
        api->rebel_method_bind_get_method(
            "VisualScriptInputAction",
            "get_action_name"
        );
    method_bindings.mb_set_action_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptInputAction",
            "set_action_mode"
        );
    method_bindings.mb_set_action_name =
        api->rebel_method_bind_get_method(
            "VisualScriptInputAction",
            "set_action_name"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptInputAction");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptInputAction::MethodBindings VisualScriptInputAction::method_bindings = {};
void* VisualScriptInputAction::class_tag = nullptr;
} // namespace Rebel
