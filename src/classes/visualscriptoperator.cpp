// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptoperator.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant::Operator VisualScriptOperator::get_operator() const {
    return (Variant::Operator)rebel_icall_int(
        method_bindings.mb_get_operator,
        (const Object*)this
    );
}

Variant::Type VisualScriptOperator::get_typed() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb_get_typed,
        (const Object*)this
    );
}

void VisualScriptOperator::set_operator(const int64_t op) {
    rebel_icall_void_int(
        method_bindings.mb_set_operator,
        (const Object*)this,
        op
    );
}

void VisualScriptOperator::set_typed(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_set_typed,
        (const Object*)this,
        type
    );
}

VisualScriptOperator* VisualScriptOperator::create() {
    return (VisualScriptOperator*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptOperator")()
         );
}

void VisualScriptOperator::init_method_bindings() {
    method_bindings.mb_get_operator =
        api->rebel_method_bind_get_method(
            "VisualScriptOperator",
            "get_operator"
        );
    method_bindings.mb_get_typed =
        api->rebel_method_bind_get_method(
            "VisualScriptOperator",
            "get_typed"
        );
    method_bindings.mb_set_operator =
        api->rebel_method_bind_get_method(
            "VisualScriptOperator",
            "set_operator"
        );
    method_bindings.mb_set_typed =
        api->rebel_method_bind_get_method(
            "VisualScriptOperator",
            "set_typed"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptOperator");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptOperator::MethodBindings VisualScriptOperator::method_bindings = {};
void* VisualScriptOperator::class_tag = nullptr;
} // namespace Rebel
