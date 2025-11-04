// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodecompare.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
VisualShaderNodeCompare::ComparisonType VisualShaderNodeCompare::get_comparison_type() const {
    return (VisualShaderNodeCompare::ComparisonType)rebel_icall_int(
        method_bindings.mb_get_comparison_type,
        (const Object*)this
    );
}

VisualShaderNodeCompare::Condition VisualShaderNodeCompare::get_condition() const {
    return (VisualShaderNodeCompare::Condition)rebel_icall_int(
        method_bindings.mb_get_condition,
        (const Object*)this
    );
}

VisualShaderNodeCompare::Function VisualShaderNodeCompare::get_function() const {
    return (VisualShaderNodeCompare::Function)rebel_icall_int(
        method_bindings.mb_get_function,
        (const Object*)this
    );
}

void VisualShaderNodeCompare::set_comparison_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_set_comparison_type,
        (const Object*)this,
        type
    );
}

void VisualShaderNodeCompare::set_condition(const int64_t condition) {
    rebel_icall_void_int(
        method_bindings.mb_set_condition,
        (const Object*)this,
        condition
    );
}

void VisualShaderNodeCompare::set_function(const int64_t func) {
    rebel_icall_void_int(
        method_bindings.mb_set_function,
        (const Object*)this,
        func
    );
}

VisualShaderNodeCompare* VisualShaderNodeCompare::create() {
    return (VisualShaderNodeCompare*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeCompare")()
         );
}

void VisualShaderNodeCompare::init_method_bindings() {
    method_bindings.mb_get_comparison_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCompare",
            "get_comparison_type"
        );
    method_bindings.mb_get_condition =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCompare",
            "get_condition"
        );
    method_bindings.mb_get_function =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCompare",
            "get_function"
        );
    method_bindings.mb_set_comparison_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCompare",
            "set_comparison_type"
        );
    method_bindings.mb_set_condition =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCompare",
            "set_condition"
        );
    method_bindings.mb_set_function =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCompare",
            "set_function"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeCompare");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeCompare::MethodBindings VisualShaderNodeCompare::method_bindings = {};
void* VisualShaderNodeCompare::class_tag = nullptr;
} // namespace Rebel
