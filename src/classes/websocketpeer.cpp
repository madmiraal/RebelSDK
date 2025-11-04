// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/websocketpeer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void WebSocketPeer::close(const int64_t code, const String reason) {
    rebel_icall_void_int_string(
        method_bindings.mb_close,
        (const Object*)this,
        code,
        reason
    );
}

String WebSocketPeer::get_connected_host() const {
    return rebel_icall_string(
        method_bindings.mb_get_connected_host,
        (const Object*)this
    );
}

int64_t WebSocketPeer::get_connected_port() const {
    return rebel_icall_int(
        method_bindings.mb_get_connected_port,
        (const Object*)this
    );
}

int64_t WebSocketPeer::get_current_outbound_buffered_amount() const {
    return rebel_icall_int(
        method_bindings.mb_get_current_outbound_buffered_amount,
        (const Object*)this
    );
}

WebSocketPeer::WriteMode WebSocketPeer::get_write_mode() const {
    return (WebSocketPeer::WriteMode)rebel_icall_int(
        method_bindings.mb_get_write_mode,
        (const Object*)this
    );
}

bool WebSocketPeer::is_connected_to_host() const {
    return rebel_icall_bool(
        method_bindings.mb_is_connected_to_host,
        (const Object*)this
    );
}

void WebSocketPeer::set_no_delay(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_no_delay,
        (const Object*)this,
        enabled
    );
}

void WebSocketPeer::set_write_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_write_mode,
        (const Object*)this,
        mode
    );
}

bool WebSocketPeer::was_string_packet() const {
    return rebel_icall_bool(
        method_bindings.mb_was_string_packet,
        (const Object*)this
    );
}

WebSocketPeer* WebSocketPeer::create() {
    return (WebSocketPeer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"WebSocketPeer")()
         );
}

void WebSocketPeer::init_method_bindings() {
    method_bindings.mb_close =
        api->rebel_method_bind_get_method(
            "WebSocketPeer",
            "close"
        );
    method_bindings.mb_get_connected_host =
        api->rebel_method_bind_get_method(
            "WebSocketPeer",
            "get_connected_host"
        );
    method_bindings.mb_get_connected_port =
        api->rebel_method_bind_get_method(
            "WebSocketPeer",
            "get_connected_port"
        );
    method_bindings.mb_get_current_outbound_buffered_amount =
        api->rebel_method_bind_get_method(
            "WebSocketPeer",
            "get_current_outbound_buffered_amount"
        );
    method_bindings.mb_get_write_mode =
        api->rebel_method_bind_get_method(
            "WebSocketPeer",
            "get_write_mode"
        );
    method_bindings.mb_is_connected_to_host =
        api->rebel_method_bind_get_method(
            "WebSocketPeer",
            "is_connected_to_host"
        );
    method_bindings.mb_set_no_delay =
        api->rebel_method_bind_get_method(
            "WebSocketPeer",
            "set_no_delay"
        );
    method_bindings.mb_set_write_mode =
        api->rebel_method_bind_get_method(
            "WebSocketPeer",
            "set_write_mode"
        );
    method_bindings.mb_was_string_packet =
        api->rebel_method_bind_get_method(
            "WebSocketPeer",
            "was_string_packet"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WebSocketPeer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WebSocketPeer::MethodBindings WebSocketPeer::method_bindings = {};
void* WebSocketPeer::class_tag = nullptr;
} // namespace Rebel
