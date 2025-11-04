// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscript.h"

#include "classes/icalls.h"
#include "classes/visualscriptnode.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary VisualScript::_get_data() const {
    return rebel_icall_dictionary(
        method_bindings.mb__get_data,
        (const Object*)this
    );
}

void VisualScript::_node_ports_changed(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__node_ports_changed,
        (const Object*)this,
        arg0
    );
}

void VisualScript::_set_data(const Dictionary data) {
    rebel_icall_void_dictionary(
        method_bindings.mb__set_data,
        (const Object*)this,
        data
    );
}

void VisualScript::add_custom_signal(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_add_custom_signal,
        (const Object*)this,
        name
    );
}

void VisualScript::add_function(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_add_function,
        (const Object*)this,
        name
    );
}

void VisualScript::add_node(const String func, const int64_t id, const Ref<VisualScriptNode> node, const Vector2 position) {
    rebel_icall_void_string_int_object_vector2(
        method_bindings.mb_add_node,
        (const Object*)this,
        func,
        id,
        node.ptr(),
        position
    );
}

void VisualScript::add_variable(const String name, const Variant default_value, const bool _export) {
    rebel_icall_void_string_variant_bool(
        method_bindings.mb_add_variable,
        (const Object*)this,
        name,
        default_value,
        _export
    );
}

void VisualScript::custom_signal_add_argument(const String name, const int64_t type, const String argname, const int64_t index) {
    rebel_icall_void_string_int_string_int(
        method_bindings.mb_custom_signal_add_argument,
        (const Object*)this,
        name,
        type,
        argname,
        index
    );
}

int64_t VisualScript::custom_signal_get_argument_count(const String name) const {
    return rebel_icall_int_string(
        method_bindings.mb_custom_signal_get_argument_count,
        (const Object*)this,
        name
    );
}

String VisualScript::custom_signal_get_argument_name(const String name, const int64_t argidx) const {
    return rebel_icall_string_string_int(
        method_bindings.mb_custom_signal_get_argument_name,
        (const Object*)this,
        name,
        argidx
    );
}

Variant::Type VisualScript::custom_signal_get_argument_type(const String name, const int64_t argidx) const {
    return (Variant::Type)rebel_icall_int_string_int(
        method_bindings.mb_custom_signal_get_argument_type,
        (const Object*)this,
        name,
        argidx
    );
}

void VisualScript::custom_signal_remove_argument(const String name, const int64_t argidx) {
    rebel_icall_void_string_int(
        method_bindings.mb_custom_signal_remove_argument,
        (const Object*)this,
        name,
        argidx
    );
}

void VisualScript::custom_signal_set_argument_name(const String name, const int64_t argidx, const String argname) {
    rebel_icall_void_string_int_string(
        method_bindings.mb_custom_signal_set_argument_name,
        (const Object*)this,
        name,
        argidx,
        argname
    );
}

void VisualScript::custom_signal_set_argument_type(const String name, const int64_t argidx, const int64_t type) {
    rebel_icall_void_string_int_int(
        method_bindings.mb_custom_signal_set_argument_type,
        (const Object*)this,
        name,
        argidx,
        type
    );
}

void VisualScript::custom_signal_swap_argument(const String name, const int64_t argidx, const int64_t withidx) {
    rebel_icall_void_string_int_int(
        method_bindings.mb_custom_signal_swap_argument,
        (const Object*)this,
        name,
        argidx,
        withidx
    );
}

void VisualScript::data_connect(const String func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
    rebel_icall_void_string_int_int_int_int(
        method_bindings.mb_data_connect,
        (const Object*)this,
        func,
        from_node,
        from_port,
        to_node,
        to_port
    );
}

void VisualScript::data_disconnect(const String func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
    rebel_icall_void_string_int_int_int_int(
        method_bindings.mb_data_disconnect,
        (const Object*)this,
        func,
        from_node,
        from_port,
        to_node,
        to_port
    );
}

int64_t VisualScript::get_function_node_id(const String name) const {
    return rebel_icall_int_string(
        method_bindings.mb_get_function_node_id,
        (const Object*)this,
        name
    );
}

Vector2 VisualScript::get_function_scroll(const String name) const {
    return rebel_icall_vector2_string(
        method_bindings.mb_get_function_scroll,
        (const Object*)this,
        name
    );
}

Ref<VisualScriptNode> VisualScript::get_node(const String func, const int64_t id) const {
    return Ref<VisualScriptNode>::create_ref(rebel_icall_object_string_int(
        method_bindings.mb_get_node,
        (const Object*)this,
        func,
        id
    ));
}

Vector2 VisualScript::get_node_position(const String func, const int64_t id) const {
    return rebel_icall_vector2_string_int(
        method_bindings.mb_get_node_position,
        (const Object*)this,
        func,
        id
    );
}

Variant VisualScript::get_variable_default_value(const String name) const {
    return rebel_icall_variant_string(
        method_bindings.mb_get_variable_default_value,
        (const Object*)this,
        name
    );
}

bool VisualScript::get_variable_export(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_get_variable_export,
        (const Object*)this,
        name
    );
}

Dictionary VisualScript::get_variable_info(const String name) const {
    return rebel_icall_dictionary_string(
        method_bindings.mb_get_variable_info,
        (const Object*)this,
        name
    );
}

bool VisualScript::has_custom_signal(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_custom_signal,
        (const Object*)this,
        name
    );
}

bool VisualScript::has_data_connection(const String func, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const {
    return rebel_icall_bool_string_int_int_int_int(
        method_bindings.mb_has_data_connection,
        (const Object*)this,
        func,
        from_node,
        from_port,
        to_node,
        to_port
    );
}

bool VisualScript::has_function(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_function,
        (const Object*)this,
        name
    );
}

bool VisualScript::has_node(const String func, const int64_t id) const {
    return rebel_icall_bool_string_int(
        method_bindings.mb_has_node,
        (const Object*)this,
        func,
        id
    );
}

bool VisualScript::has_sequence_connection(const String func, const int64_t from_node, const int64_t from_output, const int64_t to_node) const {
    return rebel_icall_bool_string_int_int_int(
        method_bindings.mb_has_sequence_connection,
        (const Object*)this,
        func,
        from_node,
        from_output,
        to_node
    );
}

bool VisualScript::has_variable(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_variable,
        (const Object*)this,
        name
    );
}

void VisualScript::remove_custom_signal(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_remove_custom_signal,
        (const Object*)this,
        name
    );
}

void VisualScript::remove_function(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_remove_function,
        (const Object*)this,
        name
    );
}

void VisualScript::remove_node(const String func, const int64_t id) {
    rebel_icall_void_string_int(
        method_bindings.mb_remove_node,
        (const Object*)this,
        func,
        id
    );
}

void VisualScript::remove_variable(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_remove_variable,
        (const Object*)this,
        name
    );
}

void VisualScript::rename_custom_signal(const String name, const String new_name) {
    rebel_icall_void_string_string(
        method_bindings.mb_rename_custom_signal,
        (const Object*)this,
        name,
        new_name
    );
}

void VisualScript::rename_function(const String name, const String new_name) {
    rebel_icall_void_string_string(
        method_bindings.mb_rename_function,
        (const Object*)this,
        name,
        new_name
    );
}

void VisualScript::rename_variable(const String name, const String new_name) {
    rebel_icall_void_string_string(
        method_bindings.mb_rename_variable,
        (const Object*)this,
        name,
        new_name
    );
}

void VisualScript::sequence_connect(const String func, const int64_t from_node, const int64_t from_output, const int64_t to_node) {
    rebel_icall_void_string_int_int_int(
        method_bindings.mb_sequence_connect,
        (const Object*)this,
        func,
        from_node,
        from_output,
        to_node
    );
}

void VisualScript::sequence_disconnect(const String func, const int64_t from_node, const int64_t from_output, const int64_t to_node) {
    rebel_icall_void_string_int_int_int(
        method_bindings.mb_sequence_disconnect,
        (const Object*)this,
        func,
        from_node,
        from_output,
        to_node
    );
}

void VisualScript::set_function_scroll(const String name, const Vector2 ofs) {
    rebel_icall_void_string_vector2(
        method_bindings.mb_set_function_scroll,
        (const Object*)this,
        name,
        ofs
    );
}

void VisualScript::set_instance_base_type(const String type) {
    rebel_icall_void_string(
        method_bindings.mb_set_instance_base_type,
        (const Object*)this,
        type
    );
}

void VisualScript::set_node_position(const String func, const int64_t id, const Vector2 position) {
    rebel_icall_void_string_int_vector2(
        method_bindings.mb_set_node_position,
        (const Object*)this,
        func,
        id,
        position
    );
}

void VisualScript::set_variable_default_value(const String name, const Variant value) {
    rebel_icall_void_string_variant(
        method_bindings.mb_set_variable_default_value,
        (const Object*)this,
        name,
        value
    );
}

void VisualScript::set_variable_export(const String name, const bool enable) {
    rebel_icall_void_string_bool(
        method_bindings.mb_set_variable_export,
        (const Object*)this,
        name,
        enable
    );
}

void VisualScript::set_variable_info(const String name, const Dictionary value) {
    rebel_icall_void_string_dictionary(
        method_bindings.mb_set_variable_info,
        (const Object*)this,
        name,
        value
    );
}

VisualScript* VisualScript::create() {
    return (VisualScript*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScript")()
         );
}

void VisualScript::init_method_bindings() {
    method_bindings.mb__get_data =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "_get_data"
        );
    method_bindings.mb__node_ports_changed =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "_node_ports_changed"
        );
    method_bindings.mb__set_data =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "_set_data"
        );
    method_bindings.mb_add_custom_signal =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "add_custom_signal"
        );
    method_bindings.mb_add_function =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "add_function"
        );
    method_bindings.mb_add_node =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "add_node"
        );
    method_bindings.mb_add_variable =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "add_variable"
        );
    method_bindings.mb_custom_signal_add_argument =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "custom_signal_add_argument"
        );
    method_bindings.mb_custom_signal_get_argument_count =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "custom_signal_get_argument_count"
        );
    method_bindings.mb_custom_signal_get_argument_name =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "custom_signal_get_argument_name"
        );
    method_bindings.mb_custom_signal_get_argument_type =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "custom_signal_get_argument_type"
        );
    method_bindings.mb_custom_signal_remove_argument =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "custom_signal_remove_argument"
        );
    method_bindings.mb_custom_signal_set_argument_name =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "custom_signal_set_argument_name"
        );
    method_bindings.mb_custom_signal_set_argument_type =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "custom_signal_set_argument_type"
        );
    method_bindings.mb_custom_signal_swap_argument =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "custom_signal_swap_argument"
        );
    method_bindings.mb_data_connect =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "data_connect"
        );
    method_bindings.mb_data_disconnect =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "data_disconnect"
        );
    method_bindings.mb_get_function_node_id =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "get_function_node_id"
        );
    method_bindings.mb_get_function_scroll =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "get_function_scroll"
        );
    method_bindings.mb_get_node =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "get_node"
        );
    method_bindings.mb_get_node_position =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "get_node_position"
        );
    method_bindings.mb_get_variable_default_value =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "get_variable_default_value"
        );
    method_bindings.mb_get_variable_export =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "get_variable_export"
        );
    method_bindings.mb_get_variable_info =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "get_variable_info"
        );
    method_bindings.mb_has_custom_signal =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "has_custom_signal"
        );
    method_bindings.mb_has_data_connection =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "has_data_connection"
        );
    method_bindings.mb_has_function =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "has_function"
        );
    method_bindings.mb_has_node =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "has_node"
        );
    method_bindings.mb_has_sequence_connection =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "has_sequence_connection"
        );
    method_bindings.mb_has_variable =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "has_variable"
        );
    method_bindings.mb_remove_custom_signal =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "remove_custom_signal"
        );
    method_bindings.mb_remove_function =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "remove_function"
        );
    method_bindings.mb_remove_node =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "remove_node"
        );
    method_bindings.mb_remove_variable =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "remove_variable"
        );
    method_bindings.mb_rename_custom_signal =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "rename_custom_signal"
        );
    method_bindings.mb_rename_function =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "rename_function"
        );
    method_bindings.mb_rename_variable =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "rename_variable"
        );
    method_bindings.mb_sequence_connect =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "sequence_connect"
        );
    method_bindings.mb_sequence_disconnect =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "sequence_disconnect"
        );
    method_bindings.mb_set_function_scroll =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "set_function_scroll"
        );
    method_bindings.mb_set_instance_base_type =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "set_instance_base_type"
        );
    method_bindings.mb_set_node_position =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "set_node_position"
        );
    method_bindings.mb_set_variable_default_value =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "set_variable_default_value"
        );
    method_bindings.mb_set_variable_export =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "set_variable_export"
        );
    method_bindings.mb_set_variable_info =
        api->rebel_method_bind_get_method(
            "VisualScript",
            "set_variable_info"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScript");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScript::MethodBindings VisualScript::method_bindings = {};
void* VisualScript::class_tag = nullptr;
} // namespace Rebel
