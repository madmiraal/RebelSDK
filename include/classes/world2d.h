// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_WORLD2D_H
#define REBEL_WORLD2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Physics2DDirectSpaceState;

class World2D : public Resource {
public:
    RID get_canvas();
    Physics2DDirectSpaceState* get_direct_space_state();
    RID get_space();

    static World2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "World2D";
    }

    inline static const char* get_rebel_class_name() {
        return "World2D";
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
        rebel_method_bind* mb_get_canvas;
        rebel_method_bind* mb_get_direct_space_state;
        rebel_method_bind* mb_get_space;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_WORLD2D_H
