// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/udpserver.h"

#include "classes/icalls.h"
#include "classes/packetpeerudp.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t UDPServer::get_max_pending_connections() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_pending_connections,
        (const Object*)this
    );
}

bool UDPServer::is_connection_available() const {
    return rebel_icall_bool(
        method_bindings.mb_is_connection_available,
        (const Object*)this
    );
}

bool UDPServer::is_listening() const {
    return rebel_icall_bool(
        method_bindings.mb_is_listening,
        (const Object*)this
    );
}

Error UDPServer::listen(const int64_t port, const String bind_address) {
    return (Error)rebel_icall_int_int_string(
        method_bindings.mb_listen,
        (const Object*)this,
        port,
        bind_address
    );
}

Error UDPServer::poll() {
    return (Error)rebel_icall_int(
        method_bindings.mb_poll,
        (const Object*)this
    );
}

void UDPServer::set_max_pending_connections(const int64_t max_pending_connections) {
    rebel_icall_void_int(
        method_bindings.mb_set_max_pending_connections,
        (const Object*)this,
        max_pending_connections
    );
}

void UDPServer::stop() {
    rebel_icall_void(
        method_bindings.mb_stop,
        (const Object*)this
    );
}

Ref<PacketPeerUDP> UDPServer::take_connection() {
    return Ref<PacketPeerUDP>::create_ref(rebel_icall_object(
        method_bindings.mb_take_connection,
        (const Object*)this
    ));
}

UDPServer* UDPServer::create() {
    return (UDPServer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"UDPServer")()
         );
}

void UDPServer::init_method_bindings() {
    method_bindings.mb_get_max_pending_connections =
        api->rebel_method_bind_get_method(
            "UDPServer",
            "get_max_pending_connections"
        );
    method_bindings.mb_is_connection_available =
        api->rebel_method_bind_get_method(
            "UDPServer",
            "is_connection_available"
        );
    method_bindings.mb_is_listening =
        api->rebel_method_bind_get_method(
            "UDPServer",
            "is_listening"
        );
    method_bindings.mb_listen =
        api->rebel_method_bind_get_method(
            "UDPServer",
            "listen"
        );
    method_bindings.mb_poll =
        api->rebel_method_bind_get_method(
            "UDPServer",
            "poll"
        );
    method_bindings.mb_set_max_pending_connections =
        api->rebel_method_bind_get_method(
            "UDPServer",
            "set_max_pending_connections"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "UDPServer",
            "stop"
        );
    method_bindings.mb_take_connection =
        api->rebel_method_bind_get_method(
            "UDPServer",
            "take_connection"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "UDPServer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

UDPServer::MethodBindings UDPServer::method_bindings = {};
void* UDPServer::class_tag = nullptr;
} // namespace Rebel
