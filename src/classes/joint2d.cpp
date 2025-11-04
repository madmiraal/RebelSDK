// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/joint2d.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Joint2D::_body_exit_tree() {
    rebel_icall_void(
        method_bindings.mb__body_exit_tree,
        (const Object*)this
    );
}

real_t Joint2D::get_bias() const {
    return rebel_icall_float(
        method_bindings.mb_get_bias,
        (const Object*)this
    );
}

bool Joint2D::get_exclude_nodes_from_collision() const {
    return rebel_icall_bool(
        method_bindings.mb_get_exclude_nodes_from_collision,
        (const Object*)this
    );
}

NodePath Joint2D::get_node_a() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_node_a,
        (const Object*)this
    );
}

NodePath Joint2D::get_node_b() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_node_b,
        (const Object*)this
    );
}

void Joint2D::set_bias(const real_t bias) {
    rebel_icall_void_float(
        method_bindings.mb_set_bias,
        (const Object*)this,
        bias
    );
}

void Joint2D::set_exclude_nodes_from_collision(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_exclude_nodes_from_collision,
        (const Object*)this,
        enable
    );
}

void Joint2D::set_node_a(const NodePath node) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_node_a,
        (const Object*)this,
        node
    );
}

void Joint2D::set_node_b(const NodePath node) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_node_b,
        (const Object*)this,
        node
    );
}

void Joint2D::init_method_bindings() {
    method_bindings.mb__body_exit_tree =
        api->rebel_method_bind_get_method(
            "Joint2D",
            "_body_exit_tree"
        );
    method_bindings.mb_get_bias =
        api->rebel_method_bind_get_method(
            "Joint2D",
            "get_bias"
        );
    method_bindings.mb_get_exclude_nodes_from_collision =
        api->rebel_method_bind_get_method(
            "Joint2D",
            "get_exclude_nodes_from_collision"
        );
    method_bindings.mb_get_node_a =
        api->rebel_method_bind_get_method(
            "Joint2D",
            "get_node_a"
        );
    method_bindings.mb_get_node_b =
        api->rebel_method_bind_get_method(
            "Joint2D",
            "get_node_b"
        );
    method_bindings.mb_set_bias =
        api->rebel_method_bind_get_method(
            "Joint2D",
            "set_bias"
        );
    method_bindings.mb_set_exclude_nodes_from_collision =
        api->rebel_method_bind_get_method(
            "Joint2D",
            "set_exclude_nodes_from_collision"
        );
    method_bindings.mb_set_node_a =
        api->rebel_method_bind_get_method(
            "Joint2D",
            "set_node_a"
        );
    method_bindings.mb_set_node_b =
        api->rebel_method_bind_get_method(
            "Joint2D",
            "set_node_b"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Joint2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Joint2D::MethodBindings Joint2D::method_bindings = {};
void* Joint2D::class_tag = nullptr;
} // namespace Rebel
