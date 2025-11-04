// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorsettings.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorSettings::add_property_info(const Dictionary info) {
    rebel_icall_void_dictionary(
        method_bindings.mb_add_property_info,
        (const Object*)this,
        info
    );
}

void EditorSettings::erase(const String property) {
    rebel_icall_void_string(
        method_bindings.mb_erase,
        (const Object*)this,
        property
    );
}

PoolStringArray EditorSettings::get_favorites() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_favorites,
        (const Object*)this
    );
}

Variant EditorSettings::get_project_metadata(const String section, const String key, const Variant _default) const {
    return rebel_icall_variant_string_string_variant(
        method_bindings.mb_get_project_metadata,
        (const Object*)this,
        section,
        key,
        _default
    );
}

String EditorSettings::get_project_settings_dir() const {
    return rebel_icall_string(
        method_bindings.mb_get_project_settings_dir,
        (const Object*)this
    );
}

PoolStringArray EditorSettings::get_recent_dirs() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_recent_dirs,
        (const Object*)this
    );
}

Variant EditorSettings::get_setting(const String name) const {
    return rebel_icall_variant_string(
        method_bindings.mb_get_setting,
        (const Object*)this,
        name
    );
}

String EditorSettings::get_settings_dir() const {
    return rebel_icall_string(
        method_bindings.mb_get_settings_dir,
        (const Object*)this
    );
}

bool EditorSettings::has_setting(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_setting,
        (const Object*)this,
        name
    );
}

bool EditorSettings::property_can_revert(const String name) {
    return rebel_icall_bool_string(
        method_bindings.mb_property_can_revert,
        (const Object*)this,
        name
    );
}

Variant EditorSettings::property_get_revert(const String name) {
    return rebel_icall_variant_string(
        method_bindings.mb_property_get_revert,
        (const Object*)this,
        name
    );
}

void EditorSettings::set_favorites(const PoolStringArray dirs) {
    rebel_icall_void_poolstringarray(
        method_bindings.mb_set_favorites,
        (const Object*)this,
        dirs
    );
}

void EditorSettings::set_initial_value(const String name, const Variant value, const bool update_current) {
    rebel_icall_void_string_variant_bool(
        method_bindings.mb_set_initial_value,
        (const Object*)this,
        name,
        value,
        update_current
    );
}

void EditorSettings::set_project_metadata(const String section, const String key, const Variant data) {
    rebel_icall_void_string_string_variant(
        method_bindings.mb_set_project_metadata,
        (const Object*)this,
        section,
        key,
        data
    );
}

void EditorSettings::set_recent_dirs(const PoolStringArray dirs) {
    rebel_icall_void_poolstringarray(
        method_bindings.mb_set_recent_dirs,
        (const Object*)this,
        dirs
    );
}

void EditorSettings::set_setting(const String name, const Variant value) {
    rebel_icall_void_string_variant(
        method_bindings.mb_set_setting,
        (const Object*)this,
        name,
        value
    );
}

void EditorSettings::init_method_bindings() {
    method_bindings.mb_add_property_info =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "add_property_info"
        );
    method_bindings.mb_erase =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "erase"
        );
    method_bindings.mb_get_favorites =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "get_favorites"
        );
    method_bindings.mb_get_project_metadata =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "get_project_metadata"
        );
    method_bindings.mb_get_project_settings_dir =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "get_project_settings_dir"
        );
    method_bindings.mb_get_recent_dirs =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "get_recent_dirs"
        );
    method_bindings.mb_get_setting =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "get_setting"
        );
    method_bindings.mb_get_settings_dir =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "get_settings_dir"
        );
    method_bindings.mb_has_setting =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "has_setting"
        );
    method_bindings.mb_property_can_revert =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "property_can_revert"
        );
    method_bindings.mb_property_get_revert =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "property_get_revert"
        );
    method_bindings.mb_set_favorites =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "set_favorites"
        );
    method_bindings.mb_set_initial_value =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "set_initial_value"
        );
    method_bindings.mb_set_project_metadata =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "set_project_metadata"
        );
    method_bindings.mb_set_recent_dirs =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "set_recent_dirs"
        );
    method_bindings.mb_set_setting =
        api->rebel_method_bind_get_method(
            "EditorSettings",
            "set_setting"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorSettings");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorSettings::MethodBindings EditorSettings::method_bindings = {};
void* EditorSettings::class_tag = nullptr;
} // namespace Rebel
