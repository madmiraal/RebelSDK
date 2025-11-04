// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CSGMESH_H
#define REBEL_CSGMESH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/csgprimitive.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Material;
class Mesh;

class CSGMesh : public CSGPrimitive {
public:
    void _mesh_changed();
    Ref<Material> get_material() const;
    Ref<Mesh> get_mesh();
    void set_material(const Ref<Material> material);
    void set_mesh(const Ref<Mesh> mesh);

    static CSGMesh* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CSGMesh";
    }

    inline static const char* get_rebel_class_name() {
        return "CSGMesh";
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
        rebel_method_bind* mb_get_material;
        rebel_method_bind* mb_get_mesh;
        rebel_method_bind* mb_set_material;
        rebel_method_bind* mb_set_mesh;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CSGMESH_H
