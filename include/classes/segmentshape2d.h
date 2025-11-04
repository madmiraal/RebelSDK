// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SEGMENTSHAPE2D_H
#define REBEL_SEGMENTSHAPE2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/shape2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class SegmentShape2D : public Shape2D {
public:
    Vector2 get_a() const;
    Vector2 get_b() const;
    void set_a(const Vector2 a);
    void set_b(const Vector2 b);

    static SegmentShape2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SegmentShape2D";
    }

    inline static const char* get_rebel_class_name() {
        return "SegmentShape2D";
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
        rebel_method_bind* mb_get_a;
        rebel_method_bind* mb_get_b;
        rebel_method_bind* mb_set_a;
        rebel_method_bind* mb_set_b;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SEGMENTSHAPE2D_H
