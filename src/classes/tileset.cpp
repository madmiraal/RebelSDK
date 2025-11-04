// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/tileset.h"

#include "classes/icalls.h"
#include "classes/navigationpolygon.h"
#include "classes/object.h"
#include "classes/occluderpolygon2d.h"
#include "classes/shadermaterial.h"
#include "classes/shape2d.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector2 TileSet::_forward_atlas_subtile_selection(const int64_t atlastile_id, const Object* tilemap, const Vector2 tile_location) {
    return rebel_icall_vector2_int_object_vector2(
        method_bindings.mb__forward_atlas_subtile_selection,
        (const Object*)this,
        atlastile_id,
        tilemap,
        tile_location
    );
}

Vector2 TileSet::_forward_subtile_selection(const int64_t autotile_id, const int64_t bitmask, const Object* tilemap, const Vector2 tile_location) {
    return rebel_icall_vector2_int_int_object_vector2(
        method_bindings.mb__forward_subtile_selection,
        (const Object*)this,
        autotile_id,
        bitmask,
        tilemap,
        tile_location
    );
}

bool TileSet::_is_tile_bound(const int64_t drawn_id, const int64_t neighbor_id) {
    return rebel_icall_bool_int_int(
        method_bindings.mb__is_tile_bound,
        (const Object*)this,
        drawn_id,
        neighbor_id
    );
}

void TileSet::autotile_clear_bitmask_map(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_autotile_clear_bitmask_map,
        (const Object*)this,
        id
    );
}

int64_t TileSet::autotile_get_bitmask(const int64_t id, const Vector2 coord) {
    return rebel_icall_int_int_vector2(
        method_bindings.mb_autotile_get_bitmask,
        (const Object*)this,
        id,
        coord
    );
}

TileSet::BitmaskMode TileSet::autotile_get_bitmask_mode(const int64_t id) const {
    return (TileSet::BitmaskMode)rebel_icall_int_int(
        method_bindings.mb_autotile_get_bitmask_mode,
        (const Object*)this,
        id
    );
}

Vector2 TileSet::autotile_get_icon_coordinate(const int64_t id) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_autotile_get_icon_coordinate,
        (const Object*)this,
        id
    );
}

Ref<OccluderPolygon2D> TileSet::autotile_get_light_occluder(const int64_t id, const Vector2 coord) const {
    return Ref<OccluderPolygon2D>::create_ref(rebel_icall_object_int_vector2(
        method_bindings.mb_autotile_get_light_occluder,
        (const Object*)this,
        id,
        coord
    ));
}

Ref<NavigationPolygon> TileSet::autotile_get_navigation_polygon(const int64_t id, const Vector2 coord) const {
    return Ref<NavigationPolygon>::create_ref(rebel_icall_object_int_vector2(
        method_bindings.mb_autotile_get_navigation_polygon,
        (const Object*)this,
        id,
        coord
    ));
}

Vector2 TileSet::autotile_get_size(const int64_t id) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_autotile_get_size,
        (const Object*)this,
        id
    );
}

int64_t TileSet::autotile_get_spacing(const int64_t id) const {
    return rebel_icall_int_int(
        method_bindings.mb_autotile_get_spacing,
        (const Object*)this,
        id
    );
}

int64_t TileSet::autotile_get_subtile_priority(const int64_t id, const Vector2 coord) {
    return rebel_icall_int_int_vector2(
        method_bindings.mb_autotile_get_subtile_priority,
        (const Object*)this,
        id,
        coord
    );
}

int64_t TileSet::autotile_get_z_index(const int64_t id, const Vector2 coord) {
    return rebel_icall_int_int_vector2(
        method_bindings.mb_autotile_get_z_index,
        (const Object*)this,
        id,
        coord
    );
}

void TileSet::autotile_set_bitmask(const int64_t id, const Vector2 bitmask, const int64_t flag) {
    rebel_icall_void_int_vector2_int(
        method_bindings.mb_autotile_set_bitmask,
        (const Object*)this,
        id,
        bitmask,
        flag
    );
}

void TileSet::autotile_set_bitmask_mode(const int64_t id, const int64_t mode) {
    rebel_icall_void_int_int(
        method_bindings.mb_autotile_set_bitmask_mode,
        (const Object*)this,
        id,
        mode
    );
}

void TileSet::autotile_set_icon_coordinate(const int64_t id, const Vector2 coord) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_autotile_set_icon_coordinate,
        (const Object*)this,
        id,
        coord
    );
}

void TileSet::autotile_set_light_occluder(const int64_t id, const Ref<OccluderPolygon2D> light_occluder, const Vector2 coord) {
    rebel_icall_void_int_object_vector2(
        method_bindings.mb_autotile_set_light_occluder,
        (const Object*)this,
        id,
        light_occluder.ptr(),
        coord
    );
}

void TileSet::autotile_set_navigation_polygon(const int64_t id, const Ref<NavigationPolygon> navigation_polygon, const Vector2 coord) {
    rebel_icall_void_int_object_vector2(
        method_bindings.mb_autotile_set_navigation_polygon,
        (const Object*)this,
        id,
        navigation_polygon.ptr(),
        coord
    );
}

void TileSet::autotile_set_size(const int64_t id, const Vector2 size) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_autotile_set_size,
        (const Object*)this,
        id,
        size
    );
}

void TileSet::autotile_set_spacing(const int64_t id, const int64_t spacing) {
    rebel_icall_void_int_int(
        method_bindings.mb_autotile_set_spacing,
        (const Object*)this,
        id,
        spacing
    );
}

void TileSet::autotile_set_subtile_priority(const int64_t id, const Vector2 coord, const int64_t priority) {
    rebel_icall_void_int_vector2_int(
        method_bindings.mb_autotile_set_subtile_priority,
        (const Object*)this,
        id,
        coord,
        priority
    );
}

void TileSet::autotile_set_z_index(const int64_t id, const Vector2 coord, const int64_t z_index) {
    rebel_icall_void_int_vector2_int(
        method_bindings.mb_autotile_set_z_index,
        (const Object*)this,
        id,
        coord,
        z_index
    );
}

void TileSet::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void TileSet::create_tile(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_create_tile,
        (const Object*)this,
        id
    );
}

int64_t TileSet::find_tile_by_name(const String name) const {
    return rebel_icall_int_string(
        method_bindings.mb_find_tile_by_name,
        (const Object*)this,
        name
    );
}

int64_t TileSet::get_last_unused_tile_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_last_unused_tile_id,
        (const Object*)this
    );
}

Array TileSet::get_tiles_ids() const {
    return rebel_icall_array(
        method_bindings.mb_get_tiles_ids,
        (const Object*)this
    );
}

void TileSet::remove_tile(const int64_t id) {
    rebel_icall_void_int(
        method_bindings.mb_remove_tile,
        (const Object*)this,
        id
    );
}

void TileSet::tile_add_shape(const int64_t id, const Ref<Shape2D> shape, const Transform2D shape_transform, const bool one_way, const Vector2 autotile_coord) {
    rebel_icall_void_int_object_transform2d_bool_vector2(
        method_bindings.mb_tile_add_shape,
        (const Object*)this,
        id,
        shape.ptr(),
        shape_transform,
        one_way,
        autotile_coord
    );
}

Ref<OccluderPolygon2D> TileSet::tile_get_light_occluder(const int64_t id) const {
    return Ref<OccluderPolygon2D>::create_ref(rebel_icall_object_int(
        method_bindings.mb_tile_get_light_occluder,
        (const Object*)this,
        id
    ));
}

Ref<ShaderMaterial> TileSet::tile_get_material(const int64_t id) const {
    return Ref<ShaderMaterial>::create_ref(rebel_icall_object_int(
        method_bindings.mb_tile_get_material,
        (const Object*)this,
        id
    ));
}

Color TileSet::tile_get_modulate(const int64_t id) const {
    return rebel_icall_color_int(
        method_bindings.mb_tile_get_modulate,
        (const Object*)this,
        id
    );
}

String TileSet::tile_get_name(const int64_t id) const {
    return rebel_icall_string_int(
        method_bindings.mb_tile_get_name,
        (const Object*)this,
        id
    );
}

Ref<NavigationPolygon> TileSet::tile_get_navigation_polygon(const int64_t id) const {
    return Ref<NavigationPolygon>::create_ref(rebel_icall_object_int(
        method_bindings.mb_tile_get_navigation_polygon,
        (const Object*)this,
        id
    ));
}

Vector2 TileSet::tile_get_navigation_polygon_offset(const int64_t id) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_tile_get_navigation_polygon_offset,
        (const Object*)this,
        id
    );
}

Ref<Texture> TileSet::tile_get_normal_map(const int64_t id) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_tile_get_normal_map,
        (const Object*)this,
        id
    ));
}

Vector2 TileSet::tile_get_occluder_offset(const int64_t id) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_tile_get_occluder_offset,
        (const Object*)this,
        id
    );
}

Rect2 TileSet::tile_get_region(const int64_t id) const {
    return rebel_icall_rect2_int(
        method_bindings.mb_tile_get_region,
        (const Object*)this,
        id
    );
}

Ref<Shape2D> TileSet::tile_get_shape(const int64_t id, const int64_t shape_id) const {
    return Ref<Shape2D>::create_ref(rebel_icall_object_int_int(
        method_bindings.mb_tile_get_shape,
        (const Object*)this,
        id,
        shape_id
    ));
}

int64_t TileSet::tile_get_shape_count(const int64_t id) const {
    return rebel_icall_int_int(
        method_bindings.mb_tile_get_shape_count,
        (const Object*)this,
        id
    );
}

Vector2 TileSet::tile_get_shape_offset(const int64_t id, const int64_t shape_id) const {
    return rebel_icall_vector2_int_int(
        method_bindings.mb_tile_get_shape_offset,
        (const Object*)this,
        id,
        shape_id
    );
}

bool TileSet::tile_get_shape_one_way(const int64_t id, const int64_t shape_id) const {
    return rebel_icall_bool_int_int(
        method_bindings.mb_tile_get_shape_one_way,
        (const Object*)this,
        id,
        shape_id
    );
}

real_t TileSet::tile_get_shape_one_way_margin(const int64_t id, const int64_t shape_id) const {
    return rebel_icall_float_int_int(
        method_bindings.mb_tile_get_shape_one_way_margin,
        (const Object*)this,
        id,
        shape_id
    );
}

Transform2D TileSet::tile_get_shape_transform(const int64_t id, const int64_t shape_id) const {
    return rebel_icall_transform2d_int_int(
        method_bindings.mb_tile_get_shape_transform,
        (const Object*)this,
        id,
        shape_id
    );
}

Array TileSet::tile_get_shapes(const int64_t id) const {
    return rebel_icall_array_int(
        method_bindings.mb_tile_get_shapes,
        (const Object*)this,
        id
    );
}

Ref<Texture> TileSet::tile_get_texture(const int64_t id) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_tile_get_texture,
        (const Object*)this,
        id
    ));
}

Vector2 TileSet::tile_get_texture_offset(const int64_t id) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_tile_get_texture_offset,
        (const Object*)this,
        id
    );
}

TileSet::TileMode TileSet::tile_get_tile_mode(const int64_t id) const {
    return (TileSet::TileMode)rebel_icall_int_int(
        method_bindings.mb_tile_get_tile_mode,
        (const Object*)this,
        id
    );
}

int64_t TileSet::tile_get_z_index(const int64_t id) const {
    return rebel_icall_int_int(
        method_bindings.mb_tile_get_z_index,
        (const Object*)this,
        id
    );
}

void TileSet::tile_set_light_occluder(const int64_t id, const Ref<OccluderPolygon2D> light_occluder) {
    rebel_icall_void_int_object(
        method_bindings.mb_tile_set_light_occluder,
        (const Object*)this,
        id,
        light_occluder.ptr()
    );
}

void TileSet::tile_set_material(const int64_t id, const Ref<ShaderMaterial> material) {
    rebel_icall_void_int_object(
        method_bindings.mb_tile_set_material,
        (const Object*)this,
        id,
        material.ptr()
    );
}

void TileSet::tile_set_modulate(const int64_t id, const Color color) {
    rebel_icall_void_int_color(
        method_bindings.mb_tile_set_modulate,
        (const Object*)this,
        id,
        color
    );
}

void TileSet::tile_set_name(const int64_t id, const String name) {
    rebel_icall_void_int_string(
        method_bindings.mb_tile_set_name,
        (const Object*)this,
        id,
        name
    );
}

void TileSet::tile_set_navigation_polygon(const int64_t id, const Ref<NavigationPolygon> navigation_polygon) {
    rebel_icall_void_int_object(
        method_bindings.mb_tile_set_navigation_polygon,
        (const Object*)this,
        id,
        navigation_polygon.ptr()
    );
}

void TileSet::tile_set_navigation_polygon_offset(const int64_t id, const Vector2 navigation_polygon_offset) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_tile_set_navigation_polygon_offset,
        (const Object*)this,
        id,
        navigation_polygon_offset
    );
}

void TileSet::tile_set_normal_map(const int64_t id, const Ref<Texture> normal_map) {
    rebel_icall_void_int_object(
        method_bindings.mb_tile_set_normal_map,
        (const Object*)this,
        id,
        normal_map.ptr()
    );
}

void TileSet::tile_set_occluder_offset(const int64_t id, const Vector2 occluder_offset) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_tile_set_occluder_offset,
        (const Object*)this,
        id,
        occluder_offset
    );
}

void TileSet::tile_set_region(const int64_t id, const Rect2 region) {
    rebel_icall_void_int_rect2(
        method_bindings.mb_tile_set_region,
        (const Object*)this,
        id,
        region
    );
}

void TileSet::tile_set_shape(const int64_t id, const int64_t shape_id, const Ref<Shape2D> shape) {
    rebel_icall_void_int_int_object(
        method_bindings.mb_tile_set_shape,
        (const Object*)this,
        id,
        shape_id,
        shape.ptr()
    );
}

void TileSet::tile_set_shape_offset(const int64_t id, const int64_t shape_id, const Vector2 shape_offset) {
    rebel_icall_void_int_int_vector2(
        method_bindings.mb_tile_set_shape_offset,
        (const Object*)this,
        id,
        shape_id,
        shape_offset
    );
}

void TileSet::tile_set_shape_one_way(const int64_t id, const int64_t shape_id, const bool one_way) {
    rebel_icall_void_int_int_bool(
        method_bindings.mb_tile_set_shape_one_way,
        (const Object*)this,
        id,
        shape_id,
        one_way
    );
}

void TileSet::tile_set_shape_one_way_margin(const int64_t id, const int64_t shape_id, const real_t one_way) {
    rebel_icall_void_int_int_float(
        method_bindings.mb_tile_set_shape_one_way_margin,
        (const Object*)this,
        id,
        shape_id,
        one_way
    );
}

void TileSet::tile_set_shape_transform(const int64_t id, const int64_t shape_id, const Transform2D shape_transform) {
    rebel_icall_void_int_int_transform2d(
        method_bindings.mb_tile_set_shape_transform,
        (const Object*)this,
        id,
        shape_id,
        shape_transform
    );
}

void TileSet::tile_set_shapes(const int64_t id, const Array shapes) {
    rebel_icall_void_int_array(
        method_bindings.mb_tile_set_shapes,
        (const Object*)this,
        id,
        shapes
    );
}

void TileSet::tile_set_texture(const int64_t id, const Ref<Texture> texture) {
    rebel_icall_void_int_object(
        method_bindings.mb_tile_set_texture,
        (const Object*)this,
        id,
        texture.ptr()
    );
}

void TileSet::tile_set_texture_offset(const int64_t id, const Vector2 texture_offset) {
    rebel_icall_void_int_vector2(
        method_bindings.mb_tile_set_texture_offset,
        (const Object*)this,
        id,
        texture_offset
    );
}

void TileSet::tile_set_tile_mode(const int64_t id, const int64_t tilemode) {
    rebel_icall_void_int_int(
        method_bindings.mb_tile_set_tile_mode,
        (const Object*)this,
        id,
        tilemode
    );
}

void TileSet::tile_set_z_index(const int64_t id, const int64_t z_index) {
    rebel_icall_void_int_int(
        method_bindings.mb_tile_set_z_index,
        (const Object*)this,
        id,
        z_index
    );
}

TileSet* TileSet::create() {
    return (TileSet*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"TileSet")()
         );
}

void TileSet::init_method_bindings() {
    method_bindings.mb__forward_atlas_subtile_selection =
        api->rebel_method_bind_get_method(
            "TileSet",
            "_forward_atlas_subtile_selection"
        );
    method_bindings.mb__forward_subtile_selection =
        api->rebel_method_bind_get_method(
            "TileSet",
            "_forward_subtile_selection"
        );
    method_bindings.mb__is_tile_bound =
        api->rebel_method_bind_get_method(
            "TileSet",
            "_is_tile_bound"
        );
    method_bindings.mb_autotile_clear_bitmask_map =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_clear_bitmask_map"
        );
    method_bindings.mb_autotile_get_bitmask =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_get_bitmask"
        );
    method_bindings.mb_autotile_get_bitmask_mode =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_get_bitmask_mode"
        );
    method_bindings.mb_autotile_get_icon_coordinate =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_get_icon_coordinate"
        );
    method_bindings.mb_autotile_get_light_occluder =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_get_light_occluder"
        );
    method_bindings.mb_autotile_get_navigation_polygon =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_get_navigation_polygon"
        );
    method_bindings.mb_autotile_get_size =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_get_size"
        );
    method_bindings.mb_autotile_get_spacing =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_get_spacing"
        );
    method_bindings.mb_autotile_get_subtile_priority =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_get_subtile_priority"
        );
    method_bindings.mb_autotile_get_z_index =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_get_z_index"
        );
    method_bindings.mb_autotile_set_bitmask =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_set_bitmask"
        );
    method_bindings.mb_autotile_set_bitmask_mode =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_set_bitmask_mode"
        );
    method_bindings.mb_autotile_set_icon_coordinate =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_set_icon_coordinate"
        );
    method_bindings.mb_autotile_set_light_occluder =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_set_light_occluder"
        );
    method_bindings.mb_autotile_set_navigation_polygon =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_set_navigation_polygon"
        );
    method_bindings.mb_autotile_set_size =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_set_size"
        );
    method_bindings.mb_autotile_set_spacing =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_set_spacing"
        );
    method_bindings.mb_autotile_set_subtile_priority =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_set_subtile_priority"
        );
    method_bindings.mb_autotile_set_z_index =
        api->rebel_method_bind_get_method(
            "TileSet",
            "autotile_set_z_index"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "TileSet",
            "clear"
        );
    method_bindings.mb_create_tile =
        api->rebel_method_bind_get_method(
            "TileSet",
            "create_tile"
        );
    method_bindings.mb_find_tile_by_name =
        api->rebel_method_bind_get_method(
            "TileSet",
            "find_tile_by_name"
        );
    method_bindings.mb_get_last_unused_tile_id =
        api->rebel_method_bind_get_method(
            "TileSet",
            "get_last_unused_tile_id"
        );
    method_bindings.mb_get_tiles_ids =
        api->rebel_method_bind_get_method(
            "TileSet",
            "get_tiles_ids"
        );
    method_bindings.mb_remove_tile =
        api->rebel_method_bind_get_method(
            "TileSet",
            "remove_tile"
        );
    method_bindings.mb_tile_add_shape =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_add_shape"
        );
    method_bindings.mb_tile_get_light_occluder =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_light_occluder"
        );
    method_bindings.mb_tile_get_material =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_material"
        );
    method_bindings.mb_tile_get_modulate =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_modulate"
        );
    method_bindings.mb_tile_get_name =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_name"
        );
    method_bindings.mb_tile_get_navigation_polygon =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_navigation_polygon"
        );
    method_bindings.mb_tile_get_navigation_polygon_offset =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_navigation_polygon_offset"
        );
    method_bindings.mb_tile_get_normal_map =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_normal_map"
        );
    method_bindings.mb_tile_get_occluder_offset =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_occluder_offset"
        );
    method_bindings.mb_tile_get_region =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_region"
        );
    method_bindings.mb_tile_get_shape =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_shape"
        );
    method_bindings.mb_tile_get_shape_count =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_shape_count"
        );
    method_bindings.mb_tile_get_shape_offset =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_shape_offset"
        );
    method_bindings.mb_tile_get_shape_one_way =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_shape_one_way"
        );
    method_bindings.mb_tile_get_shape_one_way_margin =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_shape_one_way_margin"
        );
    method_bindings.mb_tile_get_shape_transform =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_shape_transform"
        );
    method_bindings.mb_tile_get_shapes =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_shapes"
        );
    method_bindings.mb_tile_get_texture =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_texture"
        );
    method_bindings.mb_tile_get_texture_offset =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_texture_offset"
        );
    method_bindings.mb_tile_get_tile_mode =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_tile_mode"
        );
    method_bindings.mb_tile_get_z_index =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_get_z_index"
        );
    method_bindings.mb_tile_set_light_occluder =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_light_occluder"
        );
    method_bindings.mb_tile_set_material =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_material"
        );
    method_bindings.mb_tile_set_modulate =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_modulate"
        );
    method_bindings.mb_tile_set_name =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_name"
        );
    method_bindings.mb_tile_set_navigation_polygon =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_navigation_polygon"
        );
    method_bindings.mb_tile_set_navigation_polygon_offset =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_navigation_polygon_offset"
        );
    method_bindings.mb_tile_set_normal_map =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_normal_map"
        );
    method_bindings.mb_tile_set_occluder_offset =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_occluder_offset"
        );
    method_bindings.mb_tile_set_region =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_region"
        );
    method_bindings.mb_tile_set_shape =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_shape"
        );
    method_bindings.mb_tile_set_shape_offset =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_shape_offset"
        );
    method_bindings.mb_tile_set_shape_one_way =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_shape_one_way"
        );
    method_bindings.mb_tile_set_shape_one_way_margin =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_shape_one_way_margin"
        );
    method_bindings.mb_tile_set_shape_transform =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_shape_transform"
        );
    method_bindings.mb_tile_set_shapes =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_shapes"
        );
    method_bindings.mb_tile_set_texture =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_texture"
        );
    method_bindings.mb_tile_set_texture_offset =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_texture_offset"
        );
    method_bindings.mb_tile_set_tile_mode =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_tile_mode"
        );
    method_bindings.mb_tile_set_z_index =
        api->rebel_method_bind_get_method(
            "TileSet",
            "tile_set_z_index"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TileSet");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TileSet::MethodBindings TileSet::method_bindings = {};
void* TileSet::class_tag = nullptr;
} // namespace Rebel
