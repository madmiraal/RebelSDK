// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorinspector.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "classes/object.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorInspector::_edit_request_change(const Object* arg0, const String arg1) {
    rebel_icall_void_object_string(
        method_bindings.mb__edit_request_change,
        (const Object*)this,
        arg0,
        arg1
    );
}

void EditorInspector::_feature_profile_changed() {
    rebel_icall_void(
        method_bindings.mb__feature_profile_changed,
        (const Object*)this
    );
}

void EditorInspector::_filter_changed(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__filter_changed,
        (const Object*)this,
        arg0
    );
}

void EditorInspector::_multiple_properties_changed(const PoolStringArray arg0, const Array arg1) {
    rebel_icall_void_poolstringarray_array(
        method_bindings.mb__multiple_properties_changed,
        (const Object*)this,
        arg0,
        arg1
    );
}

void EditorInspector::_node_removed(const Node* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__node_removed,
        (const Object*)this,
        arg0
    );
}

void EditorInspector::_object_id_selected(const String arg0, const int64_t arg1) {
    rebel_icall_void_string_int(
        method_bindings.mb__object_id_selected,
        (const Object*)this,
        arg0,
        arg1
    );
}

void EditorInspector::_property_changed(const String arg0, const Variant arg1, const String arg2, const bool arg3) {
    rebel_icall_void_string_variant_string_bool(
        method_bindings.mb__property_changed,
        (const Object*)this,
        arg0,
        arg1,
        arg2,
        arg3
    );
}

void EditorInspector::_property_changed_update_all(const String arg0, const Variant arg1, const String arg2, const bool arg3) {
    rebel_icall_void_string_variant_string_bool(
        method_bindings.mb__property_changed_update_all,
        (const Object*)this,
        arg0,
        arg1,
        arg2,
        arg3
    );
}

void EditorInspector::_property_checked(const String arg0, const bool arg1) {
    rebel_icall_void_string_bool(
        method_bindings.mb__property_checked,
        (const Object*)this,
        arg0,
        arg1
    );
}

void EditorInspector::_property_keyed(const String arg0, const bool arg1) {
    rebel_icall_void_string_bool(
        method_bindings.mb__property_keyed,
        (const Object*)this,
        arg0,
        arg1
    );
}

void EditorInspector::_property_keyed_with_value(const String arg0, const Variant arg1, const bool arg2) {
    rebel_icall_void_string_variant_bool(
        method_bindings.mb__property_keyed_with_value,
        (const Object*)this,
        arg0,
        arg1,
        arg2
    );
}

void EditorInspector::_property_selected(const String arg0, const int64_t arg1) {
    rebel_icall_void_string_int(
        method_bindings.mb__property_selected,
        (const Object*)this,
        arg0,
        arg1
    );
}

void EditorInspector::_resource_selected(const String arg0, const Ref<Resource> arg1) {
    rebel_icall_void_string_object(
        method_bindings.mb__resource_selected,
        (const Object*)this,
        arg0,
        arg1.ptr()
    );
}

void EditorInspector::_vscroll_changed(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb__vscroll_changed,
        (const Object*)this,
        arg0
    );
}

void EditorInspector::refresh() {
    rebel_icall_void(
        method_bindings.mb_refresh,
        (const Object*)this
    );
}

void EditorInspector::init_method_bindings() {
    method_bindings.mb__edit_request_change =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_edit_request_change"
        );
    method_bindings.mb__feature_profile_changed =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_feature_profile_changed"
        );
    method_bindings.mb__filter_changed =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_filter_changed"
        );
    method_bindings.mb__multiple_properties_changed =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_multiple_properties_changed"
        );
    method_bindings.mb__node_removed =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_node_removed"
        );
    method_bindings.mb__object_id_selected =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_object_id_selected"
        );
    method_bindings.mb__property_changed =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_property_changed"
        );
    method_bindings.mb__property_changed_update_all =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_property_changed_update_all"
        );
    method_bindings.mb__property_checked =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_property_checked"
        );
    method_bindings.mb__property_keyed =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_property_keyed"
        );
    method_bindings.mb__property_keyed_with_value =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_property_keyed_with_value"
        );
    method_bindings.mb__property_selected =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_property_selected"
        );
    method_bindings.mb__resource_selected =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_resource_selected"
        );
    method_bindings.mb__vscroll_changed =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "_vscroll_changed"
        );
    method_bindings.mb_refresh =
        api->rebel_method_bind_get_method(
            "EditorInspector",
            "refresh"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorInspector");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorInspector::MethodBindings EditorInspector::method_bindings = {};
void* EditorInspector::class_tag = nullptr;
} // namespace Rebel
