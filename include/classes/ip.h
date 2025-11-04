// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_IP_H
#define REBEL_IP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class IP : public Object {
public:
    enum ResolverStatus {
        RESOLVER_STATUS_NONE = 0,
        RESOLVER_STATUS_WAITING = 1,
        RESOLVER_STATUS_DONE = 2,
        RESOLVER_STATUS_ERROR = 3,
    };

    enum Type {
        TYPE_NONE = 0,
        TYPE_IPV4 = 1,
        TYPE_IPV6 = 2,
        TYPE_ANY = 3,
    };

    static const int RESOLVER_INVALID_ID = -1;
    static const int RESOLVER_MAX_QUERIES = 32;

    void clear_cache(const String hostname = "");
    void erase_resolve_item(const int64_t id);
    Array get_local_addresses() const;
    Array get_local_interfaces() const;
    String get_resolve_item_address(const int64_t id) const;
    Array get_resolve_item_addresses(const int64_t id) const;
    IP::ResolverStatus get_resolve_item_status(const int64_t id) const;
    String resolve_hostname(const String host, const int64_t ip_type = 3);
    Array resolve_hostname_addresses(const String host, const int64_t ip_type = 3);
    int64_t resolve_hostname_queue_item(const String host, const int64_t ip_type = 3);

    static inline IP* get_singleton() {
        if (!IP::singleton) {
            IP::singleton = new IP;
        }
        return IP::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "IP";
    }

    inline static const char* get_rebel_class_name() {
        return "IP";
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
    IP();
    static IP* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_clear_cache;
        rebel_method_bind* mb_erase_resolve_item;
        rebel_method_bind* mb_get_local_addresses;
        rebel_method_bind* mb_get_local_interfaces;
        rebel_method_bind* mb_get_resolve_item_address;
        rebel_method_bind* mb_get_resolve_item_addresses;
        rebel_method_bind* mb_get_resolve_item_status;
        rebel_method_bind* mb_resolve_hostname;
        rebel_method_bind* mb_resolve_hostname_addresses;
        rebel_method_bind* mb_resolve_hostname_queue_item;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_IP_H
