// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptyield.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t VisualScriptYield::get_wait_time() {
    return rebel_icall_float(
        method_bindings.mb_get_wait_time,
        (const Object*)this
    );
}

VisualScriptYield::YieldMode VisualScriptYield::get_yield_mode() {
    return (VisualScriptYield::YieldMode)rebel_icall_int(
        method_bindings.mb_get_yield_mode,
        (const Object*)this
    );
}

void VisualScriptYield::set_wait_time(const real_t sec) {
    rebel_icall_void_float(
        method_bindings.mb_set_wait_time,
        (const Object*)this,
        sec
    );
}

void VisualScriptYield::set_yield_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_yield_mode,
        (const Object*)this,
        mode
    );
}

VisualScriptYield* VisualScriptYield::create() {
    return (VisualScriptYield*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptYield")()
         );
}

void VisualScriptYield::init_method_bindings() {
    method_bindings.mb_get_wait_time =
        api->rebel_method_bind_get_method(
            "VisualScriptYield",
            "get_wait_time"
        );
    method_bindings.mb_get_yield_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptYield",
            "get_yield_mode"
        );
    method_bindings.mb_set_wait_time =
        api->rebel_method_bind_get_method(
            "VisualScriptYield",
            "set_wait_time"
        );
    method_bindings.mb_set_yield_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptYield",
            "set_yield_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptYield");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptYield::MethodBindings VisualScriptYield::method_bindings = {};
void* VisualScriptYield::class_tag = nullptr;
} // namespace Rebel
