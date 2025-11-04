// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/scriptcreatedialog.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ScriptCreateDialog::_browse_class_in_tree() {
    rebel_icall_void(
        method_bindings.mb__browse_class_in_tree,
        (const Object*)this
    );
}

void ScriptCreateDialog::_browse_path(const bool arg0, const bool arg1) {
    rebel_icall_void_bool_bool(
        method_bindings.mb__browse_path,
        (const Object*)this,
        arg0,
        arg1
    );
}

void ScriptCreateDialog::_built_in_pressed() {
    rebel_icall_void(
        method_bindings.mb__built_in_pressed,
        (const Object*)this
    );
}

void ScriptCreateDialog::_class_name_changed(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__class_name_changed,
        (const Object*)this,
        arg0
    );
}

void ScriptCreateDialog::_create() {
    rebel_icall_void(
        method_bindings.mb__create,
        (const Object*)this
    );
}

void ScriptCreateDialog::_file_selected(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__file_selected,
        (const Object*)this,
        arg0
    );
}

void ScriptCreateDialog::_lang_changed(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__lang_changed,
        (const Object*)this,
        arg0
    );
}

void ScriptCreateDialog::_parent_name_changed(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__parent_name_changed,
        (const Object*)this,
        arg0
    );
}

void ScriptCreateDialog::_path_changed(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__path_changed,
        (const Object*)this,
        arg0
    );
}

void ScriptCreateDialog::_path_entered(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__path_entered,
        (const Object*)this,
        arg0
    );
}

void ScriptCreateDialog::_path_hbox_sorted() {
    rebel_icall_void(
        method_bindings.mb__path_hbox_sorted,
        (const Object*)this
    );
}

void ScriptCreateDialog::_template_changed(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__template_changed,
        (const Object*)this,
        arg0
    );
}

void ScriptCreateDialog::config(const String inherits, const String path, const bool built_in_enabled, const bool load_enabled) {
    rebel_icall_void_string_string_bool_bool(
        method_bindings.mb_config,
        (const Object*)this,
        inherits,
        path,
        built_in_enabled,
        load_enabled
    );
}

void ScriptCreateDialog::init_method_bindings() {
    method_bindings.mb__browse_class_in_tree =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_browse_class_in_tree"
        );
    method_bindings.mb__browse_path =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_browse_path"
        );
    method_bindings.mb__built_in_pressed =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_built_in_pressed"
        );
    method_bindings.mb__class_name_changed =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_class_name_changed"
        );
    method_bindings.mb__create =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_create"
        );
    method_bindings.mb__file_selected =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_file_selected"
        );
    method_bindings.mb__lang_changed =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_lang_changed"
        );
    method_bindings.mb__parent_name_changed =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_parent_name_changed"
        );
    method_bindings.mb__path_changed =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_path_changed"
        );
    method_bindings.mb__path_entered =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_path_entered"
        );
    method_bindings.mb__path_hbox_sorted =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_path_hbox_sorted"
        );
    method_bindings.mb__template_changed =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "_template_changed"
        );
    method_bindings.mb_config =
        api->rebel_method_bind_get_method(
            "ScriptCreateDialog",
            "config"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ScriptCreateDialog");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ScriptCreateDialog::MethodBindings ScriptCreateDialog::method_bindings = {};
void* ScriptCreateDialog::class_tag = nullptr;
} // namespace Rebel
