// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GEOMETRY_H
#define REBEL_GEOMETRY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Geometry : public Object {
public:
    enum PolyEndType {
        END_POLYGON = 0,
        END_JOINED = 1,
        END_BUTT = 2,
        END_SQUARE = 3,
        END_ROUND = 4,
    };

    enum PolyBooleanOperation {
        OPERATION_UNION = 0,
        OPERATION_DIFFERENCE = 1,
        OPERATION_INTERSECTION = 2,
        OPERATION_XOR = 3,
    };

    enum PolyJoinType {
        JOIN_SQUARE = 0,
        JOIN_ROUND = 1,
        JOIN_MITER = 2,
    };

    Array build_box_planes(const Vector3 extents);
    Array build_capsule_planes(const real_t radius, const real_t height, const int64_t sides, const int64_t lats, const int64_t axis = 2);
    Array build_cylinder_planes(const real_t radius, const real_t height, const int64_t sides, const int64_t axis = 2);
    PoolVector3Array clip_polygon(const PoolVector3Array points, const Plane plane);
    Array clip_polygons_2d(const PoolVector2Array polygon_a, const PoolVector2Array polygon_b);
    Array clip_polyline_with_polygon_2d(const PoolVector2Array polyline, const PoolVector2Array polygon);
    PoolVector2Array convex_hull_2d(const PoolVector2Array points);
    Array exclude_polygons_2d(const PoolVector2Array polygon_a, const PoolVector2Array polygon_b);
    Vector3 get_closest_point_to_segment(const Vector3 point, const Vector3 s1, const Vector3 s2);
    Vector2 get_closest_point_to_segment_2d(const Vector2 point, const Vector2 s1, const Vector2 s2);
    Vector3 get_closest_point_to_segment_uncapped(const Vector3 point, const Vector3 s1, const Vector3 s2);
    Vector2 get_closest_point_to_segment_uncapped_2d(const Vector2 point, const Vector2 s1, const Vector2 s2);
    PoolVector3Array get_closest_points_between_segments(const Vector3 p1, const Vector3 p2, const Vector3 q1, const Vector3 q2);
    PoolVector2Array get_closest_points_between_segments_2d(const Vector2 p1, const Vector2 q1, const Vector2 p2, const Vector2 q2);
    int64_t get_uv84_normal_bit(const Vector3 normal);
    Array intersect_polygons_2d(const PoolVector2Array polygon_a, const PoolVector2Array polygon_b);
    Array intersect_polyline_with_polygon_2d(const PoolVector2Array polyline, const PoolVector2Array polygon);
    bool is_point_in_circle(const Vector2 point, const Vector2 circle_position, const real_t circle_radius);
    bool is_point_in_polygon(const Vector2 point, const PoolVector2Array polygon);
    bool is_polygon_clockwise(const PoolVector2Array polygon);
    Variant line_intersects_line_2d(const Vector2 from_a, const Vector2 dir_a, const Vector2 from_b, const Vector2 dir_b);
    Dictionary make_atlas(const PoolVector2Array sizes);
    Array merge_polygons_2d(const PoolVector2Array polygon_a, const PoolVector2Array polygon_b);
    Array offset_polygon_2d(const PoolVector2Array polygon, const real_t delta, const int64_t join_type = 0);
    Array offset_polyline_2d(const PoolVector2Array polyline, const real_t delta, const int64_t join_type = 0, const int64_t end_type = 3);
    bool point_is_inside_triangle(const Vector2 point, const Vector2 a, const Vector2 b, const Vector2 c) const;
    Variant ray_intersects_triangle(const Vector3 from, const Vector3 dir, const Vector3 a, const Vector3 b, const Vector3 c);
    real_t segment_intersects_circle(const Vector2 segment_from, const Vector2 segment_to, const Vector2 circle_position, const real_t circle_radius);
    PoolVector3Array segment_intersects_convex(const Vector3 from, const Vector3 to, const Array planes);
    PoolVector3Array segment_intersects_cylinder(const Vector3 from, const Vector3 to, const real_t height, const real_t radius);
    Variant segment_intersects_segment_2d(const Vector2 from_a, const Vector2 to_a, const Vector2 from_b, const Vector2 to_b);
    PoolVector3Array segment_intersects_sphere(const Vector3 from, const Vector3 to, const Vector3 sphere_position, const real_t sphere_radius);
    Variant segment_intersects_triangle(const Vector3 from, const Vector3 to, const Vector3 a, const Vector3 b, const Vector3 c);
    PoolIntArray triangulate_delaunay_2d(const PoolVector2Array points);
    PoolIntArray triangulate_polygon(const PoolVector2Array polygon);

    static inline Geometry* get_singleton() {
        if (!Geometry::singleton) {
            Geometry::singleton = new Geometry;
        }
        return Geometry::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Geometry";
    }

    inline static const char* get_rebel_class_name() {
        return "Geometry";
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
    Geometry();
    static Geometry* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_build_box_planes;
        rebel_method_bind* mb_build_capsule_planes;
        rebel_method_bind* mb_build_cylinder_planes;
        rebel_method_bind* mb_clip_polygon;
        rebel_method_bind* mb_clip_polygons_2d;
        rebel_method_bind* mb_clip_polyline_with_polygon_2d;
        rebel_method_bind* mb_convex_hull_2d;
        rebel_method_bind* mb_exclude_polygons_2d;
        rebel_method_bind* mb_get_closest_point_to_segment;
        rebel_method_bind* mb_get_closest_point_to_segment_2d;
        rebel_method_bind* mb_get_closest_point_to_segment_uncapped;
        rebel_method_bind* mb_get_closest_point_to_segment_uncapped_2d;
        rebel_method_bind* mb_get_closest_points_between_segments;
        rebel_method_bind* mb_get_closest_points_between_segments_2d;
        rebel_method_bind* mb_get_uv84_normal_bit;
        rebel_method_bind* mb_intersect_polygons_2d;
        rebel_method_bind* mb_intersect_polyline_with_polygon_2d;
        rebel_method_bind* mb_is_point_in_circle;
        rebel_method_bind* mb_is_point_in_polygon;
        rebel_method_bind* mb_is_polygon_clockwise;
        rebel_method_bind* mb_line_intersects_line_2d;
        rebel_method_bind* mb_make_atlas;
        rebel_method_bind* mb_merge_polygons_2d;
        rebel_method_bind* mb_offset_polygon_2d;
        rebel_method_bind* mb_offset_polyline_2d;
        rebel_method_bind* mb_point_is_inside_triangle;
        rebel_method_bind* mb_ray_intersects_triangle;
        rebel_method_bind* mb_segment_intersects_circle;
        rebel_method_bind* mb_segment_intersects_convex;
        rebel_method_bind* mb_segment_intersects_cylinder;
        rebel_method_bind* mb_segment_intersects_segment_2d;
        rebel_method_bind* mb_segment_intersects_sphere;
        rebel_method_bind* mb_segment_intersects_triangle;
        rebel_method_bind* mb_triangulate_delaunay_2d;
        rebel_method_bind* mb_triangulate_polygon;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GEOMETRY_H
