// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltfskeleton.h"

#include "classes/boneattachment.h"
#include "classes/icalls.h"
#include "classes/skeleton.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
BoneAttachment* GLTFSkeleton::get_bone_attachment(const int64_t idx) {
    return (BoneAttachment*)rebel_icall_object_int(
        method_bindings.mb_get_bone_attachment,
        (const Object*)this,
        idx
    );
}

int64_t GLTFSkeleton::get_bone_attachment_count() {
    return rebel_icall_int(
        method_bindings.mb_get_bone_attachment_count,
        (const Object*)this
    );
}

Dictionary GLTFSkeleton::get_bone_node() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_bone_node,
        (const Object*)this
    );
}

PoolIntArray GLTFSkeleton::get_joints() {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_joints,
        (const Object*)this
    );
}

PoolIntArray GLTFSkeleton::get_roots() {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_roots,
        (const Object*)this
    );
}

Skeleton* GLTFSkeleton::get_skeleton() {
    return (Skeleton*)rebel_icall_object(
        method_bindings.mb_get_skeleton,
        (const Object*)this
    );
}

Array GLTFSkeleton::get_unique_names() {
    return rebel_icall_array(
        method_bindings.mb_get_unique_names,
        (const Object*)this
    );
}

void GLTFSkeleton::set_bone_node(const Dictionary bone_node) {
    rebel_icall_void_dictionary(
        method_bindings.mb_set_bone_node,
        (const Object*)this,
        bone_node
    );
}

void GLTFSkeleton::set_joints(const PoolIntArray joints) {
    rebel_icall_void_poolintarray(
        method_bindings.mb_set_joints,
        (const Object*)this,
        joints
    );
}

void GLTFSkeleton::set_roots(const PoolIntArray roots) {
    rebel_icall_void_poolintarray(
        method_bindings.mb_set_roots,
        (const Object*)this,
        roots
    );
}

void GLTFSkeleton::set_unique_names(const Array unique_names) {
    rebel_icall_void_array(
        method_bindings.mb_set_unique_names,
        (const Object*)this,
        unique_names
    );
}

GLTFSkeleton* GLTFSkeleton::create() {
    return (GLTFSkeleton*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GLTFSkeleton")()
         );
}

void GLTFSkeleton::init_method_bindings() {
    method_bindings.mb_get_bone_attachment =
        api->rebel_method_bind_get_method(
            "GLTFSkeleton",
            "get_bone_attachment"
        );
    method_bindings.mb_get_bone_attachment_count =
        api->rebel_method_bind_get_method(
            "GLTFSkeleton",
            "get_bone_attachment_count"
        );
    method_bindings.mb_get_bone_node =
        api->rebel_method_bind_get_method(
            "GLTFSkeleton",
            "get_bone_node"
        );
    method_bindings.mb_get_joints =
        api->rebel_method_bind_get_method(
            "GLTFSkeleton",
            "get_joints"
        );
    method_bindings.mb_get_roots =
        api->rebel_method_bind_get_method(
            "GLTFSkeleton",
            "get_roots"
        );
    method_bindings.mb_get_skeleton =
        api->rebel_method_bind_get_method(
            "GLTFSkeleton",
            "get_skeleton"
        );
    method_bindings.mb_get_unique_names =
        api->rebel_method_bind_get_method(
            "GLTFSkeleton",
            "get_unique_names"
        );
    method_bindings.mb_set_bone_node =
        api->rebel_method_bind_get_method(
            "GLTFSkeleton",
            "set_bone_node"
        );
    method_bindings.mb_set_joints =
        api->rebel_method_bind_get_method(
            "GLTFSkeleton",
            "set_joints"
        );
    method_bindings.mb_set_roots =
        api->rebel_method_bind_get_method(
            "GLTFSkeleton",
            "set_roots"
        );
    method_bindings.mb_set_unique_names =
        api->rebel_method_bind_get_method(
            "GLTFSkeleton",
            "set_unique_names"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFSkeleton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFSkeleton::MethodBindings GLTFSkeleton::method_bindings = {};
void* GLTFSkeleton::class_tag = nullptr;
} // namespace Rebel
