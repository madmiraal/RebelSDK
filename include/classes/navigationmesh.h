// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NAVIGATIONMESH_H
#define REBEL_NAVIGATIONMESH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Mesh;

class NavigationMesh : public Resource {
public:
    enum ParsedGeometryType {
        PARSED_GEOMETRY_MESH_INSTANCES = 0,
        PARSED_GEOMETRY_STATIC_COLLIDERS = 1,
        PARSED_GEOMETRY_BOTH = 2,
        PARSED_GEOMETRY_MAX = 3,
    };

    enum SamplePartitionType {
        SAMPLE_PARTITION_WATERSHED = 0,
        SAMPLE_PARTITION_MONOTONE = 1,
        SAMPLE_PARTITION_LAYERS = 2,
        SAMPLE_PARTITION_MAX = 3,
    };

    enum SourceGeometryMode {
        SOURCE_GEOMETRY_NAVMESH_CHILDREN = 0,
        SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN = 1,
        SOURCE_GEOMETRY_GROUPS_EXPLICIT = 2,
        SOURCE_GEOMETRY_MAX = 3,
    };

    Array _get_polygons() const;
    void _set_polygons(const Array polygons);
    void add_polygon(const PoolIntArray polygon);
    void clear_polygons();
    void create_from_mesh(const Ref<Mesh> mesh);
    real_t get_agent_height() const;
    real_t get_agent_max_climb() const;
    real_t get_agent_max_slope() const;
    real_t get_agent_radius();
    real_t get_cell_height() const;
    real_t get_cell_size() const;
    int64_t get_collision_mask() const;
    bool get_collision_mask_bit(const int64_t bit) const;
    real_t get_detail_sample_distance() const;
    real_t get_detail_sample_max_error() const;
    real_t get_edge_max_error() const;
    real_t get_edge_max_length() const;
    bool get_filter_ledge_spans() const;
    bool get_filter_low_hanging_obstacles() const;
    bool get_filter_walkable_low_height_spans() const;
    NavigationMesh::ParsedGeometryType get_parsed_geometry_type() const;
    PoolIntArray get_polygon(const int64_t idx);
    int64_t get_polygon_count() const;
    real_t get_region_merge_size() const;
    real_t get_region_min_size() const;
    NavigationMesh::SamplePartitionType get_sample_partition_type() const;
    NavigationMesh::SourceGeometryMode get_source_geometry_mode() const;
    String get_source_group_name() const;
    PoolVector3Array get_vertices() const;
    real_t get_verts_per_poly() const;
    void set_agent_height(const real_t agent_height);
    void set_agent_max_climb(const real_t agent_max_climb);
    void set_agent_max_slope(const real_t agent_max_slope);
    void set_agent_radius(const real_t agent_radius);
    void set_cell_height(const real_t cell_height);
    void set_cell_size(const real_t cell_size);
    void set_collision_mask(const int64_t mask);
    void set_collision_mask_bit(const int64_t bit, const bool value);
    void set_detail_sample_distance(const real_t detail_sample_dist);
    void set_detail_sample_max_error(const real_t detail_sample_max_error);
    void set_edge_max_error(const real_t edge_max_error);
    void set_edge_max_length(const real_t edge_max_length);
    void set_filter_ledge_spans(const bool filter_ledge_spans);
    void set_filter_low_hanging_obstacles(const bool filter_low_hanging_obstacles);
    void set_filter_walkable_low_height_spans(const bool filter_walkable_low_height_spans);
    void set_parsed_geometry_type(const int64_t geometry_type);
    void set_region_merge_size(const real_t region_merge_size);
    void set_region_min_size(const real_t region_min_size);
    void set_sample_partition_type(const int64_t sample_partition_type);
    void set_source_geometry_mode(const int64_t mask);
    void set_source_group_name(const String mask);
    void set_vertices(const PoolVector3Array vertices);
    void set_verts_per_poly(const real_t verts_per_poly);

    static NavigationMesh* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "NavigationMesh";
    }

    inline static const char* get_rebel_class_name() {
        return "NavigationMesh";
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
        rebel_method_bind* mb__get_polygons;
        rebel_method_bind* mb__set_polygons;
        rebel_method_bind* mb_add_polygon;
        rebel_method_bind* mb_clear_polygons;
        rebel_method_bind* mb_create_from_mesh;
        rebel_method_bind* mb_get_agent_height;
        rebel_method_bind* mb_get_agent_max_climb;
        rebel_method_bind* mb_get_agent_max_slope;
        rebel_method_bind* mb_get_agent_radius;
        rebel_method_bind* mb_get_cell_height;
        rebel_method_bind* mb_get_cell_size;
        rebel_method_bind* mb_get_collision_mask;
        rebel_method_bind* mb_get_collision_mask_bit;
        rebel_method_bind* mb_get_detail_sample_distance;
        rebel_method_bind* mb_get_detail_sample_max_error;
        rebel_method_bind* mb_get_edge_max_error;
        rebel_method_bind* mb_get_edge_max_length;
        rebel_method_bind* mb_get_filter_ledge_spans;
        rebel_method_bind* mb_get_filter_low_hanging_obstacles;
        rebel_method_bind* mb_get_filter_walkable_low_height_spans;
        rebel_method_bind* mb_get_parsed_geometry_type;
        rebel_method_bind* mb_get_polygon;
        rebel_method_bind* mb_get_polygon_count;
        rebel_method_bind* mb_get_region_merge_size;
        rebel_method_bind* mb_get_region_min_size;
        rebel_method_bind* mb_get_sample_partition_type;
        rebel_method_bind* mb_get_source_geometry_mode;
        rebel_method_bind* mb_get_source_group_name;
        rebel_method_bind* mb_get_vertices;
        rebel_method_bind* mb_get_verts_per_poly;
        rebel_method_bind* mb_set_agent_height;
        rebel_method_bind* mb_set_agent_max_climb;
        rebel_method_bind* mb_set_agent_max_slope;
        rebel_method_bind* mb_set_agent_radius;
        rebel_method_bind* mb_set_cell_height;
        rebel_method_bind* mb_set_cell_size;
        rebel_method_bind* mb_set_collision_mask;
        rebel_method_bind* mb_set_collision_mask_bit;
        rebel_method_bind* mb_set_detail_sample_distance;
        rebel_method_bind* mb_set_detail_sample_max_error;
        rebel_method_bind* mb_set_edge_max_error;
        rebel_method_bind* mb_set_edge_max_length;
        rebel_method_bind* mb_set_filter_ledge_spans;
        rebel_method_bind* mb_set_filter_low_hanging_obstacles;
        rebel_method_bind* mb_set_filter_walkable_low_height_spans;
        rebel_method_bind* mb_set_parsed_geometry_type;
        rebel_method_bind* mb_set_region_merge_size;
        rebel_method_bind* mb_set_region_min_size;
        rebel_method_bind* mb_set_sample_partition_type;
        rebel_method_bind* mb_set_source_geometry_mode;
        rebel_method_bind* mb_set_source_group_name;
        rebel_method_bind* mb_set_vertices;
        rebel_method_bind* mb_set_verts_per_poly;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NAVIGATIONMESH_H
