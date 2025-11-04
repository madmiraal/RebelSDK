// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLTFMESH_H
#define REBEL_GLTFMESH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ArrayMesh;

class GLTFMesh : public Resource {
public:
    PoolRealArray get_blend_weights();
    Array get_instance_materials();
    Ref<ArrayMesh> get_mesh();
    void set_blend_weights(const PoolRealArray blend_weights);
    void set_instance_materials(const Array instance_materials);
    void set_mesh(const Ref<ArrayMesh> mesh);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GLTFMesh";
    }

    inline static const char* get_rebel_class_name() {
        return "GLTFMesh";
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
        rebel_method_bind* mb_get_blend_weights;
        rebel_method_bind* mb_get_instance_materials;
        rebel_method_bind* mb_get_mesh;
        rebel_method_bind* mb_set_blend_weights;
        rebel_method_bind* mb_set_instance_materials;
        rebel_method_bind* mb_set_mesh;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GLTFMESH_H
