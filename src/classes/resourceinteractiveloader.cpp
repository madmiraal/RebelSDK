// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/resourceinteractiveloader.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Resource> ResourceInteractiveLoader::get_resource() {
    return Ref<Resource>::create_ref(rebel_icall_object(
        method_bindings.mb_get_resource,
        (const Object*)this
    ));
}

int64_t ResourceInteractiveLoader::get_stage() const {
    return rebel_icall_int(
        method_bindings.mb_get_stage,
        (const Object*)this
    );
}

int64_t ResourceInteractiveLoader::get_stage_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_stage_count,
        (const Object*)this
    );
}

Error ResourceInteractiveLoader::poll() {
    return (Error)rebel_icall_int(
        method_bindings.mb_poll,
        (const Object*)this
    );
}

Error ResourceInteractiveLoader::wait() {
    return (Error)rebel_icall_int(
        method_bindings.mb_wait,
        (const Object*)this
    );
}

void ResourceInteractiveLoader::init_method_bindings() {
    method_bindings.mb_get_resource =
        api->rebel_method_bind_get_method(
            "ResourceInteractiveLoader",
            "get_resource"
        );
    method_bindings.mb_get_stage =
        api->rebel_method_bind_get_method(
            "ResourceInteractiveLoader",
            "get_stage"
        );
    method_bindings.mb_get_stage_count =
        api->rebel_method_bind_get_method(
            "ResourceInteractiveLoader",
            "get_stage_count"
        );
    method_bindings.mb_poll =
        api->rebel_method_bind_get_method(
            "ResourceInteractiveLoader",
            "poll"
        );
    method_bindings.mb_wait =
        api->rebel_method_bind_get_method(
            "ResourceInteractiveLoader",
            "wait"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ResourceInteractiveLoader");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ResourceInteractiveLoader::MethodBindings ResourceInteractiveLoader::method_bindings = {};
void* ResourceInteractiveLoader::class_tag = nullptr;
} // namespace Rebel
