// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PRIMITIVEMESH_H
#define REBEL_PRIMITIVEMESH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/mesh.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Material;

class PrimitiveMesh : public Mesh {
public:
    void _update() const;
    AABB get_custom_aabb() const;
    bool get_flip_faces() const;
    Ref<Material> get_material() const;
    Array get_mesh_arrays() const;
    void set_custom_aabb(const AABB aabb);
    void set_flip_faces(const bool flip_faces);
    void set_material(const Ref<Material> material);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PrimitiveMesh";
    }

    inline static const char* get_rebel_class_name() {
        return "PrimitiveMesh";
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
        rebel_method_bind* mb__update;
        rebel_method_bind* mb_get_custom_aabb;
        rebel_method_bind* mb_get_flip_faces;
        rebel_method_bind* mb_get_material;
        rebel_method_bind* mb_get_mesh_arrays;
        rebel_method_bind* mb_set_custom_aabb;
        rebel_method_bind* mb_set_flip_faces;
        rebel_method_bind* mb_set_material;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PRIMITIVEMESH_H
