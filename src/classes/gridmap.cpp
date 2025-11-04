// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/gridmap.h"

#include "classes/icalls.h"
#include "classes/meshlibrary.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void GridMap::_update_octants_callback() {
    rebel_icall_void(
        method_bindings.mb__update_octants_callback,
        (const Object*)this
    );
}

void GridMap::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void GridMap::clear_baked_meshes() {
    rebel_icall_void(
        method_bindings.mb_clear_baked_meshes,
        (const Object*)this
    );
}

RID GridMap::get_bake_mesh_instance(const int64_t idx) {
    return rebel_icall_rid_int(
        method_bindings.mb_get_bake_mesh_instance,
        (const Object*)this,
        idx
    );
}

Array GridMap::get_bake_meshes() {
    return rebel_icall_array(
        method_bindings.mb_get_bake_meshes,
        (const Object*)this
    );
}

int64_t GridMap::get_cell_item(const int64_t x, const int64_t y, const int64_t z) const {
    return rebel_icall_int_int_int_int(
        method_bindings.mb_get_cell_item,
        (const Object*)this,
        x,
        y,
        z
    );
}

int64_t GridMap::get_cell_item_orientation(const int64_t x, const int64_t y, const int64_t z) const {
    return rebel_icall_int_int_int_int(
        method_bindings.mb_get_cell_item_orientation,
        (const Object*)this,
        x,
        y,
        z
    );
}

real_t GridMap::get_cell_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_cell_scale,
        (const Object*)this
    );
}

Vector3 GridMap::get_cell_size() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_cell_size,
        (const Object*)this
    );
}

bool GridMap::get_center_x() const {
    return rebel_icall_bool(
        method_bindings.mb_get_center_x,
        (const Object*)this
    );
}

bool GridMap::get_center_y() const {
    return rebel_icall_bool(
        method_bindings.mb_get_center_y,
        (const Object*)this
    );
}

bool GridMap::get_center_z() const {
    return rebel_icall_bool(
        method_bindings.mb_get_center_z,
        (const Object*)this
    );
}

int64_t GridMap::get_collision_layer() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_layer,
        (const Object*)this
    );
}

bool GridMap::get_collision_layer_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_layer_bit,
        (const Object*)this,
        bit
    );
}

int64_t GridMap::get_collision_mask() const {
    return rebel_icall_int(
        method_bindings.mb_get_collision_mask,
        (const Object*)this
    );
}

bool GridMap::get_collision_mask_bit(const int64_t bit) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_collision_mask_bit,
        (const Object*)this,
        bit
    );
}

Ref<MeshLibrary> GridMap::get_mesh_library() const {
    return Ref<MeshLibrary>::create_ref(rebel_icall_object(
        method_bindings.mb_get_mesh_library,
        (const Object*)this
    ));
}

Array GridMap::get_meshes() {
    return rebel_icall_array(
        method_bindings.mb_get_meshes,
        (const Object*)this
    );
}

int64_t GridMap::get_octant_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_octant_size,
        (const Object*)this
    );
}

bool GridMap::get_use_in_baked_light() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_in_baked_light,
        (const Object*)this
    );
}

Array GridMap::get_used_cells() const {
    return rebel_icall_array(
        method_bindings.mb_get_used_cells,
        (const Object*)this
    );
}

void GridMap::make_baked_meshes(const bool gen_lightmap_uv, const real_t lightmap_uv_texel_size) {
    rebel_icall_void_bool_float(
        method_bindings.mb_make_baked_meshes,
        (const Object*)this,
        gen_lightmap_uv,
        lightmap_uv_texel_size
    );
}

Vector3 GridMap::map_to_world(const int64_t x, const int64_t y, const int64_t z) const {
    return rebel_icall_vector3_int_int_int(
        method_bindings.mb_map_to_world,
        (const Object*)this,
        x,
        y,
        z
    );
}

void GridMap::resource_changed(const Ref<Resource> resource) {
    rebel_icall_void_object(
        method_bindings.mb_resource_changed,
        (const Object*)this,
        resource.ptr()
    );
}

void GridMap::set_cell_item(const int64_t x, const int64_t y, const int64_t z, const int64_t item, const int64_t orientation) {
    rebel_icall_void_int_int_int_int_int(
        method_bindings.mb_set_cell_item,
        (const Object*)this,
        x,
        y,
        z,
        item,
        orientation
    );
}

void GridMap::set_cell_scale(const real_t scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_cell_scale,
        (const Object*)this,
        scale
    );
}

void GridMap::set_cell_size(const Vector3 size) {
    rebel_icall_void_vector3(
        method_bindings.mb_set_cell_size,
        (const Object*)this,
        size
    );
}

void GridMap::set_center_x(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_center_x,
        (const Object*)this,
        enable
    );
}

void GridMap::set_center_y(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_center_y,
        (const Object*)this,
        enable
    );
}

void GridMap::set_center_z(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_center_z,
        (const Object*)this,
        enable
    );
}

void GridMap::set_clip(const bool enabled, const bool clipabove, const int64_t floor, const int64_t axis) {
    rebel_icall_void_bool_bool_int_int(
        method_bindings.mb_set_clip,
        (const Object*)this,
        enabled,
        clipabove,
        floor,
        axis
    );
}

void GridMap::set_collision_layer(const int64_t layer) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_layer,
        (const Object*)this,
        layer
    );
}

void GridMap::set_collision_layer_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_layer_bit,
        (const Object*)this,
        bit,
        value
    );
}

void GridMap::set_collision_mask(const int64_t mask) {
    rebel_icall_void_int(
        method_bindings.mb_set_collision_mask,
        (const Object*)this,
        mask
    );
}

void GridMap::set_collision_mask_bit(const int64_t bit, const bool value) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_collision_mask_bit,
        (const Object*)this,
        bit,
        value
    );
}

void GridMap::set_mesh_library(const Ref<MeshLibrary> mesh_library) {
    rebel_icall_void_object(
        method_bindings.mb_set_mesh_library,
        (const Object*)this,
        mesh_library.ptr()
    );
}

void GridMap::set_octant_size(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb_set_octant_size,
        (const Object*)this,
        size
    );
}

void GridMap::set_use_in_baked_light(const bool use_in_baked_light) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_in_baked_light,
        (const Object*)this,
        use_in_baked_light
    );
}

Vector3 GridMap::world_to_map(const Vector3 pos) const {
    return rebel_icall_vector3_vector3(
        method_bindings.mb_world_to_map,
        (const Object*)this,
        pos
    );
}

GridMap* GridMap::create() {
    return (GridMap*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"GridMap")()
         );
}

void GridMap::init_method_bindings() {
    method_bindings.mb__update_octants_callback =
        api->rebel_method_bind_get_method(
            "GridMap",
            "_update_octants_callback"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "GridMap",
            "clear"
        );
    method_bindings.mb_clear_baked_meshes =
        api->rebel_method_bind_get_method(
            "GridMap",
            "clear_baked_meshes"
        );
    method_bindings.mb_get_bake_mesh_instance =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_bake_mesh_instance"
        );
    method_bindings.mb_get_bake_meshes =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_bake_meshes"
        );
    method_bindings.mb_get_cell_item =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_cell_item"
        );
    method_bindings.mb_get_cell_item_orientation =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_cell_item_orientation"
        );
    method_bindings.mb_get_cell_scale =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_cell_scale"
        );
    method_bindings.mb_get_cell_size =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_cell_size"
        );
    method_bindings.mb_get_center_x =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_center_x"
        );
    method_bindings.mb_get_center_y =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_center_y"
        );
    method_bindings.mb_get_center_z =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_center_z"
        );
    method_bindings.mb_get_collision_layer =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_collision_layer"
        );
    method_bindings.mb_get_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_collision_layer_bit"
        );
    method_bindings.mb_get_collision_mask =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_collision_mask"
        );
    method_bindings.mb_get_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_collision_mask_bit"
        );
    method_bindings.mb_get_mesh_library =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_mesh_library"
        );
    method_bindings.mb_get_meshes =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_meshes"
        );
    method_bindings.mb_get_octant_size =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_octant_size"
        );
    method_bindings.mb_get_use_in_baked_light =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_use_in_baked_light"
        );
    method_bindings.mb_get_used_cells =
        api->rebel_method_bind_get_method(
            "GridMap",
            "get_used_cells"
        );
    method_bindings.mb_make_baked_meshes =
        api->rebel_method_bind_get_method(
            "GridMap",
            "make_baked_meshes"
        );
    method_bindings.mb_map_to_world =
        api->rebel_method_bind_get_method(
            "GridMap",
            "map_to_world"
        );
    method_bindings.mb_resource_changed =
        api->rebel_method_bind_get_method(
            "GridMap",
            "resource_changed"
        );
    method_bindings.mb_set_cell_item =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_cell_item"
        );
    method_bindings.mb_set_cell_scale =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_cell_scale"
        );
    method_bindings.mb_set_cell_size =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_cell_size"
        );
    method_bindings.mb_set_center_x =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_center_x"
        );
    method_bindings.mb_set_center_y =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_center_y"
        );
    method_bindings.mb_set_center_z =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_center_z"
        );
    method_bindings.mb_set_clip =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_clip"
        );
    method_bindings.mb_set_collision_layer =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_collision_layer"
        );
    method_bindings.mb_set_collision_layer_bit =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_collision_layer_bit"
        );
    method_bindings.mb_set_collision_mask =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_collision_mask"
        );
    method_bindings.mb_set_collision_mask_bit =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_collision_mask_bit"
        );
    method_bindings.mb_set_mesh_library =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_mesh_library"
        );
    method_bindings.mb_set_octant_size =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_octant_size"
        );
    method_bindings.mb_set_use_in_baked_light =
        api->rebel_method_bind_get_method(
            "GridMap",
            "set_use_in_baked_light"
        );
    method_bindings.mb_world_to_map =
        api->rebel_method_bind_get_method(
            "GridMap",
            "world_to_map"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "GridMap");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

GridMap::MethodBindings GridMap::method_bindings = {};
void* GridMap::class_tag = nullptr;
} // namespace Rebel
