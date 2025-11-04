// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RAYSHAPE_H
#define REBEL_RAYSHAPE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/shape.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class RayShape : public Shape {
public:
    real_t get_length() const;
    bool get_slips_on_slope() const;
    void set_length(const real_t length);
    void set_slips_on_slope(const bool active);

    static RayShape* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "RayShape";
    }

    inline static const char* get_rebel_class_name() {
        return "RayShape";
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
        rebel_method_bind* mb_get_length;
        rebel_method_bind* mb_get_slips_on_slope;
        rebel_method_bind* mb_set_length;
        rebel_method_bind* mb_set_slips_on_slope;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RAYSHAPE_H
