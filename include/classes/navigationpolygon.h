// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NAVIGATIONPOLYGON_H
#define REBEL_NAVIGATIONPOLYGON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class NavigationPolygon : public Resource {
public:
    Array _get_outlines() const;
    Array _get_polygons() const;
    void _set_outlines(const Array outlines);
    void _set_polygons(const Array polygons);
    void add_outline(const PoolVector2Array outline);
    void add_outline_at_index(const PoolVector2Array outline, const int64_t index);
    void add_polygon(const PoolIntArray polygon);
    void clear_outlines();
    void clear_polygons();
    PoolVector2Array get_outline(const int64_t idx) const;
    int64_t get_outline_count() const;
    PoolIntArray get_polygon(const int64_t idx);
    int64_t get_polygon_count() const;
    PoolVector2Array get_vertices() const;
    void make_polygons_from_outlines();
    void remove_outline(const int64_t idx);
    void set_outline(const int64_t idx, const PoolVector2Array outline);
    void set_vertices(const PoolVector2Array vertices);

    static NavigationPolygon* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "NavigationPolygon";
    }

    inline static const char* get_rebel_class_name() {
        return "NavigationPolygon";
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
        rebel_method_bind* mb__get_outlines;
        rebel_method_bind* mb__get_polygons;
        rebel_method_bind* mb__set_outlines;
        rebel_method_bind* mb__set_polygons;
        rebel_method_bind* mb_add_outline;
        rebel_method_bind* mb_add_outline_at_index;
        rebel_method_bind* mb_add_polygon;
        rebel_method_bind* mb_clear_outlines;
        rebel_method_bind* mb_clear_polygons;
        rebel_method_bind* mb_get_outline;
        rebel_method_bind* mb_get_outline_count;
        rebel_method_bind* mb_get_polygon;
        rebel_method_bind* mb_get_polygon_count;
        rebel_method_bind* mb_get_vertices;
        rebel_method_bind* mb_make_polygons_from_outlines;
        rebel_method_bind* mb_remove_outline;
        rebel_method_bind* mb_set_outline;
        rebel_method_bind* mb_set_vertices;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NAVIGATIONPOLYGON_H
