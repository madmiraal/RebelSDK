// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_COLLISIONPOLYGON2D_H
#define REBEL_COLLISIONPOLYGON2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CollisionPolygon2D : public Node2D {
public:
    enum BuildMode {
        BUILD_SOLIDS = 0,
        BUILD_SEGMENTS = 1,
    };

    CollisionPolygon2D::BuildMode get_build_mode() const;
    real_t get_one_way_collision_margin() const;
    PoolVector2Array get_polygon() const;
    bool is_disabled() const;
    bool is_one_way_collision_enabled() const;
    void set_build_mode(const int64_t build_mode);
    void set_disabled(const bool disabled);
    void set_one_way_collision(const bool enabled);
    void set_one_way_collision_margin(const real_t margin);
    void set_polygon(const PoolVector2Array polygon);

    static CollisionPolygon2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CollisionPolygon2D";
    }

    inline static const char* get_rebel_class_name() {
        return "CollisionPolygon2D";
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
        rebel_method_bind* mb_get_build_mode;
        rebel_method_bind* mb_get_one_way_collision_margin;
        rebel_method_bind* mb_get_polygon;
        rebel_method_bind* mb_is_disabled;
        rebel_method_bind* mb_is_one_way_collision_enabled;
        rebel_method_bind* mb_set_build_mode;
        rebel_method_bind* mb_set_disabled;
        rebel_method_bind* mb_set_one_way_collision;
        rebel_method_bind* mb_set_one_way_collision_margin;
        rebel_method_bind* mb_set_polygon;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_COLLISIONPOLYGON2D_H
