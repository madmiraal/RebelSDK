// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptyieldsignal.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
NodePath VisualScriptYieldSignal::get_base_path() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_base_path,
        (const Object*)this
    );
}

String VisualScriptYieldSignal::get_base_type() const {
    return rebel_icall_string(
        method_bindings.mb_get_base_type,
        (const Object*)this
    );
}

VisualScriptYieldSignal::CallMode VisualScriptYieldSignal::get_call_mode() const {
    return (VisualScriptYieldSignal::CallMode)rebel_icall_int(
        method_bindings.mb_get_call_mode,
        (const Object*)this
    );
}

String VisualScriptYieldSignal::get_signal() const {
    return rebel_icall_string(
        method_bindings.mb_get_signal,
        (const Object*)this
    );
}

void VisualScriptYieldSignal::set_base_path(const NodePath base_path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_base_path,
        (const Object*)this,
        base_path
    );
}

void VisualScriptYieldSignal::set_base_type(const String base_type) {
    rebel_icall_void_string(
        method_bindings.mb_set_base_type,
        (const Object*)this,
        base_type
    );
}

void VisualScriptYieldSignal::set_call_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_call_mode,
        (const Object*)this,
        mode
    );
}

void VisualScriptYieldSignal::set_signal(const String signal) {
    rebel_icall_void_string(
        method_bindings.mb_set_signal,
        (const Object*)this,
        signal
    );
}

VisualScriptYieldSignal* VisualScriptYieldSignal::create() {
    return (VisualScriptYieldSignal*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptYieldSignal")()
         );
}

void VisualScriptYieldSignal::init_method_bindings() {
    method_bindings.mb_get_base_path =
        api->rebel_method_bind_get_method(
            "VisualScriptYieldSignal",
            "get_base_path"
        );
    method_bindings.mb_get_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptYieldSignal",
            "get_base_type"
        );
    method_bindings.mb_get_call_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptYieldSignal",
            "get_call_mode"
        );
    method_bindings.mb_get_signal =
        api->rebel_method_bind_get_method(
            "VisualScriptYieldSignal",
            "get_signal"
        );
    method_bindings.mb_set_base_path =
        api->rebel_method_bind_get_method(
            "VisualScriptYieldSignal",
            "set_base_path"
        );
    method_bindings.mb_set_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptYieldSignal",
            "set_base_type"
        );
    method_bindings.mb_set_call_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptYieldSignal",
            "set_call_mode"
        );
    method_bindings.mb_set_signal =
        api->rebel_method_bind_get_method(
            "VisualScriptYieldSignal",
            "set_signal"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptYieldSignal");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptYieldSignal::MethodBindings VisualScriptYieldSignal::method_bindings = {};
void* VisualScriptYieldSignal::class_tag = nullptr;
} // namespace Rebel
