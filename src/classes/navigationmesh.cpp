// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/navigationmesh.h"

#include "classes/icalls.h"
#include "classes/mesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array NavigationMesh::_get_polygons() const {
    return rebel_icall_array(
        method_bindings.mb__get_polygons,
        (const Object*)this
    );
}

void NavigationMesh::_set_polygons(const Array polygons) {
    rebel_icall_void_array(
        method_bindings.mb__set_polygons,
        (const Object*)this,
        polygons
    );
}

void NavigationMesh::add_polygon(const PoolIntArray polygon) {
    rebel_icall_void_poolintarray(
        method_bindings.mb_add_polygon,
        (const Object*)this,
        polygon
    );
}

void NavigationMesh::clear_polygons() {
    rebel_icall_void(
        method_bindings.mb_clear_polygons,
        (const Object*)this
    );
}

void NavigationMesh::create_from_mesh(const Ref<Mesh> mesh) {
    rebel_icall_void_object(
        method_bindings.mb_create_from_mesh,
        (const Object*)this,
        mesh.ptr()
    );
}

real_t NavigationMesh::get_agent_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_agent_height,
        (const Object*)this
    );
}

real_t NavigationMesh::get_agent_max_climb() const {
    return rebel_icall_float(
        method_bindings.mb_get_agent_max_climb,
        (const Object*)this
    );
}

real_t NavigationMesh::get_agent_max_slope() const {
    return rebel_icall_float(
        method_bindings.mb_get_agent_max_slope,
        (const Object*)this
    );
}

real_t NavigationMesh::get_agent_radius() {
    return rebel_icall_float(
        method_bindings.mb_get_agent_radius,
        (const Object*)this
    );
}

real_t NavigationMesh::get_cell_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_cell_height,
        (const Object*)this
    );
}

real_t NavigationMesh::get_cell_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_cell_size,
        (const Object*)this
    );
}

int64_t NavigationMesh::get_collision_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

bool NavigationMesh::get_collision_mask_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_mask_bit,
        (const Object*)this,
        bit
    );
}

real_t NavigationMesh::get_detail_sample_distance() const {
    return rebel_icall_float(
        method_bindings.mb_get_detail_sample_distance,
        (const Object*)this
    );
}

real_t NavigationMesh::get_detail_sample_max_error() const {
    return rebel_icall_float(
        method_bindings.mb_get_detail_sample_max_error,
        (const Object*)this
    );
}

real_t NavigationMesh::get_edge_max_error() const {
    return rebel_icall_float(
        method_bindings.mb_get_edge_max_error,
        (const Object*)this
    );
}

real_t NavigationMesh::get_edge_max_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_edge_max_length,
        (const Object*)this
    );
}

bool NavigationMesh::get_filter_ledge_spans() const {
    return rebel_icall_bool(
        method_bindings.mb_get_filter_ledge_spans,
        (const Object*)this
    );
}

bool NavigationMesh::get_filter_low_hanging_obstacles() const {
    return rebel_icall_bool(
        method_bindings.mb_get_filter_low_hanging_obstacles,
        (const Object*)this
    );
}

bool NavigationMesh::get_filter_walkable_low_height_spans() const {
    return rebel_icall_bool(
        method_bindings.mb_get_filter_walkable_low_height_spans,
        (const Object*)this
    );
}

NavigationMesh::ParsedGeometryType NavigationMesh::get_parsed_geometry_type() const {
    return (NavigationMesh::ParsedGeometryType)rebel_icall_int(
        method_bindings.mb_get_parsed_geometry_type,
        (const Object*)this
    );
}

PoolIntArray NavigationMesh::get_polygon(const int64_t idx) {
    return rebel_icall_poolintarray_int(
        method_bindings.mb_get_polygon,
        (const Object*)this,
        idx
    );
}

int64_t NavigationMesh::get_polygon_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_polygon_count,
        (const Object*)this
    );
}

real_t NavigationMesh::get_region_merge_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_region_merge_size,
        (const Object*)this
    );
}

real_t NavigationMesh::get_region_min_size() const {
    return rebel_icall_float(
        method_bindings.mb_get_region_min_size,
        (const Object*)this
    );
}

NavigationMesh::SamplePartitionType NavigationMesh::get_sample_partition_type() const {
    return (NavigationMesh::SamplePartitionType)rebel_icall_int(
        method_bindings.mb_get_sample_partition_type,
        (const Object*)this
    );
}

NavigationMesh::SourceGeometryMode NavigationMesh::get_source_geometry_mode() const {
    return (NavigationMesh::SourceGeometryMode)rebel_icall_int(
        method_bindings.mb_get_source_geometry_mode,
        (const Object*)this
    );
}

String NavigationMesh::get_source_group_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_source_group_name,
        (const Object*)this
    );
}

PoolVector3Array NavigationMesh::get_vertices() const {
    return rebel_icall_poolvector3array(
        method_bindings.mb_get_vertices,
        (const Object*)this
    );
}

real_t NavigationMesh::get_verts_per_poly() const {
    return rebel_icall_float(
        method_bindings.mb_get_verts_per_poly,
        (const Object*)this
    );
}

void NavigationMesh::set_agent_height(const real_t agent_height) {
    rebel_icall_void_float(
        method_bindings.mb_set_agent_height,
        (const Object*)this,
        agent_height
    );
}

void NavigationMesh::set_agent_max_climb(const real_t agent_max_climb) {
    rebel_icall_void_float(
        method_bindings.mb_set_agent_max_climb,
        (const Object*)this,
        agent_max_climb
    );
}

void NavigationMesh::set_agent_max_slope(const real_t agent_max_slope) {
    rebel_icall_void_float(
        method_bindings.mb_set_agent_max_slope,
        (const Object*)this,
        agent_max_slope
    );
}

void NavigationMesh::set_agent_radius(const real_t agent_radius) {
    rebel_icall_void_float(
        method_bindings.mb_set_agent_radius,
        (const Object*)this,
        agent_radius
    );
}

void NavigationMesh::set_cell_height(const real_t cell_height) {
    rebel_icall_void_float(
        method_bindings.mb_set_cell_height,
        (const Object*)this,
        cell_height
    );
}

void NavigationMesh::set_cell_size(const real_t cell_size) {
    rebel_icall_void_float(
        method_bindings.mb_set_cell_size,
        (const Object*)this,
        cell_size
    );
}

void NavigationMesh::set_collision_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        mask
    );
}

void NavigationMesh::set_collision_mask_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_mask_bit,
        (const Object*)this,
        bit,
        value
    );
}

void NavigationMesh::set_detail_sample_distance(const real_t detail_sample_dist) {
    rebel_icall_void_float(
        method_bindings.mb_set_detail_sample_distance,
        (const Object*)this,
        detail_sample_dist
    );
}

void NavigationMesh::set_detail_sample_max_error(const real_t detail_sample_max_error) {
    rebel_icall_void_float(
        method_bindings.mb_set_detail_sample_max_error,
        (const Object*)this,
        detail_sample_max_error
    );
}

void NavigationMesh::set_edge_max_error(const real_t edge_max_error) {
    rebel_icall_void_float(
        method_bindings.mb_set_edge_max_error,
        (const Object*)this,
        edge_max_error
    );
}

void NavigationMesh::set_edge_max_length(const real_t edge_max_length) {
    rebel_icall_void_float(
        method_bindings.mb_set_edge_max_length,
        (const Object*)this,
        edge_max_length
    );
}

void NavigationMesh::set_filter_ledge_spans(const bool filter_ledge_spans) {
    rebel_icall_void_bool(
        method_bindings.mb_set_filter_ledge_spans,
        (const Object*)this,
        filter_ledge_spans
    );
}

void NavigationMesh::set_filter_low_hanging_obstacles(const bool filter_low_hanging_obstacles) {
    rebel_icall_void_bool(
        method_bindings.mb_set_filter_low_hanging_obstacles,
        (const Object*)this,
        filter_low_hanging_obstacles
    );
}

void NavigationMesh::set_filter_walkable_low_height_spans(const bool filter_walkable_low_height_spans) {
    rebel_icall_void_bool(
        method_bindings.mb_set_filter_walkable_low_height_spans,
        (const Object*)this,
        filter_walkable_low_height_spans
    );
}

void NavigationMesh::set_parsed_geometry_type(const int64_t geometry_type) {
    rebel_icall_void_int(
        method_bindings.mb_set_parsed_geometry_type,
        (const Object*)this,
        geometry_type
    );
}

void NavigationMesh::set_region_merge_size(const real_t region_merge_size) {
    rebel_icall_void_float(
        method_bindings.mb_set_region_merge_size,
        (const Object*)this,
        region_merge_size
    );
}

void NavigationMesh::set_region_min_size(const real_t region_min_size) {
    rebel_icall_void_float(
        method_bindings.mb_set_region_min_size,
        (const Object*)this,
        region_min_size
    );
}

void NavigationMesh::set_sample_partition_type(const int64_t sample_partition_type) {
    rebel_icall_void_int(
        method_bindings.mb_set_sample_partition_type,
        (const Object*)this,
        sample_partition_type
    );
}

void NavigationMesh::set_source_geometry_mode(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_source_geometry_mode,
        (const Object*)this,
        mask
    );
}

void NavigationMesh::set_source_group_name(const String mask) {
    rebel_icall_void_string(
        method_bindings.mb_set_source_group_name,
        (const Object*)this,
        mask
    );
}

void NavigationMesh::set_vertices(const PoolVector3Array vertices) {
    rebel_icall_void_poolvector3array(
        method_bindings.mb_set_vertices,
        (const Object*)this,
        vertices
    );
}

void NavigationMesh::set_verts_per_poly(const real_t verts_per_poly) {
    rebel_icall_void_float(
        method_bindings.mb_set_verts_per_poly,
        (const Object*)this,
        verts_per_poly
    );
}

NavigationMesh* NavigationMesh::create() {
    return (NavigationMesh*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"NavigationMesh")()
         );
}

void NavigationMesh::init_method_bindings() {
    method_bindings.mb__get_polygons =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "_get_polygons"
        );
    method_bindings.mb__set_polygons =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "_set_polygons"
        );
    method_bindings.mb_add_polygon =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "add_polygon"
        );
    method_bindings.mb_clear_polygons =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "clear_polygons"
        );
    method_bindings.mb_create_from_mesh =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "create_from_mesh"
        );
    method_bindings.mb_get_agent_height =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_agent_height"
        );
    method_bindings.mb_get_agent_max_climb =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_agent_max_climb"
        );
    method_bindings.mb_get_agent_max_slope =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_agent_max_slope"
        );
    method_bindings.mb_get_agent_radius =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_agent_radius"
        );
    method_bindings.mb_get_cell_height =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_cell_height"
        );
    method_bindings.mb_get_cell_size =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_cell_size"
        );
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_collision_mask"
        );
    method_bindings.mb_get_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_collision_mask_bit"
        );
    method_bindings.mb_get_detail_sample_distance =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_detail_sample_distance"
        );
    method_bindings.mb_get_detail_sample_max_error =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_detail_sample_max_error"
        );
    method_bindings.mb_get_edge_max_error =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_edge_max_error"
        );
    method_bindings.mb_get_edge_max_length =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_edge_max_length"
        );
    method_bindings.mb_get_filter_ledge_spans =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_filter_ledge_spans"
        );
    method_bindings.mb_get_filter_low_hanging_obstacles =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_filter_low_hanging_obstacles"
        );
    method_bindings.mb_get_filter_walkable_low_height_spans =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_filter_walkable_low_height_spans"
        );
    method_bindings.mb_get_parsed_geometry_type =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_parsed_geometry_type"
        );
    method_bindings.mb_get_polygon =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_polygon"
        );
    method_bindings.mb_get_polygon_count =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_polygon_count"
        );
    method_bindings.mb_get_region_merge_size =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_region_merge_size"
        );
    method_bindings.mb_get_region_min_size =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_region_min_size"
        );
    method_bindings.mb_get_sample_partition_type =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_sample_partition_type"
        );
    method_bindings.mb_get_source_geometry_mode =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_source_geometry_mode"
        );
    method_bindings.mb_get_source_group_name =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_source_group_name"
        );
    method_bindings.mb_get_vertices =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_vertices"
        );
    method_bindings.mb_get_verts_per_poly =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "get_verts_per_poly"
        );
    method_bindings.mb_set_agent_height =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_agent_height"
        );
    method_bindings.mb_set_agent_max_climb =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_agent_max_climb"
        );
    method_bindings.mb_set_agent_max_slope =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_agent_max_slope"
        );
    method_bindings.mb_set_agent_radius =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_agent_radius"
        );
    method_bindings.mb_set_cell_height =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_cell_height"
        );
    method_bindings.mb_set_cell_size =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_cell_size"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_collision_mask"
        );
    method_bindings.mb_set_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_collision_mask_bit"
        );
    method_bindings.mb_set_detail_sample_distance =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_detail_sample_distance"
        );
    method_bindings.mb_set_detail_sample_max_error =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_detail_sample_max_error"
        );
    method_bindings.mb_set_edge_max_error =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_edge_max_error"
        );
    method_bindings.mb_set_edge_max_length =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_edge_max_length"
        );
    method_bindings.mb_set_filter_ledge_spans =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_filter_ledge_spans"
        );
    method_bindings.mb_set_filter_low_hanging_obstacles =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_filter_low_hanging_obstacles"
        );
    method_bindings.mb_set_filter_walkable_low_height_spans =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_filter_walkable_low_height_spans"
        );
    method_bindings.mb_set_parsed_geometry_type =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_parsed_geometry_type"
        );
    method_bindings.mb_set_region_merge_size =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_region_merge_size"
        );
    method_bindings.mb_set_region_min_size =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_region_min_size"
        );
    method_bindings.mb_set_sample_partition_type =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_sample_partition_type"
        );
    method_bindings.mb_set_source_geometry_mode =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_source_geometry_mode"
        );
    method_bindings.mb_set_source_group_name =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_source_group_name"
        );
    method_bindings.mb_set_vertices =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_vertices"
        );
    method_bindings.mb_set_verts_per_poly =
        api->rebel_method_bind_get_method(
            "NavigationMesh",
            "set_verts_per_poly"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "NavigationMesh");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

NavigationMesh::MethodBindings NavigationMesh::method_bindings = {};
void* NavigationMesh::class_tag = nullptr;
} // namespace Rebel
