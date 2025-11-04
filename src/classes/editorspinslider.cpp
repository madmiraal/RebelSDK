// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorspinslider.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorSpinSlider::_grabber_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__grabber_gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void EditorSpinSlider::_grabber_mouse_entered() {
    rebel_icall_void(
        method_bindings.mb__grabber_mouse_entered,
        (const Object*)this
    );
}

void EditorSpinSlider::_grabber_mouse_exited() {
    rebel_icall_void(
        method_bindings.mb__grabber_mouse_exited,
        (const Object*)this
    );
}

void EditorSpinSlider::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void EditorSpinSlider::_value_focus_exited() {
    rebel_icall_void(
        method_bindings.mb__value_focus_exited,
        (const Object*)this
    );
}

void EditorSpinSlider::_value_input_closed() {
    rebel_icall_void(
        method_bindings.mb__value_input_closed,
        (const Object*)this
    );
}

void EditorSpinSlider::_value_input_entered(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__value_input_entered,
        (const Object*)this,
        arg0
    );
}

void EditorSpinSlider::_value_input_gui_input(const Ref<InputEvent> event) {
    rebel_icall_void_object(
        method_bindings.mb__value_input_gui_input,
        (const Object*)this,
        event.ptr()
    );
}

String EditorSpinSlider::get_label() const {
    return rebel_icall_string(
        method_bindings.mb_get_label,
        (const Object*)this
    );
}

bool EditorSpinSlider::is_flat() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flat,
        (const Object*)this
    );
}

bool EditorSpinSlider::is_read_only() const {
    return rebel_icall_bool(
        method_bindings.mb_is_read_only,
        (const Object*)this
    );
}

void EditorSpinSlider::set_flat(const bool flat) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flat,
        (const Object*)this,
        flat
    );
}

void EditorSpinSlider::set_label(const String label) {
    rebel_icall_void_string(
        method_bindings.mb_set_label,
        (const Object*)this,
        label
    );
}

void EditorSpinSlider::set_read_only(const bool read_only) {
    rebel_icall_void_bool(
        method_bindings.mb_set_read_only,
        (const Object*)this,
        read_only
    );
}

void EditorSpinSlider::init_method_bindings() {
    method_bindings.mb__grabber_gui_input =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "_grabber_gui_input"
        );
    method_bindings.mb__grabber_mouse_entered =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "_grabber_mouse_entered"
        );
    method_bindings.mb__grabber_mouse_exited =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "_grabber_mouse_exited"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "_gui_input"
        );
    method_bindings.mb__value_focus_exited =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "_value_focus_exited"
        );
    method_bindings.mb__value_input_closed =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "_value_input_closed"
        );
    method_bindings.mb__value_input_entered =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "_value_input_entered"
        );
    method_bindings.mb__value_input_gui_input =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "_value_input_gui_input"
        );
    method_bindings.mb_get_label =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "get_label"
        );
    method_bindings.mb_is_flat =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "is_flat"
        );
    method_bindings.mb_is_read_only =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "is_read_only"
        );
    method_bindings.mb_set_flat =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "set_flat"
        );
    method_bindings.mb_set_label =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "set_label"
        );
    method_bindings.mb_set_read_only =
        api->rebel_method_bind_get_method(
            "EditorSpinSlider",
            "set_read_only"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorSpinSlider");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorSpinSlider::MethodBindings EditorSpinSlider::method_bindings = {};
void* EditorSpinSlider::class_tag = nullptr;
} // namespace Rebel
