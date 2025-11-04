// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptconstant.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant::Type VisualScriptConstant::get_constant_type() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb_get_constant_type,
        (const Object*)this
    );
}

Variant VisualScriptConstant::get_constant_value() const {
    return rebel_icall_variant(
        method_bindings.mb_get_constant_value,
        (const Object*)this
    );
}

void VisualScriptConstant::set_constant_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_set_constant_type,
        (const Object*)this,
        type
    );
}

void VisualScriptConstant::set_constant_value(const Variant value) {
    rebel_icall_void_variant(
        method_bindings.mb_set_constant_value,
        (const Object*)this,
        value
    );
}

VisualScriptConstant* VisualScriptConstant::create() {
    return (VisualScriptConstant*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptConstant")()
         );
}

void VisualScriptConstant::init_method_bindings() {
    method_bindings.mb_get_constant_type =
        api->rebel_method_bind_get_method(
            "VisualScriptConstant",
            "get_constant_type"
        );
    method_bindings.mb_get_constant_value =
        api->rebel_method_bind_get_method(
            "VisualScriptConstant",
            "get_constant_value"
        );
    method_bindings.mb_set_constant_type =
        api->rebel_method_bind_get_method(
            "VisualScriptConstant",
            "set_constant_type"
        );
    method_bindings.mb_set_constant_value =
        api->rebel_method_bind_get_method(
            "VisualScriptConstant",
            "set_constant_value"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptConstant");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptConstant::MethodBindings VisualScriptConstant::method_bindings = {};
void* VisualScriptConstant::class_tag = nullptr;
} // namespace Rebel
