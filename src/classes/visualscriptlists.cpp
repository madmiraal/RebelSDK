// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptlists.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void VisualScriptLists::add_input_data_port(const int64_t type, const String name, const int64_t index) {
    rebel_icall_void_int_string_int(
        method_bindings.mb_add_input_data_port,
        (const Object*)this,
        type,
        name,
        index
    );
}

void VisualScriptLists::add_output_data_port(const int64_t type, const String name, const int64_t index) {
    rebel_icall_void_int_string_int(
        method_bindings.mb_add_output_data_port,
        (const Object*)this,
        type,
        name,
        index
    );
}

void VisualScriptLists::remove_input_data_port(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_remove_input_data_port,
        (const Object*)this,
        index
    );
}

void VisualScriptLists::remove_output_data_port(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_remove_output_data_port,
        (const Object*)this,
        index
    );
}

void VisualScriptLists::set_input_data_port_name(const int64_t index, const String name) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_input_data_port_name,
        (const Object*)this,
        index,
        name
    );
}

void VisualScriptLists::set_input_data_port_type(const int64_t index, const int64_t type) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_input_data_port_type,
        (const Object*)this,
        index,
        type
    );
}

void VisualScriptLists::set_output_data_port_name(const int64_t index, const String name) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_output_data_port_name,
        (const Object*)this,
        index,
        name
    );
}

void VisualScriptLists::set_output_data_port_type(const int64_t index, const int64_t type) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_output_data_port_type,
        (const Object*)this,
        index,
        type
    );
}

void VisualScriptLists::init_method_bindings() {
    method_bindings.mb_add_input_data_port =
        api->rebel_method_bind_get_method(
            "VisualScriptLists",
            "add_input_data_port"
        );
    method_bindings.mb_add_output_data_port =
        api->rebel_method_bind_get_method(
            "VisualScriptLists",
            "add_output_data_port"
        );
    method_bindings.mb_remove_input_data_port =
        api->rebel_method_bind_get_method(
            "VisualScriptLists",
            "remove_input_data_port"
        );
    method_bindings.mb_remove_output_data_port =
        api->rebel_method_bind_get_method(
            "VisualScriptLists",
            "remove_output_data_port"
        );
    method_bindings.mb_set_input_data_port_name =
        api->rebel_method_bind_get_method(
            "VisualScriptLists",
            "set_input_data_port_name"
        );
    method_bindings.mb_set_input_data_port_type =
        api->rebel_method_bind_get_method(
            "VisualScriptLists",
            "set_input_data_port_type"
        );
    method_bindings.mb_set_output_data_port_name =
        api->rebel_method_bind_get_method(
            "VisualScriptLists",
            "set_output_data_port_name"
        );
    method_bindings.mb_set_output_data_port_type =
        api->rebel_method_bind_get_method(
            "VisualScriptLists",
            "set_output_data_port_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptLists");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptLists::MethodBindings VisualScriptLists::method_bindings = {};
void* VisualScriptLists::class_tag = nullptr;
} // namespace Rebel
