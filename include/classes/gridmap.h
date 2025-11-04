// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GRIDMAP_H
#define REBEL_GRIDMAP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class MeshLibrary;
class Resource;

class GridMap : public Spatial {
public:
    static const int INVALID_CELL_ITEM = -1;

    void _update_octants_callback();
    void clear();
    void clear_baked_meshes();
    RID get_bake_mesh_instance(const int64_t idx);
    Array get_bake_meshes();
    int64_t get_cell_item(const int64_t x, const int64_t y, const int64_t z) const;
    int64_t get_cell_item_orientation(const int64_t x, const int64_t y, const int64_t z) const;
    real_t get_cell_scale() const;
    Vector3 get_cell_size() const;
    bool get_center_x() const;
    bool get_center_y() const;
    bool get_center_z() const;
    int64_t get_collision_layer() const;
    bool get_collision_layer_bit(const int64_t bit) const;
    int64_t get_collision_mask() const;
    bool get_collision_mask_bit(const int64_t bit) const;
    Ref<MeshLibrary> get_mesh_library() const;
    Array get_meshes();
    int64_t get_octant_size() const;
    bool get_use_in_baked_light() const;
    Array get_used_cells() const;
    void make_baked_meshes(const bool gen_lightmap_uv = false, const real_t lightmap_uv_texel_size = 0.1);
    Vector3 map_to_world(const int64_t x, const int64_t y, const int64_t z) const;
    void resource_changed(const Ref<Resource> resource);
    void set_cell_item(const int64_t x, const int64_t y, const int64_t z, const int64_t item, const int64_t orientation = 0);
    void set_cell_scale(const real_t scale);
    void set_cell_size(const Vector3 size);
    void set_center_x(const bool enable);
    void set_center_y(const bool enable);
    void set_center_z(const bool enable);
    void set_clip(const bool enabled, const bool clipabove = true, const int64_t floor = 0, const int64_t axis = 0);
    void set_collision_layer(const int64_t layer);
    void set_collision_layer_bit(const int64_t bit, const bool value);
    void set_collision_mask(const int64_t mask);
    void set_collision_mask_bit(const int64_t bit, const bool value);
    void set_mesh_library(const Ref<MeshLibrary> mesh_library);
    void set_octant_size(const int64_t size);
    void set_use_in_baked_light(const bool use_in_baked_light);
    Vector3 world_to_map(const Vector3 pos) const;

    static GridMap* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GridMap";
    }

    inline static const char* get_rebel_class_name() {
        return "GridMap";
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
        rebel_method_bind* mb__update_octants_callback;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_clear_baked_meshes;
        rebel_method_bind* mb_get_bake_mesh_instance;
        rebel_method_bind* mb_get_bake_meshes;
        rebel_method_bind* mb_get_cell_item;
        rebel_method_bind* mb_get_cell_item_orientation;
        rebel_method_bind* mb_get_cell_scale;
        rebel_method_bind* mb_get_cell_size;
        rebel_method_bind* mb_get_center_x;
        rebel_method_bind* mb_get_center_y;
        rebel_method_bind* mb_get_center_z;
        rebel_method_bind* mb_get_collision_layer;
        rebel_method_bind* mb_get_collision_layer_bit;
        rebel_method_bind* mb_get_collision_mask;
        rebel_method_bind* mb_get_collision_mask_bit;
        rebel_method_bind* mb_get_mesh_library;
        rebel_method_bind* mb_get_meshes;
        rebel_method_bind* mb_get_octant_size;
        rebel_method_bind* mb_get_use_in_baked_light;
        rebel_method_bind* mb_get_used_cells;
        rebel_method_bind* mb_make_baked_meshes;
        rebel_method_bind* mb_map_to_world;
        rebel_method_bind* mb_resource_changed;
        rebel_method_bind* mb_set_cell_item;
        rebel_method_bind* mb_set_cell_scale;
        rebel_method_bind* mb_set_cell_size;
        rebel_method_bind* mb_set_center_x;
        rebel_method_bind* mb_set_center_y;
        rebel_method_bind* mb_set_center_z;
        rebel_method_bind* mb_set_clip;
        rebel_method_bind* mb_set_collision_layer;
        rebel_method_bind* mb_set_collision_layer_bit;
        rebel_method_bind* mb_set_collision_mask;
        rebel_method_bind* mb_set_collision_mask_bit;
        rebel_method_bind* mb_set_mesh_library;
        rebel_method_bind* mb_set_octant_size;
        rebel_method_bind* mb_set_use_in_baked_light;
        rebel_method_bind* mb_world_to_map;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GRIDMAP_H
