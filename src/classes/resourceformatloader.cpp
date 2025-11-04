// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/resourceformatloader.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ResourceFormatLoader::get_dependencies(const String path, const String add_types) {
    rebel_icall_void_string_string(
        method_bindings.mb_get_dependencies,
        (const Object*)this,
        path,
        add_types
    );
}

PoolStringArray ResourceFormatLoader::get_recognized_extensions() {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_recognized_extensions,
        (const Object*)this
    );
}

String ResourceFormatLoader::get_resource_type(const String path) {
    return rebel_icall_string_string(
        method_bindings.mb_get_resource_type,
        (const Object*)this,
        path
    );
}

bool ResourceFormatLoader::handles_type(const String _typename) {
    return rebel_icall_bool_string(
        method_bindings.mb_handles_type,
        (const Object*)this,
        _typename
    );
}

Variant ResourceFormatLoader::load(const String path, const String original_path) {
    return rebel_icall_variant_string_string(
        method_bindings.mb_load,
        (const Object*)this,
        path,
        original_path
    );
}

int64_t ResourceFormatLoader::rename_dependencies(const String path, const String renames) {
    return rebel_icall_int_string_string(
        method_bindings.mb_rename_dependencies,
        (const Object*)this,
        path,
        renames
    );
}

ResourceFormatLoader* ResourceFormatLoader::create() {
    return (ResourceFormatLoader*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ResourceFormatLoader")()
         );
}

void ResourceFormatLoader::init_method_bindings() {
    method_bindings.mb_get_dependencies =
        api->rebel_method_bind_get_method(
            "ResourceFormatLoader",
            "get_dependencies"
        );
    method_bindings.mb_get_recognized_extensions =
        api->rebel_method_bind_get_method(
            "ResourceFormatLoader",
            "get_recognized_extensions"
        );
    method_bindings.mb_get_resource_type =
        api->rebel_method_bind_get_method(
            "ResourceFormatLoader",
            "get_resource_type"
        );
    method_bindings.mb_handles_type =
        api->rebel_method_bind_get_method(
            "ResourceFormatLoader",
            "handles_type"
        );
    method_bindings.mb_load =
        api->rebel_method_bind_get_method(
            "ResourceFormatLoader",
            "load"
        );
    method_bindings.mb_rename_dependencies =
        api->rebel_method_bind_get_method(
            "ResourceFormatLoader",
            "rename_dependencies"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ResourceFormatLoader");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ResourceFormatLoader::MethodBindings ResourceFormatLoader::method_bindings = {};
void* ResourceFormatLoader::class_tag = nullptr;
} // namespace Rebel
