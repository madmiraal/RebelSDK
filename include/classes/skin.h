// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SKIN_H
#define REBEL_SKIN_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Skin : public Resource {
public:
    void add_bind(const int64_t bone, const Transform pose);
    void clear_binds();
    int64_t get_bind_bone(const int64_t bind_index) const;
    int64_t get_bind_count() const;
    String get_bind_name(const int64_t bind_index) const;
    Transform get_bind_pose(const int64_t bind_index) const;
    void set_bind_bone(const int64_t bind_index, const int64_t bone);
    void set_bind_count(const int64_t bind_count);
    void set_bind_name(const int64_t bind_index, const String name);
    void set_bind_pose(const int64_t bind_index, const Transform pose);

    static Skin* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Skin";
    }

    inline static const char* get_rebel_class_name() {
        return "Skin";
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
        rebel_method_bind* mb_add_bind;
        rebel_method_bind* mb_clear_binds;
        rebel_method_bind* mb_get_bind_bone;
        rebel_method_bind* mb_get_bind_count;
        rebel_method_bind* mb_get_bind_name;
        rebel_method_bind* mb_get_bind_pose;
        rebel_method_bind* mb_set_bind_bone;
        rebel_method_bind* mb_set_bind_count;
        rebel_method_bind* mb_set_bind_name;
        rebel_method_bind* mb_set_bind_pose;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SKIN_H
