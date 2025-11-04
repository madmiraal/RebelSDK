// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualshadernode.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array VisualShaderNode::get_default_input_values() const {
    return rebel_icall_array(
        method_bindings.mb_get_default_input_values,
        (const Object*)this
    );
}

Variant VisualShaderNode::get_input_port_default_value(const int64_t port) const {
    return rebel_icall_variant_int(
        method_bindings.mb_get_input_port_default_value,
        (const Object*)this,
        port
    );
}

int64_t VisualShaderNode::get_output_port_for_preview() const {
    return rebel_icall_int(
        method_bindings.mb_get_output_port_for_preview,
        (const Object*)this
    );
}

void VisualShaderNode::set_default_input_values(const Array values) {
    rebel_icall_void_array(
        method_bindings.mb_set_default_input_values,
        (const Object*)this,
        values
    );
}

void VisualShaderNode::set_input_port_default_value(const int64_t port, const Variant value) {
    rebel_icall_void_int_variant(
        method_bindings.mb_set_input_port_default_value,
        (const Object*)this,
        port,
        value
    );
}

void VisualShaderNode::set_output_port_for_preview(const int64_t port) {
    rebel_icall_void_int(
        method_bindings.mb_set_output_port_for_preview,
        (const Object*)this,
        port
    );
}

void VisualShaderNode::init_method_bindings() {
    method_bindings.mb_get_default_input_values =
        api->rebel_method_bind_get_method(
            "VisualShaderNode",
            "get_default_input_values"
        );
    method_bindings.mb_get_input_port_default_value =
        api->rebel_method_bind_get_method(
            "VisualShaderNode",
            "get_input_port_default_value"
        );
    method_bindings.mb_get_output_port_for_preview =
        api->rebel_method_bind_get_method(
            "VisualShaderNode",
            "get_output_port_for_preview"
        );
    method_bindings.mb_set_default_input_values =
        api->rebel_method_bind_get_method(
            "VisualShaderNode",
            "set_default_input_values"
        );
    method_bindings.mb_set_input_port_default_value =
        api->rebel_method_bind_get_method(
            "VisualShaderNode",
            "set_input_port_default_value"
        );
    method_bindings.mb_set_output_port_for_preview =
        api->rebel_method_bind_get_method(
            "VisualShaderNode",
            "set_output_port_for_preview"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualShaderNode");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualShaderNode::MethodBindings VisualShaderNode::method_bindings = {};
void* VisualShaderNode::class_tag = nullptr;
} // namespace Rebel
