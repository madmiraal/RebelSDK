// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MESHLIBRARY_H
#define REBEL_MESHLIBRARY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Mesh;
class NavigationMesh;
class Texture;

class MeshLibrary : public Resource {
public:
    void clear();
    void create_item(const int64_t id);
    int64_t find_item_by_name(const String name) const;
    PoolIntArray get_item_list() const;
    Ref<Mesh> get_item_mesh(const int64_t id) const;
    Transform get_item_mesh_transform(const int64_t id) const;
    String get_item_name(const int64_t id) const;
    Ref<NavigationMesh> get_item_navmesh(const int64_t id) const;
    Transform get_item_navmesh_transform(const int64_t id) const;
    Ref<Texture> get_item_preview(const int64_t id) const;
    Array get_item_shapes(const int64_t id) const;
    int64_t get_last_unused_item_id() const;
    void remove_item(const int64_t id);
    void set_item_mesh(const int64_t id, const Ref<Mesh> mesh);
    void set_item_mesh_transform(const int64_t id, const Transform mesh_transform);
    void set_item_name(const int64_t id, const String name);
    void set_item_navmesh(const int64_t id, const Ref<NavigationMesh> navmesh);
    void set_item_navmesh_transform(const int64_t id, const Transform navmesh);
    void set_item_preview(const int64_t id, const Ref<Texture> texture);
    void set_item_shapes(const int64_t id, const Array shapes);

    static MeshLibrary* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "MeshLibrary";
    }

    inline static const char* get_rebel_class_name() {
        return "MeshLibrary";
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
        rebel_method_bind* mb_create_item;
        rebel_method_bind* mb_find_item_by_name;
        rebel_method_bind* mb_get_item_list;
        rebel_method_bind* mb_get_item_mesh;
        rebel_method_bind* mb_get_item_mesh_transform;
        rebel_method_bind* mb_get_item_name;
        rebel_method_bind* mb_get_item_navmesh;
        rebel_method_bind* mb_get_item_navmesh_transform;
        rebel_method_bind* mb_get_item_preview;
        rebel_method_bind* mb_get_item_shapes;
        rebel_method_bind* mb_get_last_unused_item_id;
        rebel_method_bind* mb_remove_item;
        rebel_method_bind* mb_set_item_mesh;
        rebel_method_bind* mb_set_item_mesh_transform;
        rebel_method_bind* mb_set_item_name;
        rebel_method_bind* mb_set_item_navmesh;
        rebel_method_bind* mb_set_item_navmesh_transform;
        rebel_method_bind* mb_set_item_preview;
        rebel_method_bind* mb_set_item_shapes;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_MESHLIBRARY_H
