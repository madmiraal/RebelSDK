// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/visualscriptscenenode.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
NodePath VisualScriptSceneNode::get_node_path() {
    return rebel_icall_nodepath(
        method_bindings.mb_get_node_path,
        (const Object*)this
    );
}

void VisualScriptSceneNode::set_node_path(const NodePath path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_node_path,
        (const Object*)this,
        path
    );
}

VisualScriptSceneNode* VisualScriptSceneNode::create() {
    return (VisualScriptSceneNode*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"VisualScriptSceneNode")()
         );
}

void VisualScriptSceneNode::init_method_bindings() {
    method_bindings.mb_get_node_path =
        api->rebel_method_bind_get_method(
            "VisualScriptSceneNode",
            "get_node_path"
        );
    method_bindings.mb_set_node_path =
        api->rebel_method_bind_get_method(
            "VisualScriptSceneNode",
            "set_node_path"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "VisualScriptSceneNode");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

VisualScriptSceneNode::MethodBindings VisualScriptSceneNode::method_bindings = {};
void* VisualScriptSceneNode::class_tag = nullptr;
} // namespace Rebel
