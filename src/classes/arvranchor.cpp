// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/arvranchor.h"

#include "classes/icalls.h"
#include "classes/mesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t ARVRAnchor::get_anchor_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_anchor_id,
        (const Object*)this
    );
}

String ARVRAnchor::get_anchor_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_anchor_name,
        (const Object*)this
    );
}

bool ARVRAnchor::get_is_active() const {
    return rebel_icall_bool(
        method_bindings.mb_get_is_active,
        (const Object*)this
    );
}

Ref<Mesh> ARVRAnchor::get_mesh() const {
    return Ref<Mesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_mesh,
        (const Object*)this
    ));
}

Plane ARVRAnchor::get_plane() const {
    return rebel_icall_plane(
        method_bindings.mb_get_plane,
        (const Object*)this
    );
}

Vector3 ARVRAnchor::get_size() const {
    return rebel_icall_vector3(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

void ARVRAnchor::set_anchor_id(const int64_t anchor_id) {
    rebel_icall_void_int(
        method_bindings.mb_set_anchor_id,
        (const Object*)this,
        anchor_id
    );
}

ARVRAnchor* ARVRAnchor::create() {
    return (ARVRAnchor*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ARVRAnchor")()
         );
}

void ARVRAnchor::init_method_bindings() {
    method_bindings.mb_get_anchor_id =
        api->rebel_method_bind_get_method(
            "ARVRAnchor",
            "get_anchor_id"
        );
    method_bindings.mb_get_anchor_name =
        api->rebel_method_bind_get_method(
            "ARVRAnchor",
            "get_anchor_name"
        );
    method_bindings.mb_get_is_active =
        api->rebel_method_bind_get_method(
            "ARVRAnchor",
            "get_is_active"
        );
    method_bindings.mb_get_mesh =
        api->rebel_method_bind_get_method(
            "ARVRAnchor",
            "get_mesh"
        );
    method_bindings.mb_get_plane =
        api->rebel_method_bind_get_method(
            "ARVRAnchor",
            "get_plane"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "ARVRAnchor",
            "get_size"
        );
    method_bindings.mb_set_anchor_id =
        api->rebel_method_bind_get_method(
            "ARVRAnchor",
            "set_anchor_id"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ARVRAnchor");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ARVRAnchor::MethodBindings ARVRAnchor::method_bindings = {};
void* ARVRAnchor::class_tag = nullptr;
} // namespace Rebel
