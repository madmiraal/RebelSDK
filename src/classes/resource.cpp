// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/resource.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Resource::_setup_local_to_scene() {
    rebel_icall_void(
        method_bindings.mb__setup_local_to_scene,
        (const Object*)this
    );
}

Ref<Resource> Resource::duplicate(const bool subresources) const {
    return Ref<Resource>::create_ref(rebel_icall_object_bool(
        method_bindings.mb_duplicate,
        (const Object*)this,
        subresources
    ));
}

void Resource::emit_changed() {
    rebel_icall_void(
        method_bindings.mb_emit_changed,
        (const Object*)this
    );
}

Node* Resource::get_local_scene() const {
    return (Node*)rebel_icall_object(
        method_bindings.mb_get_local_scene,
        (const Object*)this
    );
}

String Resource::get_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_name,
        (const Object*)this
    );
}

String Resource::get_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_path,
        (const Object*)this
    );
}

RID Resource::get_rid() const {
    return rebel_icall_rid(
        method_bindings.mb_get_rid,
        (const Object*)this
    );
}

bool Resource::is_local_to_scene() const {
    return rebel_icall_bool(
        method_bindings.mb_is_local_to_scene,
        (const Object*)this
    );
}

void Resource::set_local_to_scene(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_local_to_scene,
        (const Object*)this,
        enable
    );
}

void Resource::set_name(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_name,
        (const Object*)this,
        name
    );
}

void Resource::set_path(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_set_path,
        (const Object*)this,
        path
    );
}

void Resource::setup_local_to_scene() {
    rebel_icall_void(
        method_bindings.mb_setup_local_to_scene,
        (const Object*)this
    );
}

void Resource::take_over_path(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_take_over_path,
        (const Object*)this,
        path
    );
}

Resource* Resource::create() {
    return (Resource*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Resource")()
         );
}

void Resource::init_method_bindings() {
    method_bindings.mb__setup_local_to_scene =
        api->rebel_method_bind_get_method(
            "Resource",
            "_setup_local_to_scene"
        );
    method_bindings.mb_duplicate =
        api->rebel_method_bind_get_method(
            "Resource",
            "duplicate"
        );
    method_bindings.mb_emit_changed =
        api->rebel_method_bind_get_method(
            "Resource",
            "emit_changed"
        );
    method_bindings.mb_get_local_scene =
        api->rebel_method_bind_get_method(
            "Resource",
            "get_local_scene"
        );
    method_bindings.mb_get_name =
        api->rebel_method_bind_get_method(
            "Resource",
            "get_name"
        );
    method_bindings.mb_get_path =
        api->rebel_method_bind_get_method(
            "Resource",
            "get_path"
        );
    method_bindings.mb_get_rid =
        api->rebel_method_bind_get_method(
            "Resource",
            "get_rid"
        );
    method_bindings.mb_is_local_to_scene =
        api->rebel_method_bind_get_method(
            "Resource",
            "is_local_to_scene"
        );
    method_bindings.mb_set_local_to_scene =
        api->rebel_method_bind_get_method(
            "Resource",
            "set_local_to_scene"
        );
    method_bindings.mb_set_name =
        api->rebel_method_bind_get_method(
            "Resource",
            "set_name"
        );
    method_bindings.mb_set_path =
        api->rebel_method_bind_get_method(
            "Resource",
            "set_path"
        );
    method_bindings.mb_setup_local_to_scene =
        api->rebel_method_bind_get_method(
            "Resource",
            "setup_local_to_scene"
        );
    method_bindings.mb_take_over_path =
        api->rebel_method_bind_get_method(
            "Resource",
            "take_over_path"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Resource");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Resource::MethodBindings Resource::method_bindings = {};
void* Resource::class_tag = nullptr;
} // namespace Rebel
