// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptreturn.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant::Type VisualScriptReturn::get_return_type() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb_get_return_type,
        (const Object*)this
    );
}

bool VisualScriptReturn::is_return_value_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_return_value_enabled,
        (const Object*)this
    );
}

void VisualScriptReturn::set_enable_return_value(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_enable_return_value,
        (const Object*)this,
        enable
    );
}

void VisualScriptReturn::set_return_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_set_return_type,
        (const Object*)this,
        type
    );
}

VisualScriptReturn* VisualScriptReturn::create() {
    return (VisualScriptReturn*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptReturn")()
         );
}

void VisualScriptReturn::init_method_bindings() {
    method_bindings.mb_get_return_type =
        api->rebel_method_bind_get_method(
            "VisualScriptReturn",
            "get_return_type"
        );
    method_bindings.mb_is_return_value_enabled =
        api->rebel_method_bind_get_method(
            "VisualScriptReturn",
            "is_return_value_enabled"
        );
    method_bindings.mb_set_enable_return_value =
        api->rebel_method_bind_get_method(
            "VisualScriptReturn",
            "set_enable_return_value"
        );
    method_bindings.mb_set_return_type =
        api->rebel_method_bind_get_method(
            "VisualScriptReturn",
            "set_return_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptReturn");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptReturn::MethodBindings VisualScriptReturn::method_bindings = {};
void* VisualScriptReturn::class_tag = nullptr;
} // namespace Rebel
