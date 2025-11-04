// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/resourcesaver.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolStringArray ResourceSaver::get_recognized_extensions(const Ref<Resource> type) {
    return rebel_icall_poolstringarray_object(
        method_bindings.mb_get_recognized_extensions,
        (const Object*)this,
        type.ptr()
    );
}

Error ResourceSaver::save(const String path, const Ref<Resource> resource, const int64_t flags) {
    return (Error)rebel_icall_int_string_object_int(
        method_bindings.mb_save,
        (const Object*)this,
        path,
        resource.ptr(),
        flags
    );
}

ResourceSaver* ResourceSaver::singleton = nullptr;

ResourceSaver::ResourceSaver() {
    owner = api->rebel_global_get_singleton((char*) "ResourceSaver");
}

void ResourceSaver::init_method_bindings() {
    method_bindings.mb_get_recognized_extensions =
        api->rebel_method_bind_get_method(
            "_ResourceSaver",
            "get_recognized_extensions"
        );
    method_bindings.mb_save =
        api->rebel_method_bind_get_method(
            "_ResourceSaver",
            "save"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_ResourceSaver");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ResourceSaver::MethodBindings ResourceSaver::method_bindings = {};
void* ResourceSaver::class_tag = nullptr;
} // namespace Rebel
