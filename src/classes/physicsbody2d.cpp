// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physicsbody2d.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t PhysicsBody2D::_get_layers() const {
    return rebel_icall_int(
        method_bindings.mb__get_layers,
        (const Object*)this
    );
}

void PhysicsBody2D::_set_layers(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb__set_layers,
        (const Object*)this,
        mask
    );
}

void PhysicsBody2D::add_collision_exception_with(const Node* body) {
    rebel_icall_void_object(
        method_bindings.mb_add_collision_exception_with,
        (const Object*)this,
        body
    );
}

Array PhysicsBody2D::get_collision_exceptions() {
    return rebel_icall_array(
        method_bindings.mb_get_collision_exceptions,
        (const Object*)this
    );
}

void PhysicsBody2D::remove_collision_exception_with(const Node* body) {
    rebel_icall_void_object(
        method_bindings.mb_remove_collision_exception_with,
        (const Object*)this,
        body
    );
}

void PhysicsBody2D::init_method_bindings() {
    method_bindings.mb__get_layers =
        api->rebel_method_bind_get_method(
            "PhysicsBody2D",
            "_get_layers"
        );
    method_bindings.mb__set_layers =
        api->rebel_method_bind_get_method(
            "PhysicsBody2D",
            "_set_layers"
        );
    method_bindings.mb_add_collision_exception_with =
        api->rebel_method_bind_get_method(
            "PhysicsBody2D",
            "add_collision_exception_with"
        );
    method_bindings.mb_get_collision_exceptions =
        api->rebel_method_bind_get_method(
            "PhysicsBody2D",
            "get_collision_exceptions"
        );
    method_bindings.mb_remove_collision_exception_with =
        api->rebel_method_bind_get_method(
            "PhysicsBody2D",
            "remove_collision_exception_with"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PhysicsBody2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PhysicsBody2D::MethodBindings PhysicsBody2D::method_bindings = {};
void* PhysicsBody2D::class_tag = nullptr;
} // namespace Rebel
