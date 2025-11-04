// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gltfbufferview.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t GLTFBufferView::get_buffer() {
    return rebel_icall_int(
        method_bindings.mb_get_buffer,
        (const Object*)this
    );
}

int64_t GLTFBufferView::get_byte_length() {
    return rebel_icall_int(
        method_bindings.mb_get_byte_length,
        (const Object*)this
    );
}

int64_t GLTFBufferView::get_byte_offset() {
    return rebel_icall_int(
        method_bindings.mb_get_byte_offset,
        (const Object*)this
    );
}

int64_t GLTFBufferView::get_byte_stride() {
    return rebel_icall_int(
        method_bindings.mb_get_byte_stride,
        (const Object*)this
    );
}

bool GLTFBufferView::get_indices() {
    return rebel_icall_bool(
        method_bindings.mb_get_indices,
        (const Object*)this
    );
}

void GLTFBufferView::set_buffer(const int64_t buffer) {
    rebel_icall_void_int(
        method_bindings.mb_set_buffer,
        (const Object*)this,
        buffer
    );
}

void GLTFBufferView::set_byte_length(const int64_t byte_length) {
    rebel_icall_void_int(
        method_bindings.mb_set_byte_length,
        (const Object*)this,
        byte_length
    );
}

void GLTFBufferView::set_byte_offset(const int64_t byte_offset) {
    rebel_icall_void_int(
        method_bindings.mb_set_byte_offset,
        (const Object*)this,
        byte_offset
    );
}

void GLTFBufferView::set_byte_stride(const int64_t byte_stride) {
    rebel_icall_void_int(
        method_bindings.mb_set_byte_stride,
        (const Object*)this,
        byte_stride
    );
}

void GLTFBufferView::set_indices(const bool indices) {
    rebel_icall_void_bool(
        method_bindings.mb_set_indices,
        (const Object*)this,
        indices
    );
}

GLTFBufferView* GLTFBufferView::create() {
    return (GLTFBufferView*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GLTFBufferView")()
         );
}

void GLTFBufferView::init_method_bindings() {
    method_bindings.mb_get_buffer =
        api->rebel_method_bind_get_method(
            "GLTFBufferView",
            "get_buffer"
        );
    method_bindings.mb_get_byte_length =
        api->rebel_method_bind_get_method(
            "GLTFBufferView",
            "get_byte_length"
        );
    method_bindings.mb_get_byte_offset =
        api->rebel_method_bind_get_method(
            "GLTFBufferView",
            "get_byte_offset"
        );
    method_bindings.mb_get_byte_stride =
        api->rebel_method_bind_get_method(
            "GLTFBufferView",
            "get_byte_stride"
        );
    method_bindings.mb_get_indices =
        api->rebel_method_bind_get_method(
            "GLTFBufferView",
            "get_indices"
        );
    method_bindings.mb_set_buffer =
        api->rebel_method_bind_get_method(
            "GLTFBufferView",
            "set_buffer"
        );
    method_bindings.mb_set_byte_length =
        api->rebel_method_bind_get_method(
            "GLTFBufferView",
            "set_byte_length"
        );
    method_bindings.mb_set_byte_offset =
        api->rebel_method_bind_get_method(
            "GLTFBufferView",
            "set_byte_offset"
        );
    method_bindings.mb_set_byte_stride =
        api->rebel_method_bind_get_method(
            "GLTFBufferView",
            "set_byte_stride"
        );
    method_bindings.mb_set_indices =
        api->rebel_method_bind_get_method(
            "GLTFBufferView",
            "set_indices"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GLTFBufferView");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GLTFBufferView::MethodBindings GLTFBufferView::method_bindings = {};
void* GLTFBufferView::class_tag = nullptr;
} // namespace Rebel
