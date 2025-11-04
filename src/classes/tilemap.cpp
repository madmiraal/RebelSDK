// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/tilemap.h"

#include "classes/icalls.h"
#include "classes/tileset.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void TileMap::_clear_quadrants() {
    rebel_icall_void(
        method_bindings.mb__clear_quadrants,
        (const Object*)this
    );
}

int64_t TileMap::_get_old_cell_size() const {
    return rebel_icall_int(
        method_bindings.mb__get_old_cell_size,
        (const Object*)this
    );
}

PoolIntArray TileMap::_get_tile_data() const {
    return rebel_icall_poolintarray(
        method_bindings.mb__get_tile_data,
        (const Object*)this
    );
}

void TileMap::_recreate_quadrants() {
    rebel_icall_void(
        method_bindings.mb__recreate_quadrants,
        (const Object*)this
    );
}

void TileMap::_set_celld(const Vector2 position, const Dictionary data) {
    rebel_icall_void_vector2_dictionary(
        method_bindings.mb__set_celld,
        (const Object*)this,
        position,
        data
    );
}

void TileMap::_set_old_cell_size(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb__set_old_cell_size,
        (const Object*)this,
        size
    );
}

void TileMap::_set_tile_data(const PoolIntArray arg0) {
    rebel_icall_void_poolintarray(
        method_bindings.mb__set_tile_data,
        (const Object*)this,
        arg0
    );
}

void TileMap::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void TileMap::fix_invalid_tiles() {
    rebel_icall_void(
        method_bindings.mb_fix_invalid_tiles,
        (const Object*)this
    );
}

int64_t TileMap::get_cell(const int64_t x, const int64_t y) const {
    return rebel_icall_int_int_int(
        method_bindings.mb_get_cell,
        (const Object*)this,
        x,
        y
    );
}

Vector2 TileMap::get_cell_autotile_coord(const int64_t x, const int64_t y) const {
    return rebel_icall_vector2_int_int(
        method_bindings.mb_get_cell_autotile_coord,
        (const Object*)this,
        x,
        y
    );
}

Vector2 TileMap::get_cell_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_cell_size,
        (const Object*)this
    );
}

int64_t TileMap::get_cellv(const Vector2 position) const {
    return rebel_icall_int_vector2(
        method_bindings.mb_get_cellv,
        (const Object*)this,
        position
    );
}

bool TileMap::get_clip_uv() const {
    return rebel_icall_bool(
        method_bindings.mb_get_clip_uv,
        (const Object*)this
    );
}

real_t TileMap::get_collision_bounce() const {
    return rebel_icall_float(
        method_bindings.mb_get_collision_bounce,
        (const Object*)this
    );
}

real_t TileMap::get_collision_friction() const {
    return rebel_icall_float(
        method_bindings.mb_get_collision_friction,
        (const Object*)this
    );
}

int64_t TileMap::get_collision_layer() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_layer,
        (const Object*)this
    );
}

bool TileMap::get_collision_layer_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_layer_bit,
        (const Object*)this,
        bit
    );
}

int64_t TileMap::get_collision_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

bool TileMap::get_collision_mask_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_mask_bit,
        (const Object*)this,
        bit
    );
}

bool TileMap::get_collision_use_kinematic() const {
    return rebel_icall_bool(
        method_bindings.mb_get_collision_use_kinematic,
        (const Object*)this
    );
}

bool TileMap::get_collision_use_parent() const {
    return rebel_icall_bool(
        method_bindings.mb_get_collision_use_parent,
        (const Object*)this
    );
}

Transform2D TileMap::get_custom_transform() const {
    return rebel_icall_transform2d(
        method_bindings.mb_get_custom_transform,
        (const Object*)this
    );
}

TileMap::HalfOffset TileMap::get_half_offset() const {
    return (TileMap::HalfOffset)rebel_icall_int(
        method_bindings.mb_get_half_offset,
        (const Object*)this
    );
}

TileMap::Mode TileMap::get_mode() const {
    return (TileMap::Mode)rebel_icall_int(
        method_bindings.mb_get_mode,
        (const Object*)this
    );
}

int64_t TileMap::get_occluder_light_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_occluder_light_mask,
        (const Object*)this
    );
}

int64_t TileMap::get_quadrant_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_quadrant_size,
        (const Object*)this
    );
}

TileMap::TileOrigin TileMap::get_tile_origin() const {
    return (TileMap::TileOrigin)rebel_icall_int(
        method_bindings.mb_get_tile_origin,
        (const Object*)this
    );
}

Ref<TileSet> TileMap::get_tileset() const {
    return Ref<TileSet>::create_ref(rebel_icall_object(
        method_bindings.mb_get_tileset,
        (const Object*)this
    ));
}

Array TileMap::get_used_cells() const {
    return rebel_icall_array(
        method_bindings.mb_get_used_cells,
        (const Object*)this
    );
}

Array TileMap::get_used_cells_by_id(const int64_t id) const {
    return rebel_icall_array_int(
        method_bindings.mb_get_used_cells_by_id,
        (const Object*)this,
        id
    );
}

Rect2 TileMap::get_used_rect() {
    return rebel_icall_rect2(
        method_bindings.mb_get_used_rect,
        (const Object*)this
    );
}

bool TileMap::is_cell_transposed(const int64_t x, const int64_t y) const {
    return rebel_icall_bool_int_int(
        method_bindings.mb_is_cell_transposed,
        (const Object*)this,
        x,
        y
    );
}

bool TileMap::is_cell_x_flipped(const int64_t x, const int64_t y) const {
    return rebel_icall_bool_int_int(
        method_bindings.mb_is_cell_x_flipped,
        (const Object*)this,
        x,
        y
    );
}

bool TileMap::is_cell_y_flipped(const int64_t x, const int64_t y) const {
    return rebel_icall_bool_int_int(
        method_bindings.mb_is_cell_y_flipped,
        (const Object*)this,
        x,
        y
    );
}

bool TileMap::is_centered_textures_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_centered_textures_enabled,
        (const Object*)this
    );
}

bool TileMap::is_compatibility_mode_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_compatibility_mode_enabled,
        (const Object*)this
    );
}

bool TileMap::is_show_collision_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_show_collision_enabled,
        (const Object*)this
    );
}

bool TileMap::is_y_sort_mode_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_y_sort_mode_enabled,
        (const Object*)this
    );
}

Vector2 TileMap::map_to_world(const Vector2 map_position, const bool ignore_half_ofs) const {
    return rebel_icall_vector2_vector2_bool(
        method_bindings.mb_map_to_world,
        (const Object*)this,
        map_position,
        ignore_half_ofs
    );
}

void TileMap::set_cell(const int64_t x, const int64_t y, const int64_t tile, const bool flip_x, const bool flip_y, const bool transpose, const Vector2 autotile_coord) {
    rebel_icall_void_int_int_int_bool_bool_bool_vector2(
        method_bindings.mb_set_cell,
        (const Object*)this,
        x,
        y,
        tile,
        flip_x,
        flip_y,
        transpose,
        autotile_coord
    );
}

void TileMap::set_cell_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_cell_size,
        (const Object*)this,
        size
    );
}

void TileMap::set_cellv(const Vector2 position, const int64_t tile, const bool flip_x, const bool flip_y, const bool transpose, const Vector2 autotile_coord) {
    rebel_icall_void_vector2_int_bool_bool_bool_vector2(
        method_bindings.mb_set_cellv,
        (const Object*)this,
        position,
        tile,
        flip_x,
        flip_y,
        transpose,
        autotile_coord
    );
}

void TileMap::set_centered_textures(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_centered_textures,
        (const Object*)this,
        enable
    );
}

void TileMap::set_clip_uv(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_clip_uv,
        (const Object*)this,
        enable
    );
}

void TileMap::set_collision_bounce(const real_t value) {
    rebel_icall_void_float(
        method_bindings.mb_set_collision_bounce,
        (const Object*)this,
        value
    );
}

void TileMap::set_collision_friction(const real_t value) {
    rebel_icall_void_float(
        method_bindings.mb_set_collision_friction,
        (const Object*)this,
        value
    );
}

void TileMap::set_collision_layer(const int64_t layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_layer,
        (const Object*)this,
        layer
    );
}

void TileMap::set_collision_layer_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_layer_bit,
        (const Object*)this,
        bit,
        value
    );
}

void TileMap::set_collision_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        mask
    );
}

void TileMap::set_collision_mask_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_mask_bit,
        (const Object*)this,
        bit,
        value
    );
}

void TileMap::set_collision_use_kinematic(const bool use_kinematic) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collision_use_kinematic,
        (const Object*)this,
        use_kinematic
    );
}

void TileMap::set_collision_use_parent(const bool use_parent) {
    rebel_icall_void_bool(
        method_bindings.mb_set_collision_use_parent,
        (const Object*)this,
        use_parent
    );
}

void TileMap::set_compatibility_mode(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_compatibility_mode,
        (const Object*)this,
        enable
    );
}

void TileMap::set_custom_transform(const Transform2D custom_transform) {
    rebel_icall_void_transform2d(
        method_bindings.mb_set_custom_transform,
        (const Object*)this,
        custom_transform
    );
}

void TileMap::set_half_offset(const int64_t half_offset) {
    rebel_icall_void_int(
        method_bindings.mb_set_half_offset,
        (const Object*)this,
        half_offset
    );
}

void TileMap::set_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_mode,
        (const Object*)this,
        mode
    );
}

void TileMap::set_occluder_light_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_occluder_light_mask,
        (const Object*)this,
        mask
    );
}

void TileMap::set_quadrant_size(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb_set_quadrant_size,
        (const Object*)this,
        size
    );
}

void TileMap::set_show_collision(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_show_collision,
        (const Object*)this,
        enable
    );
}

void TileMap::set_tile_origin(const int64_t origin) {
    rebel_icall_void_int(
        method_bindings.mb_set_tile_origin,
        (const Object*)this,
        origin
    );
}

void TileMap::set_tileset(const Ref<TileSet> tileset) {
    rebel_icall_void_object(
        method_bindings.mb_set_tileset,
        (const Object*)this,
        tileset.ptr()
    );
}

void TileMap::set_y_sort_mode(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_y_sort_mode,
        (const Object*)this,
        enable
    );
}

void TileMap::update_bitmask_area(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb_update_bitmask_area,
        (const Object*)this,
        position
    );
}

void TileMap::update_bitmask_region(const Vector2 start, const Vector2 end) {
    rebel_icall_void_vector2_vector2(
        method_bindings.mb_update_bitmask_region,
        (const Object*)this,
        start,
        end
    );
}

void TileMap::update_dirty_quadrants() {
    rebel_icall_void(
        method_bindings.mb_update_dirty_quadrants,
        (const Object*)this
    );
}

Vector2 TileMap::world_to_map(const Vector2 world_position) const {
    return rebel_icall_vector2_vector2(
        method_bindings.mb_world_to_map,
        (const Object*)this,
        world_position
    );
}

TileMap* TileMap::create() {
    return (TileMap*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"TileMap")()
         );
}

void TileMap::init_method_bindings() {
    method_bindings.mb__clear_quadrants =
        api->rebel_method_bind_get_method(
            "TileMap",
            "_clear_quadrants"
        );
    method_bindings.mb__get_old_cell_size =
        api->rebel_method_bind_get_method(
            "TileMap",
            "_get_old_cell_size"
        );
    method_bindings.mb__get_tile_data =
        api->rebel_method_bind_get_method(
            "TileMap",
            "_get_tile_data"
        );
    method_bindings.mb__recreate_quadrants =
        api->rebel_method_bind_get_method(
            "TileMap",
            "_recreate_quadrants"
        );
    method_bindings.mb__set_celld =
        api->rebel_method_bind_get_method(
            "TileMap",
            "_set_celld"
        );
    method_bindings.mb__set_old_cell_size =
        api->rebel_method_bind_get_method(
            "TileMap",
            "_set_old_cell_size"
        );
    method_bindings.mb__set_tile_data =
        api->rebel_method_bind_get_method(
            "TileMap",
            "_set_tile_data"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "TileMap",
            "clear"
        );
    method_bindings.mb_fix_invalid_tiles =
        api->rebel_method_bind_get_method(
            "TileMap",
            "fix_invalid_tiles"
        );
    method_bindings.mb_get_cell =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_cell"
        );
    method_bindings.mb_get_cell_autotile_coord =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_cell_autotile_coord"
        );
    method_bindings.mb_get_cell_size =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_cell_size"
        );
    method_bindings.mb_get_cellv =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_cellv"
        );
    method_bindings.mb_get_clip_uv =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_clip_uv"
        );
    method_bindings.mb_get_collision_bounce =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_collision_bounce"
        );
    method_bindings.mb_get_collision_friction =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_collision_friction"
        );
    method_bindings.mb_get_collision_layer =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_collision_layer"
        );
    method_bindings.mb_get_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_collision_layer_bit"
        );
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_collision_mask"
        );
    method_bindings.mb_get_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_collision_mask_bit"
        );
    method_bindings.mb_get_collision_use_kinematic =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_collision_use_kinematic"
        );
    method_bindings.mb_get_collision_use_parent =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_collision_use_parent"
        );
    method_bindings.mb_get_custom_transform =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_custom_transform"
        );
    method_bindings.mb_get_half_offset =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_half_offset"
        );
    method_bindings.mb_get_mode =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_mode"
        );
    method_bindings.mb_get_occluder_light_mask =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_occluder_light_mask"
        );
    method_bindings.mb_get_quadrant_size =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_quadrant_size"
        );
    method_bindings.mb_get_tile_origin =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_tile_origin"
        );
    method_bindings.mb_get_tileset =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_tileset"
        );
    method_bindings.mb_get_used_cells =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_used_cells"
        );
    method_bindings.mb_get_used_cells_by_id =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_used_cells_by_id"
        );
    method_bindings.mb_get_used_rect =
        api->rebel_method_bind_get_method(
            "TileMap",
            "get_used_rect"
        );
    method_bindings.mb_is_cell_transposed =
        api->rebel_method_bind_get_method(
            "TileMap",
            "is_cell_transposed"
        );
    method_bindings.mb_is_cell_x_flipped =
        api->rebel_method_bind_get_method(
            "TileMap",
            "is_cell_x_flipped"
        );
    method_bindings.mb_is_cell_y_flipped =
        api->rebel_method_bind_get_method(
            "TileMap",
            "is_cell_y_flipped"
        );
    method_bindings.mb_is_centered_textures_enabled =
        api->rebel_method_bind_get_method(
            "TileMap",
            "is_centered_textures_enabled"
        );
    method_bindings.mb_is_compatibility_mode_enabled =
        api->rebel_method_bind_get_method(
            "TileMap",
            "is_compatibility_mode_enabled"
        );
    method_bindings.mb_is_show_collision_enabled =
        api->rebel_method_bind_get_method(
            "TileMap",
            "is_show_collision_enabled"
        );
    method_bindings.mb_is_y_sort_mode_enabled =
        api->rebel_method_bind_get_method(
            "TileMap",
            "is_y_sort_mode_enabled"
        );
    method_bindings.mb_map_to_world =
        api->rebel_method_bind_get_method(
            "TileMap",
            "map_to_world"
        );
    method_bindings.mb_set_cell =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_cell"
        );
    method_bindings.mb_set_cell_size =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_cell_size"
        );
    method_bindings.mb_set_cellv =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_cellv"
        );
    method_bindings.mb_set_centered_textures =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_centered_textures"
        );
    method_bindings.mb_set_clip_uv =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_clip_uv"
        );
    method_bindings.mb_set_collision_bounce =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_collision_bounce"
        );
    method_bindings.mb_set_collision_friction =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_collision_friction"
        );
    method_bindings.mb_set_collision_layer =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_collision_layer"
        );
    method_bindings.mb_set_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_collision_layer_bit"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_collision_mask"
        );
    method_bindings.mb_set_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_collision_mask_bit"
        );
    method_bindings.mb_set_collision_use_kinematic =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_collision_use_kinematic"
        );
    method_bindings.mb_set_collision_use_parent =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_collision_use_parent"
        );
    method_bindings.mb_set_compatibility_mode =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_compatibility_mode"
        );
    method_bindings.mb_set_custom_transform =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_custom_transform"
        );
    method_bindings.mb_set_half_offset =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_half_offset"
        );
    method_bindings.mb_set_mode =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_mode"
        );
    method_bindings.mb_set_occluder_light_mask =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_occluder_light_mask"
        );
    method_bindings.mb_set_quadrant_size =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_quadrant_size"
        );
    method_bindings.mb_set_show_collision =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_show_collision"
        );
    method_bindings.mb_set_tile_origin =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_tile_origin"
        );
    method_bindings.mb_set_tileset =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_tileset"
        );
    method_bindings.mb_set_y_sort_mode =
        api->rebel_method_bind_get_method(
            "TileMap",
            "set_y_sort_mode"
        );
    method_bindings.mb_update_bitmask_area =
        api->rebel_method_bind_get_method(
            "TileMap",
            "update_bitmask_area"
        );
    method_bindings.mb_update_bitmask_region =
        api->rebel_method_bind_get_method(
            "TileMap",
            "update_bitmask_region"
        );
    method_bindings.mb_update_dirty_quadrants =
        api->rebel_method_bind_get_method(
            "TileMap",
            "update_dirty_quadrants"
        );
    method_bindings.mb_world_to_map =
        api->rebel_method_bind_get_method(
            "TileMap",
            "world_to_map"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TileMap");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TileMap::MethodBindings TileMap::method_bindings = {};
void* TileMap::class_tag = nullptr;
} // namespace Rebel
