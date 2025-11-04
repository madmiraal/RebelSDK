// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/upnp.h"

#include "classes/icalls.h"
#include "classes/upnpdevice.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void UPNP::add_device(const Ref<UPNPDevice> device) {
    rebel_icall_void_object(
        method_bindings.mb_add_device,
        (const Object*)this,
        device.ptr()
    );
}

int64_t UPNP::add_port_mapping(const int64_t port, const int64_t port_internal, const String desc, const String proto, const int64_t duration) const {
    return rebel_icall_int_int_int_string_string_int(
        method_bindings.mb_add_port_mapping,
        (const Object*)this,
        port,
        port_internal,
        desc,
        proto,
        duration
    );
}

void UPNP::clear_devices() {
    rebel_icall_void(
        method_bindings.mb_clear_devices,
        (const Object*)this
    );
}

int64_t UPNP::delete_port_mapping(const int64_t port, const String proto) const {
    return rebel_icall_int_int_string(
        method_bindings.mb_delete_port_mapping,
        (const Object*)this,
        port,
        proto
    );
}

int64_t UPNP::discover(const int64_t timeout, const int64_t ttl, const String device_filter) {
    return rebel_icall_int_int_int_string(
        method_bindings.mb_discover,
        (const Object*)this,
        timeout,
        ttl,
        device_filter
    );
}

Ref<UPNPDevice> UPNP::get_device(const int64_t index) const {
    return Ref<UPNPDevice>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_device,
        (const Object*)this,
        index
    ));
}

int64_t UPNP::get_device_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_device_count,
        (const Object*)this
    );
}

int64_t UPNP::get_discover_local_port() const {
    return rebel_icall_int(
        method_bindings.mb_get_discover_local_port,
        (const Object*)this
    );
}

String UPNP::get_discover_multicast_if() const {
    return rebel_icall_string(
        method_bindings.mb_get_discover_multicast_if,
        (const Object*)this
    );
}

Ref<UPNPDevice> UPNP::get_gateway() const {
    return Ref<UPNPDevice>::create_ref(rebel_icall_object(
        method_bindings.mb_get_gateway,
        (const Object*)this
    ));
}

bool UPNP::is_discover_ipv6() const {
    return rebel_icall_bool(
        method_bindings.mb_is_discover_ipv6,
        (const Object*)this
    );
}

String UPNP::query_external_address() const {
    return rebel_icall_string(
        method_bindings.mb_query_external_address,
        (const Object*)this
    );
}

void UPNP::remove_device(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_remove_device,
        (const Object*)this,
        index
    );
}

void UPNP::set_device(const int64_t index, const Ref<UPNPDevice> device) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_device,
        (const Object*)this,
        index,
        device.ptr()
    );
}

void UPNP::set_discover_ipv6(const bool ipv6) {
    rebel_icall_void_bool(
        method_bindings.mb_set_discover_ipv6,
        (const Object*)this,
        ipv6
    );
}

void UPNP::set_discover_local_port(const int64_t port) {
    rebel_icall_void_int(
        method_bindings.mb_set_discover_local_port,
        (const Object*)this,
        port
    );
}

void UPNP::set_discover_multicast_if(const String m_if) {
    rebel_icall_void_string(
        method_bindings.mb_set_discover_multicast_if,
        (const Object*)this,
        m_if
    );
}

UPNP* UPNP::create() {
    return (UPNP*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"UPNP")()
         );
}

void UPNP::init_method_bindings() {
    method_bindings.mb_add_device =
        api->rebel_method_bind_get_method(
            "UPNP",
            "add_device"
        );
    method_bindings.mb_add_port_mapping =
        api->rebel_method_bind_get_method(
            "UPNP",
            "add_port_mapping"
        );
    method_bindings.mb_clear_devices =
        api->rebel_method_bind_get_method(
            "UPNP",
            "clear_devices"
        );
    method_bindings.mb_delete_port_mapping =
        api->rebel_method_bind_get_method(
            "UPNP",
            "delete_port_mapping"
        );
    method_bindings.mb_discover =
        api->rebel_method_bind_get_method(
            "UPNP",
            "discover"
        );
    method_bindings.mb_get_device =
        api->rebel_method_bind_get_method(
            "UPNP",
            "get_device"
        );
    method_bindings.mb_get_device_count =
        api->rebel_method_bind_get_method(
            "UPNP",
            "get_device_count"
        );
    method_bindings.mb_get_discover_local_port =
        api->rebel_method_bind_get_method(
            "UPNP",
            "get_discover_local_port"
        );
    method_bindings.mb_get_discover_multicast_if =
        api->rebel_method_bind_get_method(
            "UPNP",
            "get_discover_multicast_if"
        );
    method_bindings.mb_get_gateway =
        api->rebel_method_bind_get_method(
            "UPNP",
            "get_gateway"
        );
    method_bindings.mb_is_discover_ipv6 =
        api->rebel_method_bind_get_method(
            "UPNP",
            "is_discover_ipv6"
        );
    method_bindings.mb_query_external_address =
        api->rebel_method_bind_get_method(
            "UPNP",
            "query_external_address"
        );
    method_bindings.mb_remove_device =
        api->rebel_method_bind_get_method(
            "UPNP",
            "remove_device"
        );
    method_bindings.mb_set_device =
        api->rebel_method_bind_get_method(
            "UPNP",
            "set_device"
        );
    method_bindings.mb_set_discover_ipv6 =
        api->rebel_method_bind_get_method(
            "UPNP",
            "set_discover_ipv6"
        );
    method_bindings.mb_set_discover_local_port =
        api->rebel_method_bind_get_method(
            "UPNP",
            "set_discover_local_port"
        );
    method_bindings.mb_set_discover_multicast_if =
        api->rebel_method_bind_get_method(
            "UPNP",
            "set_discover_multicast_if"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "UPNP");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

UPNP::MethodBindings UPNP::method_bindings = {};
void* UPNP::class_tag = nullptr;
} // namespace Rebel
