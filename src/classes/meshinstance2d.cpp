// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/meshinstance2d.h"

#include "classes/icalls.h"
#include "classes/mesh.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Mesh> MeshInstance2D::get_mesh() const {
    return Ref<Mesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_mesh,
        (const Object*)this
    ));
}

Ref<Texture> MeshInstance2D::get_normal_map() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_normal_map,
        (const Object*)this
    ));
}

Ref<Texture> MeshInstance2D::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

void MeshInstance2D::set_mesh(const Ref<Mesh> mesh) {
    rebel_icall_void_object(
        method_bindings.mb_set_mesh,
        (const Object*)this,
        mesh.ptr()
    );
}

void MeshInstance2D::set_normal_map(const Ref<Texture> normal_map) {
    rebel_icall_void_object(
        method_bindings.mb_set_normal_map,
        (const Object*)this,
        normal_map.ptr()
    );
}

void MeshInstance2D::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

MeshInstance2D* MeshInstance2D::create() {
    return (MeshInstance2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MeshInstance2D")()
         );
}

void MeshInstance2D::init_method_bindings() {
    method_bindings.mb_get_mesh =
        api->rebel_method_bind_get_method(
            "MeshInstance2D",
            "get_mesh"
        );
    method_bindings.mb_get_normal_map =
        api->rebel_method_bind_get_method(
            "MeshInstance2D",
            "get_normal_map"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "MeshInstance2D",
            "get_texture"
        );
    method_bindings.mb_set_mesh =
        api->rebel_method_bind_get_method(
            "MeshInstance2D",
            "set_mesh"
        );
    method_bindings.mb_set_normal_map =
        api->rebel_method_bind_get_method(
            "MeshInstance2D",
            "set_normal_map"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "MeshInstance2D",
            "set_texture"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MeshInstance2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MeshInstance2D::MethodBindings MeshInstance2D::method_bindings = {};
void* MeshInstance2D::class_tag = nullptr;
} // namespace Rebel
