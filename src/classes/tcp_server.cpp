// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/tcp_server.h"

#include "classes/icalls.h"
#include "classes/streampeertcp.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool TCP_Server::is_connection_available() const {
    return rebel_icall_bool(
        method_bindings.mb_is_connection_available,
        (const Object*)this
    );
}

bool TCP_Server::is_listening() const {
    return rebel_icall_bool(
        method_bindings.mb_is_listening,
        (const Object*)this
    );
}

Error TCP_Server::listen(const int64_t port, const String bind_address) {
    return (Error)rebel_icall_int_int_string(
        method_bindings.mb_listen,
        (const Object*)this,
        port,
        bind_address
    );
}

void TCP_Server::stop() {
    rebel_icall_void(
        method_bindings.mb_stop,
        (const Object*)this
    );
}

Ref<StreamPeerTCP> TCP_Server::take_connection() {
    return Ref<StreamPeerTCP>::create_ref(rebel_icall_object(
        method_bindings.mb_take_connection,
        (const Object*)this
    ));
}

TCP_Server* TCP_Server::create() {
    return (TCP_Server*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"TCP_Server")()
         );
}

void TCP_Server::init_method_bindings() {
    method_bindings.mb_is_connection_available =
        api->rebel_method_bind_get_method(
            "TCP_Server",
            "is_connection_available"
        );
    method_bindings.mb_is_listening =
        api->rebel_method_bind_get_method(
            "TCP_Server",
            "is_listening"
        );
    method_bindings.mb_listen =
        api->rebel_method_bind_get_method(
            "TCP_Server",
            "listen"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "TCP_Server",
            "stop"
        );
    method_bindings.mb_take_connection =
        api->rebel_method_bind_get_method(
            "TCP_Server",
            "take_connection"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TCP_Server");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TCP_Server::MethodBindings TCP_Server::method_bindings = {};
void* TCP_Server::class_tag = nullptr;
} // namespace Rebel
