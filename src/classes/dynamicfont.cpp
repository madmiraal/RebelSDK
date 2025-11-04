// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/dynamicfont.h"

#include "classes/dynamicfontdata.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void DynamicFont::add_fallback(const Ref<DynamicFontData> data) {
    rebel_icall_void_object(
        method_bindings.mb_add_fallback,
        (const Object*)this,
        data.ptr()
    );
}

String DynamicFont::get_available_chars() const {
    return rebel_icall_string(
        method_bindings.mb_get_available_chars,
        (const Object*)this
    );
}

Ref<DynamicFontData> DynamicFont::get_fallback(const int64_t idx) const {
    return Ref<DynamicFontData>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_fallback,
        (const Object*)this,
        idx
    ));
}

int64_t DynamicFont::get_fallback_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_fallback_count,
        (const Object*)this
    );
}

Ref<DynamicFontData> DynamicFont::get_font_data() const {
    return Ref<DynamicFontData>::create_ref(rebel_icall_object(
        method_bindings.mb_get_font_data,
        (const Object*)this
    ));
}

Color DynamicFont::get_outline_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_outline_color,
        (const Object*)this
    );
}

int64_t DynamicFont::get_outline_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_outline_size,
        (const Object*)this
    );
}

int64_t DynamicFont::get_size() const {
    return rebel_icall_int(
        method_bindings.mb_get_size,
        (const Object*)this
    );
}

int64_t DynamicFont::get_spacing(const int64_t type) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_spacing,
        (const Object*)this,
        type
    );
}

bool DynamicFont::get_use_filter() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_filter,
        (const Object*)this
    );
}

bool DynamicFont::get_use_mipmaps() const {
    return rebel_icall_bool(
        method_bindings.mb_get_use_mipmaps,
        (const Object*)this
    );
}

void DynamicFont::remove_fallback(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_remove_fallback,
        (const Object*)this,
        idx
    );
}

void DynamicFont::set_fallback(const int64_t idx, const Ref<DynamicFontData> data) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_fallback,
        (const Object*)this,
        idx,
        data.ptr()
    );
}

void DynamicFont::set_font_data(const Ref<DynamicFontData> data) {
    rebel_icall_void_object(
        method_bindings.mb_set_font_data,
        (const Object*)this,
        data.ptr()
    );
}

void DynamicFont::set_outline_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_outline_color,
        (const Object*)this,
        color
    );
}

void DynamicFont::set_outline_size(const int64_t size) {
    rebel_icall_void_int(
        method_bindings.mb_set_outline_size,
        (const Object*)this,
        size
    );
}

void DynamicFont::set_size(const int64_t data) {
    rebel_icall_void_int(
        method_bindings.mb_set_size,
        (const Object*)this,
        data
    );
}

void DynamicFont::set_spacing(const int64_t type, const int64_t value) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_spacing,
        (const Object*)this,
        type,
        value
    );
}

void DynamicFont::set_use_filter(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_filter,
        (const Object*)this,
        enable
    );
}

void DynamicFont::set_use_mipmaps(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_mipmaps,
        (const Object*)this,
        enable
    );
}

DynamicFont* DynamicFont::create() {
    return (DynamicFont*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"DynamicFont")()
         );
}

void DynamicFont::init_method_bindings() {
    method_bindings.mb_add_fallback =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "add_fallback"
        );
    method_bindings.mb_get_available_chars =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "get_available_chars"
        );
    method_bindings.mb_get_fallback =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "get_fallback"
        );
    method_bindings.mb_get_fallback_count =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "get_fallback_count"
        );
    method_bindings.mb_get_font_data =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "get_font_data"
        );
    method_bindings.mb_get_outline_color =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "get_outline_color"
        );
    method_bindings.mb_get_outline_size =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "get_outline_size"
        );
    method_bindings.mb_get_size =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "get_size"
        );
    method_bindings.mb_get_spacing =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "get_spacing"
        );
    method_bindings.mb_get_use_filter =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "get_use_filter"
        );
    method_bindings.mb_get_use_mipmaps =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "get_use_mipmaps"
        );
    method_bindings.mb_remove_fallback =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "remove_fallback"
        );
    method_bindings.mb_set_fallback =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "set_fallback"
        );
    method_bindings.mb_set_font_data =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "set_font_data"
        );
    method_bindings.mb_set_outline_color =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "set_outline_color"
        );
    method_bindings.mb_set_outline_size =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "set_outline_size"
        );
    method_bindings.mb_set_size =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "set_size"
        );
    method_bindings.mb_set_spacing =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "set_spacing"
        );
    method_bindings.mb_set_use_filter =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "set_use_filter"
        );
    method_bindings.mb_set_use_mipmaps =
        api->rebel_method_bind_get_method(
            "DynamicFont",
            "set_use_mipmaps"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "DynamicFont");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

DynamicFont::MethodBindings DynamicFont::method_bindings = {};
void* DynamicFont::class_tag = nullptr;
} // namespace Rebel
