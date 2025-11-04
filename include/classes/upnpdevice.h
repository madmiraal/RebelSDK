// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_UPNPDEVICE_H
#define REBEL_UPNPDEVICE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class UPNPDevice : public Reference {
public:
    enum IGDStatus {
        IGD_STATUS_OK = 0,
        IGD_STATUS_HTTP_ERROR = 1,
        IGD_STATUS_HTTP_EMPTY = 2,
        IGD_STATUS_NO_URLS = 3,
        IGD_STATUS_NO_IGD = 4,
        IGD_STATUS_DISCONNECTED = 5,
        IGD_STATUS_UNKNOWN_DEVICE = 6,
        IGD_STATUS_INVALID_CONTROL = 7,
        IGD_STATUS_MALLOC_ERROR = 8,
        IGD_STATUS_UNKNOWN_ERROR = 9,
    };

    int64_t add_port_mapping(const int64_t port, const int64_t port_internal = 0, const String desc = "", const String proto = "UDP", const int64_t duration = 0) const;
    int64_t delete_port_mapping(const int64_t port, const String proto = "UDP") const;
    String get_description_url() const;
    String get_igd_control_url() const;
    String get_igd_our_addr() const;
    String get_igd_service_type() const;
    UPNPDevice::IGDStatus get_igd_status() const;
    String get_service_type() const;
    bool is_valid_gateway() const;
    String query_external_address() const;
    void set_description_url(const String url);
    void set_igd_control_url(const String url);
    void set_igd_our_addr(const String addr);
    void set_igd_service_type(const String type);
    void set_igd_status(const int64_t status);
    void set_service_type(const String type);

    static UPNPDevice* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "UPNPDevice";
    }

    inline static const char* get_rebel_class_name() {
        return "UPNPDevice";
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
        rebel_method_bind* mb_add_port_mapping;
        rebel_method_bind* mb_delete_port_mapping;
        rebel_method_bind* mb_get_description_url;
        rebel_method_bind* mb_get_igd_control_url;
        rebel_method_bind* mb_get_igd_our_addr;
        rebel_method_bind* mb_get_igd_service_type;
        rebel_method_bind* mb_get_igd_status;
        rebel_method_bind* mb_get_service_type;
        rebel_method_bind* mb_is_valid_gateway;
        rebel_method_bind* mb_query_external_address;
        rebel_method_bind* mb_set_description_url;
        rebel_method_bind* mb_set_igd_control_url;
        rebel_method_bind* mb_set_igd_our_addr;
        rebel_method_bind* mb_set_igd_service_type;
        rebel_method_bind* mb_set_igd_status;
        rebel_method_bind* mb_set_service_type;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_UPNPDEVICE_H
