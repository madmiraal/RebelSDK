// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/bakedlightmapdata.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array BakedLightmapData::_get_user_data() const {
    return rebel_icall_array(
        method_bindings.mb__get_user_data,
        (const Object*)this
    );
}

void BakedLightmapData::_set_user_data(const Array data) {
    rebel_icall_void_array(
        method_bindings.mb__set_user_data,
        (const Object*)this,
        data
    );
}

void BakedLightmapData::add_user(const NodePath path, const Ref<Resource> lightmap, const int64_t lightmap_slice, const Rect2 lightmap_uv_rect, const int64_t instance) {
    rebel_icall_void_nodepath_object_int_rect2_int(
        method_bindings.mb_add_user,
        (const Object*)this,
        path,
        lightmap.ptr(),
        lightmap_slice,
        lightmap_uv_rect,
        instance
    );
}

void BakedLightmapData::clear_data() {
    rebel_icall_void(
        method_bindings.mb_clear_data,
        (const Object*)this
    );
}

void BakedLightmapData::clear_users() {
    rebel_icall_void(
        method_bindings.mb_clear_users,
        (const Object*)this
    );
}

AABB BakedLightmapData::get_bounds() const {
    return rebel_icall_aabb(
        method_bindings.mb_get_bounds,
        (const Object*)this
    );
}

Transform BakedLightmapData::get_cell_space_transform() const {
    return rebel_icall_transform(
        method_bindings.mb_get_cell_space_transform,
        (const Object*)this
    );
}

int64_t BakedLightmapData::get_cell_subdiv() const {
    return rebel_icall_int(
        method_bindings.mb_get_cell_subdiv,
        (const Object*)this
    );
}

real_t BakedLightmapData::get_energy() const {
    return rebel_icall_float(
        method_bindings.mb_get_energy,
        (const Object*)this
    );
}

PoolByteArray BakedLightmapData::get_octree() const {
    return rebel_icall_poolbytearray(
        method_bindings.mb_get_octree,
        (const Object*)this
    );
}

int64_t BakedLightmapData::get_user_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_user_count,
        (const Object*)this
    );
}

Ref<Resource> BakedLightmapData::get_user_lightmap(const int64_t user_idx) const {
    return Ref<Resource>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_user_lightmap,
        (const Object*)this,
        user_idx
    ));
}

NodePath BakedLightmapData::get_user_path(const int64_t user_idx) const {
    return rebel_icall_nodepath_int(
        method_bindings.mb_get_user_path,
        (const Object*)this,
        user_idx
    );
}

bool BakedLightmapData::is_interior() const {
    return rebel_icall_bool(
        method_bindings.mb_is_interior,
        (const Object*)this
    );
}

void BakedLightmapData::set_bounds(const AABB bounds) {
    rebel_icall_void_aabb(
        method_bindings.mb_set_bounds,
        (const Object*)this,
        bounds
    );
}

void BakedLightmapData::set_cell_space_transform(const Transform xform) {
    rebel_icall_void_transform(
        method_bindings.mb_set_cell_space_transform,
        (const Object*)this,
        xform
    );
}

void BakedLightmapData::set_cell_subdiv(const int64_t cell_subdiv) {
    rebel_icall_void_int(
        method_bindings.mb_set_cell_subdiv,
        (const Object*)this,
        cell_subdiv
    );
}

void BakedLightmapData::set_energy(const real_t energy) {
    rebel_icall_void_float(
        method_bindings.mb_set_energy,
        (const Object*)this,
        energy
    );
}

void BakedLightmapData::set_interior(const bool interior) {
    rebel_icall_void_bool(
        method_bindings.mb_set_interior,
        (const Object*)this,
        interior
    );
}

void BakedLightmapData::set_octree(const PoolByteArray octree) {
    rebel_icall_void_poolbytearray(
        method_bindings.mb_set_octree,
        (const Object*)this,
        octree
    );
}

BakedLightmapData* BakedLightmapData::create() {
    return (BakedLightmapData*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"BakedLightmapData")()
         );
}

void BakedLightmapData::init_method_bindings() {
    method_bindings.mb__get_user_data =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "_get_user_data"
        );
    method_bindings.mb__set_user_data =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "_set_user_data"
        );
    method_bindings.mb_add_user =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "add_user"
        );
    method_bindings.mb_clear_data =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "clear_data"
        );
    method_bindings.mb_clear_users =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "clear_users"
        );
    method_bindings.mb_get_bounds =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "get_bounds"
        );
    method_bindings.mb_get_cell_space_transform =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "get_cell_space_transform"
        );
    method_bindings.mb_get_cell_subdiv =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "get_cell_subdiv"
        );
    method_bindings.mb_get_energy =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "get_energy"
        );
    method_bindings.mb_get_octree =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "get_octree"
        );
    method_bindings.mb_get_user_count =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "get_user_count"
        );
    method_bindings.mb_get_user_lightmap =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "get_user_lightmap"
        );
    method_bindings.mb_get_user_path =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "get_user_path"
        );
    method_bindings.mb_is_interior =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "is_interior"
        );
    method_bindings.mb_set_bounds =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "set_bounds"
        );
    method_bindings.mb_set_cell_space_transform =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "set_cell_space_transform"
        );
    method_bindings.mb_set_cell_subdiv =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "set_cell_subdiv"
        );
    method_bindings.mb_set_energy =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "set_energy"
        );
    method_bindings.mb_set_interior =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "set_interior"
        );
    method_bindings.mb_set_octree =
        api->rebel_method_bind_get_method(
            "BakedLightmapData",
            "set_octree"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "BakedLightmapData");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

BakedLightmapData::MethodBindings BakedLightmapData::method_bindings = {};
void* BakedLightmapData::class_tag = nullptr;
} // namespace Rebel
