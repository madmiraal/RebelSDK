// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptpropertyset.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary VisualScriptPropertySet::_get_type_cache() const {
    return rebel_icall_dictionary(
        method_bindings.mb__get_type_cache,
        (const Object*)this
    );
}

void VisualScriptPropertySet::_set_type_cache(const Dictionary type_cache) {
    rebel_icall_void_dictionary(
        method_bindings.mb__set_type_cache,
        (const Object*)this,
        type_cache
    );
}

VisualScriptPropertySet::AssignOp VisualScriptPropertySet::get_assign_op() const {
    return (VisualScriptPropertySet::AssignOp)rebel_icall_int(
        method_bindings.mb_get_assign_op,
        (const Object*)this
    );
}

NodePath VisualScriptPropertySet::get_base_path() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_base_path,
        (const Object*)this
    );
}

String VisualScriptPropertySet::get_base_script() const {
    return rebel_icall_string(
        method_bindings.mb_get_base_script,
        (const Object*)this
    );
}

String VisualScriptPropertySet::get_base_type() const {
    return rebel_icall_string(
        method_bindings.mb_get_base_type,
        (const Object*)this
    );
}

Variant::Type VisualScriptPropertySet::get_basic_type() const {
    return (Variant::Type)rebel_icall_int(
        method_bindings.mb_get_basic_type,
        (const Object*)this
    );
}

VisualScriptPropertySet::CallMode VisualScriptPropertySet::get_call_mode() const {
    return (VisualScriptPropertySet::CallMode)rebel_icall_int(
        method_bindings.mb_get_call_mode,
        (const Object*)this
    );
}

String VisualScriptPropertySet::get_index() const {
    return rebel_icall_string(
        method_bindings.mb_get_index,
        (const Object*)this
    );
}

String VisualScriptPropertySet::get_property() const {
    return rebel_icall_string(
        method_bindings.mb_get_property,
        (const Object*)this
    );
}

void VisualScriptPropertySet::set_assign_op(const int64_t assign_op) {
    rebel_icall_void_int(
        method_bindings.mb_set_assign_op,
        (const Object*)this,
        assign_op
    );
}

void VisualScriptPropertySet::set_base_path(const NodePath base_path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_base_path,
        (const Object*)this,
        base_path
    );
}

void VisualScriptPropertySet::set_base_script(const String base_script) {
    rebel_icall_void_string(
        method_bindings.mb_set_base_script,
        (const Object*)this,
        base_script
    );
}

void VisualScriptPropertySet::set_base_type(const String base_type) {
    rebel_icall_void_string(
        method_bindings.mb_set_base_type,
        (const Object*)this,
        base_type
    );
}

void VisualScriptPropertySet::set_basic_type(const int64_t basic_type) {
    rebel_icall_void_int(
        method_bindings.mb_set_basic_type,
        (const Object*)this,
        basic_type
    );
}

void VisualScriptPropertySet::set_call_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_call_mode,
        (const Object*)this,
        mode
    );
}

void VisualScriptPropertySet::set_index(const String index) {
    rebel_icall_void_string(
        method_bindings.mb_set_index,
        (const Object*)this,
        index
    );
}

void VisualScriptPropertySet::set_property(const String property) {
    rebel_icall_void_string(
        method_bindings.mb_set_property,
        (const Object*)this,
        property
    );
}

VisualScriptPropertySet* VisualScriptPropertySet::create() {
    return (VisualScriptPropertySet*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptPropertySet")()
         );
}

void VisualScriptPropertySet::init_method_bindings() {
    method_bindings.mb__get_type_cache =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "_get_type_cache"
        );
    method_bindings.mb__set_type_cache =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "_set_type_cache"
        );
    method_bindings.mb_get_assign_op =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "get_assign_op"
        );
    method_bindings.mb_get_base_path =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "get_base_path"
        );
    method_bindings.mb_get_base_script =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "get_base_script"
        );
    method_bindings.mb_get_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "get_base_type"
        );
    method_bindings.mb_get_basic_type =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "get_basic_type"
        );
    method_bindings.mb_get_call_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "get_call_mode"
        );
    method_bindings.mb_get_index =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "get_index"
        );
    method_bindings.mb_get_property =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "get_property"
        );
    method_bindings.mb_set_assign_op =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "set_assign_op"
        );
    method_bindings.mb_set_base_path =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "set_base_path"
        );
    method_bindings.mb_set_base_script =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "set_base_script"
        );
    method_bindings.mb_set_base_type =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "set_base_type"
        );
    method_bindings.mb_set_basic_type =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "set_basic_type"
        );
    method_bindings.mb_set_call_mode =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "set_call_mode"
        );
    method_bindings.mb_set_index =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "set_index"
        );
    method_bindings.mb_set_property =
        api->rebel_method_bind_get_method(
            "VisualScriptPropertySet",
            "set_property"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptPropertySet");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptPropertySet::MethodBindings VisualScriptPropertySet::method_bindings = {};
void* VisualScriptPropertySet::class_tag = nullptr;
} // namespace Rebel
