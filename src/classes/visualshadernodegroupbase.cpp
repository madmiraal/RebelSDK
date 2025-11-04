// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodegroupbase.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void VisualShaderNodeGroupBase::add_input_port(const int64_t id, const int64_t type, const String name) {
    rebel_icall_void_int_int_string(
        method_bindings.mb_add_input_port,
        (const Object*)this,
        id,
        type,
        name
    );
}

void VisualShaderNodeGroupBase::add_output_port(const int64_t id, const int64_t type, const String name) {
    rebel_icall_void_int_int_string(
        method_bindings.mb_add_output_port,
        (const Object*)this,
        id,
        type,
        name
    );
}

void VisualShaderNodeGroupBase::clear_input_ports() {
    rebel_icall_void(
        method_bindings.mb_clear_input_ports,
        (const Object*)this
    );
}

void VisualShaderNodeGroupBase::clear_output_ports() {
    rebel_icall_void(
        method_bindings.mb_clear_output_ports,
        (const Object*)this
    );
}

int64_t VisualShaderNodeGroupBase::get_free_input_port_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_free_input_port_id,
        (const Object*)this
    );
}

int64_t VisualShaderNodeGroupBase::get_free_output_port_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_free_output_port_id,
        (const Object*)this
    );
}

int64_t VisualShaderNodeGroupBase::get_input_port_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_input_port_count,
        (const Object*)this
    );
}

String VisualShaderNodeGroupBase::get_inputs() const {
    return rebel_icall_string(
        method_bindings.mb_get_inputs,
        (const Object*)this
    );
}

int64_t VisualShaderNodeGroupBase::get_output_port_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_output_port_count,
        (const Object*)this
    );
}

String VisualShaderNodeGroupBase::get_outputs() const {
    return rebel_icall_string(
        method_bindings.mb_get_outputs,
        (const Object*)this
    );
}

Vector2 VisualShaderNodeGroupBase::get_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

bool VisualShaderNodeGroupBase::has_input_port(const int64_t id) const {
    return rebel_icall_bool_int(
        method_bindings.mb_has_input_port,
        (const Object*)this,
        id
    );
}

bool VisualShaderNodeGroupBase::has_output_port(const int64_t id) const {
    return rebel_icall_bool_int(
        method_bindings.mb_has_output_port,
        (const Object*)this,
        id
    );
}

bool VisualShaderNodeGroupBase::is_valid_port_name(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_is_valid_port_name,
        (const Object*)this,
        name
    );
}

void VisualShaderNodeGroupBase::remove_input_port(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_remove_input_port,
        (const Object*)this,
        id
    );
}

void VisualShaderNodeGroupBase::remove_output_port(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_remove_output_port,
        (const Object*)this,
        id
    );
}

void VisualShaderNodeGroupBase::set_input_port_name(const int64_t id, const String name) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_input_port_name,
        (const Object*)this,
        id,
        name
    );
}

void VisualShaderNodeGroupBase::set_input_port_type(const int64_t id, const int64_t type) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_input_port_type,
        (const Object*)this,
        id,
        type
    );
}

void VisualShaderNodeGroupBase::set_inputs(const String inputs) {
    rebel_icall_void_string(
        method_bindings.mb_set_inputs,
        (const Object*)this,
        inputs
    );
}

void VisualShaderNodeGroupBase::set_output_port_name(const int64_t id, const String name) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_output_port_name,
        (const Object*)this,
        id,
        name
    );
}

void VisualShaderNodeGroupBase::set_output_port_type(const int64_t id, const int64_t type) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_output_port_type,
        (const Object*)this,
        id,
        type
    );
}

void VisualShaderNodeGroupBase::set_outputs(const String outputs) {
    rebel_icall_void_string(
        method_bindings.mb_set_outputs,
        (const Object*)this,
        outputs
    );
}

void VisualShaderNodeGroupBase::set_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_size,
        (const Object*)this,
        size
    );
}

VisualShaderNodeGroupBase* VisualShaderNodeGroupBase::create() {
    return (VisualShaderNodeGroupBase*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeGroupBase")()
         );
}

void VisualShaderNodeGroupBase::init_method_bindings() {
    method_bindings.mb_add_input_port =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "add_input_port"
        );
    method_bindings.mb_add_output_port =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "add_output_port"
        );
    method_bindings.mb_clear_input_ports =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "clear_input_ports"
        );
    method_bindings.mb_clear_output_ports =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "clear_output_ports"
        );
    method_bindings.mb_get_free_input_port_id =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "get_free_input_port_id"
        );
    method_bindings.mb_get_free_output_port_id =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "get_free_output_port_id"
        );
    method_bindings.mb_get_input_port_count =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "get_input_port_count"
        );
    method_bindings.mb_get_inputs =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "get_inputs"
        );
    method_bindings.mb_get_output_port_count =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "get_output_port_count"
        );
    method_bindings.mb_get_outputs =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "get_outputs"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "get_size"
        );
    method_bindings.mb_has_input_port =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "has_input_port"
        );
    method_bindings.mb_has_output_port =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "has_output_port"
        );
    method_bindings.mb_is_valid_port_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "is_valid_port_name"
        );
    method_bindings.mb_remove_input_port =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "remove_input_port"
        );
    method_bindings.mb_remove_output_port =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "remove_output_port"
        );
    method_bindings.mb_set_input_port_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "set_input_port_name"
        );
    method_bindings.mb_set_input_port_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "set_input_port_type"
        );
    method_bindings.mb_set_inputs =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "set_inputs"
        );
    method_bindings.mb_set_output_port_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "set_output_port_name"
        );
    method_bindings.mb_set_output_port_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "set_output_port_type"
        );
    method_bindings.mb_set_outputs =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "set_outputs"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeGroupBase",
            "set_size"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeGroupBase");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeGroupBase::MethodBindings VisualShaderNodeGroupBase::method_bindings = {};
void* VisualShaderNodeGroupBase::class_tag = nullptr;
} // namespace Rebel
