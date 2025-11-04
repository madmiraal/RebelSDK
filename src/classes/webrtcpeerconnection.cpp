// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/webrtcpeerconnection.h"

#include "classes/icalls.h"
#include "classes/webrtcdatachannel.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error WebRTCPeerConnection::add_ice_candidate(const String media, const int64_t index, const String name) {
    return (Error)rebel_icall_int_string_int_string(
        method_bindings.mb_add_ice_candidate,
        (const Object*)this,
        media,
        index,
        name
    );
}

void WebRTCPeerConnection::close() {
    rebel_icall_void(
        method_bindings.mb_close,
        (const Object*)this
    );
}

Ref<WebRTCDataChannel> WebRTCPeerConnection::create_data_channel(const String label, const Dictionary options) {
    return Ref<WebRTCDataChannel>::create_ref(rebel_icall_object_string_dictionary(
        method_bindings.mb_create_data_channel,
        (const Object*)this,
        label,
        options
    ));
}

Error WebRTCPeerConnection::create_offer() {
    return (Error)rebel_icall_int(
        method_bindings.mb_create_offer,
        (const Object*)this
    );
}

WebRTCPeerConnection::ConnectionState WebRTCPeerConnection::get_connection_state() const {
    return (WebRTCPeerConnection::ConnectionState)rebel_icall_int(
        method_bindings.mb_get_connection_state,
        (const Object*)this
    );
}

Error WebRTCPeerConnection::initialize(const Dictionary configuration) {
    return (Error)rebel_icall_int_dictionary(
        method_bindings.mb_initialize,
        (const Object*)this,
        configuration
    );
}

Error WebRTCPeerConnection::poll() {
    return (Error)rebel_icall_int(
        method_bindings.mb_poll,
        (const Object*)this
    );
}

Error WebRTCPeerConnection::set_local_description(const String type, const String sdp) {
    return (Error)rebel_icall_int_string_string(
        method_bindings.mb_set_local_description,
        (const Object*)this,
        type,
        sdp
    );
}

Error WebRTCPeerConnection::set_remote_description(const String type, const String sdp) {
    return (Error)rebel_icall_int_string_string(
        method_bindings.mb_set_remote_description,
        (const Object*)this,
        type,
        sdp
    );
}

WebRTCPeerConnection* WebRTCPeerConnection::create() {
    return (WebRTCPeerConnection*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"WebRTCPeerConnection")()
         );
}

void WebRTCPeerConnection::init_method_bindings() {
    method_bindings.mb_add_ice_candidate =
        api->rebel_method_bind_get_method(
            "WebRTCPeerConnection",
            "add_ice_candidate"
        );
    method_bindings.mb_close =
        api->rebel_method_bind_get_method(
            "WebRTCPeerConnection",
            "close"
        );
    method_bindings.mb_create_data_channel =
        api->rebel_method_bind_get_method(
            "WebRTCPeerConnection",
            "create_data_channel"
        );
    method_bindings.mb_create_offer =
        api->rebel_method_bind_get_method(
            "WebRTCPeerConnection",
            "create_offer"
        );
    method_bindings.mb_get_connection_state =
        api->rebel_method_bind_get_method(
            "WebRTCPeerConnection",
            "get_connection_state"
        );
    method_bindings.mb_initialize =
        api->rebel_method_bind_get_method(
            "WebRTCPeerConnection",
            "initialize"
        );
    method_bindings.mb_poll =
        api->rebel_method_bind_get_method(
            "WebRTCPeerConnection",
            "poll"
        );
    method_bindings.mb_set_local_description =
        api->rebel_method_bind_get_method(
            "WebRTCPeerConnection",
            "set_local_description"
        );
    method_bindings.mb_set_remote_description =
        api->rebel_method_bind_get_method(
            "WebRTCPeerConnection",
            "set_remote_description"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WebRTCPeerConnection");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WebRTCPeerConnection::MethodBindings WebRTCPeerConnection::method_bindings = {};
void* WebRTCPeerConnection::class_tag = nullptr;
} // namespace Rebel
