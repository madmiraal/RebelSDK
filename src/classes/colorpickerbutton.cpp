// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/colorpickerbutton.h"

#include "classes/colorpicker.h"
#include "classes/icalls.h"
#include "classes/popuppanel.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ColorPickerButton::_about_to_show() {
    rebel_icall_void(
        method_bindings.mb__about_to_show,
        (const Object*)this
    );
}

void ColorPickerButton::_color_changed(const Color arg0) {
    rebel_icall_void_color(
        method_bindings.mb__color_changed,
        (const Object*)this,
        arg0
    );
}

void ColorPickerButton::_modal_closed() {
    rebel_icall_void(
        method_bindings.mb__modal_closed,
        (const Object*)this
    );
}

Color ColorPickerButton::get_pick_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_pick_color,
        (const Object*)this
    );
}

ColorPicker* ColorPickerButton::get_picker() {
    return (ColorPicker*)rebel_icall_object(
        method_bindings.mb_get_picker,
        (const Object*)this
    );
}

PopupPanel* ColorPickerButton::get_popup() {
    return (PopupPanel*)rebel_icall_object(
        method_bindings.mb_get_popup,
        (const Object*)this
    );
}

bool ColorPickerButton::is_editing_alpha() const {
    return rebel_icall_bool(
        method_bindings.mb_is_editing_alpha,
        (const Object*)this
    );
}

void ColorPickerButton::set_edit_alpha(const bool show) {
    rebel_icall_void_bool(
        method_bindings.mb_set_edit_alpha,
        (const Object*)this,
        show
    );
}

void ColorPickerButton::set_pick_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_pick_color,
        (const Object*)this,
        color
    );
}

ColorPickerButton* ColorPickerButton::create() {
    return (ColorPickerButton*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ColorPickerButton")()
         );
}

void ColorPickerButton::init_method_bindings() {
    method_bindings.mb__about_to_show =
        api->rebel_method_bind_get_method(
            "ColorPickerButton",
            "_about_to_show"
        );
    method_bindings.mb__color_changed =
        api->rebel_method_bind_get_method(
            "ColorPickerButton",
            "_color_changed"
        );
    method_bindings.mb__modal_closed =
        api->rebel_method_bind_get_method(
            "ColorPickerButton",
            "_modal_closed"
        );
    method_bindings.mb_get_pick_color =
        api->rebel_method_bind_get_method(
            "ColorPickerButton",
            "get_pick_color"
        );
    method_bindings.mb_get_picker =
        api->rebel_method_bind_get_method(
            "ColorPickerButton",
            "get_picker"
        );
    method_bindings.mb_get_popup =
        api->rebel_method_bind_get_method(
            "ColorPickerButton",
            "get_popup"
        );
    method_bindings.mb_is_editing_alpha =
        api->rebel_method_bind_get_method(
            "ColorPickerButton",
            "is_editing_alpha"
        );
    method_bindings.mb_set_edit_alpha =
        api->rebel_method_bind_get_method(
            "ColorPickerButton",
            "set_edit_alpha"
        );
    method_bindings.mb_set_pick_color =
        api->rebel_method_bind_get_method(
            "ColorPickerButton",
            "set_pick_color"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ColorPickerButton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ColorPickerButton::MethodBindings ColorPickerButton::method_bindings = {};
void* ColorPickerButton::class_tag = nullptr;
} // namespace Rebel
