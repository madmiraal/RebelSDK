// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NAVIGATION2D_H
#define REBEL_NAVIGATION2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class NavigationPolygon;
class Object;

class Navigation2D : public Node2D {
public:
    Vector2 get_closest_point(const Vector2 to_point);
    Object* get_closest_point_owner(const Vector2 to_point);
    PoolVector2Array get_simple_path(const Vector2 start, const Vector2 end, const bool optimize = true);
    int64_t navpoly_add(const Ref<NavigationPolygon> mesh, const Transform2D xform, const Object* owner = nullptr);
    void navpoly_remove(const int64_t id);
    void navpoly_set_transform(const int64_t id, const Transform2D xform);

    static Navigation2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Navigation2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Navigation2D";
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
        rebel_method_bind* mb_get_closest_point;
        rebel_method_bind* mb_get_closest_point_owner;
        rebel_method_bind* mb_get_simple_path;
        rebel_method_bind* mb_navpoly_add;
        rebel_method_bind* mb_navpoly_remove;
        rebel_method_bind* mb_navpoly_set_transform;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NAVIGATION2D_H
