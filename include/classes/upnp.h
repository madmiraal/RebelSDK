// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_UPNP_H
#define REBEL_UPNP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class UPNPDevice;

class UPNP : public Reference {
public:
    enum UPNPResult {
        UPNP_RESULT_SUCCESS = 0,
        UPNP_RESULT_NOT_AUTHORIZED = 1,
        UPNP_RESULT_PORT_MAPPING_NOT_FOUND = 2,
        UPNP_RESULT_INCONSISTENT_PARAMETERS = 3,
        UPNP_RESULT_NO_SUCH_ENTRY_IN_ARRAY = 4,
        UPNP_RESULT_ACTION_FAILED = 5,
        UPNP_RESULT_SRC_IP_WILDCARD_NOT_PERMITTED = 6,
        UPNP_RESULT_EXT_PORT_WILDCARD_NOT_PERMITTED = 7,
        UPNP_RESULT_INT_PORT_WILDCARD_NOT_PERMITTED = 8,
        UPNP_RESULT_REMOTE_HOST_MUST_BE_WILDCARD = 9,
        UPNP_RESULT_EXT_PORT_MUST_BE_WILDCARD = 10,
        UPNP_RESULT_NO_PORT_MAPS_AVAILABLE = 11,
        UPNP_RESULT_CONFLICT_WITH_OTHER_MECHANISM = 12,
        UPNP_RESULT_CONFLICT_WITH_OTHER_MAPPING = 13,
        UPNP_RESULT_SAME_PORT_VALUES_REQUIRED = 14,
        UPNP_RESULT_ONLY_PERMANENT_LEASE_SUPPORTED = 15,
        UPNP_RESULT_INVALID_GATEWAY = 16,
        UPNP_RESULT_INVALID_PORT = 17,
        UPNP_RESULT_INVALID_PROTOCOL = 18,
        UPNP_RESULT_INVALID_DURATION = 19,
        UPNP_RESULT_INVALID_ARGS = 20,
        UPNP_RESULT_INVALID_RESPONSE = 21,
        UPNP_RESULT_INVALID_PARAM = 22,
        UPNP_RESULT_HTTP_ERROR = 23,
        UPNP_RESULT_SOCKET_ERROR = 24,
        UPNP_RESULT_MEM_ALLOC_ERROR = 25,
        UPNP_RESULT_NO_GATEWAY = 26,
        UPNP_RESULT_NO_DEVICES = 27,
        UPNP_RESULT_UNKNOWN_ERROR = 28,
    };

    void add_device(const Ref<UPNPDevice> device);
    int64_t add_port_mapping(const int64_t port, const int64_t port_internal = 0, const String desc = "", const String proto = "UDP", const int64_t duration = 0) const;
    void clear_devices();
    int64_t delete_port_mapping(const int64_t port, const String proto = "UDP") const;
    int64_t discover(const int64_t timeout = 2000, const int64_t ttl = 2, const String device_filter = "InternetGatewayDevice");
    Ref<UPNPDevice> get_device(const int64_t index) const;
    int64_t get_device_count() const;
    int64_t get_discover_local_port() const;
    String get_discover_multicast_if() const;
    Ref<UPNPDevice> get_gateway() const;
    bool is_discover_ipv6() const;
    String query_external_address() const;
    void remove_device(const int64_t index);
    void set_device(const int64_t index, const Ref<UPNPDevice> device);
    void set_discover_ipv6(const bool ipv6);
    void set_discover_local_port(const int64_t port);
    void set_discover_multicast_if(const String m_if);

    static UPNP* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "UPNP";
    }

    inline static const char* get_rebel_class_name() {
        return "UPNP";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb_add_device;
        rebel_method_bind* mb_add_port_mapping;
        rebel_method_bind* mb_clear_devices;
        rebel_method_bind* mb_delete_port_mapping;
        rebel_method_bind* mb_discover;
        rebel_method_bind* mb_get_device;
        rebel_method_bind* mb_get_device_count;
        rebel_method_bind* mb_get_discover_local_port;
        rebel_method_bind* mb_get_discover_multicast_if;
        rebel_method_bind* mb_get_gateway;
        rebel_method_bind* mb_is_discover_ipv6;
        rebel_method_bind* mb_query_external_address;
        rebel_method_bind* mb_remove_device;
        rebel_method_bind* mb_set_device;
        rebel_method_bind* mb_set_discover_ipv6;
        rebel_method_bind* mb_set_discover_local_port;
        rebel_method_bind* mb_set_discover_multicast_if;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_UPNP_H
