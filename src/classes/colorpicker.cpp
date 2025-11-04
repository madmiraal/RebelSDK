// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/colorpicker.h"

#include "classes/control.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ColorPicker::_add_preset_pressed() {
    rebel_icall_void(
        method_bindings.mb__add_preset_pressed,
        (const Object*)this
    );
}

void ColorPicker::_focus_enter() {
    rebel_icall_void(
        method_bindings.mb__focus_enter,
        (const Object*)this
    );
}

void ColorPicker::_focus_exit() {
    rebel_icall_void(
        method_bindings.mb__focus_exit,
        (const Object*)this
    );
}

void ColorPicker::_hsv_draw(const int64_t arg0, const Control* arg1) {
    rebel_icall_void_int_object(
        method_bindings.mb__hsv_draw,
        (const Object*)this,
        arg0,
        arg1
    );
}

void ColorPicker::_html_entered(const String arg0) {
    rebel_icall_void_string(
        method_bindings.mb__html_entered,
        (const Object*)this,
        arg0
    );
}

void ColorPicker::_html_focus_exit() {
    rebel_icall_void(
        method_bindings.mb__html_focus_exit,
        (const Object*)this
    );
}

void ColorPicker::_preset_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__preset_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void ColorPicker::_sample_draw() {
    rebel_icall_void(
        method_bindings.mb__sample_draw,
        (const Object*)this
    );
}

void ColorPicker::_sample_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__sample_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void ColorPicker::_screen_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__screen_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void ColorPicker::_screen_pick_pressed() {
    rebel_icall_void(
        method_bindings.mb__screen_pick_pressed,
        (const Object*)this
    );
}

void ColorPicker::_text_type_toggled() {
    rebel_icall_void(
        method_bindings.mb__text_type_toggled,
        (const Object*)this
    );
}

void ColorPicker::_update_presets() {
    rebel_icall_void(
        method_bindings.mb__update_presets,
        (const Object*)this
    );
}

void ColorPicker::_uv_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__uv_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void ColorPicker::_value_changed(const real_t arg0) {
    rebel_icall_void_float(
        method_bindings.mb__value_changed,
        (const Object*)this,
        arg0
    );
}

void ColorPicker::_w_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__w_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void ColorPicker::add_preset(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_add_preset,
        (const Object*)this,
        color
    );
}

bool ColorPicker::are_presets_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_are_presets_enabled,
        (const Object*)this
    );
}

bool ColorPicker::are_presets_visible() const {
    return rebel_icall_bool(
        method_bindings.mb_are_presets_visible,
        (const Object*)this
    );
}

void ColorPicker::erase_preset(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_erase_preset,
        (const Object*)this,
        color
    );
}

Color ColorPicker::get_pick_color() const {
    return rebel_icall_color(
        method_bindings.mb_get_pick_color,
        (const Object*)this
    );
}

PoolColorArray ColorPicker::get_presets() const {
    return rebel_icall_poolcolorarray(
        method_bindings.mb_get_presets,
        (const Object*)this
    );
}

bool ColorPicker::is_deferred_mode() const {
    return rebel_icall_bool(
        method_bindings.mb_is_deferred_mode,
        (const Object*)this
    );
}

bool ColorPicker::is_editing_alpha() const {
    return rebel_icall_bool(
        method_bindings.mb_is_editing_alpha,
        (const Object*)this
    );
}

bool ColorPicker::is_hsv_mode() const {
    return rebel_icall_bool(
        method_bindings.mb_is_hsv_mode,
        (const Object*)this
    );
}

bool ColorPicker::is_raw_mode() const {
    return rebel_icall_bool(
        method_bindings.mb_is_raw_mode,
        (const Object*)this
    );
}

void ColorPicker::set_deferred_mode(const bool mode) {
    rebel_icall_void_bool(
        method_bindings.mb_set_deferred_mode,
        (const Object*)this,
        mode
    );
}

void ColorPicker::set_edit_alpha(const bool show) {
    rebel_icall_void_bool(
        method_bindings.mb_set_edit_alpha,
        (const Object*)this,
        show
    );
}

void ColorPicker::set_hsv_mode(const bool mode) {
    rebel_icall_void_bool(
        method_bindings.mb_set_hsv_mode,
        (const Object*)this,
        mode
    );
}

void ColorPicker::set_pick_color(const Color color) {
    rebel_icall_void_color(
        method_bindings.mb_set_pick_color,
        (const Object*)this,
        color
    );
}

void ColorPicker::set_presets_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_presets_enabled,
        (const Object*)this,
        enabled
    );
}

void ColorPicker::set_presets_visible(const bool visible) {
    rebel_icall_void_bool(
        method_bindings.mb_set_presets_visible,
        (const Object*)this,
        visible
    );
}

void ColorPicker::set_raw_mode(const bool mode) {
    rebel_icall_void_bool(
        method_bindings.mb_set_raw_mode,
        (const Object*)this,
        mode
    );
}

ColorPicker* ColorPicker::create() {
    return (ColorPicker*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ColorPicker")()
         );
}

void ColorPicker::init_method_bindings() {
    method_bindings.mb__add_preset_pressed =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_add_preset_pressed"
        );
    method_bindings.mb__focus_enter =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_focus_enter"
        );
    method_bindings.mb__focus_exit =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_focus_exit"
        );
    method_bindings.mb__hsv_draw =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_hsv_draw"
        );
    method_bindings.mb__html_entered =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_html_entered"
        );
    method_bindings.mb__html_focus_exit =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_html_focus_exit"
        );
    method_bindings.mb__preset_input =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_preset_input"
        );
    method_bindings.mb__sample_draw =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_sample_draw"
        );
    method_bindings.mb__sample_input =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_sample_input"
        );
    method_bindings.mb__screen_input =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_screen_input"
        );
    method_bindings.mb__screen_pick_pressed =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_screen_pick_pressed"
        );
    method_bindings.mb__text_type_toggled =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_text_type_toggled"
        );
    method_bindings.mb__update_presets =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_update_presets"
        );
    method_bindings.mb__uv_input =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_uv_input"
        );
    method_bindings.mb__value_changed =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_value_changed"
        );
    method_bindings.mb__w_input =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "_w_input"
        );
    method_bindings.mb_add_preset =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "add_preset"
        );
    method_bindings.mb_are_presets_enabled =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "are_presets_enabled"
        );
    method_bindings.mb_are_presets_visible =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "are_presets_visible"
        );
    method_bindings.mb_erase_preset =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "erase_preset"
        );
    method_bindings.mb_get_pick_color =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "get_pick_color"
        );
    method_bindings.mb_get_presets =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "get_presets"
        );
    method_bindings.mb_is_deferred_mode =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "is_deferred_mode"
        );
    method_bindings.mb_is_editing_alpha =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "is_editing_alpha"
        );
    method_bindings.mb_is_hsv_mode =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "is_hsv_mode"
        );
    method_bindings.mb_is_raw_mode =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "is_raw_mode"
        );
    method_bindings.mb_set_deferred_mode =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "set_deferred_mode"
        );
    method_bindings.mb_set_edit_alpha =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "set_edit_alpha"
        );
    method_bindings.mb_set_hsv_mode =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "set_hsv_mode"
        );
    method_bindings.mb_set_pick_color =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "set_pick_color"
        );
    method_bindings.mb_set_presets_enabled =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "set_presets_enabled"
        );
    method_bindings.mb_set_presets_visible =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "set_presets_visible"
        );
    method_bindings.mb_set_raw_mode =
        api->rebel_method_bind_get_method(
            "ColorPicker",
            "set_raw_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ColorPicker");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ColorPicker::MethodBindings ColorPicker::method_bindings = {};
void* ColorPicker::class_tag = nullptr;
} // namespace Rebel
