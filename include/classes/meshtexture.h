// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MESHTEXTURE_H
#define REBEL_MESHTEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/texture.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Mesh;

class MeshTexture : public Texture {
public:
    Ref<Texture> get_base_texture() const;
    Vector2 get_image_size() const;
    Ref<Mesh> get_mesh() const;
    void set_base_texture(const Ref<Texture> texture);
    void set_image_size(const Vector2 size);
    void set_mesh(const Ref<Mesh> mesh);

    static MeshTexture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "MeshTexture";
    }

    inline static const char* get_rebel_class_name() {
        return "MeshTexture";
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
        rebel_method_bind* mb_get_base_texture;
        rebel_method_bind* mb_get_image_size;
        rebel_method_bind* mb_get_mesh;
        rebel_method_bind* mb_set_base_texture;
        rebel_method_bind* mb_set_image_size;
        rebel_method_bind* mb_set_mesh;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_MESHTEXTURE_H
