// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MESHINSTANCE_H
#define REBEL_MESHINSTANCE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/geometryinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Material;
class Mesh;
class Skin;

class MeshInstance : public GeometryInstance {
public:
    void _mesh_changed();
    void _update_skinning();
    void create_convex_collision(const bool clean = true, const bool simplify = false);
    void create_debug_tangents();
    void create_multiple_convex_collisions();
    void create_trimesh_collision();
    Ref<Material> get_active_material(const int64_t surface) const;
    Ref<Mesh> get_mesh() const;
    NodePath get_skeleton_path();
    Ref<Skin> get_skin() const;
    Ref<Material> get_surface_material(const int64_t surface) const;
    int64_t get_surface_material_count() const;
    bool is_software_skinning_transform_normals_enabled() const;
    void set_mesh(const Ref<Mesh> mesh);
    void set_skeleton_path(const NodePath skeleton_path);
    void set_skin(const Ref<Skin> skin);
    void set_software_skinning_transform_normals(const bool enabled);
    void set_surface_material(const int64_t surface, const Ref<Material> material);

    static MeshInstance* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "MeshInstance";
    }

    inline static const char* get_rebel_class_name() {
        return "MeshInstance";
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
        rebel_method_bind* mb__mesh_changed;
        rebel_method_bind* mb__update_skinning;
        rebel_method_bind* mb_create_convex_collision;
        rebel_method_bind* mb_create_debug_tangents;
        rebel_method_bind* mb_create_multiple_convex_collisions;
        rebel_method_bind* mb_create_trimesh_collision;
        rebel_method_bind* mb_get_active_material;
        rebel_method_bind* mb_get_mesh;
        rebel_method_bind* mb_get_skeleton_path;
        rebel_method_bind* mb_get_skin;
        rebel_method_bind* mb_get_surface_material;
        rebel_method_bind* mb_get_surface_material_count;
        rebel_method_bind* mb_is_software_skinning_transform_normals_enabled;
        rebel_method_bind* mb_set_mesh;
        rebel_method_bind* mb_set_skeleton_path;
        rebel_method_bind* mb_set_skin;
        rebel_method_bind* mb_set_software_skinning_transform_normals;
        rebel_method_bind* mb_set_surface_material;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_MESHINSTANCE_H
