// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/navigationmeshinstance.h"

#include "classes/icalls.h"
#include "classes/navigationmesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<NavigationMesh> NavigationMeshInstance::get_navigation_mesh() const {
    return Ref<NavigationMesh>::create_ref(rebel_icall_object(
        method_bindings.mb_get_navigation_mesh,
        (const Object*)this
    ));
}

bool NavigationMeshInstance::is_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_enabled,
        (const Object*)this
    );
}

void NavigationMeshInstance::set_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_enabled,
        (const Object*)this,
        enabled
    );
}

void NavigationMeshInstance::set_navigation_mesh(const Ref<NavigationMesh> navmesh) {
    rebel_icall_void_object(
        method_bindings.mb_set_navigation_mesh,
        (const Object*)this,
        navmesh.ptr()
    );
}

NavigationMeshInstance* NavigationMeshInstance::create() {
    return (NavigationMeshInstance*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"NavigationMeshInstance")()
         );
}

void NavigationMeshInstance::init_method_bindings() {
    method_bindings.mb_get_navigation_mesh =
        api->rebel_method_bind_get_method(
            "NavigationMeshInstance",
            "get_navigation_mesh"
        );
    method_bindings.mb_is_enabled =
        api->rebel_method_bind_get_method(
            "NavigationMeshInstance",
            "is_enabled"
        );
    method_bindings.mb_set_enabled =
        api->rebel_method_bind_get_method(
            "NavigationMeshInstance",
            "set_enabled"
        );
    method_bindings.mb_set_navigation_mesh =
        api->rebel_method_bind_get_method(
            "NavigationMeshInstance",
            "set_navigation_mesh"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "NavigationMeshInstance");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

NavigationMeshInstance::MethodBindings NavigationMeshInstance::method_bindings = {};
void* NavigationMeshInstance::class_tag = nullptr;
} // namespace Rebel
