// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/regex.h"

#include "classes/icalls.h"
#include "classes/regexmatch.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void RegEx::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

Error RegEx::compile(const String pattern) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_compile,
        (const Object*)this,
        pattern
    );
}

int64_t RegEx::get_group_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_group_count,
        (const Object*)this
    );
}

Array RegEx::get_names() const {
    return rebel_icall_array(
        method_bindings.mb_get_names,
        (const Object*)this
    );
}

String RegEx::get_pattern() const {
    return rebel_icall_string(
        method_bindings.mb_get_pattern,
        (const Object*)this
    );
}

bool RegEx::is_valid() const {
    return rebel_icall_bool(
        method_bindings.mb_is_valid,
        (const Object*)this
    );
}

Ref<RegExMatch> RegEx::search(const String subject, const int64_t offset, const int64_t end) const {
    return Ref<RegExMatch>::create_ref(rebel_icall_object_string_int_int(
        method_bindings.mb_search,
        (const Object*)this,
        subject,
        offset,
        end
    ));
}

Array RegEx::search_all(const String subject, const int64_t offset, const int64_t end) const {
    return rebel_icall_array_string_int_int(
        method_bindings.mb_search_all,
        (const Object*)this,
        subject,
        offset,
        end
    );
}

String RegEx::sub(const String subject, const String replacement, const bool all, const int64_t offset, const int64_t end) const {
    return rebel_icall_string_string_string_bool_int_int(
        method_bindings.mb_sub,
        (const Object*)this,
        subject,
        replacement,
        all,
        offset,
        end
    );
}

RegEx* RegEx::create() {
    return (RegEx*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RegEx")()
         );
}

void RegEx::init_method_bindings() {
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "RegEx",
            "clear"
        );
    method_bindings.mb_compile =
        api->rebel_method_bind_get_method(
            "RegEx",
            "compile"
        );
    method_bindings.mb_get_group_count =
        api->rebel_method_bind_get_method(
            "RegEx",
            "get_group_count"
        );
    method_bindings.mb_get_names =
        api->rebel_method_bind_get_method(
            "RegEx",
            "get_names"
        );
    method_bindings.mb_get_pattern =
        api->rebel_method_bind_get_method(
            "RegEx",
            "get_pattern"
        );
    method_bindings.mb_is_valid =
        api->rebel_method_bind_get_method(
            "RegEx",
            "is_valid"
        );
    method_bindings.mb_search =
        api->rebel_method_bind_get_method(
            "RegEx",
            "search"
        );
    method_bindings.mb_search_all =
        api->rebel_method_bind_get_method(
            "RegEx",
            "search_all"
        );
    method_bindings.mb_sub =
        api->rebel_method_bind_get_method(
            "RegEx",
            "sub"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RegEx");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RegEx::MethodBindings RegEx::method_bindings = {};
void* RegEx::class_tag = nullptr;
} // namespace Rebel
