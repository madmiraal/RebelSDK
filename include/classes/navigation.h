// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NAVIGATION_H
#define REBEL_NAVIGATION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class NavigationMesh;
class Object;

class Navigation : public Spatial {
public:
    Vector3 get_closest_point(const Vector3 to_point);
    Vector3 get_closest_point_normal(const Vector3 to_point);
    Object* get_closest_point_owner(const Vector3 to_point);
    Vector3 get_closest_point_to_segment(const Vector3 start, const Vector3 end, const bool use_collision = false);
    PoolVector3Array get_simple_path(const Vector3 start, const Vector3 end, const bool optimize = true);
    Vector3 get_up_vector() const;
    int64_t navmesh_add(const Ref<NavigationMesh> mesh, const Transform xform, const Object* owner = nullptr);
    void navmesh_remove(const int64_t id);
    void navmesh_set_transform(const int64_t id, const Transform xform);
    void set_up_vector(const Vector3 up);

    static Navigation* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Navigation";
    }

    inline static const char* get_rebel_class_name() {
        return "Navigation";
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
        rebel_method_bind* mb_get_closest_point_normal;
        rebel_method_bind* mb_get_closest_point_owner;
        rebel_method_bind* mb_get_closest_point_to_segment;
        rebel_method_bind* mb_get_simple_path;
        rebel_method_bind* mb_get_up_vector;
        rebel_method_bind* mb_navmesh_add;
        rebel_method_bind* mb_navmesh_remove;
        rebel_method_bind* mb_navmesh_set_transform;
        rebel_method_bind* mb_set_up_vector;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NAVIGATION_H
