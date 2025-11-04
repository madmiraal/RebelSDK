// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/streampeerbuffer.h"

#include "classes/icalls.h"
#include "classes/streampeerbuffer.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void StreamPeerBuffer::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

Ref<StreamPeerBuffer> StreamPeerBuffer::duplicate() const {
    return Ref<StreamPeerBuffer>::create_ref(rebel_icall_object(
        method_bindings.mb_duplicate,
        (const Object*)this
    ));
}

PoolByteArray StreamPeerBuffer::get_data_array() const {
    return rebel_icall_poolbytearray(
        method_bindings.mb_get_data_array,
        (const Object*)this
    );
}

int64_t StreamPeerBuffer::get_position() const {
    return rebel_icall_int(
        method_bindings.mb_get_position,
        (const Object*)this
    );
}

int64_t StreamPeerBuffer::get_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

void StreamPeerBuffer::resize(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb_resize,
        (const Object*)this,
        size
    );
}

void StreamPeerBuffer::seek(const int64_t position) {
    rebel_icall_void_int(
        method_bindings.mb_seek,
        (const Object*)this,
        position
    );
}

void StreamPeerBuffer::set_data_array(const PoolByteArray data) {
    rebel_icall_void_poolbytearray(
        method_bindings.mb_set_data_array,
        (const Object*)this,
        data
    );
}

StreamPeerBuffer* StreamPeerBuffer::create() {
    return (StreamPeerBuffer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"StreamPeerBuffer")()
         );
}

void StreamPeerBuffer::init_method_bindings() {
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "StreamPeerBuffer",
            "clear"
        );
    method_bindings.mb_duplicate =
        api->rebel_method_bind_get_method(
            "StreamPeerBuffer",
            "duplicate"
        );
    method_bindings.mb_get_data_array =
        api->rebel_method_bind_get_method(
            "StreamPeerBuffer",
            "get_data_array"
        );
    method_bindings.mb_get_position =
        api->rebel_method_bind_get_method(
            "StreamPeerBuffer",
            "get_position"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "StreamPeerBuffer",
            "get_size"
        );
    method_bindings.mb_resize =
        api->rebel_method_bind_get_method(
            "StreamPeerBuffer",
            "resize"
        );
    method_bindings.mb_seek =
        api->rebel_method_bind_get_method(
            "StreamPeerBuffer",
            "seek"
        );
    method_bindings.mb_set_data_array =
        api->rebel_method_bind_get_method(
            "StreamPeerBuffer",
            "set_data_array"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "StreamPeerBuffer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

StreamPeerBuffer::MethodBindings StreamPeerBuffer::method_bindings = {};
void* StreamPeerBuffer::class_tag = nullptr;
} // namespace Rebel
