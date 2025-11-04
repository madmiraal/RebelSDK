// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/script.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "classes/script.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool Script::can_instance() const {
    return rebel_icall_bool(
        method_bindings.mb_can_instance,
        (const Object*)this
    );
}

Ref<Script> Script::get_base_script() const {
    return Ref<Script>::create_ref(rebel_icall_object(
        method_bindings.mb_get_base_script,
        (const Object*)this
    ));
}

String Script::get_instance_base_type() const {
    return rebel_icall_string(
        method_bindings.mb_get_instance_base_type,
        (const Object*)this
    );
}

Variant Script::get_property_default_value(const String property) {
    return rebel_icall_variant_string(
        method_bindings.mb_get_property_default_value,
        (const Object*)this,
        property
    );
}

Dictionary Script::get_script_constant_map() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_script_constant_map,
        (const Object*)this
    );
}

Array Script::get_script_method_list() {
    return rebel_icall_array(
        method_bindings.mb_get_script_method_list,
        (const Object*)this
    );
}

Array Script::get_script_property_list() {
    return rebel_icall_array(
        method_bindings.mb_get_script_property_list,
        (const Object*)this
    );
}

Array Script::get_script_signal_list() {
    return rebel_icall_array(
        method_bindings.mb_get_script_signal_list,
        (const Object*)this
    );
}

String Script::get_source_code() const {
    return rebel_icall_string(
        method_bindings.mb_get_source_code,
        (const Object*)this
    );
}

bool Script::has_script_signal(const String signal_name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_script_signal,
        (const Object*)this,
        signal_name
    );
}

bool Script::has_source_code() const {
    return rebel_icall_bool(
        method_bindings.mb_has_source_code,
        (const Object*)this
    );
}

bool Script::instance_has(const Object* base_object) const {
    return rebel_icall_bool_object(
        method_bindings.mb_instance_has,
        (const Object*)this,
        base_object
    );
}

bool Script::is_tool() const {
    return rebel_icall_bool(
        method_bindings.mb_is_tool,
        (const Object*)this
    );
}

Error Script::reload(const bool keep_state) {
    return (Error)rebel_icall_int_bool(
        method_bindings.mb_reload,
        (const Object*)this,
        keep_state
    );
}

void Script::set_source_code(const String source) {
    rebel_icall_void_string(
        method_bindings.mb_set_source_code,
        (const Object*)this,
        source
    );
}

void Script::init_method_bindings() {
    method_bindings.mb_can_instance =
        api->rebel_method_bind_get_method(
            "Script",
            "can_instance"
        );
    method_bindings.mb_get_base_script =
        api->rebel_method_bind_get_method(
            "Script",
            "get_base_script"
        );
    method_bindings.mb_get_instance_base_type =
        api->rebel_method_bind_get_method(
            "Script",
            "get_instance_base_type"
        );
    method_bindings.mb_get_property_default_value =
        api->rebel_method_bind_get_method(
            "Script",
            "get_property_default_value"
        );
    method_bindings.mb_get_script_constant_map =
        api->rebel_method_bind_get_method(
            "Script",
            "get_script_constant_map"
        );
    method_bindings.mb_get_script_method_list =
        api->rebel_method_bind_get_method(
            "Script",
            "get_script_method_list"
        );
    method_bindings.mb_get_script_property_list =
        api->rebel_method_bind_get_method(
            "Script",
            "get_script_property_list"
        );
    method_bindings.mb_get_script_signal_list =
        api->rebel_method_bind_get_method(
            "Script",
            "get_script_signal_list"
        );
    method_bindings.mb_get_source_code =
        api->rebel_method_bind_get_method(
            "Script",
            "get_source_code"
        );
    method_bindings.mb_has_script_signal =
        api->rebel_method_bind_get_method(
            "Script",
            "has_script_signal"
        );
    method_bindings.mb_has_source_code =
        api->rebel_method_bind_get_method(
            "Script",
            "has_source_code"
        );
    method_bindings.mb_instance_has =
        api->rebel_method_bind_get_method(
            "Script",
            "instance_has"
        );
    method_bindings.mb_is_tool =
        api->rebel_method_bind_get_method(
            "Script",
            "is_tool"
        );
    method_bindings.mb_reload =
        api->rebel_method_bind_get_method(
            "Script",
            "reload"
        );
    method_bindings.mb_set_source_code =
        api->rebel_method_bind_get_method(
            "Script",
            "set_source_code"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Script");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Script::MethodBindings Script::method_bindings = {};
void* Script::class_tag = nullptr;
} // namespace Rebel
