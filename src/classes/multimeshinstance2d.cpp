// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/multimeshinstance2d.h"

#include "classes/icalls.h"
#include "classes/multimesh.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<MultiMesh> MultiMeshInstance2D::get_multimesh() const {
    return Ref<MultiMesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_multimesh,
        (const Object*)this
    ));
}

Ref<Texture> MultiMeshInstance2D::get_normal_map() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_normal_map,
        (const Object*)this
    ));
}

Ref<Texture> MultiMeshInstance2D::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

void MultiMeshInstance2D::set_multimesh(const Ref<MultiMesh> multimesh) {
    rebel_icall_void_object(
        method_bindings.mb_set_multimesh,
        (const Object*)this,
        multimesh.ptr()
    );
}

void MultiMeshInstance2D::set_normal_map(const Ref<Texture> normal_map) {
    rebel_icall_void_object(
        method_bindings.mb_set_normal_map,
        (const Object*)this,
        normal_map.ptr()
    );
}

void MultiMeshInstance2D::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

MultiMeshInstance2D* MultiMeshInstance2D::create() {
    return (MultiMeshInstance2D*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MultiMeshInstance2D")()
         );
}

void MultiMeshInstance2D::init_method_bindings() {
    method_bindings.mb_get_multimesh =
        api->rebel_method_bind_get_method(
            "MultiMeshInstance2D",
            "get_multimesh"
        );
    method_bindings.mb_get_normal_map =
        api->rebel_method_bind_get_method(
            "MultiMeshInstance2D",
            "get_normal_map"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "MultiMeshInstance2D",
            "get_texture"
        );
    method_bindings.mb_set_multimesh =
        api->rebel_method_bind_get_method(
            "MultiMeshInstance2D",
            "set_multimesh"
        );
    method_bindings.mb_set_normal_map =
        api->rebel_method_bind_get_method(
            "MultiMeshInstance2D",
            "set_normal_map"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "MultiMeshInstance2D",
            "set_texture"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MultiMeshInstance2D");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MultiMeshInstance2D::MethodBindings MultiMeshInstance2D::method_bindings = {};
void* MultiMeshInstance2D::class_tag = nullptr;
} // namespace Rebel
