// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ROOM_H
#define REBEL_ROOM_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Room : public Spatial {
public:
    PoolVector3Array get_points() const;
    real_t get_room_simplify() const;
    bool get_use_default_simplify() const;
    void set_point(const int64_t index, const Vector3 position);
    void set_points(const PoolVector3Array points);
    void set_room_simplify(const real_t p_value);
    void set_use_default_simplify(const bool p_use);

    static Room* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Room";
    }

    inline static const char* get_rebel_class_name() {
        return "Room";
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
        rebel_method_bind* mb_get_points;
        rebel_method_bind* mb_get_room_simplify;
        rebel_method_bind* mb_get_use_default_simplify;
        rebel_method_bind* mb_set_point;
        rebel_method_bind* mb_set_points;
        rebel_method_bind* mb_set_room_simplify;
        rebel_method_bind* mb_set_use_default_simplify;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ROOM_H
