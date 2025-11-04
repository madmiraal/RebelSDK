// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/jsonrpc.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary JSONRPC::make_notification(const String method, const Variant params) {
    return rebel_icall_dictionary_string_variant(
        method_bindings.mb_make_notification,
        (const Object*)this,
        method,
        params
    );
}

Dictionary JSONRPC::make_request(const String method, const Variant params, const Variant id) {
    return rebel_icall_dictionary_string_variant_variant(
        method_bindings.mb_make_request,
        (const Object*)this,
        method,
        params,
        id
    );
}

Dictionary JSONRPC::make_response(const Variant result, const Variant id) {
    return rebel_icall_dictionary_variant_variant(
        method_bindings.mb_make_response,
        (const Object*)this,
        result,
        id
    );
}

Dictionary JSONRPC::make_response_error(const int64_t code, const String message, const Variant id) const {
    return rebel_icall_dictionary_int_string_variant(
        method_bindings.mb_make_response_error,
        (const Object*)this,
        code,
        message,
        id
    );
}

Variant JSONRPC::process_action(const Variant action, const bool recurse) {
    return rebel_icall_variant_variant_bool(
        method_bindings.mb_process_action,
        (const Object*)this,
        action,
        recurse
    );
}

String JSONRPC::process_string(const String action) {
    return rebel_icall_string_string(
        method_bindings.mb_process_string,
        (const Object*)this,
        action
    );
}

void JSONRPC::set_scope(const String scope, const Object* target) {
    rebel_icall_void_string_object(
        method_bindings.mb_set_scope,
        (const Object*)this,
        scope,
        target
    );
}

JSONRPC* JSONRPC::create() {
    return (JSONRPC*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"JSONRPC")()
         );
}

void JSONRPC::init_method_bindings() {
    method_bindings.mb_make_notification =
        api->rebel_method_bind_get_method(
            "JSONRPC",
            "make_notification"
        );
    method_bindings.mb_make_request =
        api->rebel_method_bind_get_method(
            "JSONRPC",
            "make_request"
        );
    method_bindings.mb_make_response =
        api->rebel_method_bind_get_method(
            "JSONRPC",
            "make_response"
        );
    method_bindings.mb_make_response_error =
        api->rebel_method_bind_get_method(
            "JSONRPC",
            "make_response_error"
        );
    method_bindings.mb_process_action =
        api->rebel_method_bind_get_method(
            "JSONRPC",
            "process_action"
        );
    method_bindings.mb_process_string =
        api->rebel_method_bind_get_method(
            "JSONRPC",
            "process_string"
        );
    method_bindings.mb_set_scope =
        api->rebel_method_bind_get_method(
            "JSONRPC",
            "set_scope"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "JSONRPC");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

JSONRPC::MethodBindings JSONRPC::method_bindings = {};
void* JSONRPC::class_tag = nullptr;
} // namespace Rebel
