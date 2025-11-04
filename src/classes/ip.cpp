// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/ip.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void IP::clear_cache(const String hostname) {
    rebel_icall_void_string(
        method_bindings.mb_clear_cache,
        (const Object*)this,
        hostname
    );
}

void IP::erase_resolve_item(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_erase_resolve_item,
        (const Object*)this,
        id
    );
}

Array IP::get_local_addresses() const {
    return rebel_icall_array(
        method_bindings.mb_get_local_addresses,
        (const Object*)this
    );
}

Array IP::get_local_interfaces() const {
    return rebel_icall_array(
        method_bindings.mb_get_local_interfaces,
        (const Object*)this
    );
}

String IP::get_resolve_item_address(const int64_t id) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_resolve_item_address,
        (const Object*)this,
        id
    );
}

Array IP::get_resolve_item_addresses(const int64_t id) const {
    return rebel_icall_array_int(
        method_bindings.mb_get_resolve_item_addresses,
        (const Object*)this,
        id
    );
}

IP::ResolverStatus IP::get_resolve_item_status(const int64_t id) const {
    return (IP::ResolverStatus)rebel_icall_int_int(
        method_bindings.mb_get_resolve_item_status,
        (const Object*)this,
        id
    );
}

String IP::resolve_hostname(const String host, const int64_t ip_type) {
    return rebel_icall_string_string_int(
        method_bindings.mb_resolve_hostname,
        (const Object*)this,
        host,
        ip_type
    );
}

Array IP::resolve_hostname_addresses(const String host, const int64_t ip_type) {
    return rebel_icall_array_string_int(
        method_bindings.mb_resolve_hostname_addresses,
        (const Object*)this,
        host,
        ip_type
    );
}

int64_t IP::resolve_hostname_queue_item(const String host, const int64_t ip_type) {
    return rebel_icall_int_string_int(
        method_bindings.mb_resolve_hostname_queue_item,
        (const Object*)this,
        host,
        ip_type
    );
}

IP* IP::singleton = nullptr;

IP::IP() {
    owner = api->rebel_global_get_singleton((char*) "IP");
}

void IP::init_method_bindings() {
    method_bindings.mb_clear_cache =
        api->rebel_method_bind_get_method(
            "IP",
            "clear_cache"
        );
    method_bindings.mb_erase_resolve_item =
        api->rebel_method_bind_get_method(
            "IP",
            "erase_resolve_item"
        );
    method_bindings.mb_get_local_addresses =
        api->rebel_method_bind_get_method(
            "IP",
            "get_local_addresses"
        );
    method_bindings.mb_get_local_interfaces =
        api->rebel_method_bind_get_method(
            "IP",
            "get_local_interfaces"
        );
    method_bindings.mb_get_resolve_item_address =
        api->rebel_method_bind_get_method(
            "IP",
            "get_resolve_item_address"
        );
    method_bindings.mb_get_resolve_item_addresses =
        api->rebel_method_bind_get_method(
            "IP",
            "get_resolve_item_addresses"
        );
    method_bindings.mb_get_resolve_item_status =
        api->rebel_method_bind_get_method(
            "IP",
            "get_resolve_item_status"
        );
    method_bindings.mb_resolve_hostname =
        api->rebel_method_bind_get_method(
            "IP",
            "resolve_hostname"
        );
    method_bindings.mb_resolve_hostname_addresses =
        api->rebel_method_bind_get_method(
            "IP",
            "resolve_hostname_addresses"
        );
    method_bindings.mb_resolve_hostname_queue_item =
        api->rebel_method_bind_get_method(
            "IP",
            "resolve_hostname_queue_item"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "IP");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

IP::MethodBindings IP::method_bindings = {};
void* IP::class_tag = nullptr;
} // namespace Rebel
