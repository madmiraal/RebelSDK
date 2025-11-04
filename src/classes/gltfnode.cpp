// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltfnode.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t GLTFNode::get_camera() {
    return rebel_icall_int(
        method_bindings.mb_get_camera,
        (const Object*)this
    );
}

PoolIntArray GLTFNode::get_children() {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_children,
        (const Object*)this
    );
}

int64_t GLTFNode::get_height() {
    return rebel_icall_int(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

bool GLTFNode::get_joint() {
    return rebel_icall_bool(
        method_bindings.mb_get_joint,
        (const Object*)this
    );
}

int64_t GLTFNode::get_light() {
    return rebel_icall_int(
        method_bindings.mb_get_light,
        (const Object*)this
    );
}

int64_t GLTFNode::get_mesh() {
    return rebel_icall_int(
        method_bindings.mb_get_mesh,
        (const Object*)this
    );
}

int64_t GLTFNode::get_parent() {
    return rebel_icall_int(
        method_bindings.mb_get_parent,
        (const Object*)this
    );
}

Quat GLTFNode::get_rotation() {
    return rebel_icall_quat(
        method_bindings.mb_get_rotation,
        (const Object*)this
    );
}

Vector3 GLTFNode::get_scale() {
    return rebel_icall_vector3(
        method_bindings.mb_get_scale,
        (const Object*)this
    );
}

int64_t GLTFNode::get_skeleton() {
    return rebel_icall_int(
        method_bindings.mb_get_skeleton,
        (const Object*)this
    );
}

int64_t GLTFNode::get_skin() {
    return rebel_icall_int(
        method_bindings.mb_get_skin,
        (const Object*)this
    );
}

Vector3 GLTFNode::get_translation() {
    return rebel_icall_vector3(
        method_bindings.mb_get_translation,
        (const Object*)this
    );
}

Transform GLTFNode::get_xform() {
    return rebel_icall_transform(
        method_bindings.mb_get_xform,
        (const Object*)this
    );
}

void GLTFNode::set_camera(const int64_t camera) {
    rebel_icall_void_int(
        method_bindings.mb_set_camera,
        (const Object*)this,
        camera
    );
}

void GLTFNode::set_children(const PoolIntArray children) {
    rebel_icall_void_poolintarray(
        method_bindings.mb_set_children,
        (const Object*)this,
        children
    );
}

void GLTFNode::set_height(const int64_t height) {
    rebel_icall_void_int(
        method_bindings.mb_set_height,
        (const Object*)this,
        height
    );
}

void GLTFNode::set_joint(const bool joint) {
    rebel_icall_void_bool(
        method_bindings.mb_set_joint,
        (const Object*)this,
        joint
    );
}

void GLTFNode::set_light(const int64_t light) {
    rebel_icall_void_int(
        method_bindings.mb_set_light,
        (const Object*)this,
        light
    );
}

void GLTFNode::set_mesh(const int64_t mesh) {
    rebel_icall_void_int(
        method_bindings.mb_set_mesh,
        (const Object*)this,
        mesh
    );
}

void GLTFNode::set_parent(const int64_t parent) {
    rebel_icall_void_int(
        method_bindings.mb_set_parent,
        (const Object*)this,
        parent
    );
}

void GLTFNode::set_rotation(const Quat rotation) {
    rebel_icall_void_quat(
        method_bindings.mb_set_rotation,
        (const Object*)this,
        rotation
    );
}

void GLTFNode::set_scale(const Vector3 scale) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_scale,
        (const Object*)this,
        scale
    );
}

void GLTFNode::set_skeleton(const int64_t skeleton) {
    rebel_icall_void_int(
        method_bindings.mb_set_skeleton,
        (const Object*)this,
        skeleton
    );
}

void GLTFNode::set_skin(const int64_t skin) {
    rebel_icall_void_int(
        method_bindings.mb_set_skin,
        (const Object*)this,
        skin
    );
}

void GLTFNode::set_translation(const Vector3 translation) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_translation,
        (const Object*)this,
        translation
    );
}

void GLTFNode::set_xform(const Transform xform) {
    rebel_icall_void_transform(
        method_bindings.mb_set_xform,
        (const Object*)this,
        xform
    );
}

GLTFNode* GLTFNode::create() {
    return (GLTFNode*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GLTFNode")()
         );
}

void GLTFNode::init_method_bindings() {
    method_bindings.mb_get_camera =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_camera"
        );
    method_bindings.mb_get_children =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_children"
        );
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_height"
        );
    method_bindings.mb_get_joint =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_joint"
        );
    method_bindings.mb_get_light =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_light"
        );
    method_bindings.mb_get_mesh =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_mesh"
        );
    method_bindings.mb_get_parent =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_parent"
        );
    method_bindings.mb_get_rotation =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_rotation"
        );
    method_bindings.mb_get_scale =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_scale"
        );
    method_bindings.mb_get_skeleton =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_skeleton"
        );
    method_bindings.mb_get_skin =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_skin"
        );
    method_bindings.mb_get_translation =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_translation"
        );
    method_bindings.mb_get_xform =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "get_xform"
        );
    method_bindings.mb_set_camera =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_camera"
        );
    method_bindings.mb_set_children =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_children"
        );
    method_bindings.mb_set_height =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_height"
        );
    method_bindings.mb_set_joint =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_joint"
        );
    method_bindings.mb_set_light =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_light"
        );
    method_bindings.mb_set_mesh =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_mesh"
        );
    method_bindings.mb_set_parent =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_parent"
        );
    method_bindings.mb_set_rotation =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_rotation"
        );
    method_bindings.mb_set_scale =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_scale"
        );
    method_bindings.mb_set_skeleton =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_skeleton"
        );
    method_bindings.mb_set_skin =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_skin"
        );
    method_bindings.mb_set_translation =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_translation"
        );
    method_bindings.mb_set_xform =
        api->rebel_method_bind_get_method(
            "GLTFNode",
            "set_xform"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFNode");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFNode::MethodBindings GLTFNode::method_bindings = {};
void* GLTFNode::class_tag = nullptr;
} // namespace Rebel
