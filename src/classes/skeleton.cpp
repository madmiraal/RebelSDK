// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/skeleton.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "classes/skin.h"
#include "classes/skinreference.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Skeleton::add_bone(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_add_bone,
        (const Object*)this,
        name
    );
}

void Skeleton::bind_child_node_to_bone(const int64_t bone_idx, const Node* node) {
    rebel_icall_void_int_object(
        method_bindings.mb_bind_child_node_to_bone,
        (const Object*)this,
        bone_idx,
        node
    );
}

void Skeleton::clear_bones() {
    rebel_icall_void(
        method_bindings.mb_clear_bones,
        (const Object*)this
    );
}

void Skeleton::clear_bones_global_pose_override() {
    rebel_icall_void(
        method_bindings.mb_clear_bones_global_pose_override,
        (const Object*)this
    );
}

int64_t Skeleton::find_bone(const String name) const {
    return rebel_icall_int_string(
        method_bindings.mb_find_bone,
        (const Object*)this,
        name
    );
}

int64_t Skeleton::get_bone_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_bone_count,
        (const Object*)this
    );
}

Transform Skeleton::get_bone_custom_pose(const int64_t bone_idx) const {
    return rebel_icall_transform_int(
        method_bindings.mb_get_bone_custom_pose,
        (const Object*)this,
        bone_idx
    );
}

Transform Skeleton::get_bone_global_pose(const int64_t bone_idx) const {
    return rebel_icall_transform_int(
        method_bindings.mb_get_bone_global_pose,
        (const Object*)this,
        bone_idx
    );
}

Transform Skeleton::get_bone_global_pose_no_override(const int64_t bone_idx) const {
    return rebel_icall_transform_int(
        method_bindings.mb_get_bone_global_pose_no_override,
        (const Object*)this,
        bone_idx
    );
}

String Skeleton::get_bone_name(const int64_t bone_idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_bone_name,
        (const Object*)this,
        bone_idx
    );
}

int64_t Skeleton::get_bone_parent(const int64_t bone_idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_bone_parent,
        (const Object*)this,
        bone_idx
    );
}

Transform Skeleton::get_bone_pose(const int64_t bone_idx) const {
    return rebel_icall_transform_int(
        method_bindings.mb_get_bone_pose,
        (const Object*)this,
        bone_idx
    );
}

Transform Skeleton::get_bone_rest(const int64_t bone_idx) const {
    return rebel_icall_transform_int(
        method_bindings.mb_get_bone_rest,
        (const Object*)this,
        bone_idx
    );
}

Array Skeleton::get_bound_child_nodes_to_bone(const int64_t bone_idx) const {
    return rebel_icall_array_int(
        method_bindings.mb_get_bound_child_nodes_to_bone,
        (const Object*)this,
        bone_idx
    );
}

bool Skeleton::is_bone_rest_disabled(const int64_t bone_idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_bone_rest_disabled,
        (const Object*)this,
        bone_idx
    );
}

void Skeleton::localize_rests() {
    rebel_icall_void(
        method_bindings.mb_localize_rests,
        (const Object*)this
    );
}

void Skeleton::physical_bones_add_collision_exception(const RID exception) {
    rebel_icall_void_rid(
        method_bindings.mb_physical_bones_add_collision_exception,
        (const Object*)this,
        exception
    );
}

void Skeleton::physical_bones_remove_collision_exception(const RID exception) {
    rebel_icall_void_rid(
        method_bindings.mb_physical_bones_remove_collision_exception,
        (const Object*)this,
        exception
    );
}

void Skeleton::physical_bones_start_simulation(const Array bones) {
    rebel_icall_void_array(
        method_bindings.mb_physical_bones_start_simulation,
        (const Object*)this,
        bones
    );
}

void Skeleton::physical_bones_stop_simulation() {
    rebel_icall_void(
        method_bindings.mb_physical_bones_stop_simulation,
        (const Object*)this
    );
}

Ref<SkinReference> Skeleton::register_skin(const Ref<Skin> skin) {
    return Ref<SkinReference>::create_ref(rebel_icall_object_object(
        method_bindings.mb_register_skin,
        (const Object*)this,
        skin.ptr()
    ));
}

void Skeleton::set_bone_custom_pose(const int64_t bone_idx, const Transform custom_pose) {
    rebel_icall_void_int_transform(
        method_bindings.mb_set_bone_custom_pose,
        (const Object*)this,
        bone_idx,
        custom_pose
    );
}

void Skeleton::set_bone_disable_rest(const int64_t bone_idx, const bool disable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_bone_disable_rest,
        (const Object*)this,
        bone_idx,
        disable
    );
}

void Skeleton::set_bone_global_pose_override(const int64_t bone_idx, const Transform pose, const real_t amount, const bool persistent) {
    rebel_icall_void_int_transform_float_bool(
        method_bindings.mb_set_bone_global_pose_override,
        (const Object*)this,
        bone_idx,
        pose,
        amount,
        persistent
    );
}

void Skeleton::set_bone_name(const int64_t bone_idx, const String name) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_bone_name,
        (const Object*)this,
        bone_idx,
        name
    );
}

void Skeleton::set_bone_parent(const int64_t bone_idx, const int64_t parent_idx) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_bone_parent,
        (const Object*)this,
        bone_idx,
        parent_idx
    );
}

void Skeleton::set_bone_pose(const int64_t bone_idx, const Transform pose) {
    rebel_icall_void_int_transform(
        method_bindings.mb_set_bone_pose,
        (const Object*)this,
        bone_idx,
        pose
    );
}

void Skeleton::set_bone_rest(const int64_t bone_idx, const Transform rest) {
    rebel_icall_void_int_transform(
        method_bindings.mb_set_bone_rest,
        (const Object*)this,
        bone_idx,
        rest
    );
}

void Skeleton::unbind_child_node_from_bone(const int64_t bone_idx, const Node* node) {
    rebel_icall_void_int_object(
        method_bindings.mb_unbind_child_node_from_bone,
        (const Object*)this,
        bone_idx,
        node
    );
}

void Skeleton::unparent_bone_and_rest(const int64_t bone_idx) {
    rebel_icall_void_int(
        method_bindings.mb_unparent_bone_and_rest,
        (const Object*)this,
        bone_idx
    );
}

Skeleton* Skeleton::create() {
    return (Skeleton*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Skeleton")()
         );
}

void Skeleton::init_method_bindings() {
    method_bindings.mb_add_bone =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "add_bone"
        );
    method_bindings.mb_bind_child_node_to_bone =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "bind_child_node_to_bone"
        );
    method_bindings.mb_clear_bones =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "clear_bones"
        );
    method_bindings.mb_clear_bones_global_pose_override =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "clear_bones_global_pose_override"
        );
    method_bindings.mb_find_bone =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "find_bone"
        );
    method_bindings.mb_get_bone_count =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "get_bone_count"
        );
    method_bindings.mb_get_bone_custom_pose =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "get_bone_custom_pose"
        );
    method_bindings.mb_get_bone_global_pose =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "get_bone_global_pose"
        );
    method_bindings.mb_get_bone_global_pose_no_override =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "get_bone_global_pose_no_override"
        );
    method_bindings.mb_get_bone_name =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "get_bone_name"
        );
    method_bindings.mb_get_bone_parent =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "get_bone_parent"
        );
    method_bindings.mb_get_bone_pose =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "get_bone_pose"
        );
    method_bindings.mb_get_bone_rest =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "get_bone_rest"
        );
    method_bindings.mb_get_bound_child_nodes_to_bone =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "get_bound_child_nodes_to_bone"
        );
    method_bindings.mb_is_bone_rest_disabled =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "is_bone_rest_disabled"
        );
    method_bindings.mb_localize_rests =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "localize_rests"
        );
    method_bindings.mb_physical_bones_add_collision_exception =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "physical_bones_add_collision_exception"
        );
    method_bindings.mb_physical_bones_remove_collision_exception =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "physical_bones_remove_collision_exception"
        );
    method_bindings.mb_physical_bones_start_simulation =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "physical_bones_start_simulation"
        );
    method_bindings.mb_physical_bones_stop_simulation =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "physical_bones_stop_simulation"
        );
    method_bindings.mb_register_skin =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "register_skin"
        );
    method_bindings.mb_set_bone_custom_pose =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "set_bone_custom_pose"
        );
    method_bindings.mb_set_bone_disable_rest =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "set_bone_disable_rest"
        );
    method_bindings.mb_set_bone_global_pose_override =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "set_bone_global_pose_override"
        );
    method_bindings.mb_set_bone_name =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "set_bone_name"
        );
    method_bindings.mb_set_bone_parent =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "set_bone_parent"
        );
    method_bindings.mb_set_bone_pose =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "set_bone_pose"
        );
    method_bindings.mb_set_bone_rest =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "set_bone_rest"
        );
    method_bindings.mb_unbind_child_node_from_bone =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "unbind_child_node_from_bone"
        );
    method_bindings.mb_unparent_bone_and_rest =
        api->rebel_method_bind_get_method(
            "Skeleton",
            "unparent_bone_and_rest"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Skeleton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Skeleton::MethodBindings Skeleton::method_bindings = {};
void* Skeleton::class_tag = nullptr;
} // namespace Rebel
