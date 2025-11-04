// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/xmlparser.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t XMLParser::get_attribute_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_attribute_count,
        (const Object*)this
    );
}

String XMLParser::get_attribute_name(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_attribute_name,
        (const Object*)this,
        idx
    );
}

String XMLParser::get_attribute_value(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_attribute_value,
        (const Object*)this,
        idx
    );
}

int64_t XMLParser::get_current_line() const {
    return rebel_icall_int(
        method_bindings.mb_get_current_line,
        (const Object*)this
    );
}

String XMLParser::get_named_attribute_value(const String name) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_named_attribute_value,
        (const Object*)this,
        name
    );
}

String XMLParser::get_named_attribute_value_safe(const String name) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_named_attribute_value_safe,
        (const Object*)this,
        name
    );
}

String XMLParser::get_node_data() const {
    return rebel_icall_string(
        method_bindings.mb_get_node_data,
        (const Object*)this
    );
}

String XMLParser::get_node_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_node_name,
        (const Object*)this
    );
}

int64_t XMLParser::get_node_offset() const {
    return rebel_icall_int(
        method_bindings.mb_get_node_offset,
        (const Object*)this
    );
}

XMLParser::NodeType XMLParser::get_node_type() {
    return (XMLParser::NodeType)rebel_icall_int(
        method_bindings.mb_get_node_type,
        (const Object*)this
    );
}

bool XMLParser::has_attribute(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_attribute,
        (const Object*)this,
        name
    );
}

bool XMLParser::is_empty() const {
    return rebel_icall_bool(
        method_bindings.mb_is_empty,
        (const Object*)this
    );
}

Error XMLParser::open(const String file) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_open,
        (const Object*)this,
        file
    );
}

Error XMLParser::open_buffer(const PoolByteArray buffer) {
    return (Error)rebel_icall_int_poolbytearray(
        method_bindings.mb_open_buffer,
        (const Object*)this,
        buffer
    );
}

Error XMLParser::read() {
    return (Error)rebel_icall_int(
        method_bindings.mb_read,
        (const Object*)this
    );
}

Error XMLParser::seek(const int64_t position) {
    return (Error)rebel_icall_int_int(
        method_bindings.mb_seek,
        (const Object*)this,
        position
    );
}

void XMLParser::skip_section() {
    rebel_icall_void(
        method_bindings.mb_skip_section,
        (const Object*)this
    );
}

XMLParser* XMLParser::create() {
    return (XMLParser*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"XMLParser")()
         );
}

void XMLParser::init_method_bindings() {
    method_bindings.mb_get_attribute_count =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "get_attribute_count"
        );
    method_bindings.mb_get_attribute_name =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "get_attribute_name"
        );
    method_bindings.mb_get_attribute_value =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "get_attribute_value"
        );
    method_bindings.mb_get_current_line =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "get_current_line"
        );
    method_bindings.mb_get_named_attribute_value =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "get_named_attribute_value"
        );
    method_bindings.mb_get_named_attribute_value_safe =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "get_named_attribute_value_safe"
        );
    method_bindings.mb_get_node_data =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "get_node_data"
        );
    method_bindings.mb_get_node_name =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "get_node_name"
        );
    method_bindings.mb_get_node_offset =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "get_node_offset"
        );
    method_bindings.mb_get_node_type =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "get_node_type"
        );
    method_bindings.mb_has_attribute =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "has_attribute"
        );
    method_bindings.mb_is_empty =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "is_empty"
        );
    method_bindings.mb_open =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "open"
        );
    method_bindings.mb_open_buffer =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "open_buffer"
        );
    method_bindings.mb_read =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "read"
        );
    method_bindings.mb_seek =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "seek"
        );
    method_bindings.mb_skip_section =
        api->rebel_method_bind_get_method(
            "XMLParser",
            "skip_section"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "XMLParser");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

XMLParser::MethodBindings XMLParser::method_bindings = {};
void* XMLParser::class_tag = nullptr;
} // namespace Rebel
