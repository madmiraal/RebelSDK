// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorscriptpicker.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Node* EditorScriptPicker::get_script_owner() const {
    return (Node*)rebel_icall_object(
        method_bindings.mb_get_script_owner,
        (const Object*)this
    );
}

void EditorScriptPicker::set_script_owner(const Node* owner_node) {
    rebel_icall_void_object(
        method_bindings.mb_set_script_owner,
        (const Object*)this,
        owner_node
    );
}

void EditorScriptPicker::init_method_bindings() {
    method_bindings.mb_get_script_owner =
        api->rebel_method_bind_get_method(
            "EditorScriptPicker",
            "get_script_owner"
        );
    method_bindings.mb_set_script_owner =
        api->rebel_method_bind_get_method(
            "EditorScriptPicker",
            "set_script_owner"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorScriptPicker");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorScriptPicker::MethodBindings EditorScriptPicker::method_bindings = {};
void* EditorScriptPicker::class_tag = nullptr;
} // namespace Rebel
