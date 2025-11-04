// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorimportplugin.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array EditorImportPlugin::get_import_options(const int64_t preset) {
    return rebel_icall_array_int(
        method_bindings.mb_get_import_options,
        (const Object*)this,
        preset
    );
}

int64_t EditorImportPlugin::get_import_order() {
    return rebel_icall_int(
        method_bindings.mb_get_import_order,
        (const Object*)this
    );
}

String EditorImportPlugin::get_importer_name() {
    return rebel_icall_string(
        method_bindings.mb_get_importer_name,
        (const Object*)this
    );
}

bool EditorImportPlugin::get_option_visibility(const String option, const Dictionary options) {
    return rebel_icall_bool_string_dictionary(
        method_bindings.mb_get_option_visibility,
        (const Object*)this,
        option,
        options
    );
}

int64_t EditorImportPlugin::get_preset_count() {
    return rebel_icall_int(
        method_bindings.mb_get_preset_count,
        (const Object*)this
    );
}

String EditorImportPlugin::get_preset_name(const int64_t preset) {
    return rebel_icall_string_int(
        method_bindings.mb_get_preset_name,
        (const Object*)this,
        preset
    );
}

real_t EditorImportPlugin::get_priority() {
    return rebel_icall_float(
        method_bindings.mb_get_priority,
        (const Object*)this
    );
}

Array EditorImportPlugin::get_recognized_extensions() {
    return rebel_icall_array(
        method_bindings.mb_get_recognized_extensions,
        (const Object*)this
    );
}

String EditorImportPlugin::get_resource_type() {
    return rebel_icall_string(
        method_bindings.mb_get_resource_type,
        (const Object*)this
    );
}

String EditorImportPlugin::get_save_extension() {
    return rebel_icall_string(
        method_bindings.mb_get_save_extension,
        (const Object*)this
    );
}

String EditorImportPlugin::get_visible_name() {
    return rebel_icall_string(
        method_bindings.mb_get_visible_name,
        (const Object*)this
    );
}

int64_t EditorImportPlugin::import(const String source_file, const String save_path, const Dictionary options, const Array platform_variants, const Array gen_files) {
    return rebel_icall_int_string_string_dictionary_array_array(
        method_bindings.mb_import,
        (const Object*)this,
        source_file,
        save_path,
        options,
        platform_variants,
        gen_files
    );
}

void EditorImportPlugin::init_method_bindings() {
    method_bindings.mb_get_import_options =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "get_import_options"
        );
    method_bindings.mb_get_import_order =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "get_import_order"
        );
    method_bindings.mb_get_importer_name =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "get_importer_name"
        );
    method_bindings.mb_get_option_visibility =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "get_option_visibility"
        );
    method_bindings.mb_get_preset_count =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "get_preset_count"
        );
    method_bindings.mb_get_preset_name =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "get_preset_name"
        );
    method_bindings.mb_get_priority =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "get_priority"
        );
    method_bindings.mb_get_recognized_extensions =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "get_recognized_extensions"
        );
    method_bindings.mb_get_resource_type =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "get_resource_type"
        );
    method_bindings.mb_get_save_extension =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "get_save_extension"
        );
    method_bindings.mb_get_visible_name =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "get_visible_name"
        );
    method_bindings.mb_import =
        api->rebel_method_bind_get_method(
            "EditorImportPlugin",
            "import"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorImportPlugin");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorImportPlugin::MethodBindings EditorImportPlugin::method_bindings = {};
void* EditorImportPlugin::class_tag = nullptr;
} // namespace Rebel
