// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_BAKEDLIGHTMAPDATA_H
#define REBEL_BAKEDLIGHTMAPDATA_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class BakedLightmapData : public Resource {
public:
    Array _get_user_data() const;
    void _set_user_data(const Array data);
    void add_user(const NodePath path, const Ref<Resource> lightmap, const int64_t lightmap_slice, const Rect2 lightmap_uv_rect, const int64_t instance);
    void clear_data();
    void clear_users();
    AABB get_bounds() const;
    Transform get_cell_space_transform() const;
    int64_t get_cell_subdiv() const;
    real_t get_energy() const;
    PoolByteArray get_octree() const;
    int64_t get_user_count() const;
    Ref<Resource> get_user_lightmap(const int64_t user_idx) const;
    NodePath get_user_path(const int64_t user_idx) const;
    bool is_interior() const;
    void set_bounds(const AABB bounds);
    void set_cell_space_transform(const Transform xform);
    void set_cell_subdiv(const int64_t cell_subdiv);
    void set_energy(const real_t energy);
    void set_interior(const bool interior);
    void set_octree(const PoolByteArray octree);

    static BakedLightmapData* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "BakedLightmapData";
    }

    inline static const char* get_rebel_class_name() {
        return "BakedLightmapData";
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
        rebel_method_bind* mb__get_user_data;
        rebel_method_bind* mb__set_user_data;
        rebel_method_bind* mb_add_user;
        rebel_method_bind* mb_clear_data;
        rebel_method_bind* mb_clear_users;
        rebel_method_bind* mb_get_bounds;
        rebel_method_bind* mb_get_cell_space_transform;
        rebel_method_bind* mb_get_cell_subdiv;
        rebel_method_bind* mb_get_energy;
        rebel_method_bind* mb_get_octree;
        rebel_method_bind* mb_get_user_count;
        rebel_method_bind* mb_get_user_lightmap;
        rebel_method_bind* mb_get_user_path;
        rebel_method_bind* mb_is_interior;
        rebel_method_bind* mb_set_bounds;
        rebel_method_bind* mb_set_cell_space_transform;
        rebel_method_bind* mb_set_cell_subdiv;
        rebel_method_bind* mb_set_energy;
        rebel_method_bind* mb_set_interior;
        rebel_method_bind* mb_set_octree;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_BAKEDLIGHTMAPDATA_H
