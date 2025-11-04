// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/streampeertcp.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error StreamPeerTCP::connect_to_host(const String host, const int64_t port) {
    return (Error)rebel_icall_int_string_int(
        method_bindings.mb_connect_to_host,
        (const Object*)this,
        host,
        port
    );
}

void StreamPeerTCP::disconnect_from_host() {
    rebel_icall_void(
        method_bindings.mb_disconnect_from_host,
        (const Object*)this
    );
}

String StreamPeerTCP::get_connected_host() const {
    return rebel_icall_string(
        method_bindings.mb_get_connected_host,
        (const Object*)this
    );
}

int64_t StreamPeerTCP::get_connected_port() const {
    return rebel_icall_int(
        method_bindings.mb_get_connected_port,
        (const Object*)this
    );
}

StreamPeerTCP::Status StreamPeerTCP::get_status() {
    return (StreamPeerTCP::Status)rebel_icall_int(
        method_bindings.mb_get_status,
        (const Object*)this
    );
}

bool StreamPeerTCP::is_connected_to_host() const {
    return rebel_icall_bool(
        method_bindings.mb_is_connected_to_host,
        (const Object*)this
    );
}

void StreamPeerTCP::set_no_delay(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_no_delay,
        (const Object*)this,
        enabled
    );
}

StreamPeerTCP* StreamPeerTCP::create() {
    return (StreamPeerTCP*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"StreamPeerTCP")()
         );
}

void StreamPeerTCP::init_method_bindings() {
    method_bindings.mb_connect_to_host =
        api->rebel_method_bind_get_method(
            "StreamPeerTCP",
            "connect_to_host"
        );
    method_bindings.mb_disconnect_from_host =
        api->rebel_method_bind_get_method(
            "StreamPeerTCP",
            "disconnect_from_host"
        );
    method_bindings.mb_get_connected_host =
        api->rebel_method_bind_get_method(
            "StreamPeerTCP",
            "get_connected_host"
        );
    method_bindings.mb_get_connected_port =
        api->rebel_method_bind_get_method(
            "StreamPeerTCP",
            "get_connected_port"
        );
    method_bindings.mb_get_status =
        api->rebel_method_bind_get_method(
            "StreamPeerTCP",
            "get_status"
        );
    method_bindings.mb_is_connected_to_host =
        api->rebel_method_bind_get_method(
            "StreamPeerTCP",
            "is_connected_to_host"
        );
    method_bindings.mb_set_no_delay =
        api->rebel_method_bind_get_method(
            "StreamPeerTCP",
            "set_no_delay"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "StreamPeerTCP");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

StreamPeerTCP::MethodBindings StreamPeerTCP::method_bindings = {};
void* StreamPeerTCP::class_tag = nullptr;
} // namespace Rebel
