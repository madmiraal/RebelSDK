// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_LINESHAPE2D_H
#define REBEL_LINESHAPE2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/shape2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class LineShape2D : public Shape2D {
public:
    real_t get_d() const;
    Vector2 get_normal() const;
    void set_d(const real_t d);
    void set_normal(const Vector2 normal);

    static LineShape2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "LineShape2D";
    }

    inline static const char* get_rebel_class_name() {
        return "LineShape2D";
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
        rebel_method_bind* mb_get_d;
        rebel_method_bind* mb_get_normal;
        rebel_method_bind* mb_set_d;
        rebel_method_bind* mb_set_normal;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_LINESHAPE2D_H
