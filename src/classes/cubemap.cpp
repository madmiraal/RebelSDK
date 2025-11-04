// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/cubemap.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t CubeMap::get_flags() const {
    return rebel_icall_int(
        method_bindings.mb_get_flags,
        (const Object*)this
    );
}

int64_t CubeMap::get_height() const {
    return rebel_icall_int(
        method_bindings.mb_get_height,
        (const Object*)this
    );
}

real_t CubeMap::get_lossy_storage_quality() const {
    return rebel_icall_float(
        method_bindings.mb_get_lossy_storage_quality,
        (const Object*)this
    );
}

Ref<Image> CubeMap::get_side(const int64_t side) const {
    return Ref<Image>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_side,
        (const Object*)this,
        side
    ));
}

CubeMap::Storage CubeMap::get_storage() const {
    return (CubeMap::Storage)rebel_icall_int(
        method_bindings.mb_get_storage,
        (const Object*)this
    );
}

int64_t CubeMap::get_width() const {
    return rebel_icall_int(
        method_bindings.mb_get_width,
        (const Object*)this
    );
}

void CubeMap::set_flags(const int64_t flags) {
    rebel_icall_void_int(
        method_bindings.mb_set_flags,
        (const Object*)this,
        flags
    );
}

void CubeMap::set_lossy_storage_quality(const real_t quality) {
    rebel_icall_void_float(
        method_bindings.mb_set_lossy_storage_quality,
        (const Object*)this,
        quality
    );
}

void CubeMap::set_side(const int64_t side, const Ref<Image> image) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_side,
        (const Object*)this,
        side,
        image.ptr()
    );
}

void CubeMap::set_storage(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_storage,
        (const Object*)this,
        mode
    );
}

CubeMap* CubeMap::create() {
    return (CubeMap*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"CubeMap")()
         );
}

void CubeMap::init_method_bindings() {
    method_bindings.mb_get_flags =
        api->rebel_method_bind_get_method(
            "CubeMap",
            "get_flags"
        );
    method_bindings.mb_get_height =
        api->rebel_method_bind_get_method(
            "CubeMap",
            "get_height"
        );
    method_bindings.mb_get_lossy_storage_quality =
        api->rebel_method_bind_get_method(
            "CubeMap",
            "get_lossy_storage_quality"
        );
    method_bindings.mb_get_side =
        api->rebel_method_bind_get_method(
            "CubeMap",
            "get_side"
        );
    method_bindings.mb_get_storage =
        api->rebel_method_bind_get_method(
            "CubeMap",
            "get_storage"
        );
    method_bindings.mb_get_width =
        api->rebel_method_bind_get_method(
            "CubeMap",
            "get_width"
        );
    method_bindings.mb_set_flags =
        api->rebel_method_bind_get_method(
            "CubeMap",
            "set_flags"
        );
    method_bindings.mb_set_lossy_storage_quality =
        api->rebel_method_bind_get_method(
            "CubeMap",
            "set_lossy_storage_quality"
        );
    method_bindings.mb_set_side =
        api->rebel_method_bind_get_method(
            "CubeMap",
            "set_side"
        );
    method_bindings.mb_set_storage =
        api->rebel_method_bind_get_method(
            "CubeMap",
            "set_storage"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "CubeMap");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

CubeMap::MethodBindings CubeMap::method_bindings = {};
void* CubeMap::class_tag = nullptr;
} // namespace Rebel
