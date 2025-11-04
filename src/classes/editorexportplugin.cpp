// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorexportplugin.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorExportPlugin::_export_begin(const PoolStringArray features, const bool is_debug, const String path, const int64_t flags) {
    rebel_icall_void_poolstringarray_bool_string_int(
        method_bindings.mb__export_begin,
        (const Object*)this,
        features,
        is_debug,
        path,
        flags
    );
}

void EditorExportPlugin::_export_end() {
    rebel_icall_void(
        method_bindings.mb__export_end,
        (const Object*)this
    );
}

void EditorExportPlugin::_export_file(const String path, const String type, const PoolStringArray features) {
    rebel_icall_void_string_string_poolstringarray(
        method_bindings.mb__export_file,
        (const Object*)this,
        path,
        type,
        features
    );
}

void EditorExportPlugin::add_file(const String path, const PoolByteArray file, const bool remap) {
    rebel_icall_void_string_poolbytearray_bool(
        method_bindings.mb_add_file,
        (const Object*)this,
        path,
        file,
        remap
    );
}

void EditorExportPlugin::add_ios_bundle_file(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_add_ios_bundle_file,
        (const Object*)this,
        path
    );
}

void EditorExportPlugin::add_ios_cpp_code(const String code) {
    rebel_icall_void_string(
        method_bindings.mb_add_ios_cpp_code,
        (const Object*)this,
        code
    );
}

void EditorExportPlugin::add_ios_embedded_framework(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_add_ios_embedded_framework,
        (const Object*)this,
        path
    );
}

void EditorExportPlugin::add_ios_framework(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_add_ios_framework,
        (const Object*)this,
        path
    );
}

void EditorExportPlugin::add_ios_linker_flags(const String flags) {
    rebel_icall_void_string(
        method_bindings.mb_add_ios_linker_flags,
        (const Object*)this,
        flags
    );
}

void EditorExportPlugin::add_ios_plist_content(const String plist_content) {
    rebel_icall_void_string(
        method_bindings.mb_add_ios_plist_content,
        (const Object*)this,
        plist_content
    );
}

void EditorExportPlugin::add_ios_project_static_lib(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_add_ios_project_static_lib,
        (const Object*)this,
        path
    );
}

void EditorExportPlugin::add_shared_object(const String path, const PoolStringArray tags) {
    rebel_icall_void_string_poolstringarray(
        method_bindings.mb_add_shared_object,
        (const Object*)this,
        path,
        tags
    );
}

void EditorExportPlugin::skip() {
    rebel_icall_void(
        method_bindings.mb_skip,
        (const Object*)this
    );
}

void EditorExportPlugin::init_method_bindings() {
    method_bindings.mb__export_begin =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "_export_begin"
        );
    method_bindings.mb__export_end =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "_export_end"
        );
    method_bindings.mb__export_file =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "_export_file"
        );
    method_bindings.mb_add_file =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "add_file"
        );
    method_bindings.mb_add_ios_bundle_file =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "add_ios_bundle_file"
        );
    method_bindings.mb_add_ios_cpp_code =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "add_ios_cpp_code"
        );
    method_bindings.mb_add_ios_embedded_framework =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "add_ios_embedded_framework"
        );
    method_bindings.mb_add_ios_framework =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "add_ios_framework"
        );
    method_bindings.mb_add_ios_linker_flags =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "add_ios_linker_flags"
        );
    method_bindings.mb_add_ios_plist_content =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "add_ios_plist_content"
        );
    method_bindings.mb_add_ios_project_static_lib =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "add_ios_project_static_lib"
        );
    method_bindings.mb_add_shared_object =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "add_shared_object"
        );
    method_bindings.mb_skip =
        api->rebel_method_bind_get_method(
            "EditorExportPlugin",
            "skip"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorExportPlugin");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorExportPlugin::MethodBindings EditorExportPlugin::method_bindings = {};
void* EditorExportPlugin::class_tag = nullptr;
} // namespace Rebel
