// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptcustomnode.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String VisualScriptCustomNode::_get_caption() {
    return rebel_icall_string(
        method_bindings.mb__get_caption,
        (const Object*)this
    );
}

String VisualScriptCustomNode::_get_category() {
    return rebel_icall_string(
        method_bindings.mb__get_category,
        (const Object*)this
    );
}

int64_t VisualScriptCustomNode::_get_input_value_port_count() {
    return rebel_icall_int(
        method_bindings.mb__get_input_value_port_count,
        (const Object*)this
    );
}

int64_t VisualScriptCustomNode::_get_input_value_port_hint(const int64_t idx) {
    return rebel_icall_int_int(
        method_bindings.mb__get_input_value_port_hint,
        (const Object*)this,
        idx
    );
}

String VisualScriptCustomNode::_get_input_value_port_hint_string(const int64_t idx) {
    return rebel_icall_string_int(
        method_bindings.mb__get_input_value_port_hint_string,
        (const Object*)this,
        idx
    );
}

String VisualScriptCustomNode::_get_input_value_port_name(const int64_t idx) {
    return rebel_icall_string_int(
        method_bindings.mb__get_input_value_port_name,
        (const Object*)this,
        idx
    );
}

int64_t VisualScriptCustomNode::_get_input_value_port_type(const int64_t idx) {
    return rebel_icall_int_int(
        method_bindings.mb__get_input_value_port_type,
        (const Object*)this,
        idx
    );
}

int64_t VisualScriptCustomNode::_get_output_sequence_port_count() {
    return rebel_icall_int(
        method_bindings.mb__get_output_sequence_port_count,
        (const Object*)this
    );
}

String VisualScriptCustomNode::_get_output_sequence_port_text(const int64_t idx) {
    return rebel_icall_string_int(
        method_bindings.mb__get_output_sequence_port_text,
        (const Object*)this,
        idx
    );
}

int64_t VisualScriptCustomNode::_get_output_value_port_count() {
    return rebel_icall_int(
        method_bindings.mb__get_output_value_port_count,
        (const Object*)this
    );
}

int64_t VisualScriptCustomNode::_get_output_value_port_hint(const int64_t idx) {
    return rebel_icall_int_int(
        method_bindings.mb__get_output_value_port_hint,
        (const Object*)this,
        idx
    );
}

String VisualScriptCustomNode::_get_output_value_port_hint_string(const int64_t idx) {
    return rebel_icall_string_int(
        method_bindings.mb__get_output_value_port_hint_string,
        (const Object*)this,
        idx
    );
}

String VisualScriptCustomNode::_get_output_value_port_name(const int64_t idx) {
    return rebel_icall_string_int(
        method_bindings.mb__get_output_value_port_name,
        (const Object*)this,
        idx
    );
}

int64_t VisualScriptCustomNode::_get_output_value_port_type(const int64_t idx) {
    return rebel_icall_int_int(
        method_bindings.mb__get_output_value_port_type,
        (const Object*)this,
        idx
    );
}

String VisualScriptCustomNode::_get_text() {
    return rebel_icall_string(
        method_bindings.mb__get_text,
        (const Object*)this
    );
}

int64_t VisualScriptCustomNode::_get_working_memory_size() {
    return rebel_icall_int(
        method_bindings.mb__get_working_memory_size,
        (const Object*)this
    );
}

bool VisualScriptCustomNode::_has_input_sequence_port() {
    return rebel_icall_bool(
        method_bindings.mb__has_input_sequence_port,
        (const Object*)this
    );
}

void VisualScriptCustomNode::_script_changed() {
    rebel_icall_void(
        method_bindings.mb__script_changed,
        (const Object*)this
    );
}

Variant VisualScriptCustomNode::_step(const Array inputs, const Array outputs, const int64_t start_mode, const Array working_mem) {
    return rebel_icall_variant_array_array_int_array(
        method_bindings.mb__step,
        (const Object*)this,
        inputs,
        outputs,
        start_mode,
        working_mem
    );
}

VisualScriptCustomNode* VisualScriptCustomNode::create() {
    return (VisualScriptCustomNode*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptCustomNode")()
         );
}

void VisualScriptCustomNode::init_method_bindings() {
    method_bindings.mb__get_caption =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_caption"
        );
    method_bindings.mb__get_category =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_category"
        );
    method_bindings.mb__get_input_value_port_count =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_input_value_port_count"
        );
    method_bindings.mb__get_input_value_port_hint =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_input_value_port_hint"
        );
    method_bindings.mb__get_input_value_port_hint_string =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_input_value_port_hint_string"
        );
    method_bindings.mb__get_input_value_port_name =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_input_value_port_name"
        );
    method_bindings.mb__get_input_value_port_type =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_input_value_port_type"
        );
    method_bindings.mb__get_output_sequence_port_count =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_output_sequence_port_count"
        );
    method_bindings.mb__get_output_sequence_port_text =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_output_sequence_port_text"
        );
    method_bindings.mb__get_output_value_port_count =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_output_value_port_count"
        );
    method_bindings.mb__get_output_value_port_hint =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_output_value_port_hint"
        );
    method_bindings.mb__get_output_value_port_hint_string =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_output_value_port_hint_string"
        );
    method_bindings.mb__get_output_value_port_name =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_output_value_port_name"
        );
    method_bindings.mb__get_output_value_port_type =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_output_value_port_type"
        );
    method_bindings.mb__get_text =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_text"
        );
    method_bindings.mb__get_working_memory_size =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_get_working_memory_size"
        );
    method_bindings.mb__has_input_sequence_port =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_has_input_sequence_port"
        );
    method_bindings.mb__script_changed =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_script_changed"
        );
    method_bindings.mb__step =
        api->rebel_method_bind_get_method(
            "VisualScriptCustomNode",
            "_step"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptCustomNode");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptCustomNode::MethodBindings VisualScriptCustomNode::method_bindings = {};
void* VisualScriptCustomNode::class_tag = nullptr;
} // namespace Rebel
