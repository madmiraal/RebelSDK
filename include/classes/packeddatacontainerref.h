// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PACKEDDATACONTAINERREF_H
#define REBEL_PACKEDDATACONTAINERREF_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PackedDataContainerRef : public Reference {
public:
    bool _is_dictionary() const;
    Variant _iter_get(const Variant arg0);
    Variant _iter_init(const Array arg0);
    Variant _iter_next(const Array arg0);
    int64_t size() const;

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PackedDataContainerRef";
    }

    inline static const char* get_rebel_class_name() {
        return "PackedDataContainerRef";
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
        rebel_method_bind* mb__is_dictionary;
        rebel_method_bind* mb__iter_get;
        rebel_method_bind* mb__iter_init;
        rebel_method_bind* mb__iter_next;
        rebel_method_bind* mb_size;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PACKEDDATACONTAINERREF_H
