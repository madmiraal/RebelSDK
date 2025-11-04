// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltfskin.h"

#include "classes/icalls.h"
#include "classes/skin.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array GLTFSkin::get_inverse_binds() {
    return rebel_icall_array(
        method_bindings.mb_get_inverse_binds,
        (const Object*)this
    );
}

Dictionary GLTFSkin::get_joint_i_to_bone_i() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_joint_i_to_bone_i,
        (const Object*)this
    );
}

Dictionary GLTFSkin::get_joint_i_to_name() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_joint_i_to_name,
        (const Object*)this
    );
}

PoolIntArray GLTFSkin::get_joints() {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_joints,
        (const Object*)this
    );
}

PoolIntArray GLTFSkin::get_joints_original() {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_joints_original,
        (const Object*)this
    );
}

PoolIntArray GLTFSkin::get_non_joints() {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_non_joints,
        (const Object*)this
    );
}

PoolIntArray GLTFSkin::get_roots() {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_roots,
        (const Object*)this
    );
}

int64_t GLTFSkin::get_skeleton() {
    return rebel_icall_int(
        method_bindings.mb_get_skeleton,
        (const Object*)this
    );
}

Ref<Skin> GLTFSkin::get_skin() {
    return Ref<Skin>::create_ref(rebel_icall_object(
        method_bindings.mb_get_skin,
        (const Object*)this
    ));
}

int64_t GLTFSkin::get_skin_root() {
    return rebel_icall_int(
        method_bindings.mb_get_skin_root,
        (const Object*)this
    );
}

void GLTFSkin::set_inverse_binds(const Array inverse_binds) {
    rebel_icall_void_array(
        method_bindings.mb_set_inverse_binds,
        (const Object*)this,
        inverse_binds
    );
}

void GLTFSkin::set_joint_i_to_bone_i(const Dictionary joint_i_to_bone_i) {
    rebel_icall_void_dictionary(
        method_bindings.mb_set_joint_i_to_bone_i,
        (const Object*)this,
        joint_i_to_bone_i
    );
}

void GLTFSkin::set_joint_i_to_name(const Dictionary joint_i_to_name) {
    rebel_icall_void_dictionary(
        method_bindings.mb_set_joint_i_to_name,
        (const Object*)this,
        joint_i_to_name
    );
}

void GLTFSkin::set_joints(const PoolIntArray joints) {
    rebel_icall_void_poolintarray(
        method_bindings.mb_set_joints,
        (const Object*)this,
        joints
    );
}

void GLTFSkin::set_joints_original(const PoolIntArray joints_original) {
    rebel_icall_void_poolintarray(
        method_bindings.mb_set_joints_original,
        (const Object*)this,
        joints_original
    );
}

void GLTFSkin::set_non_joints(const PoolIntArray non_joints) {
    rebel_icall_void_poolintarray(
        method_bindings.mb_set_non_joints,
        (const Object*)this,
        non_joints
    );
}

void GLTFSkin::set_roots(const PoolIntArray roots) {
    rebel_icall_void_poolintarray(
        method_bindings.mb_set_roots,
        (const Object*)this,
        roots
    );
}

void GLTFSkin::set_skeleton(const int64_t skeleton) {
    rebel_icall_void_int(
        method_bindings.mb_set_skeleton,
        (const Object*)this,
        skeleton
    );
}

void GLTFSkin::set_skin(const Ref<Skin> skin) {
    rebel_icall_void_object(
        method_bindings.mb_set_skin,
        (const Object*)this,
        skin.ptr()
    );
}

void GLTFSkin::set_skin_root(const int64_t skin_root) {
    rebel_icall_void_int(
        method_bindings.mb_set_skin_root,
        (const Object*)this,
        skin_root
    );
}

GLTFSkin* GLTFSkin::create() {
    return (GLTFSkin*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GLTFSkin")()
         );
}

void GLTFSkin::init_method_bindings() {
    method_bindings.mb_get_inverse_binds =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "get_inverse_binds"
        );
    method_bindings.mb_get_joint_i_to_bone_i =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "get_joint_i_to_bone_i"
        );
    method_bindings.mb_get_joint_i_to_name =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "get_joint_i_to_name"
        );
    method_bindings.mb_get_joints =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "get_joints"
        );
    method_bindings.mb_get_joints_original =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "get_joints_original"
        );
    method_bindings.mb_get_non_joints =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "get_non_joints"
        );
    method_bindings.mb_get_roots =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "get_roots"
        );
    method_bindings.mb_get_skeleton =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "get_skeleton"
        );
    method_bindings.mb_get_skin =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "get_skin"
        );
    method_bindings.mb_get_skin_root =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "get_skin_root"
        );
    method_bindings.mb_set_inverse_binds =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "set_inverse_binds"
        );
    method_bindings.mb_set_joint_i_to_bone_i =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "set_joint_i_to_bone_i"
        );
    method_bindings.mb_set_joint_i_to_name =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "set_joint_i_to_name"
        );
    method_bindings.mb_set_joints =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "set_joints"
        );
    method_bindings.mb_set_joints_original =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "set_joints_original"
        );
    method_bindings.mb_set_non_joints =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "set_non_joints"
        );
    method_bindings.mb_set_roots =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "set_roots"
        );
    method_bindings.mb_set_skeleton =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "set_skeleton"
        );
    method_bindings.mb_set_skin =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "set_skin"
        );
    method_bindings.mb_set_skin_root =
        api->rebel_method_bind_get_method(
            "GLTFSkin",
            "set_skin_root"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFSkin");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFSkin::MethodBindings GLTFSkin::method_bindings = {};
void* GLTFSkin::class_tag = nullptr;
} // namespace Rebel
