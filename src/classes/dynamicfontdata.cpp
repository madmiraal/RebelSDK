// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/dynamicfontdata.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String DynamicFontData::get_font_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_font_path,
        (const Object*)this
    );
}

DynamicFontData::Hinting DynamicFontData::get_hinting() const {
    return (DynamicFontData::Hinting)rebel_icall_int(
        method_bindings.mb_get_hinting,
        (const Object*)this
    );
}

bool DynamicFontData::is_antialiased() const {
    return rebel_icall_bool(
        method_bindings.mb_is_antialiased,
        (const Object*)this
    );
}

void DynamicFontData::set_antialiased(const bool antialiased) {
    rebel_icall_void_bool(
        method_bindings.mb_set_antialiased,
        (const Object*)this,
        antialiased
    );
}

void DynamicFontData::set_font_path(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_set_font_path,
        (const Object*)this,
        path
    );
}

void DynamicFontData::set_hinting(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_hinting,
        (const Object*)this,
        mode
    );
}

DynamicFontData* DynamicFontData::create() {
    return (DynamicFontData*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"DynamicFontData")()
         );
}

void DynamicFontData::init_method_bindings() {
    method_bindings.mb_get_font_path =
        api->rebel_method_bind_get_method(
            "DynamicFontData",
            "get_font_path"
        );
    method_bindings.mb_get_hinting =
        api->rebel_method_bind_get_method(
            "DynamicFontData",
            "get_hinting"
        );
    method_bindings.mb_is_antialiased =
        api->rebel_method_bind_get_method(
            "DynamicFontData",
            "is_antialiased"
        );
    method_bindings.mb_set_antialiased =
        api->rebel_method_bind_get_method(
            "DynamicFontData",
            "set_antialiased"
        );
    method_bindings.mb_set_font_path =
        api->rebel_method_bind_get_method(
            "DynamicFontData",
            "set_font_path"
        );
    method_bindings.mb_set_hinting =
        api->rebel_method_bind_get_method(
            "DynamicFontData",
            "set_hinting"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "DynamicFontData");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

DynamicFontData::MethodBindings DynamicFontData::method_bindings = {};
void* DynamicFontData::class_tag = nullptr;
} // namespace Rebel
