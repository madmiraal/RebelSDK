// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorresourcepicker.h"

#include "classes/control.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/object.h"
#include "classes/resource.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorResourcePicker::_button_draw() {
    rebel_icall_void(
        method_bindings.mb__button_draw,
        (const Object*)this
    );
}

void EditorResourcePicker::_button_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__button_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void EditorResourcePicker::_edit_menu_cbk(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__edit_menu_cbk,
        (const Object*)this,
        arg0
    );
}

void EditorResourcePicker::_file_quick_selected() {
    rebel_icall_void(
        method_bindings.mb__file_quick_selected,
        (const Object*)this
    );
}

void EditorResourcePicker::_file_selected(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__file_selected,
        (const Object*)this,
        arg0
    );
}

void EditorResourcePicker::_resource_selected() {
    rebel_icall_void(
        method_bindings.mb__resource_selected,
        (const Object*)this
    );
}

void EditorResourcePicker::_update_menu() {
    rebel_icall_void(
        method_bindings.mb__update_menu,
        (const Object*)this
    );
}

void EditorResourcePicker::_update_resource_preview(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const int64_t arg3) {
    rebel_icall_void_string_object_object_int(
        method_bindings.mb__update_resource_preview,
        (const Object*)this,
        arg0,
        arg1.ptr(),
        arg2.ptr(),
        arg3
    );
}

bool EditorResourcePicker::can_drop_data_fw(const Vector2 position, const Variant data, const Control* from) const {
    return rebel_icall_bool_vector2_variant_object(
        method_bindings.mb_can_drop_data_fw,
        (const Object*)this,
        position,
        data,
        from
    );
}

void EditorResourcePicker::drop_data_fw(const Vector2 position, const Variant data, const Control* from) {
    rebel_icall_void_vector2_variant_object(
        method_bindings.mb_drop_data_fw,
        (const Object*)this,
        position,
        data,
        from
    );
}

PoolStringArray EditorResourcePicker::get_allowed_types() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_allowed_types,
        (const Object*)this
    );
}

String EditorResourcePicker::get_base_type() const {
    return rebel_icall_string(
        method_bindings.mb_get_base_type,
        (const Object*)this
    );
}

Variant EditorResourcePicker::get_drag_data_fw(const Vector2 position, const Control* from) {
    return rebel_icall_variant_vector2_object(
        method_bindings.mb_get_drag_data_fw,
        (const Object*)this,
        position,
        from
    );
}

Ref<Resource> EditorResourcePicker::get_edited_resource() {
    return Ref<Resource>::create_ref(rebel_icall_object(
        method_bindings.mb_get_edited_resource,
        (const Object*)this
    ));
}

bool EditorResourcePicker::handle_menu_selected(const int64_t id) {
    return rebel_icall_bool_int(
        method_bindings.mb_handle_menu_selected,
        (const Object*)this,
        id
    );
}

bool EditorResourcePicker::is_editable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_editable,
        (const Object*)this
    );
}

bool EditorResourcePicker::is_toggle_mode() const {
    return rebel_icall_bool(
        method_bindings.mb_is_toggle_mode,
        (const Object*)this
    );
}

void EditorResourcePicker::set_base_type(const String base_type) {
    rebel_icall_void_string(
        method_bindings.mb_set_base_type,
        (const Object*)this,
        base_type
    );
}

void EditorResourcePicker::set_create_options(const Object* menu_node) {
    rebel_icall_void_object(
        method_bindings.mb_set_create_options,
        (const Object*)this,
        menu_node
    );
}

void EditorResourcePicker::set_editable(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_editable,
        (const Object*)this,
        enable
    );
}

void EditorResourcePicker::set_edited_resource(const Ref<Resource> resource) {
    rebel_icall_void_object(
        method_bindings.mb_set_edited_resource,
        (const Object*)this,
        resource.ptr()
    );
}

void EditorResourcePicker::set_toggle_mode(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_toggle_mode,
        (const Object*)this,
        enable
    );
}

void EditorResourcePicker::set_toggle_pressed(const bool pressed) {
    rebel_icall_void_bool(
        method_bindings.mb_set_toggle_pressed,
        (const Object*)this,
        pressed
    );
}

void EditorResourcePicker::init_method_bindings() {
    method_bindings.mb__button_draw =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "_button_draw"
        );
    method_bindings.mb__button_input =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "_button_input"
        );
    method_bindings.mb__edit_menu_cbk =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "_edit_menu_cbk"
        );
    method_bindings.mb__file_quick_selected =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "_file_quick_selected"
        );
    method_bindings.mb__file_selected =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "_file_selected"
        );
    method_bindings.mb__resource_selected =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "_resource_selected"
        );
    method_bindings.mb__update_menu =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "_update_menu"
        );
    method_bindings.mb__update_resource_preview =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "_update_resource_preview"
        );
    method_bindings.mb_can_drop_data_fw =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "can_drop_data_fw"
        );
    method_bindings.mb_drop_data_fw =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "drop_data_fw"
        );
    method_bindings.mb_get_allowed_types =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "get_allowed_types"
        );
    method_bindings.mb_get_base_type =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "get_base_type"
        );
    method_bindings.mb_get_drag_data_fw =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "get_drag_data_fw"
        );
    method_bindings.mb_get_edited_resource =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "get_edited_resource"
        );
    method_bindings.mb_handle_menu_selected =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "handle_menu_selected"
        );
    method_bindings.mb_is_editable =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "is_editable"
        );
    method_bindings.mb_is_toggle_mode =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "is_toggle_mode"
        );
    method_bindings.mb_set_base_type =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "set_base_type"
        );
    method_bindings.mb_set_create_options =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "set_create_options"
        );
    method_bindings.mb_set_editable =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "set_editable"
        );
    method_bindings.mb_set_edited_resource =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "set_edited_resource"
        );
    method_bindings.mb_set_toggle_mode =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "set_toggle_mode"
        );
    method_bindings.mb_set_toggle_pressed =
        api->rebel_method_bind_get_method(
            "EditorResourcePicker",
            "set_toggle_pressed"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorResourcePicker");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorResourcePicker::MethodBindings EditorResourcePicker::method_bindings = {};
void* EditorResourcePicker::class_tag = nullptr;
} // namespace Rebel
