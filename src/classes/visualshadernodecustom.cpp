// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernodecustom.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualShaderNodeCustom::_get_category() {
    return rebel_icall_string(
        method_bindings.mb__get_category,
        (const Object*)this
    );
}

String VisualShaderNodeCustom::_get_code(const Array input_vars, const Array output_vars, const int64_t mode, const int64_t type) {
    return rebel_icall_string_array_array_int_int(
        method_bindings.mb__get_code,
        (const Object*)this,
        input_vars,
        output_vars,
        mode,
        type
    );
}

String VisualShaderNodeCustom::_get_description() {
    return rebel_icall_string(
        method_bindings.mb__get_description,
        (const Object*)this
    );
}

String VisualShaderNodeCustom::_get_global_code(const int64_t mode) {
    return rebel_icall_string_int(
        method_bindings.mb__get_global_code,
        (const Object*)this,
        mode
    );
}

int64_t VisualShaderNodeCustom::_get_input_port_count() {
    return rebel_icall_int(
        method_bindings.mb__get_input_port_count,
        (const Object*)this
    );
}

String VisualShaderNodeCustom::_get_input_port_name(const int64_t port) {
    return rebel_icall_string_int(
        method_bindings.mb__get_input_port_name,
        (const Object*)this,
        port
    );
}

int64_t VisualShaderNodeCustom::_get_input_port_type(const int64_t port) {
    return rebel_icall_int_int(
        method_bindings.mb__get_input_port_type,
        (const Object*)this,
        port
    );
}

String VisualShaderNodeCustom::_get_name() {
    return rebel_icall_string(
        method_bindings.mb__get_name,
        (const Object*)this
    );
}

int64_t VisualShaderNodeCustom::_get_output_port_count() {
    return rebel_icall_int(
        method_bindings.mb__get_output_port_count,
        (const Object*)this
    );
}

String VisualShaderNodeCustom::_get_output_port_name(const int64_t port) {
    return rebel_icall_string_int(
        method_bindings.mb__get_output_port_name,
        (const Object*)this,
        port
    );
}

int64_t VisualShaderNodeCustom::_get_output_port_type(const int64_t port) {
    return rebel_icall_int_int(
        method_bindings.mb__get_output_port_type,
        (const Object*)this,
        port
    );
}

int64_t VisualShaderNodeCustom::_get_return_icon_type() {
    return rebel_icall_int(
        method_bindings.mb__get_return_icon_type,
        (const Object*)this
    );
}

String VisualShaderNodeCustom::_get_subcategory() {
    return rebel_icall_string(
        method_bindings.mb__get_subcategory,
        (const Object*)this
    );
}

bool VisualShaderNodeCustom::_is_initialized() {
    return rebel_icall_bool(
        method_bindings.mb__is_initialized,
        (const Object*)this
    );
}

void VisualShaderNodeCustom::_set_initialized(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb__set_initialized,
        (const Object*)this,
        enabled
    );
}

void VisualShaderNodeCustom::_set_input_port_default_value(const int64_t port, const Variant value) {
    rebel_icall_void_int_variant(
        method_bindings.mb__set_input_port_default_value,
        (const Object*)this,
        port,
        value
    );
}

VisualShaderNodeCustom* VisualShaderNodeCustom::create() {
    return (VisualShaderNodeCustom*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualShaderNodeCustom")()
         );
}

void VisualShaderNodeCustom::init_method_bindings() {
    method_bindings.mb__get_category =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_category"
        );
    method_bindings.mb__get_code =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_code"
        );
    method_bindings.mb__get_description =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_description"
        );
    method_bindings.mb__get_global_code =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_global_code"
        );
    method_bindings.mb__get_input_port_count =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_input_port_count"
        );
    method_bindings.mb__get_input_port_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_input_port_name"
        );
    method_bindings.mb__get_input_port_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_input_port_type"
        );
    method_bindings.mb__get_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_name"
        );
    method_bindings.mb__get_output_port_count =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_output_port_count"
        );
    method_bindings.mb__get_output_port_name =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_output_port_name"
        );
    method_bindings.mb__get_output_port_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_output_port_type"
        );
    method_bindings.mb__get_return_icon_type =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_return_icon_type"
        );
    method_bindings.mb__get_subcategory =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_get_subcategory"
        );
    method_bindings.mb__is_initialized =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_is_initialized"
        );
    method_bindings.mb__set_initialized =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_set_initialized"
        );
    method_bindings.mb__set_input_port_default_value =
        api->rebel_method_bind_get_method(
            "VisualShaderNodeCustom",
            "_set_input_port_default_value"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNodeCustom");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNodeCustom::MethodBindings VisualShaderNodeCustom::method_bindings = {};
void* VisualShaderNodeCustom::class_tag = nullptr;
} // namespace Rebel
