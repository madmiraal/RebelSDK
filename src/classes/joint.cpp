// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/joint.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Joint::_body_exit_tree() {
    rebel_icall_void(
        method_bindings.mb__body_exit_tree,
        (const Object*)this
    );
}

bool Joint::get_exclude_nodes_from_collision() const {
    return rebel_icall_bool(
        method_bindings.mb_get_exclude_nodes_from_collision,
        (const Object*)this
    );
}

NodePath Joint::get_node_a() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_node_a,
        (const Object*)this
    );
}

NodePath Joint::get_node_b() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_node_b,
        (const Object*)this
    );
}

int64_t Joint::get_solver_priority() const {
    return rebel_icall_int(
        method_bindings.mb_get_solver_priority,
        (const Object*)this
    );
}

void Joint::set_exclude_nodes_from_collision(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_exclude_nodes_from_collision,
        (const Object*)this,
        enable
    );
}

void Joint::set_node_a(const NodePath node) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_node_a,
        (const Object*)this,
        node
    );
}

void Joint::set_node_b(const NodePath node) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_node_b,
        (const Object*)this,
        node
    );
}

void Joint::set_solver_priority(const int64_t priority) {
    rebel_icall_void_int(
        method_bindings.mb_set_solver_priority,
        (const Object*)this,
        priority
    );
}

void Joint::init_method_bindings() {
    method_bindings.mb__body_exit_tree =
        api->rebel_method_bind_get_method(
            "Joint",
            "_body_exit_tree"
        );
    method_bindings.mb_get_exclude_nodes_from_collision =
        api->rebel_method_bind_get_method(
            "Joint",
            "get_exclude_nodes_from_collision"
        );
    method_bindings.mb_get_node_a =
        api->rebel_method_bind_get_method(
            "Joint",
            "get_node_a"
        );
    method_bindings.mb_get_node_b =
        api->rebel_method_bind_get_method(
            "Joint",
            "get_node_b"
        );
    method_bindings.mb_get_solver_priority =
        api->rebel_method_bind_get_method(
            "Joint",
            "get_solver_priority"
        );
    method_bindings.mb_set_exclude_nodes_from_collision =
        api->rebel_method_bind_get_method(
            "Joint",
            "set_exclude_nodes_from_collision"
        );
    method_bindings.mb_set_node_a =
        api->rebel_method_bind_get_method(
            "Joint",
            "set_node_a"
        );
    method_bindings.mb_set_node_b =
        api->rebel_method_bind_get_method(
            "Joint",
            "set_node_b"
        );
    method_bindings.mb_set_solver_priority =
        api->rebel_method_bind_get_method(
            "Joint",
            "set_solver_priority"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Joint");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Joint::MethodBindings Joint::method_bindings = {};
void* Joint::class_tag = nullptr;
} // namespace Rebel
