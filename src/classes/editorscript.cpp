// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorscript.h"

#include "classes/editorinterface.h"
#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorScript::_run() {
    rebel_icall_void(
        method_bindings.mb__run,
        (const Object*)this
    );
}

void EditorScript::add_root_node(const Node* node) {
    rebel_icall_void_object(
        method_bindings.mb_add_root_node,
        (const Object*)this,
        node
    );
}

EditorInterface* EditorScript::get_editor_interface() {
    return (EditorInterface*)rebel_icall_object(
        method_bindings.mb_get_editor_interface,
        (const Object*)this
    );
}

Node* EditorScript::get_scene() {
    return (Node*)rebel_icall_object(
        method_bindings.mb_get_scene,
        (const Object*)this
    );
}

void EditorScript::init_method_bindings() {
    method_bindings.mb__run =
        api->rebel_method_bind_get_method(
            "EditorScript",
            "_run"
        );
    method_bindings.mb_add_root_node =
        api->rebel_method_bind_get_method(
            "EditorScript",
            "add_root_node"
        );
    method_bindings.mb_get_editor_interface =
        api->rebel_method_bind_get_method(
            "EditorScript",
            "get_editor_interface"
        );
    method_bindings.mb_get_scene =
        api->rebel_method_bind_get_method(
            "EditorScript",
            "get_scene"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorScript");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorScript::MethodBindings EditorScript::method_bindings = {};
void* EditorScript::class_tag = nullptr;
} // namespace Rebel
