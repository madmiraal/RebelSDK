// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TILESET_H
#define REBEL_TILESET_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class NavigationPolygon;
class Object;
class OccluderPolygon2D;
class ShaderMaterial;
class Shape2D;
class Texture;

class TileSet : public Resource {
public:
    enum TileMode {
        SINGLE_TILE = 0,
        AUTO_TILE = 1,
        ATLAS_TILE = 2,
    };

    enum AutotileBindings {
        BIND_TOPLEFT = 1,
        BIND_TOP = 2,
        BIND_TOPRIGHT = 4,
        BIND_LEFT = 8,
        BIND_CENTER = 16,
        BIND_RIGHT = 32,
        BIND_BOTTOMLEFT = 64,
        BIND_BOTTOM = 128,
        BIND_BOTTOMRIGHT = 256,
    };

    enum BitmaskMode {
        BITMASK_2X2 = 0,
        BITMASK_3X3_MINIMAL = 1,
        BITMASK_3X3 = 2,
    };

    Vector2 _forward_atlas_subtile_selection(const int64_t atlastile_id, const Object* tilemap, const Vector2 tile_location);
    Vector2 _forward_subtile_selection(const int64_t autotile_id, const int64_t bitmask, const Object* tilemap, const Vector2 tile_location);
    bool _is_tile_bound(const int64_t drawn_id, const int64_t neighbor_id);
    void autotile_clear_bitmask_map(const int64_t id);
    int64_t autotile_get_bitmask(const int64_t id, const Vector2 coord);
    TileSet::BitmaskMode autotile_get_bitmask_mode(const int64_t id) const;
    Vector2 autotile_get_icon_coordinate(const int64_t id) const;
    Ref<OccluderPolygon2D> autotile_get_light_occluder(const int64_t id, const Vector2 coord) const;
    Ref<NavigationPolygon> autotile_get_navigation_polygon(const int64_t id, const Vector2 coord) const;
    Vector2 autotile_get_size(const int64_t id) const;
    int64_t autotile_get_spacing(const int64_t id) const;
    int64_t autotile_get_subtile_priority(const int64_t id, const Vector2 coord);
    int64_t autotile_get_z_index(const int64_t id, const Vector2 coord);
    void autotile_set_bitmask(const int64_t id, const Vector2 bitmask, const int64_t flag);
    void autotile_set_bitmask_mode(const int64_t id, const int64_t mode);
    void autotile_set_icon_coordinate(const int64_t id, const Vector2 coord);
    void autotile_set_light_occluder(const int64_t id, const Ref<OccluderPolygon2D> light_occluder, const Vector2 coord);
    void autotile_set_navigation_polygon(const int64_t id, const Ref<NavigationPolygon> navigation_polygon, const Vector2 coord);
    void autotile_set_size(const int64_t id, const Vector2 size);
    void autotile_set_spacing(const int64_t id, const int64_t spacing);
    void autotile_set_subtile_priority(const int64_t id, const Vector2 coord, const int64_t priority);
    void autotile_set_z_index(const int64_t id, const Vector2 coord, const int64_t z_index);
    void clear();
    void create_tile(const int64_t id);
    int64_t find_tile_by_name(const String name) const;
    int64_t get_last_unused_tile_id() const;
    Array get_tiles_ids() const;
    void remove_tile(const int64_t id);
    void tile_add_shape(const int64_t id, const Ref<Shape2D> shape, const Transform2D shape_transform, const bool one_way = false, const Vector2 autotile_coord = Vector2(0, 0));
    Ref<OccluderPolygon2D> tile_get_light_occluder(const int64_t id) const;
    Ref<ShaderMaterial> tile_get_material(const int64_t id) const;
    Color tile_get_modulate(const int64_t id) const;
    String tile_get_name(const int64_t id) const;
    Ref<NavigationPolygon> tile_get_navigation_polygon(const int64_t id) const;
    Vector2 tile_get_navigation_polygon_offset(const int64_t id) const;
    Ref<Texture> tile_get_normal_map(const int64_t id) const;
    Vector2 tile_get_occluder_offset(const int64_t id) const;
    Rect2 tile_get_region(const int64_t id) const;
    Ref<Shape2D> tile_get_shape(const int64_t id, const int64_t shape_id) const;
    int64_t tile_get_shape_count(const int64_t id) const;
    Vector2 tile_get_shape_offset(const int64_t id, const int64_t shape_id) const;
    bool tile_get_shape_one_way(const int64_t id, const int64_t shape_id) const;
    real_t tile_get_shape_one_way_margin(const int64_t id, const int64_t shape_id) const;
    Transform2D tile_get_shape_transform(const int64_t id, const int64_t shape_id) const;
    Array tile_get_shapes(const int64_t id) const;
    Ref<Texture> tile_get_texture(const int64_t id) const;
    Vector2 tile_get_texture_offset(const int64_t id) const;
    TileSet::TileMode tile_get_tile_mode(const int64_t id) const;
    int64_t tile_get_z_index(const int64_t id) const;
    void tile_set_light_occluder(const int64_t id, const Ref<OccluderPolygon2D> light_occluder);
    void tile_set_material(const int64_t id, const Ref<ShaderMaterial> material);
    void tile_set_modulate(const int64_t id, const Color color);
    void tile_set_name(const int64_t id, const String name);
    void tile_set_navigation_polygon(const int64_t id, const Ref<NavigationPolygon> navigation_polygon);
    void tile_set_navigation_polygon_offset(const int64_t id, const Vector2 navigation_polygon_offset);
    void tile_set_normal_map(const int64_t id, const Ref<Texture> normal_map);
    void tile_set_occluder_offset(const int64_t id, const Vector2 occluder_offset);
    void tile_set_region(const int64_t id, const Rect2 region);
    void tile_set_shape(const int64_t id, const int64_t shape_id, const Ref<Shape2D> shape);
    void tile_set_shape_offset(const int64_t id, const int64_t shape_id, const Vector2 shape_offset);
    void tile_set_shape_one_way(const int64_t id, const int64_t shape_id, const bool one_way);
    void tile_set_shape_one_way_margin(const int64_t id, const int64_t shape_id, const real_t one_way);
    void tile_set_shape_transform(const int64_t id, const int64_t shape_id, const Transform2D shape_transform);
    void tile_set_shapes(const int64_t id, const Array shapes);
    void tile_set_texture(const int64_t id, const Ref<Texture> texture);
    void tile_set_texture_offset(const int64_t id, const Vector2 texture_offset);
    void tile_set_tile_mode(const int64_t id, const int64_t tilemode);
    void tile_set_z_index(const int64_t id, const int64_t z_index);

    static TileSet* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "TileSet";
    }

    inline static const char* get_rebel_class_name() {
        return "TileSet";
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
        rebel_method_bind* mb__forward_atlas_subtile_selection;
        rebel_method_bind* mb__forward_subtile_selection;
        rebel_method_bind* mb__is_tile_bound;
        rebel_method_bind* mb_autotile_clear_bitmask_map;
        rebel_method_bind* mb_autotile_get_bitmask;
        rebel_method_bind* mb_autotile_get_bitmask_mode;
        rebel_method_bind* mb_autotile_get_icon_coordinate;
        rebel_method_bind* mb_autotile_get_light_occluder;
        rebel_method_bind* mb_autotile_get_navigation_polygon;
        rebel_method_bind* mb_autotile_get_size;
        rebel_method_bind* mb_autotile_get_spacing;
        rebel_method_bind* mb_autotile_get_subtile_priority;
        rebel_method_bind* mb_autotile_get_z_index;
        rebel_method_bind* mb_autotile_set_bitmask;
        rebel_method_bind* mb_autotile_set_bitmask_mode;
        rebel_method_bind* mb_autotile_set_icon_coordinate;
        rebel_method_bind* mb_autotile_set_light_occluder;
        rebel_method_bind* mb_autotile_set_navigation_polygon;
        rebel_method_bind* mb_autotile_set_size;
        rebel_method_bind* mb_autotile_set_spacing;
        rebel_method_bind* mb_autotile_set_subtile_priority;
        rebel_method_bind* mb_autotile_set_z_index;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_create_tile;
        rebel_method_bind* mb_find_tile_by_name;
        rebel_method_bind* mb_get_last_unused_tile_id;
        rebel_method_bind* mb_get_tiles_ids;
        rebel_method_bind* mb_remove_tile;
        rebel_method_bind* mb_tile_add_shape;
        rebel_method_bind* mb_tile_get_light_occluder;
        rebel_method_bind* mb_tile_get_material;
        rebel_method_bind* mb_tile_get_modulate;
        rebel_method_bind* mb_tile_get_name;
        rebel_method_bind* mb_tile_get_navigation_polygon;
        rebel_method_bind* mb_tile_get_navigation_polygon_offset;
        rebel_method_bind* mb_tile_get_normal_map;
        rebel_method_bind* mb_tile_get_occluder_offset;
        rebel_method_bind* mb_tile_get_region;
        rebel_method_bind* mb_tile_get_shape;
        rebel_method_bind* mb_tile_get_shape_count;
        rebel_method_bind* mb_tile_get_shape_offset;
        rebel_method_bind* mb_tile_get_shape_one_way;
        rebel_method_bind* mb_tile_get_shape_one_way_margin;
        rebel_method_bind* mb_tile_get_shape_transform;
        rebel_method_bind* mb_tile_get_shapes;
        rebel_method_bind* mb_tile_get_texture;
        rebel_method_bind* mb_tile_get_texture_offset;
        rebel_method_bind* mb_tile_get_tile_mode;
        rebel_method_bind* mb_tile_get_z_index;
        rebel_method_bind* mb_tile_set_light_occluder;
        rebel_method_bind* mb_tile_set_material;
        rebel_method_bind* mb_tile_set_modulate;
        rebel_method_bind* mb_tile_set_name;
        rebel_method_bind* mb_tile_set_navigation_polygon;
        rebel_method_bind* mb_tile_set_navigation_polygon_offset;
        rebel_method_bind* mb_tile_set_normal_map;
        rebel_method_bind* mb_tile_set_occluder_offset;
        rebel_method_bind* mb_tile_set_region;
        rebel_method_bind* mb_tile_set_shape;
        rebel_method_bind* mb_tile_set_shape_offset;
        rebel_method_bind* mb_tile_set_shape_one_way;
        rebel_method_bind* mb_tile_set_shape_one_way_margin;
        rebel_method_bind* mb_tile_set_shape_transform;
        rebel_method_bind* mb_tile_set_shapes;
        rebel_method_bind* mb_tile_set_texture;
        rebel_method_bind* mb_tile_set_texture_offset;
        rebel_method_bind* mb_tile_set_tile_mode;
        rebel_method_bind* mb_tile_set_z_index;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TILESET_H
