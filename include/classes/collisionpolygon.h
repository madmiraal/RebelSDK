// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_COLLISIONPOLYGON_H
#define REBEL_COLLISIONPOLYGON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CollisionPolygon : public Spatial {
public:
    bool _is_editable_3d_polygon() const;
    real_t get_depth() const;
    real_t get_margin() const;
    PoolVector2Array get_polygon() const;
    bool is_disabled() const;
    void set_depth(const real_t depth);
    void set_disabled(const bool disabled);
    void set_margin(const real_t margin);
    void set_polygon(const PoolVector2Array polygon);

    static CollisionPolygon* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CollisionPolygon";
    }

    inline static const char* get_rebel_class_name() {
        return "CollisionPolygon";
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
        rebel_method_bind* mb__is_editable_3d_polygon;
        rebel_method_bind* mb_get_depth;
        rebel_method_bind* mb_get_margin;
        rebel_method_bind* mb_get_polygon;
        rebel_method_bind* mb_is_disabled;
        rebel_method_bind* mb_set_depth;
        rebel_method_bind* mb_set_disabled;
        rebel_method_bind* mb_set_margin;
        rebel_method_bind* mb_set_polygon;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_COLLISIONPOLYGON_H
