// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorvcsinterface.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorVCSInterface::_commit(const String msg) {
    rebel_icall_void_string(
        method_bindings.mb__commit,
        (const Object*)this,
        msg
    );
}

Array EditorVCSInterface::_get_file_diff(const String file_path) {
    return rebel_icall_array_string(
        method_bindings.mb__get_file_diff,
        (const Object*)this,
        file_path
    );
}

Dictionary EditorVCSInterface::_get_modified_files_data() {
    return rebel_icall_dictionary(
        method_bindings.mb__get_modified_files_data,
        (const Object*)this
    );
}

String EditorVCSInterface::_get_project_name() {
    return rebel_icall_string(
        method_bindings.mb__get_project_name,
        (const Object*)this
    );
}

String EditorVCSInterface::_get_vcs_name() {
    return rebel_icall_string(
        method_bindings.mb__get_vcs_name,
        (const Object*)this
    );
}

bool EditorVCSInterface::_initialize(const String project_root_path) {
    return rebel_icall_bool_string(
        method_bindings.mb__initialize,
        (const Object*)this,
        project_root_path
    );
}

bool EditorVCSInterface::_is_vcs_initialized() {
    return rebel_icall_bool(
        method_bindings.mb__is_vcs_initialized,
        (const Object*)this
    );
}

bool EditorVCSInterface::_shut_down() {
    return rebel_icall_bool(
        method_bindings.mb__shut_down,
        (const Object*)this
    );
}

void EditorVCSInterface::_stage_file(const String file_path) {
    rebel_icall_void_string(
        method_bindings.mb__stage_file,
        (const Object*)this,
        file_path
    );
}

void EditorVCSInterface::_unstage_file(const String file_path) {
    rebel_icall_void_string(
        method_bindings.mb__unstage_file,
        (const Object*)this,
        file_path
    );
}

void EditorVCSInterface::commit(const String msg) {
    rebel_icall_void_string(
        method_bindings.mb_commit,
        (const Object*)this,
        msg
    );
}

Array EditorVCSInterface::get_file_diff(const String file_path) {
    return rebel_icall_array_string(
        method_bindings.mb_get_file_diff,
        (const Object*)this,
        file_path
    );
}

Dictionary EditorVCSInterface::get_modified_files_data() {
    return rebel_icall_dictionary(
        method_bindings.mb_get_modified_files_data,
        (const Object*)this
    );
}

String EditorVCSInterface::get_project_name() {
    return rebel_icall_string(
        method_bindings.mb_get_project_name,
        (const Object*)this
    );
}

String EditorVCSInterface::get_vcs_name() {
    return rebel_icall_string(
        method_bindings.mb_get_vcs_name,
        (const Object*)this
    );
}

bool EditorVCSInterface::initialize(const String project_root_path) {
    return rebel_icall_bool_string(
        method_bindings.mb_initialize,
        (const Object*)this,
        project_root_path
    );
}

bool EditorVCSInterface::is_addon_ready() {
    return rebel_icall_bool(
        method_bindings.mb_is_addon_ready,
        (const Object*)this
    );
}

bool EditorVCSInterface::is_vcs_initialized() {
    return rebel_icall_bool(
        method_bindings.mb_is_vcs_initialized,
        (const Object*)this
    );
}

bool EditorVCSInterface::shut_down() {
    return rebel_icall_bool(
        method_bindings.mb_shut_down,
        (const Object*)this
    );
}

void EditorVCSInterface::stage_file(const String file_path) {
    rebel_icall_void_string(
        method_bindings.mb_stage_file,
        (const Object*)this,
        file_path
    );
}

void EditorVCSInterface::unstage_file(const String file_path) {
    rebel_icall_void_string(
        method_bindings.mb_unstage_file,
        (const Object*)this,
        file_path
    );
}

void EditorVCSInterface::init_method_bindings() {
    method_bindings.mb__commit =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "_commit"
        );
    method_bindings.mb__get_file_diff =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "_get_file_diff"
        );
    method_bindings.mb__get_modified_files_data =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "_get_modified_files_data"
        );
    method_bindings.mb__get_project_name =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "_get_project_name"
        );
    method_bindings.mb__get_vcs_name =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "_get_vcs_name"
        );
    method_bindings.mb__initialize =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "_initialize"
        );
    method_bindings.mb__is_vcs_initialized =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "_is_vcs_initialized"
        );
    method_bindings.mb__shut_down =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "_shut_down"
        );
    method_bindings.mb__stage_file =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "_stage_file"
        );
    method_bindings.mb__unstage_file =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "_unstage_file"
        );
    method_bindings.mb_commit =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "commit"
        );
    method_bindings.mb_get_file_diff =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "get_file_diff"
        );
    method_bindings.mb_get_modified_files_data =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "get_modified_files_data"
        );
    method_bindings.mb_get_project_name =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "get_project_name"
        );
    method_bindings.mb_get_vcs_name =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "get_vcs_name"
        );
    method_bindings.mb_initialize =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "initialize"
        );
    method_bindings.mb_is_addon_ready =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "is_addon_ready"
        );
    method_bindings.mb_is_vcs_initialized =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "is_vcs_initialized"
        );
    method_bindings.mb_shut_down =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "shut_down"
        );
    method_bindings.mb_stage_file =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "stage_file"
        );
    method_bindings.mb_unstage_file =
        api->rebel_method_bind_get_method(
            "EditorVCSInterface",
            "unstage_file"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorVCSInterface");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorVCSInterface::MethodBindings EditorVCSInterface::method_bindings = {};
void* EditorVCSInterface::class_tag = nullptr;
} // namespace Rebel
