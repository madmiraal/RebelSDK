// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CAPSULESHAPE2D_H
#define REBEL_CAPSULESHAPE2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/shape2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CapsuleShape2D : public Shape2D {
public:
    real_t get_height() const;
    real_t get_radius() const;
    void set_height(const real_t height);
    void set_radius(const real_t radius);

    static CapsuleShape2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CapsuleShape2D";
    }

    inline static const char* get_rebel_class_name() {
        return "CapsuleShape2D";
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
        rebel_method_bind* mb_get_height;
        rebel_method_bind* mb_get_radius;
        rebel_method_bind* mb_set_height;
        rebel_method_bind* mb_set_radius;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CAPSULESHAPE2D_H
