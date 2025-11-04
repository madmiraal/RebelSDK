// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SKY_H
#define REBEL_SKY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Sky : public Resource {
public:
    enum RadianceSize {
        RADIANCE_SIZE_32 = 0,
        RADIANCE_SIZE_64 = 1,
        RADIANCE_SIZE_128 = 2,
        RADIANCE_SIZE_256 = 3,
        RADIANCE_SIZE_512 = 4,
        RADIANCE_SIZE_1024 = 5,
        RADIANCE_SIZE_2048 = 6,
        RADIANCE_SIZE_MAX = 7,
    };

    Sky::RadianceSize get_radiance_size() const;
    void set_radiance_size(const int64_t size);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Sky";
    }

    inline static const char* get_rebel_class_name() {
        return "Sky";
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
        rebel_method_bind* mb_get_radiance_size;
        rebel_method_bind* mb_set_radiance_size;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SKY_H
