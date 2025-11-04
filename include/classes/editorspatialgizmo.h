// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORSPATIALGIZMO_H
#define REBEL_EDITORSPATIALGIZMO_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatialgizmo.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Camera;
class EditorSpatialGizmoPlugin;
class Material;
class Mesh;
class Node;
class SkinReference;
class Spatial;
class TriangleMesh;

class EditorSpatialGizmo : public SpatialGizmo {
public:
    void add_collision_segments(const PoolVector3Array segments);
    void add_collision_triangles(const Ref<TriangleMesh> triangles);
    void add_handles(const PoolVector3Array handles, const Ref<Material> material, const bool billboard = false, const bool secondary = false);
    void add_lines(const PoolVector3Array lines, const Ref<Material> material, const bool billboard = false, const Color modulate = Color(1,1,1,1));
    void add_mesh(const Ref<Mesh> mesh, const bool billboard = false, const Ref<SkinReference> skeleton = nullptr, const Ref<Material> material = nullptr);
    void add_unscaled_billboard(const Ref<Material> material, const real_t default_scale = 1, const Color modulate = Color(1,1,1,1));
    void clear();
    void commit_handle(const int64_t index, const Variant restore, const bool cancel);
    String get_handle_name(const int64_t index);
    Variant get_handle_value(const int64_t index);
    Ref<EditorSpatialGizmoPlugin> get_plugin() const;
    Spatial* get_spatial_node() const;
    bool is_handle_highlighted(const int64_t index);
    void redraw();
    void set_handle(const int64_t index, const Camera* camera, const Vector2 point);
    void set_hidden(const bool hidden);
    void set_spatial_node(const Node* node);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorSpatialGizmo";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorSpatialGizmo";
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
        rebel_method_bind* mb_add_collision_segments;
        rebel_method_bind* mb_add_collision_triangles;
        rebel_method_bind* mb_add_handles;
        rebel_method_bind* mb_add_lines;
        rebel_method_bind* mb_add_mesh;
        rebel_method_bind* mb_add_unscaled_billboard;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_commit_handle;
        rebel_method_bind* mb_get_handle_name;
        rebel_method_bind* mb_get_handle_value;
        rebel_method_bind* mb_get_plugin;
        rebel_method_bind* mb_get_spatial_node;
        rebel_method_bind* mb_is_handle_highlighted;
        rebel_method_bind* mb_redraw;
        rebel_method_bind* mb_set_handle;
        rebel_method_bind* mb_set_hidden;
        rebel_method_bind* mb_set_spatial_node;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORSPATIALGIZMO_H
