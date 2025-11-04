// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/geometry.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array Geometry::build_box_planes(const Vector3 extents) {
    return rebel_icall_array_vector3(
        method_bindings.mb_build_box_planes,
        (const Object*)this,
        extents
    );
}

Array Geometry::build_capsule_planes(const real_t radius, const real_t height, const int64_t sides, const int64_t lats, const int64_t axis) {
    return rebel_icall_array_float_float_int_int_int(
        method_bindings.mb_build_capsule_planes,
        (const Object*)this,
        radius,
        height,
        sides,
        lats,
        axis
    );
}

Array Geometry::build_cylinder_planes(const real_t radius, const real_t height, const int64_t sides, const int64_t axis) {
    return rebel_icall_array_float_float_int_int(
        method_bindings.mb_build_cylinder_planes,
        (const Object*)this,
        radius,
        height,
        sides,
        axis
    );
}

PoolVector3Array Geometry::clip_polygon(const PoolVector3Array points, const Plane plane) {
    return rebel_icall_poolvector3array_poolvector3array_plane(
        method_bindings.mb_clip_polygon,
        (const Object*)this,
        points,
        plane
    );
}

Array Geometry::clip_polygons_2d(const PoolVector2Array polygon_a, const PoolVector2Array polygon_b) {
    return rebel_icall_array_poolvector2array_poolvector2array(
        method_bindings.mb_clip_polygons_2d,
        (const Object*)this,
        polygon_a,
        polygon_b
    );
}

Array Geometry::clip_polyline_with_polygon_2d(const PoolVector2Array polyline, const PoolVector2Array polygon) {
    return rebel_icall_array_poolvector2array_poolvector2array(
        method_bindings.mb_clip_polyline_with_polygon_2d,
        (const Object*)this,
        polyline,
        polygon
    );
}

PoolVector2Array Geometry::convex_hull_2d(const PoolVector2Array points) {
    return rebel_icall_poolvector2array_poolvector2array(
        method_bindings.mb_convex_hull_2d,
        (const Object*)this,
        points
    );
}

Array Geometry::exclude_polygons_2d(const PoolVector2Array polygon_a, const PoolVector2Array polygon_b) {
    return rebel_icall_array_poolvector2array_poolvector2array(
        method_bindings.mb_exclude_polygons_2d,
        (const Object*)this,
        polygon_a,
        polygon_b
    );
}

Vector3 Geometry::get_closest_point_to_segment(const Vector3 point, const Vector3 s1, const Vector3 s2) {
    return rebel_icall_vector3_vector3_vector3_vector3(
        method_bindings.mb_get_closest_point_to_segment,
        (const Object*)this,
        point,
        s1,
        s2
    );
}

Vector2 Geometry::get_closest_point_to_segment_2d(const Vector2 point, const Vector2 s1, const Vector2 s2) {
    return rebel_icall_vector2_vector2_vector2_vector2(
        method_bindings.mb_get_closest_point_to_segment_2d,
        (const Object*)this,
        point,
        s1,
        s2
    );
}

Vector3 Geometry::get_closest_point_to_segment_uncapped(const Vector3 point, const Vector3 s1, const Vector3 s2) {
    return rebel_icall_vector3_vector3_vector3_vector3(
        method_bindings.mb_get_closest_point_to_segment_uncapped,
        (const Object*)this,
        point,
        s1,
        s2
    );
}

Vector2 Geometry::get_closest_point_to_segment_uncapped_2d(const Vector2 point, const Vector2 s1, const Vector2 s2) {
    return rebel_icall_vector2_vector2_vector2_vector2(
        method_bindings.mb_get_closest_point_to_segment_uncapped_2d,
        (const Object*)this,
        point,
        s1,
        s2
    );
}

PoolVector3Array Geometry::get_closest_points_between_segments(const Vector3 p1, const Vector3 p2, const Vector3 q1, const Vector3 q2) {
    return rebel_icall_poolvector3array_vector3_vector3_vector3_vector3(
        method_bindings.mb_get_closest_points_between_segments,
        (const Object*)this,
        p1,
        p2,
        q1,
        q2
    );
}

PoolVector2Array Geometry::get_closest_points_between_segments_2d(const Vector2 p1, const Vector2 q1, const Vector2 p2, const Vector2 q2) {
    return rebel_icall_poolvector2array_vector2_vector2_vector2_vector2(
        method_bindings.mb_get_closest_points_between_segments_2d,
        (const Object*)this,
        p1,
        q1,
        p2,
        q2
    );
}

int64_t Geometry::get_uv84_normal_bit(const Vector3 normal) {
    return rebel_icall_int_vector3(
        method_bindings.mb_get_uv84_normal_bit,
        (const Object*)this,
        normal
    );
}

Array Geometry::intersect_polygons_2d(const PoolVector2Array polygon_a, const PoolVector2Array polygon_b) {
    return rebel_icall_array_poolvector2array_poolvector2array(
        method_bindings.mb_intersect_polygons_2d,
        (const Object*)this,
        polygon_a,
        polygon_b
    );
}

Array Geometry::intersect_polyline_with_polygon_2d(const PoolVector2Array polyline, const PoolVector2Array polygon) {
    return rebel_icall_array_poolvector2array_poolvector2array(
        method_bindings.mb_intersect_polyline_with_polygon_2d,
        (const Object*)this,
        polyline,
        polygon
    );
}

bool Geometry::is_point_in_circle(const Vector2 point, const Vector2 circle_position, const real_t circle_radius) {
    return rebel_icall_bool_vector2_vector2_float(
        method_bindings.mb_is_point_in_circle,
        (const Object*)this,
        point,
        circle_position,
        circle_radius
    );
}

bool Geometry::is_point_in_polygon(const Vector2 point, const PoolVector2Array polygon) {
    return rebel_icall_bool_vector2_poolvector2array(
        method_bindings.mb_is_point_in_polygon,
        (const Object*)this,
        point,
        polygon
    );
}

bool Geometry::is_polygon_clockwise(const PoolVector2Array polygon) {
    return rebel_icall_bool_poolvector2array(
        method_bindings.mb_is_polygon_clockwise,
        (const Object*)this,
        polygon
    );
}

Variant Geometry::line_intersects_line_2d(const Vector2 from_a, const Vector2 dir_a, const Vector2 from_b, const Vector2 dir_b) {
    return rebel_icall_variant_vector2_vector2_vector2_vector2(
        method_bindings.mb_line_intersects_line_2d,
        (const Object*)this,
        from_a,
        dir_a,
        from_b,
        dir_b
    );
}

Dictionary Geometry::make_atlas(const PoolVector2Array sizes) {
    return rebel_icall_dictionary_poolvector2array(
        method_bindings.mb_make_atlas,
        (const Object*)this,
        sizes
    );
}

Array Geometry::merge_polygons_2d(const PoolVector2Array polygon_a, const PoolVector2Array polygon_b) {
    return rebel_icall_array_poolvector2array_poolvector2array(
        method_bindings.mb_merge_polygons_2d,
        (const Object*)this,
        polygon_a,
        polygon_b
    );
}

Array Geometry::offset_polygon_2d(const PoolVector2Array polygon, const real_t delta, const int64_t join_type) {
    return rebel_icall_array_poolvector2array_float_int(
        method_bindings.mb_offset_polygon_2d,
        (const Object*)this,
        polygon,
        delta,
        join_type
    );
}

Array Geometry::offset_polyline_2d(const PoolVector2Array polyline, const real_t delta, const int64_t join_type, const int64_t end_type) {
    return rebel_icall_array_poolvector2array_float_int_int(
        method_bindings.mb_offset_polyline_2d,
        (const Object*)this,
        polyline,
        delta,
        join_type,
        end_type
    );
}

bool Geometry::point_is_inside_triangle(const Vector2 point, const Vector2 a, const Vector2 b, const Vector2 c) const {
    return rebel_icall_bool_vector2_vector2_vector2_vector2(
        method_bindings.mb_point_is_inside_triangle,
        (const Object*)this,
        point,
        a,
        b,
        c
    );
}

Variant Geometry::ray_intersects_triangle(const Vector3 from, const Vector3 dir, const Vector3 a, const Vector3 b, const Vector3 c) {
    return rebel_icall_variant_vector3_vector3_vector3_vector3_vector3(
        method_bindings.mb_ray_intersects_triangle,
        (const Object*)this,
        from,
        dir,
        a,
        b,
        c
    );
}

real_t Geometry::segment_intersects_circle(const Vector2 segment_from, const Vector2 segment_to, const Vector2 circle_position, const real_t circle_radius) {
    return rebel_icall_float_vector2_vector2_vector2_float(
        method_bindings.mb_segment_intersects_circle,
        (const Object*)this,
        segment_from,
        segment_to,
        circle_position,
        circle_radius
    );
}

PoolVector3Array Geometry::segment_intersects_convex(const Vector3 from, const Vector3 to, const Array planes) {
    return rebel_icall_poolvector3array_vector3_vector3_array(
        method_bindings.mb_segment_intersects_convex,
        (const Object*)this,
        from,
        to,
        planes
    );
}

PoolVector3Array Geometry::segment_intersects_cylinder(const Vector3 from, const Vector3 to, const real_t height, const real_t radius) {
    return rebel_icall_poolvector3array_vector3_vector3_float_float(
        method_bindings.mb_segment_intersects_cylinder,
        (const Object*)this,
        from,
        to,
        height,
        radius
    );
}

Variant Geometry::segment_intersects_segment_2d(const Vector2 from_a, const Vector2 to_a, const Vector2 from_b, const Vector2 to_b) {
    return rebel_icall_variant_vector2_vector2_vector2_vector2(
        method_bindings.mb_segment_intersects_segment_2d,
        (const Object*)this,
        from_a,
        to_a,
        from_b,
        to_b
    );
}

PoolVector3Array Geometry::segment_intersects_sphere(const Vector3 from, const Vector3 to, const Vector3 sphere_position, const real_t sphere_radius) {
    return rebel_icall_poolvector3array_vector3_vector3_vector3_float(
        method_bindings.mb_segment_intersects_sphere,
        (const Object*)this,
        from,
        to,
        sphere_position,
        sphere_radius
    );
}

Variant Geometry::segment_intersects_triangle(const Vector3 from, const Vector3 to, const Vector3 a, const Vector3 b, const Vector3 c) {
    return rebel_icall_variant_vector3_vector3_vector3_vector3_vector3(
        method_bindings.mb_segment_intersects_triangle,
        (const Object*)this,
        from,
        to,
        a,
        b,
        c
    );
}

PoolIntArray Geometry::triangulate_delaunay_2d(const PoolVector2Array points) {
    return rebel_icall_poolintarray_poolvector2array(
        method_bindings.mb_triangulate_delaunay_2d,
        (const Object*)this,
        points
    );
}

PoolIntArray Geometry::triangulate_polygon(const PoolVector2Array polygon) {
    return rebel_icall_poolintarray_poolvector2array(
        method_bindings.mb_triangulate_polygon,
        (const Object*)this,
        polygon
    );
}

Geometry* Geometry::singleton = nullptr;

Geometry::Geometry() {
    owner = api->rebel_global_get_singleton((char*) "Geometry");
}

void Geometry::init_method_bindings() {
    method_bindings.mb_build_box_planes =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "build_box_planes"
        );
    method_bindings.mb_build_capsule_planes =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "build_capsule_planes"
        );
    method_bindings.mb_build_cylinder_planes =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "build_cylinder_planes"
        );
    method_bindings.mb_clip_polygon =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "clip_polygon"
        );
    method_bindings.mb_clip_polygons_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "clip_polygons_2d"
        );
    method_bindings.mb_clip_polyline_with_polygon_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "clip_polyline_with_polygon_2d"
        );
    method_bindings.mb_convex_hull_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "convex_hull_2d"
        );
    method_bindings.mb_exclude_polygons_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "exclude_polygons_2d"
        );
    method_bindings.mb_get_closest_point_to_segment =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "get_closest_point_to_segment"
        );
    method_bindings.mb_get_closest_point_to_segment_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "get_closest_point_to_segment_2d"
        );
    method_bindings.mb_get_closest_point_to_segment_uncapped =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "get_closest_point_to_segment_uncapped"
        );
    method_bindings.mb_get_closest_point_to_segment_uncapped_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "get_closest_point_to_segment_uncapped_2d"
        );
    method_bindings.mb_get_closest_points_between_segments =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "get_closest_points_between_segments"
        );
    method_bindings.mb_get_closest_points_between_segments_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "get_closest_points_between_segments_2d"
        );
    method_bindings.mb_get_uv84_normal_bit =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "get_uv84_normal_bit"
        );
    method_bindings.mb_intersect_polygons_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "intersect_polygons_2d"
        );
    method_bindings.mb_intersect_polyline_with_polygon_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "intersect_polyline_with_polygon_2d"
        );
    method_bindings.mb_is_point_in_circle =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "is_point_in_circle"
        );
    method_bindings.mb_is_point_in_polygon =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "is_point_in_polygon"
        );
    method_bindings.mb_is_polygon_clockwise =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "is_polygon_clockwise"
        );
    method_bindings.mb_line_intersects_line_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "line_intersects_line_2d"
        );
    method_bindings.mb_make_atlas =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "make_atlas"
        );
    method_bindings.mb_merge_polygons_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "merge_polygons_2d"
        );
    method_bindings.mb_offset_polygon_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "offset_polygon_2d"
        );
    method_bindings.mb_offset_polyline_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "offset_polyline_2d"
        );
    method_bindings.mb_point_is_inside_triangle =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "point_is_inside_triangle"
        );
    method_bindings.mb_ray_intersects_triangle =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "ray_intersects_triangle"
        );
    method_bindings.mb_segment_intersects_circle =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "segment_intersects_circle"
        );
    method_bindings.mb_segment_intersects_convex =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "segment_intersects_convex"
        );
    method_bindings.mb_segment_intersects_cylinder =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "segment_intersects_cylinder"
        );
    method_bindings.mb_segment_intersects_segment_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "segment_intersects_segment_2d"
        );
    method_bindings.mb_segment_intersects_sphere =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "segment_intersects_sphere"
        );
    method_bindings.mb_segment_intersects_triangle =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "segment_intersects_triangle"
        );
    method_bindings.mb_triangulate_delaunay_2d =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "triangulate_delaunay_2d"
        );
    method_bindings.mb_triangulate_polygon =
        api->rebel_method_bind_get_method(
            "_Geometry",
            "triangulate_polygon"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_Geometry");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Geometry::MethodBindings Geometry::method_bindings = {};
void* Geometry::class_tag = nullptr;
} // namespace Rebel
