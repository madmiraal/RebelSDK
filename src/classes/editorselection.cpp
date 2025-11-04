// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorselection.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorSelection::_emit_change() {
    rebel_icall_void(
        method_bindings.mb__emit_change,
        (const Object*)this
    );
}

void EditorSelection::_node_removed(const Node* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__node_removed,
        (const Object*)this,
        arg0
    );
}

void EditorSelection::add_node(const Node* node) {
    rebel_icall_void_object(
        method_bindings.mb_add_node,
        (const Object*)this,
        node
    );
}

void EditorSelection::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

Array EditorSelection::get_selected_nodes() {
    return rebel_icall_array(
        method_bindings.mb_get_selected_nodes,
        (const Object*)this
    );
}

Array EditorSelection::get_transformable_selected_nodes() {
    return rebel_icall_array(
        method_bindings.mb_get_transformable_selected_nodes,
        (const Object*)this
    );
}

void EditorSelection::remove_node(const Node* node) {
    rebel_icall_void_object(
        method_bindings.mb_remove_node,
        (const Object*)this,
        node
    );
}

void EditorSelection::init_method_bindings() {
    method_bindings.mb__emit_change =
        api->rebel_method_bind_get_method(
            "EditorSelection",
            "_emit_change"
        );
    method_bindings.mb__node_removed =
        api->rebel_method_bind_get_method(
            "EditorSelection",
            "_node_removed"
        );
    method_bindings.mb_add_node =
        api->rebel_method_bind_get_method(
            "EditorSelection",
            "add_node"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "EditorSelection",
            "clear"
        );
    method_bindings.mb_get_selected_nodes =
        api->rebel_method_bind_get_method(
            "EditorSelection",
            "get_selected_nodes"
        );
    method_bindings.mb_get_transformable_selected_nodes =
        api->rebel_method_bind_get_method(
            "EditorSelection",
            "get_transformable_selected_nodes"
        );
    method_bindings.mb_remove_node =
        api->rebel_method_bind_get_method(
            "EditorSelection",
            "remove_node"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorSelection");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorSelection::MethodBindings EditorSelection::method_bindings = {};
void* EditorSelection::class_tag = nullptr;
} // namespace Rebel
