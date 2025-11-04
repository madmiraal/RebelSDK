// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_BONE2D_H
#define REBEL_BONE2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Bone2D : public Node2D {
public:
    void apply_rest();
    real_t get_default_length() const;
    int64_t get_index_in_skeleton() const;
    Transform2D get_rest() const;
    Transform2D get_skeleton_rest() const;
    void set_default_length(const real_t default_length);
    void set_rest(const Transform2D rest);

    static Bone2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Bone2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Bone2D";
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
        rebel_method_bind* mb_apply_rest;
        rebel_method_bind* mb_get_default_length;
        rebel_method_bind* mb_get_index_in_skeleton;
        rebel_method_bind* mb_get_rest;
        rebel_method_bind* mb_get_skeleton_rest;
        rebel_method_bind* mb_set_default_length;
        rebel_method_bind* mb_set_rest;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_BONE2D_H
