// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_BOXSHAPE_H
#define REBEL_BOXSHAPE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/shape.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class BoxShape : public Shape {
public:
    Vector3 get_extents() const;
    void set_extents(const Vector3 extents);

    static BoxShape* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "BoxShape";
    }

    inline static const char* get_rebel_class_name() {
        return "BoxShape";
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
        rebel_method_bind* mb_get_extents;
        rebel_method_bind* mb_set_extents;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_BOXSHAPE_H
