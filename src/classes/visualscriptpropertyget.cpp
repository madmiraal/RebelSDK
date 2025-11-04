// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptpropertyget.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Variant::Type VisualScriptPropertyGet::_get_type_cache() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb__get_type_cache,
        (const Object*)this
    );
}

void VisualScriptPropertyGet::_set_type_cache(const int64_t type_cache) {
    rebel_icall_void_int(
        method_bindings.mb__set_type_cache,
        (const Object*)this,
        type_cache
    );
}

NodePath VisualScriptPropertyGet::get_base_path() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_base_path,
        (const Object*)this
    );
}

String VisualScriptPropertyGet::get_base_script() const {
    return rebel_icall_string(
        method_bindings.mb_get_base_script,
        (const Object*)this
    );
}

String VisualScriptPropertyGet::get_base_type() const {
    return rebel_icall_string(
        method_bindings.mb_get_base_type,
        (const Object*)this
    );
}

Variant::Type VisualScriptPropertyGet::get_basic_type() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb_get_basic_type,
        (const Object*)this
    );
}

VisualScriptPropertyGet::CallMode VisualScriptPropertyGet::get_call_mode() const {
    return (VisualScriptPropertyGet::CallMode)rebel_icall_int(
        method_bindings.mb_get_call_mode,
        (const Object*)this
    );
}

String VisualScriptPropertyGet::get_index() const {
    return rebel_icall_string(
        method_bindings.mb_get_index,
        (const Object*)this
    );
}

String VisualScriptPropertyGet::get_property() const {
    return rebel_icall_string(
        method_bindings.mb_get_property,
        (const Object*)this
    );
}

void VisualScriptPropertyGet::set_base_path(const NodePath base_path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_base_path,
        (const Object*)this,
        base_path
    );
}

void VisualScriptPropertyGet::set_base_script(const String base_script) {
    rebel_icall_void_string(
        method_bindings.mb_set_base_script,
        (const Object*)this,
        base_script
    );
}

void VisualScriptPropertyGet::set_base_type(const String base_type) {
    rebel_icall_void_string(
        method_bindings.mb_set_base_type,
        (const Object*)this,
        base_type
    );
}

void VisualScriptPropertyGet::set_basic_type(const int64_t basic_type) {
    rebel_icall_void_int(
        method_bindings.mb_set_basic_type,
        (const Object*)this,
        basic_type
    );
}

void VisualScriptPropertyGet::set_call_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_call_mode,
        (const Object*)this,
        mode
    );
}

void VisualScriptPropertyGet::set_index(const String index) {
    rebel_icall_void_string(
        method_bindings.mb_set_index,
        (const Object*)this,
        index
    );
}

void VisualScriptPropertyGet::set_property(const String property) {
    rebel_icall_void_string(
        method_bindings.mb_set_property,
        (const Object*)this,
        property
    );
}

VisualScriptPropertyGet* VisualScriptPropertyGet::create() {
    return (VisualScriptPropertyGet*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptPropertyGet")()
         );
}

void VisualScriptPropertyGet::init_method_bindings() {
    method_bindings.mb__get_type_cache =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "_get_type_cache"
        );
    method_bindings.mb__set_type_cache =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "_set_type_cache"
        );
    method_bindings.mb_get_base_path =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "get_base_path"
        );
    method_bindings.mb_get_base_script =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "get_base_script"
        );
    method_bindings.mb_get_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "get_base_type"
        );
    method_bindings.mb_get_basic_type =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "get_basic_type"
        );
    method_bindings.mb_get_call_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "get_call_mode"
        );
    method_bindings.mb_get_index =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "get_index"
        );
    method_bindings.mb_get_property =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "get_property"
        );
    method_bindings.mb_set_base_path =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "set_base_path"
        );
    method_bindings.mb_set_base_script =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "set_base_script"
        );
    method_bindings.mb_set_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "set_base_type"
        );
    method_bindings.mb_set_basic_type =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "set_basic_type"
        );
    method_bindings.mb_set_call_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "set_call_mode"
        );
    method_bindings.mb_set_index =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "set_index"
        );
    method_bindings.mb_set_property =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertyGet",
            "set_property"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptPropertyGet");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptPropertyGet::MethodBindings VisualScriptPropertyGet::method_bindings = {};
void* VisualScriptPropertyGet::class_tag = nullptr;
} // namespace Rebel
