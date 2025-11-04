// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MESHDATATOOL_H
#define REBEL_MESHDATATOOL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ArrayMesh;
class Material;

class MeshDataTool : public Reference {
public:
    void clear();
    Error commit_to_surface(const Ref<ArrayMesh> mesh);
    Error create_from_surface(const Ref<ArrayMesh> mesh, const int64_t surface);
    int64_t get_edge_count() const;
    PoolIntArray get_edge_faces(const int64_t idx) const;
    Variant get_edge_meta(const int64_t idx) const;
    int64_t get_edge_vertex(const int64_t idx, const int64_t vertex) const;
    int64_t get_face_count() const;
    int64_t get_face_edge(const int64_t idx, const int64_t edge) const;
    Variant get_face_meta(const int64_t idx) const;
    Vector3 get_face_normal(const int64_t idx) const;
    int64_t get_face_vertex(const int64_t idx, const int64_t vertex) const;
    int64_t get_format() const;
    Ref<Material> get_material() const;
    Vector3 get_vertex(const int64_t idx) const;
    PoolIntArray get_vertex_bones(const int64_t idx) const;
    Color get_vertex_color(const int64_t idx) const;
    int64_t get_vertex_count() const;
    PoolIntArray get_vertex_edges(const int64_t idx) const;
    PoolIntArray get_vertex_faces(const int64_t idx) const;
    Variant get_vertex_meta(const int64_t idx) const;
    Vector3 get_vertex_normal(const int64_t idx) const;
    Plane get_vertex_tangent(const int64_t idx) const;
    Vector2 get_vertex_uv(const int64_t idx) const;
    Vector2 get_vertex_uv2(const int64_t idx) const;
    PoolRealArray get_vertex_weights(const int64_t idx) const;
    void set_edge_meta(const int64_t idx, const Variant meta);
    void set_face_meta(const int64_t idx, const Variant meta);
    void set_material(const Ref<Material> material);
    void set_vertex(const int64_t idx, const Vector3 vertex);
    void set_vertex_bones(const int64_t idx, const PoolIntArray bones);
    void set_vertex_color(const int64_t idx, const Color color);
    void set_vertex_meta(const int64_t idx, const Variant meta);
    void set_vertex_normal(const int64_t idx, const Vector3 normal);
    void set_vertex_tangent(const int64_t idx, const Plane tangent);
    void set_vertex_uv(const int64_t idx, const Vector2 uv);
    void set_vertex_uv2(const int64_t idx, const Vector2 uv2);
    void set_vertex_weights(const int64_t idx, const PoolRealArray weights);

    static MeshDataTool* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "MeshDataTool";
    }

    inline static const char* get_rebel_class_name() {
        return "MeshDataTool";
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
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_commit_to_surface;
        rebel_method_bind* mb_create_from_surface;
        rebel_method_bind* mb_get_edge_count;
        rebel_method_bind* mb_get_edge_faces;
        rebel_method_bind* mb_get_edge_meta;
        rebel_method_bind* mb_get_edge_vertex;
        rebel_method_bind* mb_get_face_count;
        rebel_method_bind* mb_get_face_edge;
        rebel_method_bind* mb_get_face_meta;
        rebel_method_bind* mb_get_face_normal;
        rebel_method_bind* mb_get_face_vertex;
        rebel_method_bind* mb_get_format;
        rebel_method_bind* mb_get_material;
        rebel_method_bind* mb_get_vertex;
        rebel_method_bind* mb_get_vertex_bones;
        rebel_method_bind* mb_get_vertex_color;
        rebel_method_bind* mb_get_vertex_count;
        rebel_method_bind* mb_get_vertex_edges;
        rebel_method_bind* mb_get_vertex_faces;
        rebel_method_bind* mb_get_vertex_meta;
        rebel_method_bind* mb_get_vertex_normal;
        rebel_method_bind* mb_get_vertex_tangent;
        rebel_method_bind* mb_get_vertex_uv;
        rebel_method_bind* mb_get_vertex_uv2;
        rebel_method_bind* mb_get_vertex_weights;
        rebel_method_bind* mb_set_edge_meta;
        rebel_method_bind* mb_set_face_meta;
        rebel_method_bind* mb_set_material;
        rebel_method_bind* mb_set_vertex;
        rebel_method_bind* mb_set_vertex_bones;
        rebel_method_bind* mb_set_vertex_color;
        rebel_method_bind* mb_set_vertex_meta;
        rebel_method_bind* mb_set_vertex_normal;
        rebel_method_bind* mb_set_vertex_tangent;
        rebel_method_bind* mb_set_vertex_uv;
        rebel_method_bind* mb_set_vertex_uv2;
        rebel_method_bind* mb_set_vertex_weights;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_MESHDATATOOL_H
