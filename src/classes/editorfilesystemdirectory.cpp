// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorfilesystemdirectory.h"

#include "classes/editorfilesystemdirectory.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t EditorFileSystemDirectory::find_dir_index(const String name) const {
    return rebel_icall_int_string(
        method_bindings.mb_find_dir_index,
        (const Object*)this,
        name
    );
}

int64_t EditorFileSystemDirectory::find_file_index(const String name) const {
    return rebel_icall_int_string(
        method_bindings.mb_find_file_index,
        (const Object*)this,
        name
    );
}

String EditorFileSystemDirectory::get_file(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_file,
        (const Object*)this,
        idx
    );
}

int64_t EditorFileSystemDirectory::get_file_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_file_count,
        (const Object*)this
    );
}

bool EditorFileSystemDirectory::get_file_import_is_valid(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_get_file_import_is_valid,
        (const Object*)this,
        idx
    );
}

String EditorFileSystemDirectory::get_file_path(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_file_path,
        (const Object*)this,
        idx
    );
}

String EditorFileSystemDirectory::get_file_script_class_extends(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_file_script_class_extends,
        (const Object*)this,
        idx
    );
}

String EditorFileSystemDirectory::get_file_script_class_name(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_file_script_class_name,
        (const Object*)this,
        idx
    );
}

String EditorFileSystemDirectory::get_file_type(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_file_type,
        (const Object*)this,
        idx
    );
}

String EditorFileSystemDirectory::get_name() {
    return rebel_icall_string(
        method_bindings.mb_get_name,
        (const Object*)this
    );
}

EditorFileSystemDirectory* EditorFileSystemDirectory::get_parent() {
    return (EditorFileSystemDirectory*)rebel_icall_object(
        method_bindings.mb_get_parent,
        (const Object*)this
    );
}

String EditorFileSystemDirectory::get_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_path,
        (const Object*)this
    );
}

EditorFileSystemDirectory* EditorFileSystemDirectory::get_subdir(const int64_t idx) {
    return (EditorFileSystemDirectory*)rebel_icall_object_int(
        method_bindings.mb_get_subdir,
        (const Object*)this,
        idx
    );
}

int64_t EditorFileSystemDirectory::get_subdir_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_subdir_count,
        (const Object*)this
    );
}

void EditorFileSystemDirectory::init_method_bindings() {
    method_bindings.mb_find_dir_index =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "find_dir_index"
        );
    method_bindings.mb_find_file_index =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "find_file_index"
        );
    method_bindings.mb_get_file =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_file"
        );
    method_bindings.mb_get_file_count =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_file_count"
        );
    method_bindings.mb_get_file_import_is_valid =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_file_import_is_valid"
        );
    method_bindings.mb_get_file_path =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_file_path"
        );
    method_bindings.mb_get_file_script_class_extends =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_file_script_class_extends"
        );
    method_bindings.mb_get_file_script_class_name =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_file_script_class_name"
        );
    method_bindings.mb_get_file_type =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_file_type"
        );
    method_bindings.mb_get_name =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_name"
        );
    method_bindings.mb_get_parent =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_parent"
        );
    method_bindings.mb_get_path =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_path"
        );
    method_bindings.mb_get_subdir =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_subdir"
        );
    method_bindings.mb_get_subdir_count =
        api->rebel_method_bind_get_method(
            "EditorFileSystemDirectory",
            "get_subdir_count"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorFileSystemDirectory");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorFileSystemDirectory::MethodBindings EditorFileSystemDirectory::method_bindings = {};
void* EditorFileSystemDirectory::class_tag = nullptr;
} // namespace Rebel
