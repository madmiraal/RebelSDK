// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/expression.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant Expression::execute(const Array inputs, const Object* base_instance, const bool show_error) {
    return rebel_icall_variant_array_object_bool(
        method_bindings.mb_execute,
        (const Object*)this,
        inputs,
        base_instance,
        show_error
    );
}

String Expression::get_error_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_error_text,
        (const Object*)this
    );
}

bool Expression::has_execute_failed() const {
    return rebel_icall_bool(
        method_bindings.mb_has_execute_failed,
        (const Object*)this
    );
}

Error Expression::parse(const String expression, const PoolStringArray input_names) {
    return (Error)rebel_icall_int_string_poolstringarray(
        method_bindings.mb_parse,
        (const Object*)this,
        expression,
        input_names
    );
}

Expression* Expression::create() {
    return (Expression*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Expression")()
         );
}

void Expression::init_method_bindings() {
    method_bindings.mb_execute =
        api->rebel_method_bind_get_method(
            "Expression",
            "execute"
        );
    method_bindings.mb_get_error_text =
        api->rebel_method_bind_get_method(
            "Expression",
            "get_error_text"
        );
    method_bindings.mb_has_execute_failed =
        api->rebel_method_bind_get_method(
            "Expression",
            "has_execute_failed"
        );
    method_bindings.mb_parse =
        api->rebel_method_bind_get_method(
            "Expression",
            "parse"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Expression");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Expression::MethodBindings Expression::method_bindings = {};
void* Expression::class_tag = nullptr;
} // namespace Rebel
