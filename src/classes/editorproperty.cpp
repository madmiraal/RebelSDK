// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorproperty.h"

#include "classes/control.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorProperty::_focusable_focused(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__focusable_focused,
        (const Object*)this,
        arg0
    );
}

void EditorProperty::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void EditorProperty::add_focusable(const Control* control) {
    rebel_icall_void_object(
        method_bindings.mb_add_focusable,
        (const Object*)this,
        control
    );
}

void EditorProperty::emit_changed(const String property, const Variant value, const String field, const bool changing) {
    rebel_icall_void_string_variant_string_bool(
        method_bindings.mb_emit_changed,
        (const Object*)this,
        property,
        value,
        field,
        changing
    );
}

Object* EditorProperty::get_edited_object() {
    return (Object*)rebel_icall_object(
        method_bindings.mb_get_edited_object,
        (const Object*)this
    );
}

String EditorProperty::get_edited_property() {
    return rebel_icall_string(
        method_bindings.mb_get_edited_property,
        (const Object*)this
    );
}

String EditorProperty::get_label() const {
    return rebel_icall_string(
        method_bindings.mb_get_label,
        (const Object*)this
    );
}

String EditorProperty::get_tooltip_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_tooltip_text,
        (const Object*)this
    );
}

bool EditorProperty::is_checkable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_checkable,
        (const Object*)this
    );
}

bool EditorProperty::is_checked() const {
    return rebel_icall_bool(
        method_bindings.mb_is_checked,
        (const Object*)this
    );
}

bool EditorProperty::is_draw_red() const {
    return rebel_icall_bool(
        method_bindings.mb_is_draw_red,
        (const Object*)this
    );
}

bool EditorProperty::is_keying() const {
    return rebel_icall_bool(
        method_bindings.mb_is_keying,
        (const Object*)this
    );
}

bool EditorProperty::is_read_only() const {
    return rebel_icall_bool(
        method_bindings.mb_is_read_only,
        (const Object*)this
    );
}

void EditorProperty::set_bottom_editor(const Control* editor) {
    rebel_icall_void_object(
        method_bindings.mb_set_bottom_editor,
        (const Object*)this,
        editor
    );
}

void EditorProperty::set_checkable(const bool checkable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_checkable,
        (const Object*)this,
        checkable
    );
}

void EditorProperty::set_checked(const bool checked) {
    rebel_icall_void_bool(
        method_bindings.mb_set_checked,
        (const Object*)this,
        checked
    );
}

void EditorProperty::set_draw_red(const bool draw_red) {
    rebel_icall_void_bool(
        method_bindings.mb_set_draw_red,
        (const Object*)this,
        draw_red
    );
}

void EditorProperty::set_keying(const bool keying) {
    rebel_icall_void_bool(
        method_bindings.mb_set_keying,
        (const Object*)this,
        keying
    );
}

void EditorProperty::set_label(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_label,
        (const Object*)this,
        text
    );
}

void EditorProperty::set_read_only(const bool read_only) {
    rebel_icall_void_bool(
        method_bindings.mb_set_read_only,
        (const Object*)this,
        read_only
    );
}

void EditorProperty::update_property() {
    rebel_icall_void(
        method_bindings.mb_update_property,
        (const Object*)this
    );
}

void EditorProperty::init_method_bindings() {
    method_bindings.mb__focusable_focused =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "_focusable_focused"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "_gui_input"
        );
    method_bindings.mb_add_focusable =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "add_focusable"
        );
    method_bindings.mb_emit_changed =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "emit_changed"
        );
    method_bindings.mb_get_edited_object =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "get_edited_object"
        );
    method_bindings.mb_get_edited_property =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "get_edited_property"
        );
    method_bindings.mb_get_label =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "get_label"
        );
    method_bindings.mb_get_tooltip_text =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "get_tooltip_text"
        );
    method_bindings.mb_is_checkable =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "is_checkable"
        );
    method_bindings.mb_is_checked =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "is_checked"
        );
    method_bindings.mb_is_draw_red =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "is_draw_red"
        );
    method_bindings.mb_is_keying =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "is_keying"
        );
    method_bindings.mb_is_read_only =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "is_read_only"
        );
    method_bindings.mb_set_bottom_editor =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "set_bottom_editor"
        );
    method_bindings.mb_set_checkable =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "set_checkable"
        );
    method_bindings.mb_set_checked =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "set_checked"
        );
    method_bindings.mb_set_draw_red =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "set_draw_red"
        );
    method_bindings.mb_set_keying =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "set_keying"
        );
    method_bindings.mb_set_label =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "set_label"
        );
    method_bindings.mb_set_read_only =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "set_read_only"
        );
    method_bindings.mb_update_property =
        api->rebel_method_bind_get_method(
            "EditorProperty",
            "update_property"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorProperty");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorProperty::MethodBindings EditorProperty::method_bindings = {};
void* EditorProperty::class_tag = nullptr;
} // namespace Rebel
