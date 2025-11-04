// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorfilesystem.h"

#include "classes/editorfilesystemdirectory.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String EditorFileSystem::get_file_type(const String path) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_file_type,
        (const Object*)this,
        path
    );
}

EditorFileSystemDirectory* EditorFileSystem::get_filesystem() {
    return (EditorFileSystemDirectory*)rebel_icall_object(
        method_bindings.mb_get_filesystem,
        (const Object*)this
    );
}

EditorFileSystemDirectory* EditorFileSystem::get_filesystem_path(const String path) {
    return (EditorFileSystemDirectory*)rebel_icall_object_string(
        method_bindings.mb_get_filesystem_path,
        (const Object*)this,
        path
    );
}

real_t EditorFileSystem::get_scanning_progress() const {
    return rebel_icall_float(
        method_bindings.mb_get_scanning_progress,
        (const Object*)this
    );
}

bool EditorFileSystem::is_scanning() const {
    return rebel_icall_bool(
        method_bindings.mb_is_scanning,
        (const Object*)this
    );
}

void EditorFileSystem::scan() {
    rebel_icall_void(
        method_bindings.mb_scan,
        (const Object*)this
    );
}

void EditorFileSystem::scan_sources() {
    rebel_icall_void(
        method_bindings.mb_scan_sources,
        (const Object*)this
    );
}

void EditorFileSystem::update_file(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_update_file,
        (const Object*)this,
        path
    );
}

void EditorFileSystem::update_script_classes() {
    rebel_icall_void(
        method_bindings.mb_update_script_classes,
        (const Object*)this
    );
}

void EditorFileSystem::init_method_bindings() {
    method_bindings.mb_get_file_type =
        api->rebel_method_bind_get_method(
            "EditorFileSystem",
            "get_file_type"
        );
    method_bindings.mb_get_filesystem =
        api->rebel_method_bind_get_method(
            "EditorFileSystem",
            "get_filesystem"
        );
    method_bindings.mb_get_filesystem_path =
        api->rebel_method_bind_get_method(
            "EditorFileSystem",
            "get_filesystem_path"
        );
    method_bindings.mb_get_scanning_progress =
        api->rebel_method_bind_get_method(
            "EditorFileSystem",
            "get_scanning_progress"
        );
    method_bindings.mb_is_scanning =
        api->rebel_method_bind_get_method(
            "EditorFileSystem",
            "is_scanning"
        );
    method_bindings.mb_scan =
        api->rebel_method_bind_get_method(
            "EditorFileSystem",
            "scan"
        );
    method_bindings.mb_scan_sources =
        api->rebel_method_bind_get_method(
            "EditorFileSystem",
            "scan_sources"
        );
    method_bindings.mb_update_file =
        api->rebel_method_bind_get_method(
            "EditorFileSystem",
            "update_file"
        );
    method_bindings.mb_update_script_classes =
        api->rebel_method_bind_get_method(
            "EditorFileSystem",
            "update_script_classes"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorFileSystem");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorFileSystem::MethodBindings EditorFileSystem::method_bindings = {};
void* EditorFileSystem::class_tag = nullptr;
} // namespace Rebel
