// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/backbuffercopy.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
BackBufferCopy::CopyMode BackBufferCopy::get_copy_mode() const {
    return (BackBufferCopy::CopyMode)rebel_icall_int(
        method_bindings.mb_get_copy_mode,
        (const Object*)this
    );
}

Rect2 BackBufferCopy::get_rect() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_rect,
        (const Object*)this
    );
}

void BackBufferCopy::set_copy_mode(const int64_t copy_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_copy_mode,
        (const Object*)this,
        copy_mode
    );
}

void BackBufferCopy::set_rect(const Rect2 rect) {
    rebel_icall_void_rect2(
        method_bindings.mb_set_rect,
        (const Object*)this,
        rect
    );
}

BackBufferCopy* BackBufferCopy::create() {
    return (BackBufferCopy*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"BackBufferCopy")()
         );
}

void BackBufferCopy::init_method_bindings() {
    method_bindings.mb_get_copy_mode =
        api->rebel_method_bind_get_method(
            "BackBufferCopy",
            "get_copy_mode"
        );
    method_bindings.mb_get_rect =
        api->rebel_method_bind_get_method(
            "BackBufferCopy",
            "get_rect"
        );
    method_bindings.mb_set_copy_mode =
        api->rebel_method_bind_get_method(
            "BackBufferCopy",
            "set_copy_mode"
        );
    method_bindings.mb_set_rect =
        api->rebel_method_bind_get_method(
            "BackBufferCopy",
            "set_rect"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "BackBufferCopy");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

BackBufferCopy::MethodBindings BackBufferCopy::method_bindings = {};
void* BackBufferCopy::class_tag = nullptr;
} // namespace Rebel
