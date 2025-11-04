// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MESHINSTANCE2D_H
#define REBEL_MESHINSTANCE2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Mesh;
class Texture;

class MeshInstance2D : public Node2D {
public:
    Ref<Mesh> get_mesh() const;
    Ref<Texture> get_normal_map() const;
    Ref<Texture> get_texture() const;
    void set_mesh(const Ref<Mesh> mesh);
    void set_normal_map(const Ref<Texture> normal_map);
    void set_texture(const Ref<Texture> texture);

    static MeshInstance2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "MeshInstance2D";
    }

    inline static const char* get_rebel_class_name() {
        return "MeshInstance2D";
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
        rebel_method_bind* mb_get_mesh;
        rebel_method_bind* mb_get_normal_map;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_set_mesh;
        rebel_method_bind* mb_set_normal_map;
        rebel_method_bind* mb_set_texture;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_MESHINSTANCE2D_H
