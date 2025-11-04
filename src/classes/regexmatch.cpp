// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/regexmatch.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t RegExMatch::get_end(const Variant name) const {
    return rebel_icall_int_variant(
        method_bindings.mb_get_end,
        (const Object*)this,
        name
    );
}

int64_t RegExMatch::get_group_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_group_count,
        (const Object*)this
    );
}

Dictionary RegExMatch::get_names() const {
    return rebel_icall_dictionary(
        method_bindings.mb_get_names,
        (const Object*)this
    );
}

int64_t RegExMatch::get_start(const Variant name) const {
    return rebel_icall_int_variant(
        method_bindings.mb_get_start,
        (const Object*)this,
        name
    );
}

String RegExMatch::get_string(const Variant name) const {
    return rebel_icall_string_variant(
        method_bindings.mb_get_string,
        (const Object*)this,
        name
    );
}

Array RegExMatch::get_strings() const {
    return rebel_icall_array(
        method_bindings.mb_get_strings,
        (const Object*)this
    );
}

String RegExMatch::get_subject() const {
    return rebel_icall_string(
        method_bindings.mb_get_subject,
        (const Object*)this
    );
}

RegExMatch* RegExMatch::create() {
    return (RegExMatch*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RegExMatch")()
         );
}

void RegExMatch::init_method_bindings() {
    method_bindings.mb_get_end =
        api->rebel_method_bind_get_method(
            "RegExMatch",
            "get_end"
        );
    method_bindings.mb_get_group_count =
        api->rebel_method_bind_get_method(
            "RegExMatch",
            "get_group_count"
        );
    method_bindings.mb_get_names =
        api->rebel_method_bind_get_method(
            "RegExMatch",
            "get_names"
        );
    method_bindings.mb_get_start =
        api->rebel_method_bind_get_method(
            "RegExMatch",
            "get_start"
        );
    method_bindings.mb_get_string =
        api->rebel_method_bind_get_method(
            "RegExMatch",
            "get_string"
        );
    method_bindings.mb_get_strings =
        api->rebel_method_bind_get_method(
            "RegExMatch",
            "get_strings"
        );
    method_bindings.mb_get_subject =
        api->rebel_method_bind_get_method(
            "RegExMatch",
            "get_subject"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RegExMatch");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RegExMatch::MethodBindings RegExMatch::method_bindings = {};
void* RegExMatch::class_tag = nullptr;
} // namespace Rebel
