// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/jsonparseresult.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error JSONParseResult::get_error() const {
    return (Error)rebel_icall_int(
        method_bindings.mb_get_error,
        (const Object*)this
    );
}

int64_t JSONParseResult::get_error_line() const {
    return rebel_icall_int(
        method_bindings.mb_get_error_line,
        (const Object*)this
    );
}

String JSONParseResult::get_error_string() const {
    return rebel_icall_string(
        method_bindings.mb_get_error_string,
        (const Object*)this
    );
}

Variant JSONParseResult::get_result() const {
    return rebel_icall_variant(
        method_bindings.mb_get_result,
        (const Object*)this
    );
}

void JSONParseResult::set_error(const int64_t error) {
    rebel_icall_void_int(
        method_bindings.mb_set_error,
        (const Object*)this,
        error
    );
}

void JSONParseResult::set_error_line(const int64_t error_line) {
    rebel_icall_void_int(
        method_bindings.mb_set_error_line,
        (const Object*)this,
        error_line
    );
}

void JSONParseResult::set_error_string(const String error_string) {
    rebel_icall_void_string(
        method_bindings.mb_set_error_string,
        (const Object*)this,
        error_string
    );
}

void JSONParseResult::set_result(const Variant result) {
    rebel_icall_void_variant(
        method_bindings.mb_set_result,
        (const Object*)this,
        result
    );
}

JSONParseResult* JSONParseResult::create() {
    return (JSONParseResult*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"JSONParseResult")()
         );
}

void JSONParseResult::init_method_bindings() {
    method_bindings.mb_get_error =
        api->rebel_method_bind_get_method(
            "JSONParseResult",
            "get_error"
        );
    method_bindings.mb_get_error_line =
        api->rebel_method_bind_get_method(
            "JSONParseResult",
            "get_error_line"
        );
    method_bindings.mb_get_error_string =
        api->rebel_method_bind_get_method(
            "JSONParseResult",
            "get_error_string"
        );
    method_bindings.mb_get_result =
        api->rebel_method_bind_get_method(
            "JSONParseResult",
            "get_result"
        );
    method_bindings.mb_set_error =
        api->rebel_method_bind_get_method(
            "JSONParseResult",
            "set_error"
        );
    method_bindings.mb_set_error_line =
        api->rebel_method_bind_get_method(
            "JSONParseResult",
            "set_error_line"
        );
    method_bindings.mb_set_error_string =
        api->rebel_method_bind_get_method(
            "JSONParseResult",
            "set_error_string"
        );
    method_bindings.mb_set_result =
        api->rebel_method_bind_get_method(
            "JSONParseResult",
            "set_result"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "JSONParseResult");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

JSONParseResult::MethodBindings JSONParseResult::method_bindings = {};
void* JSONParseResult::class_tag = nullptr;
} // namespace Rebel
