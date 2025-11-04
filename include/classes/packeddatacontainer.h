// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PACKEDDATACONTAINER_H
#define REBEL_PACKEDDATACONTAINER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PackedDataContainer : public Resource {
public:
    PoolByteArray _get_data() const;
    Variant _iter_get(const Variant arg0);
    Variant _iter_init(const Array arg0);
    Variant _iter_next(const Array arg0);
    void _set_data(const PoolByteArray arg0);
    Error pack(const Variant value);
    int64_t size() const;

    static PackedDataContainer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PackedDataContainer";
    }

    inline static const char* get_rebel_class_name() {
        return "PackedDataContainer";
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
        rebel_method_bind* mb__get_data;
        rebel_method_bind* mb__iter_get;
        rebel_method_bind* mb__iter_init;
        rebel_method_bind* mb__iter_next;
        rebel_method_bind* mb__set_data;
        rebel_method_bind* mb_pack;
        rebel_method_bind* mb_size;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PACKEDDATACONTAINER_H
