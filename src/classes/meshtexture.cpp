// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/meshtexture.h"

#include "classes/icalls.h"
#include "classes/mesh.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Texture> MeshTexture::get_base_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_base_texture,
        (const Object*)this
    ));
}

Vector2 MeshTexture::get_image_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_image_size,
        (const Object*)this
    );
}

Ref<Mesh> MeshTexture::get_mesh() const {
    return Ref<Mesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_mesh,
        (const Object*)this
    ));
}

void MeshTexture::set_base_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_base_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void MeshTexture::set_image_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_image_size,
        (const Object*)this,
        size
    );
}

void MeshTexture::set_mesh(const Ref<Mesh> mesh) {
    rebel_icall_void_object(
        method_bindings.mb_set_mesh,
        (const Object*)this,
        mesh.ptr()
    );
}

MeshTexture* MeshTexture::create() {
    return (MeshTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MeshTexture")()
         );
}

void MeshTexture::init_method_bindings() {
    method_bindings.mb_get_base_texture =
        api->rebel_method_bind_get_method(
            "MeshTexture",
            "get_base_texture"
        );
    method_bindings.mb_get_image_size =
        api->rebel_method_bind_get_method(
            "MeshTexture",
            "get_image_size"
        );
    method_bindings.mb_get_mesh =
        api->rebel_method_bind_get_method(
            "MeshTexture",
            "get_mesh"
        );
    method_bindings.mb_set_base_texture =
        api->rebel_method_bind_get_method(
            "MeshTexture",
            "set_base_texture"
        );
    method_bindings.mb_set_image_size =
        api->rebel_method_bind_get_method(
            "MeshTexture",
            "set_image_size"
        );
    method_bindings.mb_set_mesh =
        api->rebel_method_bind_get_method(
            "MeshTexture",
            "set_mesh"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MeshTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MeshTexture::MethodBindings MeshTexture::method_bindings = {};
void* MeshTexture::class_tag = nullptr;
} // namespace Rebel
