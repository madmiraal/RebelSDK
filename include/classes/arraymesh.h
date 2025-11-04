// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ARRAYMESH_H
#define REBEL_ARRAYMESH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/mesh.h"
#include "classes/mesh.h"
#include "classes/mesh.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ArrayMesh : public Mesh {
public:
    enum ArrayFormat {
        ARRAY_FORMAT_VERTEX = 1,
        ARRAY_FORMAT_NORMAL = 2,
        ARRAY_FORMAT_TANGENT = 4,
        ARRAY_FORMAT_COLOR = 8,
        ARRAY_FORMAT_TEX_UV = 16,
        ARRAY_FORMAT_TEX_UV2 = 32,
        ARRAY_FORMAT_BONES = 64,
        ARRAY_FORMAT_WEIGHTS = 128,
        ARRAY_FORMAT_INDEX = 256,
    };

    enum ArrayType {
        ARRAY_VERTEX = 0,
        ARRAY_NORMAL = 1,
        ARRAY_TANGENT = 2,
        ARRAY_COLOR = 3,
        ARRAY_TEX_UV = 4,
        ARRAY_TEX_UV2 = 5,
        ARRAY_BONES = 6,
        ARRAY_WEIGHTS = 7,
        ARRAY_INDEX = 8,
        ARRAY_MAX = 9,
    };

    static const int ARRAY_WEIGHTS_SIZE = 4;
    static const int NO_INDEX_ARRAY = -1;

    void add_blend_shape(const String name);
    void add_surface_from_arrays(const int64_t primitive, const Array arrays, const Array blend_shapes = Array(), const int64_t compress_flags = 2194432);
    void clear_blend_shapes();
    void clear_surfaces();
    int64_t get_blend_shape_count() const;
    Mesh::BlendShapeMode get_blend_shape_mode() const;
    String get_blend_shape_name(const int64_t index) const;
    AABB get_custom_aabb() const;
    Error lightmap_unwrap(const Transform transform, const real_t texel_size);
    void regen_normalmaps();
    void set_blend_shape_mode(const int64_t mode);
    void set_blend_shape_name(const int64_t index, const String name);
    void set_custom_aabb(const AABB aabb);
    int64_t surface_find_by_name(const String name) const;
    int64_t surface_get_array_index_len(const int64_t surf_idx) const;
    int64_t surface_get_array_len(const int64_t surf_idx) const;
    int64_t surface_get_format(const int64_t surf_idx) const;
    String surface_get_name(const int64_t surf_idx) const;
    Mesh::PrimitiveType surface_get_primitive_type(const int64_t surf_idx) const;
    void surface_remove(const int64_t surf_idx);
    void surface_set_name(const int64_t surf_idx, const String name);
    void surface_update_region(const int64_t surf_idx, const int64_t offset, const PoolByteArray data);

    static ArrayMesh* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ArrayMesh";
    }

    inline static const char* get_rebel_class_name() {
        return "ArrayMesh";
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
        rebel_method_bind* mb_add_blend_shape;
        rebel_method_bind* mb_add_surface_from_arrays;
        rebel_method_bind* mb_clear_blend_shapes;
        rebel_method_bind* mb_clear_surfaces;
        rebel_method_bind* mb_get_blend_shape_count;
        rebel_method_bind* mb_get_blend_shape_mode;
        rebel_method_bind* mb_get_blend_shape_name;
        rebel_method_bind* mb_get_custom_aabb;
        rebel_method_bind* mb_lightmap_unwrap;
        rebel_method_bind* mb_regen_normalmaps;
        rebel_method_bind* mb_set_blend_shape_mode;
        rebel_method_bind* mb_set_blend_shape_name;
        rebel_method_bind* mb_set_custom_aabb;
        rebel_method_bind* mb_surface_find_by_name;
        rebel_method_bind* mb_surface_get_array_index_len;
        rebel_method_bind* mb_surface_get_array_len;
        rebel_method_bind* mb_surface_get_format;
        rebel_method_bind* mb_surface_get_name;
        rebel_method_bind* mb_surface_get_primitive_type;
        rebel_method_bind* mb_surface_remove;
        rebel_method_bind* mb_surface_set_name;
        rebel_method_bind* mb_surface_update_region;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ARRAYMESH_H
