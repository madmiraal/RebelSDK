// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorfeatureprofile.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String EditorFeatureProfile::get_feature_name(const int64_t feature) {
    return rebel_icall_string_int(
        method_bindings.mb_get_feature_name,
        (const Object*)this,
        feature
    );
}

bool EditorFeatureProfile::is_class_disabled(const String class_name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_is_class_disabled,
        (const Object*)this,
        class_name
    );
}

bool EditorFeatureProfile::is_class_editor_disabled(const String class_name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_is_class_editor_disabled,
        (const Object*)this,
        class_name
    );
}

bool EditorFeatureProfile::is_class_property_disabled(const String class_name, const String property) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_is_class_property_disabled,
        (const Object*)this,
        class_name,
        property
    );
}

bool EditorFeatureProfile::is_feature_disabled(const int64_t feature) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_feature_disabled,
        (const Object*)this,
        feature
    );
}

Error EditorFeatureProfile::load_from_file(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_load_from_file,
        (const Object*)this,
        path
    );
}

Error EditorFeatureProfile::save_to_file(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_save_to_file,
        (const Object*)this,
        path
    );
}

void EditorFeatureProfile::set_disable_class(const String class_name, const bool disable) {
    rebel_icall_void_string_bool(
        method_bindings.mb_set_disable_class,
        (const Object*)this,
        class_name,
        disable
    );
}

void EditorFeatureProfile::set_disable_class_editor(const String class_name, const bool disable) {
    rebel_icall_void_string_bool(
        method_bindings.mb_set_disable_class_editor,
        (const Object*)this,
        class_name,
        disable
    );
}

void EditorFeatureProfile::set_disable_class_property(const String class_name, const String property, const bool disable) {
    rebel_icall_void_string_string_bool(
        method_bindings.mb_set_disable_class_property,
        (const Object*)this,
        class_name,
        property,
        disable
    );
}

void EditorFeatureProfile::set_disable_feature(const int64_t feature, const bool disable) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_disable_feature,
        (const Object*)this,
        feature,
        disable
    );
}

void EditorFeatureProfile::init_method_bindings() {
    method_bindings.mb_get_feature_name =
        api->rebel_method_bind_get_method(
            "EditorFeatureProfile",
            "get_feature_name"
        );
    method_bindings.mb_is_class_disabled =
        api->rebel_method_bind_get_method(
            "EditorFeatureProfile",
            "is_class_disabled"
        );
    method_bindings.mb_is_class_editor_disabled =
        api->rebel_method_bind_get_method(
            "EditorFeatureProfile",
            "is_class_editor_disabled"
        );
    method_bindings.mb_is_class_property_disabled =
        api->rebel_method_bind_get_method(
            "EditorFeatureProfile",
            "is_class_property_disabled"
        );
    method_bindings.mb_is_feature_disabled =
        api->rebel_method_bind_get_method(
            "EditorFeatureProfile",
            "is_feature_disabled"
        );
    method_bindings.mb_load_from_file =
        api->rebel_method_bind_get_method(
            "EditorFeatureProfile",
            "load_from_file"
        );
    method_bindings.mb_save_to_file =
        api->rebel_method_bind_get_method(
            "EditorFeatureProfile",
            "save_to_file"
        );
    method_bindings.mb_set_disable_class =
        api->rebel_method_bind_get_method(
            "EditorFeatureProfile",
            "set_disable_class"
        );
    method_bindings.mb_set_disable_class_editor =
        api->rebel_method_bind_get_method(
            "EditorFeatureProfile",
            "set_disable_class_editor"
        );
    method_bindings.mb_set_disable_class_property =
        api->rebel_method_bind_get_method(
            "EditorFeatureProfile",
            "set_disable_class_property"
        );
    method_bindings.mb_set_disable_feature =
        api->rebel_method_bind_get_method(
            "EditorFeatureProfile",
            "set_disable_feature"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorFeatureProfile");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorFeatureProfile::MethodBindings EditorFeatureProfile::method_bindings = {};
void* EditorFeatureProfile::class_tag = nullptr;
} // namespace Rebel
