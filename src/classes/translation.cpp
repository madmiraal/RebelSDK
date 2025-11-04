// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/translation.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String Translation::_get_message(const String src_message) {
    return rebel_icall_string_string(
        method_bindings.mb__get_message,
        (const Object*)this,
        src_message
    );
}

PoolStringArray Translation::_get_messages() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb__get_messages,
        (const Object*)this
    );
}

void Translation::_set_messages(const PoolStringArray arg0) {
    rebel_icall_void_poolstringarray(
        method_bindings.mb__set_messages,
        (const Object*)this,
        arg0
    );
}

void Translation::add_message(const String src_message, const String xlated_message) {
    rebel_icall_void_string_string(
        method_bindings.mb_add_message,
        (const Object*)this,
        src_message,
        xlated_message
    );
}

void Translation::erase_message(const String src_message) {
    rebel_icall_void_string(
        method_bindings.mb_erase_message,
        (const Object*)this,
        src_message
    );
}

String Translation::get_locale() const {
    return rebel_icall_string(
        method_bindings.mb_get_locale,
        (const Object*)this
    );
}

String Translation::get_message(const String src_message) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_message,
        (const Object*)this,
        src_message
    );
}

int64_t Translation::get_message_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_message_count,
        (const Object*)this
    );
}

PoolStringArray Translation::get_message_list() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_message_list,
        (const Object*)this
    );
}

void Translation::set_locale(const String locale) {
    rebel_icall_void_string(
        method_bindings.mb_set_locale,
        (const Object*)this,
        locale
    );
}

Translation* Translation::create() {
    return (Translation*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Translation")()
         );
}

void Translation::init_method_bindings() {
    method_bindings.mb__get_message =
        api->rebel_method_bind_get_method(
            "Translation",
            "_get_message"
        );
    method_bindings.mb__get_messages =
        api->rebel_method_bind_get_method(
            "Translation",
            "_get_messages"
        );
    method_bindings.mb__set_messages =
        api->rebel_method_bind_get_method(
            "Translation",
            "_set_messages"
        );
    method_bindings.mb_add_message =
        api->rebel_method_bind_get_method(
            "Translation",
            "add_message"
        );
    method_bindings.mb_erase_message =
        api->rebel_method_bind_get_method(
            "Translation",
            "erase_message"
        );
    method_bindings.mb_get_locale =
        api->rebel_method_bind_get_method(
            "Translation",
            "get_locale"
        );
    method_bindings.mb_get_message =
        api->rebel_method_bind_get_method(
            "Translation",
            "get_message"
        );
    method_bindings.mb_get_message_count =
        api->rebel_method_bind_get_method(
            "Translation",
            "get_message_count"
        );
    method_bindings.mb_get_message_list =
        api->rebel_method_bind_get_method(
            "Translation",
            "get_message_list"
        );
    method_bindings.mb_set_locale =
        api->rebel_method_bind_get_method(
            "Translation",
            "set_locale"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Translation");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Translation::MethodBindings Translation::method_bindings = {};
void* Translation::class_tag = nullptr;
} // namespace Rebel
