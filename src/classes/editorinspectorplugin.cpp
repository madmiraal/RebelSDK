// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorinspectorplugin.h"

#include "classes/control.h"
#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorInspectorPlugin::add_custom_control(const Control* control) {
    rebel_icall_void_object(
        method_bindings.mb_add_custom_control,
        (const Object*)this,
        control
    );
}

void EditorInspectorPlugin::add_property_editor(const String property, const Control* editor) {
    rebel_icall_void_string_object(
        method_bindings.mb_add_property_editor,
        (const Object*)this,
        property,
        editor
    );
}

void EditorInspectorPlugin::add_property_editor_for_multiple_properties(const String label, const PoolStringArray properties, const Control* editor) {
    rebel_icall_void_string_poolstringarray_object(
        method_bindings.mb_add_property_editor_for_multiple_properties,
        (const Object*)this,
        label,
        properties,
        editor
    );
}

bool EditorInspectorPlugin::can_handle(const Object* object) {
    return rebel_icall_bool_object(
        method_bindings.mb_can_handle,
        (const Object*)this,
        object
    );
}

void EditorInspectorPlugin::parse_begin(const Object* object) {
    rebel_icall_void_object(
        method_bindings.mb_parse_begin,
        (const Object*)this,
        object
    );
}

void EditorInspectorPlugin::parse_category(const Object* object, const String category) {
    rebel_icall_void_object_string(
        method_bindings.mb_parse_category,
        (const Object*)this,
        object,
        category
    );
}

void EditorInspectorPlugin::parse_end() {
    rebel_icall_void(
        method_bindings.mb_parse_end,
        (const Object*)this
    );
}

bool EditorInspectorPlugin::parse_property(const Object* object, const int64_t type, const String path, const int64_t hint, const String hint_text, const int64_t usage) {
    return rebel_icall_bool_object_int_string_int_string_int(
        method_bindings.mb_parse_property,
        (const Object*)this,
        object,
        type,
        path,
        hint,
        hint_text,
        usage
    );
}

void EditorInspectorPlugin::init_method_bindings() {
    method_bindings.mb_add_custom_control =
        api->rebel_method_bind_get_method(
            "EditorInspectorPlugin",
            "add_custom_control"
        );
    method_bindings.mb_add_property_editor =
        api->rebel_method_bind_get_method(
            "EditorInspectorPlugin",
            "add_property_editor"
        );
    method_bindings.mb_add_property_editor_for_multiple_properties =
        api->rebel_method_bind_get_method(
            "EditorInspectorPlugin",
            "add_property_editor_for_multiple_properties"
        );
    method_bindings.mb_can_handle =
        api->rebel_method_bind_get_method(
            "EditorInspectorPlugin",
            "can_handle"
        );
    method_bindings.mb_parse_begin =
        api->rebel_method_bind_get_method(
            "EditorInspectorPlugin",
            "parse_begin"
        );
    method_bindings.mb_parse_category =
        api->rebel_method_bind_get_method(
            "EditorInspectorPlugin",
            "parse_category"
        );
    method_bindings.mb_parse_end =
        api->rebel_method_bind_get_method(
            "EditorInspectorPlugin",
            "parse_end"
        );
    method_bindings.mb_parse_property =
        api->rebel_method_bind_get_method(
            "EditorInspectorPlugin",
            "parse_property"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorInspectorPlugin");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorInspectorPlugin::MethodBindings EditorInspectorPlugin::method_bindings = {};
void* EditorInspectorPlugin::class_tag = nullptr;
} // namespace Rebel
