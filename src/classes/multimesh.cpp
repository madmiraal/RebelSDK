// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/multimesh.h"

#include "classes/icalls.h"
#include "classes/mesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolColorArray MultiMesh::_get_color_array() const {
    return rebel_icall_poolcolorarray(
        method_bindings.mb__get_color_array,
        (const Object*)this
    );
}

PoolColorArray MultiMesh::_get_custom_data_array() const {
    return rebel_icall_poolcolorarray(
        method_bindings.mb__get_custom_data_array,
        (const Object*)this
    );
}

PoolVector2Array MultiMesh::_get_transform_2d_array() const {
    return rebel_icall_poolvector2array(
        method_bindings.mb__get_transform_2d_array,
        (const Object*)this
    );
}

PoolVector3Array MultiMesh::_get_transform_array() const {
    return rebel_icall_poolvector3array(
        method_bindings.mb__get_transform_array,
        (const Object*)this
    );
}

void MultiMesh::_set_color_array(const PoolColorArray arg0) {
    rebel_icall_void_poolcolorarray(
        method_bindings.mb__set_color_array,
        (const Object*)this,
        arg0
    );
}

void MultiMesh::_set_custom_data_array(const PoolColorArray arg0) {
    rebel_icall_void_poolcolorarray(
        method_bindings.mb__set_custom_data_array,
        (const Object*)this,
        arg0
    );
}

void MultiMesh::_set_transform_2d_array(const PoolVector2Array arg0) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb__set_transform_2d_array,
        (const Object*)this,
        arg0
    );
}

void MultiMesh::_set_transform_array(const PoolVector3Array arg0) {
    rebel_icall_void_poolvector3array(
        method_bindings.mb__set_transform_array,
        (const Object*)this,
        arg0
    );
}

AABB MultiMesh::get_aabb() const {
    return rebel_icall_aabb(
        method_bindings.mb_get_aabb,
        (const Object*)this
    );
}

MultiMesh::ColorFormat MultiMesh::get_color_format() const {
    return (MultiMesh::ColorFormat)rebel_icall_int(
        method_bindings.mb_get_color_format,
        (const Object*)this
    );
}

MultiMesh::CustomDataFormat MultiMesh::get_custom_data_format() const {
    return (MultiMesh::CustomDataFormat)rebel_icall_int(
        method_bindings.mb_get_custom_data_format,
        (const Object*)this
    );
}

Color MultiMesh::get_instance_color(const int64_t instance) const {
    return rebel_icall_color_int(
        method_bindings.mb_get_instance_color,
        (const Object*)this,
        instance
    );
}

int64_t MultiMesh::get_instance_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_instance_count,
        (const Object*)this
    );
}

Color MultiMesh::get_instance_custom_data(const int64_t instance) const {
    return rebel_icall_color_int(
        method_bindings.mb_get_instance_custom_data,
        (const Object*)this,
        instance
    );
}

Transform MultiMesh::get_instance_transform(const int64_t instance) const {
    return rebel_icall_transform_int(
        method_bindings.mb_get_instance_transform,
        (const Object*)this,
        instance
    );
}

Transform2D MultiMesh::get_instance_transform_2d(const int64_t instance) const {
    return rebel_icall_transform2d_int(
        method_bindings.mb_get_instance_transform_2d,
        (const Object*)this,
        instance
    );
}

Ref<Mesh> MultiMesh::get_mesh() const {
    return Ref<Mesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_mesh,
        (const Object*)this
    ));
}

MultiMesh::TransformFormat MultiMesh::get_transform_format() const {
    return (MultiMesh::TransformFormat)rebel_icall_int(
        method_bindings.mb_get_transform_format,
        (const Object*)this
    );
}

int64_t MultiMesh::get_visible_instance_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_visible_instance_count,
        (const Object*)this
    );
}

void MultiMesh::set_as_bulk_array(const PoolRealArray array) {
    rebel_icall_void_poolrealarray(
        method_bindings.mb_set_as_bulk_array,
        (const Object*)this,
        array
    );
}

void MultiMesh::set_color_format(const int64_t format) {
    rebel_icall_void_int(
        method_bindings.mb_set_color_format,
        (const Object*)this,
        format
    );
}

void MultiMesh::set_custom_data_format(const int64_t format) {
    rebel_icall_void_int(
        method_bindings.mb_set_custom_data_format,
        (const Object*)this,
        format
    );
}

void MultiMesh::set_instance_color(const int64_t instance, const Color color) {
    rebel_icall_void_int_color(
        method_bindings.mb_set_instance_color,
        (const Object*)this,
        instance,
        color
    );
}

void MultiMesh::set_instance_count(const int64_t count) {
    rebel_icall_void_int(
        method_bindings.mb_set_instance_count,
        (const Object*)this,
        count
    );
}

void MultiMesh::set_instance_custom_data(const int64_t instance, const Color custom_data) {
    rebel_icall_void_int_color(
        method_bindings.mb_set_instance_custom_data,
        (const Object*)this,
        instance,
        custom_data
    );
}

void MultiMesh::set_instance_transform(const int64_t instance, const Transform transform) {
    rebel_icall_void_int_transform(
        method_bindings.mb_set_instance_transform,
        (const Object*)this,
        instance,
        transform
    );
}

void MultiMesh::set_instance_transform_2d(const int64_t instance, const Transform2D transform) {
    rebel_icall_void_int_transform2d(
        method_bindings.mb_set_instance_transform_2d,
        (const Object*)this,
        instance,
        transform
    );
}

void MultiMesh::set_mesh(const Ref<Mesh> mesh) {
    rebel_icall_void_object(
        method_bindings.mb_set_mesh,
        (const Object*)this,
        mesh.ptr()
    );
}

void MultiMesh::set_transform_format(const int64_t format) {
    rebel_icall_void_int(
        method_bindings.mb_set_transform_format,
        (const Object*)this,
        format
    );
}

void MultiMesh::set_visible_instance_count(const int64_t count) {
    rebel_icall_void_int(
        method_bindings.mb_set_visible_instance_count,
        (const Object*)this,
        count
    );
}

MultiMesh* MultiMesh::create() {
    return (MultiMesh*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MultiMesh")()
         );
}

void MultiMesh::init_method_bindings() {
    method_bindings.mb__get_color_array =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "_get_color_array"
        );
    method_bindings.mb__get_custom_data_array =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "_get_custom_data_array"
        );
    method_bindings.mb__get_transform_2d_array =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "_get_transform_2d_array"
        );
    method_bindings.mb__get_transform_array =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "_get_transform_array"
        );
    method_bindings.mb__set_color_array =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "_set_color_array"
        );
    method_bindings.mb__set_custom_data_array =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "_set_custom_data_array"
        );
    method_bindings.mb__set_transform_2d_array =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "_set_transform_2d_array"
        );
    method_bindings.mb__set_transform_array =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "_set_transform_array"
        );
    method_bindings.mb_get_aabb =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "get_aabb"
        );
    method_bindings.mb_get_color_format =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "get_color_format"
        );
    method_bindings.mb_get_custom_data_format =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "get_custom_data_format"
        );
    method_bindings.mb_get_instance_color =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "get_instance_color"
        );
    method_bindings.mb_get_instance_count =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "get_instance_count"
        );
    method_bindings.mb_get_instance_custom_data =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "get_instance_custom_data"
        );
    method_bindings.mb_get_instance_transform =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "get_instance_transform"
        );
    method_bindings.mb_get_instance_transform_2d =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "get_instance_transform_2d"
        );
    method_bindings.mb_get_mesh =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "get_mesh"
        );
    method_bindings.mb_get_transform_format =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "get_transform_format"
        );
    method_bindings.mb_get_visible_instance_count =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "get_visible_instance_count"
        );
    method_bindings.mb_set_as_bulk_array =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "set_as_bulk_array"
        );
    method_bindings.mb_set_color_format =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "set_color_format"
        );
    method_bindings.mb_set_custom_data_format =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "set_custom_data_format"
        );
    method_bindings.mb_set_instance_color =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "set_instance_color"
        );
    method_bindings.mb_set_instance_count =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "set_instance_count"
        );
    method_bindings.mb_set_instance_custom_data =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "set_instance_custom_data"
        );
    method_bindings.mb_set_instance_transform =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "set_instance_transform"
        );
    method_bindings.mb_set_instance_transform_2d =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "set_instance_transform_2d"
        );
    method_bindings.mb_set_mesh =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "set_mesh"
        );
    method_bindings.mb_set_transform_format =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "set_transform_format"
        );
    method_bindings.mb_set_visible_instance_count =
        api->rebel_method_bind_get_method(
            "MultiMesh",
            "set_visible_instance_count"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MultiMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MultiMesh::MethodBindings MultiMesh::method_bindings = {};
void* MultiMesh::class_tag = nullptr;
} // namespace Rebel
