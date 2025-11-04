// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SURFACETOOL_H
#define REBEL_SURFACETOOL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ArrayMesh;
class Material;
class Mesh;

class SurfaceTool : public Reference {
public:
    void add_bones(const PoolIntArray bones);
    void add_color(const Color color);
    void add_index(const int64_t index);
    void add_normal(const Vector3 normal);
    void add_smooth_group(const bool smooth);
    void add_tangent(const Plane tangent);
    void add_triangle_fan(const PoolVector3Array vertices, const PoolVector2Array uvs = PoolVector2Array(), const PoolColorArray colors = PoolColorArray(), const PoolVector2Array uv2s = PoolVector2Array(), const PoolVector3Array normals = PoolVector3Array(), const Array tangents = Array());
    void add_uv(const Vector2 uv);
    void add_uv2(const Vector2 uv2);
    void add_vertex(const Vector3 vertex);
    void add_weights(const PoolRealArray weights);
    void append_from(const Ref<Mesh> existing, const int64_t surface, const Transform transform);
    void begin(const int64_t primitive);
    void clear();
    Ref<ArrayMesh> commit(const Ref<ArrayMesh> existing = nullptr, const int64_t flags = 2194432);
    Array commit_to_arrays();
    void create_from(const Ref<Mesh> existing, const int64_t surface);
    void create_from_blend_shape(const Ref<Mesh> existing, const int64_t surface, const String blend_shape);
    void deindex();
    void generate_normals(const bool flip = false);
    void generate_tangents();
    void index();
    void set_material(const Ref<Material> material);

    static SurfaceTool* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SurfaceTool";
    }

    inline static const char* get_rebel_class_name() {
        return "SurfaceTool";
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
        rebel_method_bind* mb_add_bones;
        rebel_method_bind* mb_add_color;
        rebel_method_bind* mb_add_index;
        rebel_method_bind* mb_add_normal;
        rebel_method_bind* mb_add_smooth_group;
        rebel_method_bind* mb_add_tangent;
        rebel_method_bind* mb_add_triangle_fan;
        rebel_method_bind* mb_add_uv;
        rebel_method_bind* mb_add_uv2;
        rebel_method_bind* mb_add_vertex;
        rebel_method_bind* mb_add_weights;
        rebel_method_bind* mb_append_from;
        rebel_method_bind* mb_begin;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_commit;
        rebel_method_bind* mb_commit_to_arrays;
        rebel_method_bind* mb_create_from;
        rebel_method_bind* mb_create_from_blend_shape;
        rebel_method_bind* mb_deindex;
        rebel_method_bind* mb_generate_normals;
        rebel_method_bind* mb_generate_tangents;
        rebel_method_bind* mb_index;
        rebel_method_bind* mb_set_material;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SURFACETOOL_H
