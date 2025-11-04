// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltfaccessor.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t GLTFAccessor::get_buffer_view() {
    return rebel_icall_int(
        method_bindings.mb_get_buffer_view,
        (const Object*)this
    );
}

int64_t GLTFAccessor::get_byte_offset() {
    return rebel_icall_int(
        method_bindings.mb_get_byte_offset,
        (const Object*)this
    );
}

int64_t GLTFAccessor::get_component_type() {
    return rebel_icall_int(
        method_bindings.mb_get_component_type,
        (const Object*)this
    );
}

int64_t GLTFAccessor::get_count() {
    return rebel_icall_int(
        method_bindings.mb_get_count,
        (const Object*)this
    );
}

PoolRealArray GLTFAccessor::get_max() {
    return rebel_icall_poolrealarray(
        method_bindings.mb_get_max,
        (const Object*)this
    );
}

PoolRealArray GLTFAccessor::get_min() {
    return rebel_icall_poolrealarray(
        method_bindings.mb_get_min,
        (const Object*)this
    );
}

bool GLTFAccessor::get_normalized() {
    return rebel_icall_bool(
        method_bindings.mb_get_normalized,
        (const Object*)this
    );
}

int64_t GLTFAccessor::get_sparse_count() {
    return rebel_icall_int(
        method_bindings.mb_get_sparse_count,
        (const Object*)this
    );
}

int64_t GLTFAccessor::get_sparse_indices_buffer_view() {
    return rebel_icall_int(
        method_bindings.mb_get_sparse_indices_buffer_view,
        (const Object*)this
    );
}

int64_t GLTFAccessor::get_sparse_indices_byte_offset() {
    return rebel_icall_int(
        method_bindings.mb_get_sparse_indices_byte_offset,
        (const Object*)this
    );
}

int64_t GLTFAccessor::get_sparse_indices_component_type() {
    return rebel_icall_int(
        method_bindings.mb_get_sparse_indices_component_type,
        (const Object*)this
    );
}

int64_t GLTFAccessor::get_sparse_values_buffer_view() {
    return rebel_icall_int(
        method_bindings.mb_get_sparse_values_buffer_view,
        (const Object*)this
    );
}

int64_t GLTFAccessor::get_sparse_values_byte_offset() {
    return rebel_icall_int(
        method_bindings.mb_get_sparse_values_byte_offset,
        (const Object*)this
    );
}

int64_t GLTFAccessor::get_type() {
    return rebel_icall_int(
        method_bindings.mb_get_type,
        (const Object*)this
    );
}

void GLTFAccessor::set_buffer_view(const int64_t buffer_view) {
    rebel_icall_void_int(
        method_bindings.mb_set_buffer_view,
        (const Object*)this,
        buffer_view
    );
}

void GLTFAccessor::set_byte_offset(const int64_t byte_offset) {
    rebel_icall_void_int(
        method_bindings.mb_set_byte_offset,
        (const Object*)this,
        byte_offset
    );
}

void GLTFAccessor::set_component_type(const int64_t component_type) {
    rebel_icall_void_int(
        method_bindings.mb_set_component_type,
        (const Object*)this,
        component_type
    );
}

void GLTFAccessor::set_count(const int64_t count) {
    rebel_icall_void_int(
        method_bindings.mb_set_count,
        (const Object*)this,
        count
    );
}

void GLTFAccessor::set_max(const PoolRealArray max) {
    rebel_icall_void_poolrealarray(
        method_bindings.mb_set_max,
        (const Object*)this,
        max
    );
}

void GLTFAccessor::set_min(const PoolRealArray min) {
    rebel_icall_void_poolrealarray(
        method_bindings.mb_set_min,
        (const Object*)this,
        min
    );
}

void GLTFAccessor::set_normalized(const bool normalized) {
    rebel_icall_void_bool(
        method_bindings.mb_set_normalized,
        (const Object*)this,
        normalized
    );
}

void GLTFAccessor::set_sparse_count(const int64_t sparse_count) {
    rebel_icall_void_int(
        method_bindings.mb_set_sparse_count,
        (const Object*)this,
        sparse_count
    );
}

void GLTFAccessor::set_sparse_indices_buffer_view(const int64_t sparse_indices_buffer_view) {
    rebel_icall_void_int(
        method_bindings.mb_set_sparse_indices_buffer_view,
        (const Object*)this,
        sparse_indices_buffer_view
    );
}

void GLTFAccessor::set_sparse_indices_byte_offset(const int64_t sparse_indices_byte_offset) {
    rebel_icall_void_int(
        method_bindings.mb_set_sparse_indices_byte_offset,
        (const Object*)this,
        sparse_indices_byte_offset
    );
}

void GLTFAccessor::set_sparse_indices_component_type(const int64_t sparse_indices_component_type) {
    rebel_icall_void_int(
        method_bindings.mb_set_sparse_indices_component_type,
        (const Object*)this,
        sparse_indices_component_type
    );
}

void GLTFAccessor::set_sparse_values_buffer_view(const int64_t sparse_values_buffer_view) {
    rebel_icall_void_int(
        method_bindings.mb_set_sparse_values_buffer_view,
        (const Object*)this,
        sparse_values_buffer_view
    );
}

void GLTFAccessor::set_sparse_values_byte_offset(const int64_t sparse_values_byte_offset) {
    rebel_icall_void_int(
        method_bindings.mb_set_sparse_values_byte_offset,
        (const Object*)this,
        sparse_values_byte_offset
    );
}

void GLTFAccessor::set_type(const int64_t type) {
    rebel_icall_void_int(
        method_bindings.mb_set_type,
        (const Object*)this,
        type
    );
}

GLTFAccessor* GLTFAccessor::create() {
    return (GLTFAccessor*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GLTFAccessor")()
         );
}

void GLTFAccessor::init_method_bindings() {
    method_bindings.mb_get_buffer_view =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_buffer_view"
        );
    method_bindings.mb_get_byte_offset =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_byte_offset"
        );
    method_bindings.mb_get_component_type =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_component_type"
        );
    method_bindings.mb_get_count =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_count"
        );
    method_bindings.mb_get_max =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_max"
        );
    method_bindings.mb_get_min =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_min"
        );
    method_bindings.mb_get_normalized =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_normalized"
        );
    method_bindings.mb_get_sparse_count =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_sparse_count"
        );
    method_bindings.mb_get_sparse_indices_buffer_view =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_sparse_indices_buffer_view"
        );
    method_bindings.mb_get_sparse_indices_byte_offset =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_sparse_indices_byte_offset"
        );
    method_bindings.mb_get_sparse_indices_component_type =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_sparse_indices_component_type"
        );
    method_bindings.mb_get_sparse_values_buffer_view =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_sparse_values_buffer_view"
        );
    method_bindings.mb_get_sparse_values_byte_offset =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_sparse_values_byte_offset"
        );
    method_bindings.mb_get_type =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "get_type"
        );
    method_bindings.mb_set_buffer_view =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_buffer_view"
        );
    method_bindings.mb_set_byte_offset =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_byte_offset"
        );
    method_bindings.mb_set_component_type =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_component_type"
        );
    method_bindings.mb_set_count =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_count"
        );
    method_bindings.mb_set_max =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_max"
        );
    method_bindings.mb_set_min =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_min"
        );
    method_bindings.mb_set_normalized =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_normalized"
        );
    method_bindings.mb_set_sparse_count =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_sparse_count"
        );
    method_bindings.mb_set_sparse_indices_buffer_view =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_sparse_indices_buffer_view"
        );
    method_bindings.mb_set_sparse_indices_byte_offset =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_sparse_indices_byte_offset"
        );
    method_bindings.mb_set_sparse_indices_component_type =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_sparse_indices_component_type"
        );
    method_bindings.mb_set_sparse_values_buffer_view =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_sparse_values_buffer_view"
        );
    method_bindings.mb_set_sparse_values_byte_offset =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_sparse_values_byte_offset"
        );
    method_bindings.mb_set_type =
        api->rebel_method_bind_get_method(
            "GLTFAccessor",
            "set_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFAccessor");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFAccessor::MethodBindings GLTFAccessor::method_bindings = {};
void* GLTFAccessor::class_tag = nullptr;
} // namespace Rebel
