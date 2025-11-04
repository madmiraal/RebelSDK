// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/upnpdevice.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t UPNPDevice::add_port_mapping(const int64_t port, const int64_t port_internal, const String desc, const String proto, const int64_t duration) const {
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

int64_t UPNPDevice::delete_port_mapping(const int64_t port, const String proto) const {
    return rebel_icall_int_int_string(
        method_bindings.mb_delete_port_mapping,
        (const Object*)this,
        port,
        proto
    );
}

String UPNPDevice::get_description_url() const {
    return rebel_icall_string(
        method_bindings.mb_get_description_url,
        (const Object*)this
    );
}

String UPNPDevice::get_igd_control_url() const {
    return rebel_icall_string(
        method_bindings.mb_get_igd_control_url,
        (const Object*)this
    );
}

String UPNPDevice::get_igd_our_addr() const {
    return rebel_icall_string(
        method_bindings.mb_get_igd_our_addr,
        (const Object*)this
    );
}

String UPNPDevice::get_igd_service_type() const {
    return rebel_icall_string(
        method_bindings.mb_get_igd_service_type,
        (const Object*)this
    );
}

UPNPDevice::IGDStatus UPNPDevice::get_igd_status() const {
    return (UPNPDevice::IGDStatus)rebel_icall_int(
        method_bindings.mb_get_igd_status,
        (const Object*)this
    );
}

String UPNPDevice::get_service_type() const {
    return rebel_icall_string(
        method_bindings.mb_get_service_type,
        (const Object*)this
    );
}

bool UPNPDevice::is_valid_gateway() const {
    return rebel_icall_bool(
        method_bindings.mb_is_valid_gateway,
        (const Object*)this
    );
}

String UPNPDevice::query_external_address() const {
    return rebel_icall_string(
        method_bindings.mb_query_external_address,
        (const Object*)this
    );
}

void UPNPDevice::set_description_url(const String url) {
    rebel_icall_void_string(
        method_bindings.mb_set_description_url,
        (const Object*)this,
        url
    );
}

void UPNPDevice::set_igd_control_url(const String url) {
    rebel_icall_void_string(
        method_bindings.mb_set_igd_control_url,
        (const Object*)this,
        url
    );
}

void UPNPDevice::set_igd_our_addr(const String addr) {
    rebel_icall_void_string(
        method_bindings.mb_set_igd_our_addr,
        (const Object*)this,
        addr
    );
}

void UPNPDevice::set_igd_service_type(const String type) {
    rebel_icall_void_string(
        method_bindings.mb_set_igd_service_type,
        (const Object*)this,
        type
    );
}

void UPNPDevice::set_igd_status(const int64_t status) {
    rebel_icall_void_int(
        method_bindings.mb_set_igd_status,
        (const Object*)this,
        status
    );
}

void UPNPDevice::set_service_type(const String type) {
    rebel_icall_void_string(
        method_bindings.mb_set_service_type,
        (const Object*)this,
        type
    );
}

UPNPDevice* UPNPDevice::create() {
    return (UPNPDevice*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"UPNPDevice")()
         );
}

void UPNPDevice::init_method_bindings() {
    method_bindings.mb_add_port_mapping =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "add_port_mapping"
        );
    method_bindings.mb_delete_port_mapping =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "delete_port_mapping"
        );
    method_bindings.mb_get_description_url =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "get_description_url"
        );
    method_bindings.mb_get_igd_control_url =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "get_igd_control_url"
        );
    method_bindings.mb_get_igd_our_addr =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "get_igd_our_addr"
        );
    method_bindings.mb_get_igd_service_type =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "get_igd_service_type"
        );
    method_bindings.mb_get_igd_status =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "get_igd_status"
        );
    method_bindings.mb_get_service_type =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "get_service_type"
        );
    method_bindings.mb_is_valid_gateway =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "is_valid_gateway"
        );
    method_bindings.mb_query_external_address =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "query_external_address"
        );
    method_bindings.mb_set_description_url =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "set_description_url"
        );
    method_bindings.mb_set_igd_control_url =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "set_igd_control_url"
        );
    method_bindings.mb_set_igd_our_addr =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "set_igd_our_addr"
        );
    method_bindings.mb_set_igd_service_type =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "set_igd_service_type"
        );
    method_bindings.mb_set_igd_status =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "set_igd_status"
        );
    method_bindings.mb_set_service_type =
        api->rebel_method_bind_get_method(
            "UPNPDevice",
            "set_service_type"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "UPNPDevice");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

UPNPDevice::MethodBindings UPNPDevice::method_bindings = {};
void* UPNPDevice::class_tag = nullptr;
} // namespace Rebel
