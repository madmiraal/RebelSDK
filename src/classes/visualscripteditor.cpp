// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscripteditor.h"

#include "classes/icalls.h"
#include "classes/script.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void VisualScriptEditor::add_custom_node(const String name, const String category, const Ref<Script> script) {
    rebel_icall_void_string_string_object(
        method_bindings.mb_add_custom_node,
        (const Object*)this,
        name,
        category,
        script.ptr()
    );
}

void VisualScriptEditor::remove_custom_node(const String name, const String category) {
    rebel_icall_void_string_string(
        method_bindings.mb_remove_custom_node,
        (const Object*)this,
        name,
        category
    );
}

VisualScriptEditor* VisualScriptEditor::singleton = nullptr;

VisualScriptEditor::VisualScriptEditor() {
    owner = api->rebel_global_get_singleton((char*) "VisualScriptEditor");
}

void VisualScriptEditor::init_method_bindings() {
    method_bindings.mb_add_custom_node =
        api->rebel_method_bind_get_method(
            "_VisualScriptEditor",
            "add_custom_node"
        );
    method_bindings.mb_remove_custom_node =
        api->rebel_method_bind_get_method(
            "_VisualScriptEditor",
            "remove_custom_node"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_VisualScriptEditor");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptEditor::MethodBindings VisualScriptEditor::method_bindings = {};
void* VisualScriptEditor::class_tag = nullptr;
} // namespace Rebel
