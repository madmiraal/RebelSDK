// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/projectsettings.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ProjectSettings::add_property_info(const Dictionary hint) {
    rebel_icall_void_dictionary(
        method_bindings.mb_add_property_info,
        (const Object*)this,
        hint
    );
}

int64_t ProjectSettings::get_order(const String name) const {
    return rebel_icall_int_string(
        method_bindings.mb_get_order,
        (const Object*)this,
        name
    );
}

Variant ProjectSettings::get_setting(const String name) const {
    return rebel_icall_variant_string(
        method_bindings.mb_get_setting,
        (const Object*)this,
        name
    );
}

String ProjectSettings::globalize_path(const String path) const {
    return rebel_icall_string_string(
        method_bindings.mb_globalize_path,
        (const Object*)this,
        path
    );
}

bool ProjectSettings::has_setting(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_setting,
        (const Object*)this,
        name
    );
}

bool ProjectSettings::load_resource_pack(const String pack, const bool replace_files, const int64_t offset) {
    return rebel_icall_bool_string_bool_int(
        method_bindings.mb_load_resource_pack,
        (const Object*)this,
        pack,
        replace_files,
        offset
    );
}

String ProjectSettings::localize_path(const String path) const {
    return rebel_icall_string_string(
        method_bindings.mb_localize_path,
        (const Object*)this,
        path
    );
}

bool ProjectSettings::property_can_revert(const String name) {
    return rebel_icall_bool_string(
        method_bindings.mb_property_can_revert,
        (const Object*)this,
        name
    );
}

Variant ProjectSettings::property_get_revert(const String name) const {
    return rebel_icall_variant_string(
        method_bindings.mb_property_get_revert,
        (const Object*)this,
        name
    );
}

Error ProjectSettings::save() {
    return (Error)rebel_icall_int(
        method_bindings.mb_save,
        (const Object*)this
    );
}

Error ProjectSettings::save_custom(const String file) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_save_custom,
        (const Object*)this,
        file
    );
}

void ProjectSettings::set_initial_value(const String name, const Variant value) {
    rebel_icall_void_string_variant(
        method_bindings.mb_set_initial_value,
        (const Object*)this,
        name,
        value
    );
}

void ProjectSettings::set_order(const String name, const int64_t position) {
    rebel_icall_void_string_int(
        method_bindings.mb_set_order,
        (const Object*)this,
        name,
        position
    );
}

void ProjectSettings::set_setting(const String name, const Variant value) {
    rebel_icall_void_string_variant(
        method_bindings.mb_set_setting,
        (const Object*)this,
        name,
        value
    );
}

ProjectSettings* ProjectSettings::singleton = nullptr;

ProjectSettings::ProjectSettings() {
    owner = api->rebel_global_get_singleton((char*) "ProjectSettings");
}

void ProjectSettings::init_method_bindings() {
    method_bindings.mb_add_property_info =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "add_property_info"
        );
    method_bindings.mb_get_order =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "get_order"
        );
    method_bindings.mb_get_setting =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "get_setting"
        );
    method_bindings.mb_globalize_path =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "globalize_path"
        );
    method_bindings.mb_has_setting =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "has_setting"
        );
    method_bindings.mb_load_resource_pack =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "load_resource_pack"
        );
    method_bindings.mb_localize_path =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "localize_path"
        );
    method_bindings.mb_property_can_revert =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "property_can_revert"
        );
    method_bindings.mb_property_get_revert =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "property_get_revert"
        );
    method_bindings.mb_save =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "save"
        );
    method_bindings.mb_save_custom =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "save_custom"
        );
    method_bindings.mb_set_initial_value =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "set_initial_value"
        );
    method_bindings.mb_set_order =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "set_order"
        );
    method_bindings.mb_set_setting =
        api->rebel_method_bind_get_method(
            "ProjectSettings",
            "set_setting"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ProjectSettings");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ProjectSettings::MethodBindings ProjectSettings::method_bindings = {};
void* ProjectSettings::class_tag = nullptr;
} // namespace Rebel
