// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/resourceloader.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "classes/resourceinteractiveloader.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool ResourceLoader::exists(const String path, const String type_hint) {
    return rebel_icall_bool_string_string(
        method_bindings.mb_exists,
        (const Object*)this,
        path,
        type_hint
    );
}

PoolStringArray ResourceLoader::get_dependencies(const String path) {
    return rebel_icall_poolstringarray_string(
        method_bindings.mb_get_dependencies,
        (const Object*)this,
        path
    );
}

PoolStringArray ResourceLoader::get_recognized_extensions_for_type(const String type) {
    return rebel_icall_poolstringarray_string(
        method_bindings.mb_get_recognized_extensions_for_type,
        (const Object*)this,
        type
    );
}

bool ResourceLoader::has(const String path) {
    return rebel_icall_bool_string(
        method_bindings.mb_has,
        (const Object*)this,
        path
    );
}

bool ResourceLoader::has_cached(const String path) {
    return rebel_icall_bool_string(
        method_bindings.mb_has_cached,
        (const Object*)this,
        path
    );
}

Ref<Resource> ResourceLoader::load(const String path, const String type_hint, const bool no_cache) {
    return Ref<Resource>::create_ref(rebel_icall_object_string_string_bool(
        method_bindings.mb_load,
        (const Object*)this,
        path,
        type_hint,
        no_cache
    ));
}

Ref<ResourceInteractiveLoader> ResourceLoader::load_interactive(const String path, const String type_hint) {
    return Ref<ResourceInteractiveLoader>::create_ref(rebel_icall_object_string_string(
        method_bindings.mb_load_interactive,
        (const Object*)this,
        path,
        type_hint
    ));
}

void ResourceLoader::set_abort_on_missing_resources(const bool abort) {
    rebel_icall_void_bool(
        method_bindings.mb_set_abort_on_missing_resources,
        (const Object*)this,
        abort
    );
}

ResourceLoader* ResourceLoader::singleton = nullptr;

ResourceLoader::ResourceLoader() {
    owner = api->rebel_global_get_singleton((char*) "ResourceLoader");
}

void ResourceLoader::init_method_bindings() {
    method_bindings.mb_exists =
        api->rebel_method_bind_get_method(
            "_ResourceLoader",
            "exists"
        );
    method_bindings.mb_get_dependencies =
        api->rebel_method_bind_get_method(
            "_ResourceLoader",
            "get_dependencies"
        );
    method_bindings.mb_get_recognized_extensions_for_type =
        api->rebel_method_bind_get_method(
            "_ResourceLoader",
            "get_recognized_extensions_for_type"
        );
    method_bindings.mb_has =
        api->rebel_method_bind_get_method(
            "_ResourceLoader",
            "has"
        );
    method_bindings.mb_has_cached =
        api->rebel_method_bind_get_method(
            "_ResourceLoader",
            "has_cached"
        );
    method_bindings.mb_load =
        api->rebel_method_bind_get_method(
            "_ResourceLoader",
            "load"
        );
    method_bindings.mb_load_interactive =
        api->rebel_method_bind_get_method(
            "_ResourceLoader",
            "load_interactive"
        );
    method_bindings.mb_set_abort_on_missing_resources =
        api->rebel_method_bind_get_method(
            "_ResourceLoader",
            "set_abort_on_missing_resources"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_ResourceLoader");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ResourceLoader::MethodBindings ResourceLoader::method_bindings = {};
void* ResourceLoader::class_tag = nullptr;
} // namespace Rebel
