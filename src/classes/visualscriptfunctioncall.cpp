// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptfunctioncall.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary VisualScriptFunctionCall::_get_argument_cache() const {
    return rebel_icall_dictionary(
        method_bindings.mb__get_argument_cache,
        (const Object*)this
    );
}

void VisualScriptFunctionCall::_set_argument_cache(const Dictionary argument_cache) {
    rebel_icall_void_dictionary(
        method_bindings.mb__set_argument_cache,
        (const Object*)this,
        argument_cache
    );
}

NodePath VisualScriptFunctionCall::get_base_path() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_base_path,
        (const Object*)this
    );
}

String VisualScriptFunctionCall::get_base_script() const {
    return rebel_icall_string(
        method_bindings.mb_get_base_script,
        (const Object*)this
    );
}

String VisualScriptFunctionCall::get_base_type() const {
    return rebel_icall_string(
        method_bindings.mb_get_base_type,
        (const Object*)this
    );
}

Variant::Type VisualScriptFunctionCall::get_basic_type() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb_get_basic_type,
        (const Object*)this
    );
}

VisualScriptFunctionCall::CallMode VisualScriptFunctionCall::get_call_mode() const {
    return (VisualScriptFunctionCall::CallMode)rebel_icall_int(
        method_bindings.mb_get_call_mode,
        (const Object*)this
    );
}

String VisualScriptFunctionCall::get_function() const {
    return rebel_icall_string(
        method_bindings.mb_get_function,
        (const Object*)this
    );
}

VisualScriptFunctionCall::RPCCallMode VisualScriptFunctionCall::get_rpc_call_mode() const {
    return (VisualScriptFunctionCall::RPCCallMode)rebel_icall_int(
        method_bindings.mb_get_rpc_call_mode,
        (const Object*)this
    );
}

String VisualScriptFunctionCall::get_singleton() const {
    return rebel_icall_string(
        method_bindings.mb_get_singleton,
        (const Object*)this
    );
}

int64_t VisualScriptFunctionCall::get_use_default_args() const {
    return rebel_icall_int(
        method_bindings.mb_get_use_default_args,
        (const Object*)this
    );
}

bool VisualScriptFunctionCall::get_validate() const {
    return rebel_icall_bool(
        method_bindings.mb_get_validate,
        (const Object*)this
    );
}

void VisualScriptFunctionCall::set_base_path(const NodePath base_path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_base_path,
        (const Object*)this,
        base_path
    );
}

void VisualScriptFunctionCall::set_base_script(const String base_script) {
    rebel_icall_void_string(
        method_bindings.mb_set_base_script,
        (const Object*)this,
        base_script
    );
}

void VisualScriptFunctionCall::set_base_type(const String base_type) {
    rebel_icall_void_string(
        method_bindings.mb_set_base_type,
        (const Object*)this,
        base_type
    );
}

void VisualScriptFunctionCall::set_basic_type(const int64_t basic_type) {
    rebel_icall_void_int(
        method_bindings.mb_set_basic_type,
        (const Object*)this,
        basic_type
    );
}

void VisualScriptFunctionCall::set_call_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_call_mode,
        (const Object*)this,
        mode
    );
}

void VisualScriptFunctionCall::set_function(const String function) {
    rebel_icall_void_string(
        method_bindings.mb_set_function,
        (const Object*)this,
        function
    );
}

void VisualScriptFunctionCall::set_rpc_call_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_rpc_call_mode,
        (const Object*)this,
        mode
    );
}

void VisualScriptFunctionCall::set_singleton(const String singleton) {
    rebel_icall_void_string(
        method_bindings.mb_set_singleton,
        (const Object*)this,
        singleton
    );
}

void VisualScriptFunctionCall::set_use_default_args(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_use_default_args,
        (const Object*)this,
        amount
    );
}

void VisualScriptFunctionCall::set_validate(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_validate,
        (const Object*)this,
        enable
    );
}

VisualScriptFunctionCall* VisualScriptFunctionCall::create() {
    return (VisualScriptFunctionCall*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptFunctionCall")()
         );
}

void VisualScriptFunctionCall::init_method_bindings() {
    method_bindings.mb__get_argument_cache =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "_get_argument_cache"
        );
    method_bindings.mb__set_argument_cache =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "_set_argument_cache"
        );
    method_bindings.mb_get_base_path =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "get_base_path"
        );
    method_bindings.mb_get_base_script =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "get_base_script"
        );
    method_bindings.mb_get_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "get_base_type"
        );
    method_bindings.mb_get_basic_type =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "get_basic_type"
        );
    method_bindings.mb_get_call_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "get_call_mode"
        );
    method_bindings.mb_get_function =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "get_function"
        );
    method_bindings.mb_get_rpc_call_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "get_rpc_call_mode"
        );
    method_bindings.mb_get_singleton =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "get_singleton"
        );
    method_bindings.mb_get_use_default_args =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "get_use_default_args"
        );
    method_bindings.mb_get_validate =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "get_validate"
        );
    method_bindings.mb_set_base_path =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "set_base_path"
        );
    method_bindings.mb_set_base_script =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "set_base_script"
        );
    method_bindings.mb_set_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "set_base_type"
        );
    method_bindings.mb_set_basic_type =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "set_basic_type"
        );
    method_bindings.mb_set_call_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "set_call_mode"
        );
    method_bindings.mb_set_function =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "set_function"
        );
    method_bindings.mb_set_rpc_call_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "set_rpc_call_mode"
        );
    method_bindings.mb_set_singleton =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "set_singleton"
        );
    method_bindings.mb_set_use_default_args =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "set_use_default_args"
        );
    method_bindings.mb_set_validate =
        api->rebel_method_bind_get_method(
            "VisualScriptFunctionCall",
            "set_validate"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptFunctionCall");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptFunctionCall::MethodBindings VisualScriptFunctionCall::method_bindings = {};
void* VisualScriptFunctionCall::class_tag = nullptr;
} // namespace Rebel
