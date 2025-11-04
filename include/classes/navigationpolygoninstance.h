// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NAVIGATIONPOLYGONINSTANCE_H
#define REBEL_NAVIGATIONPOLYGONINSTANCE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class NavigationPolygon;

class NavigationPolygonInstance : public Node2D {
public:
    void _navpoly_changed();
    Ref<NavigationPolygon> get_navigation_polygon() const;
    bool is_enabled() const;
    void set_enabled(const bool enabled);
    void set_navigation_polygon(const Ref<NavigationPolygon> navpoly);

    static NavigationPolygonInstance* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "NavigationPolygonInstance";
    }

    inline static const char* get_rebel_class_name() {
        return "NavigationPolygonInstance";
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
        rebel_method_bind* mb__navpoly_changed;
        rebel_method_bind* mb_get_navigation_polygon;
        rebel_method_bind* mb_is_enabled;
        rebel_method_bind* mb_set_enabled;
        rebel_method_bind* mb_set_navigation_polygon;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NAVIGATIONPOLYGONINSTANCE_H
