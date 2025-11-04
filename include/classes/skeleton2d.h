// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SKELETON2D_H
#define REBEL_SKELETON2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Bone2D;

class Skeleton2D : public Node2D {
public:
    void _update_bone_setup();
    void _update_transform();
    Bone2D* get_bone(const int64_t idx);
    int64_t get_bone_count() const;
    RID get_skeleton() const;

    static Skeleton2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Skeleton2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Skeleton2D";
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
        rebel_method_bind* mb__update_bone_setup;
        rebel_method_bind* mb__update_transform;
        rebel_method_bind* mb_get_bone;
        rebel_method_bind* mb_get_bone_count;
        rebel_method_bind* mb_get_skeleton;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SKELETON2D_H
