// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptnode.h"

#include "classes/icalls.h"
#include "classes/visualscript.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array VisualScriptNode::_get_default_input_values() const {
    return rebel_icall_array(
        method_bindings.mb__get_default_input_values,
        (const Object*)this
    );
}

void VisualScriptNode::_set_default_input_values(const Array values) {
    rebel_icall_void_array(
        method_bindings.mb__set_default_input_values,
        (const Object*)this,
        values
    );
}

Variant VisualScriptNode::get_default_input_value(const int64_t port_idx) const {
    return rebel_icall_variant_int(
        method_bindings.mb_get_default_input_value,
        (const Object*)this,
        port_idx
    );
}

Ref<VisualScript> VisualScriptNode::get_visual_script() const {
    return Ref<VisualScript>::create_ref(rebel_icall_object(
        method_bindings.mb_get_visual_script,
        (const Object*)this
    ));
}

void VisualScriptNode::ports_changed_notify() {
    rebel_icall_void(
        method_bindings.mb_ports_changed_notify,
        (const Object*)this
    );
}

void VisualScriptNode::set_default_input_value(const int64_t port_idx, const Variant value) {
    rebel_icall_void_int_variant(
        method_bindings.mb_set_default_input_value,
        (const Object*)this,
        port_idx,
        value
    );
}

void VisualScriptNode::init_method_bindings() {
    method_bindings.mb__get_default_input_values =
        api->rebel_method_bind_get_method(
            "VisualScriptNode",
            "_get_default_input_values"
        );
    method_bindings.mb__set_default_input_values =
        api->rebel_method_bind_get_method(
            "VisualScriptNode",
            "_set_default_input_values"
        );
    method_bindings.mb_get_default_input_value =
        api->rebel_method_bind_get_method(
            "VisualScriptNode",
            "get_default_input_value"
        );
    method_bindings.mb_get_visual_script =
        api->rebel_method_bind_get_method(
            "VisualScriptNode",
            "get_visual_script"
        );
    method_bindings.mb_ports_changed_notify =
        api->rebel_method_bind_get_method(
            "VisualScriptNode",
            "ports_changed_notify"
        );
    method_bindings.mb_set_default_input_value =
        api->rebel_method_bind_get_method(
            "VisualScriptNode",
            "set_default_input_value"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptNode");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptNode::MethodBindings VisualScriptNode::method_bindings = {};
void* VisualScriptNode::class_tag = nullptr;
} // namespace Rebel
