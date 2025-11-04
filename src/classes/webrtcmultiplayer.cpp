// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/webrtcmultiplayer.h"

#include "classes/icalls.h"
#include "classes/webrtcpeerconnection.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error WebRTCMultiplayer::add_peer(const Ref<WebRTCPeerConnection> peer, const int64_t peer_id, const int64_t unreliable_lifetime) {
    return (Error)rebel_icall_int_object_int_int(
        method_bindings.mb_add_peer,
        (const Object*)this,
        peer.ptr(),
        peer_id,
        unreliable_lifetime
    );
}

void WebRTCMultiplayer::close() {
    rebel_icall_void(
        method_bindings.mb_close,
        (const Object*)this
    );
}

Dictionary WebRTCMultiplayer::get_peer(const int64_t peer_id) {
    return rebel_icall_dictionary_int(
        method_bindings.mb_get_peer,
        (const Object*)this,
        peer_id
    );
}

Dictionary WebRTCMultiplayer::get_peers() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_peers,
        (const Object*)this
    );
}

bool WebRTCMultiplayer::has_peer(const int64_t peer_id) {
    return rebel_icall_bool_int(
        method_bindings.mb_has_peer,
        (const Object*)this,
        peer_id
    );
}

Error WebRTCMultiplayer::initialize(const int64_t peer_id, const bool server_compatibility) {
    return (Error)rebel_icall_int_int_bool(
        method_bindings.mb_initialize,
        (const Object*)this,
        peer_id,
        server_compatibility
    );
}

void WebRTCMultiplayer::remove_peer(const int64_t peer_id) {
    rebel_icall_void_int(
        method_bindings.mb_remove_peer,
        (const Object*)this,
        peer_id
    );
}

WebRTCMultiplayer* WebRTCMultiplayer::create() {
    return (WebRTCMultiplayer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"WebRTCMultiplayer")()
         );
}

void WebRTCMultiplayer::init_method_bindings() {
    method_bindings.mb_add_peer =
        api->rebel_method_bind_get_method(
            "WebRTCMultiplayer",
            "add_peer"
        );
    method_bindings.mb_close =
        api->rebel_method_bind_get_method(
            "WebRTCMultiplayer",
            "close"
        );
    method_bindings.mb_get_peer =
        api->rebel_method_bind_get_method(
            "WebRTCMultiplayer",
            "get_peer"
        );
    method_bindings.mb_get_peers =
        api->rebel_method_bind_get_method(
            "WebRTCMultiplayer",
            "get_peers"
        );
    method_bindings.mb_has_peer =
        api->rebel_method_bind_get_method(
            "WebRTCMultiplayer",
            "has_peer"
        );
    method_bindings.mb_initialize =
        api->rebel_method_bind_get_method(
            "WebRTCMultiplayer",
            "initialize"
        );
    method_bindings.mb_remove_peer =
        api->rebel_method_bind_get_method(
            "WebRTCMultiplayer",
            "remove_peer"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WebRTCMultiplayer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WebRTCMultiplayer::MethodBindings WebRTCMultiplayer::method_bindings = {};
void* WebRTCMultiplayer::class_tag = nullptr;
} // namespace Rebel
