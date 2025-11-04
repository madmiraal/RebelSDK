// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodeexpression.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualShaderNodeExpression::get_expression() const {
    return rebel_icall_string(
        method_bindings.mb_get_expression,
        (const Object*)this
    );
}

void VisualShaderNodeExpression::set_expression(const String expression) {
    rebel_icall_void_string(
        method_bindings.mb_set_expression,
        (const Object*)this,
        expression
    );
}

VisualShaderNodeExpression* VisualShaderNodeExpression::create() {
    return (VisualShaderNodeExpression*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeExpression")()
         );
}

void VisualShaderNodeExpression::init_method_bindings() {
    method_bindings.mb_get_expression =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeExpression",
            "get_expression"
        );
    method_bindings.mb_set_expression =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeExpression",
            "set_expression"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeExpression");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeExpression::MethodBindings VisualShaderNodeExpression::method_bindings = {};
void* VisualShaderNodeExpression::class_tag = nullptr;
} // namespace Rebel
