// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/resourcepreloader.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array ResourcePreloader::_get_resources() const {
    return rebel_icall_array(
        method_bindings.mb__get_resources,
        (const Object*)this
    );
}

void ResourcePreloader::_set_resources(const Array arg0) {
    rebel_icall_void_array(
        method_bindings.mb__set_resources,
        (const Object*)this,
        arg0
    );
}

void ResourcePreloader::add_resource(const String name, const Ref<Resource> resource) {
    rebel_icall_void_string_object(
        method_bindings.mb_add_resource,
        (const Object*)this,
        name,
        resource.ptr()
    );
}

Ref<Resource> ResourcePreloader::get_resource(const String name) const {
    return Ref<Resource>::create_ref(rebel_icall_object_string(
        method_bindings.mb_get_resource,
        (const Object*)this,
        name
    ));
}

PoolStringArray ResourcePreloader::get_resource_list() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_resource_list,
        (const Object*)this
    );
}

bool ResourcePreloader::has_resource(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_resource,
        (const Object*)this,
        name
    );
}

void ResourcePreloader::remove_resource(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_remove_resource,
        (const Object*)this,
        name
    );
}

void ResourcePreloader::rename_resource(const String name, const String newname) {
    rebel_icall_void_string_string(
        method_bindings.mb_rename_resource,
        (const Object*)this,
        name,
        newname
    );
}

ResourcePreloader* ResourcePreloader::create() {
    return (ResourcePreloader*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ResourcePreloader")()
         );
}

void ResourcePreloader::init_method_bindings() {
    method_bindings.mb__get_resources =
        api->rebel_method_bind_get_method(
            "ResourcePreloader",
            "_get_resources"
        );
    method_bindings.mb__set_resources =
        api->rebel_method_bind_get_method(
            "ResourcePreloader",
            "_set_resources"
        );
    method_bindings.mb_add_resource =
        api->rebel_method_bind_get_method(
            "ResourcePreloader",
            "add_resource"
        );
    method_bindings.mb_get_resource =
        api->rebel_method_bind_get_method(
            "ResourcePreloader",
            "get_resource"
        );
    method_bindings.mb_get_resource_list =
        api->rebel_method_bind_get_method(
            "ResourcePreloader",
            "get_resource_list"
        );
    method_bindings.mb_has_resource =
        api->rebel_method_bind_get_method(
            "ResourcePreloader",
            "has_resource"
        );
    method_bindings.mb_remove_resource =
        api->rebel_method_bind_get_method(
            "ResourcePreloader",
            "remove_resource"
        );
    method_bindings.mb_rename_resource =
        api->rebel_method_bind_get_method(
            "ResourcePreloader",
            "rename_resource"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ResourcePreloader");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ResourcePreloader::MethodBindings ResourcePreloader::method_bindings = {};
void* ResourcePreloader::class_tag = nullptr;
} // namespace Rebel
