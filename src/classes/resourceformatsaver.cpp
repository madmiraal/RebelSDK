// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/resourceformatsaver.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
PoolStringArray ResourceFormatSaver::get_recognized_extensions(const Ref<Resource> resource) {
    return rebel_icall_poolstringarray_object(
        method_bindings.mb_get_recognized_extensions,
        (const Object*)this,
        resource.ptr()
    );
}

bool ResourceFormatSaver::recognize(const Ref<Resource> resource) {
    return rebel_icall_bool_object(
        method_bindings.mb_recognize,
        (const Object*)this,
        resource.ptr()
    );
}

int64_t ResourceFormatSaver::save(const String path, const Ref<Resource> resource, const int64_t flags) {
    return rebel_icall_int_string_object_int(
        method_bindings.mb_save,
        (const Object*)this,
        path,
        resource.ptr(),
        flags
    );
}

ResourceFormatSaver* ResourceFormatSaver::create() {
    return (ResourceFormatSaver*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ResourceFormatSaver")()
         );
}

void ResourceFormatSaver::init_method_bindings() {
    method_bindings.mb_get_recognized_extensions =
        api->rebel_method_bind_get_method(
            "ResourceFormatSaver",
            "get_recognized_extensions"
        );
    method_bindings.mb_recognize =
        api->rebel_method_bind_get_method(
            "ResourceFormatSaver",
            "recognize"
        );
    method_bindings.mb_save =
        api->rebel_method_bind_get_method(
            "ResourceFormatSaver",
            "save"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ResourceFormatSaver");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ResourceFormatSaver::MethodBindings ResourceFormatSaver::method_bindings = {};
void* ResourceFormatSaver::class_tag = nullptr;
} // namespace Rebel
