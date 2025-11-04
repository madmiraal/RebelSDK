// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/menubutton.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/popupmenu.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array MenuButton::_get_items() const {
    return rebel_icall_array(
        method_bindings.mb__get_items,
        (const Object*)this
    );
}

void MenuButton::_set_items(const Array arg0) {
    rebel_icall_void_array(
        method_bindings.mb__set_items,
        (const Object*)this,
        arg0
    );
}

void MenuButton::_unhandled_key_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__unhandled_key_input,
        (const Object*)this,
        arg0.ptr()
    );
}

PopupMenu* MenuButton::get_popup() const {
    return (PopupMenu*)rebel_icall_object(
        method_bindings.mb_get_popup,
        (const Object*)this
    );
}

bool MenuButton::is_switch_on_hover() {
    return rebel_icall_bool(
        method_bindings.mb_is_switch_on_hover,
        (const Object*)this
    );
}

void MenuButton::set_disable_shortcuts(const bool disabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_disable_shortcuts,
        (const Object*)this,
        disabled
    );
}

void MenuButton::set_switch_on_hover(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_switch_on_hover,
        (const Object*)this,
        enable
    );
}

MenuButton* MenuButton::create() {
    return (MenuButton*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MenuButton")()
         );
}

void MenuButton::init_method_bindings() {
    method_bindings.mb__get_items =
        api->rebel_method_bind_get_method(
            "MenuButton",
            "_get_items"
        );
    method_bindings.mb__set_items =
        api->rebel_method_bind_get_method(
            "MenuButton",
            "_set_items"
        );
    method_bindings.mb__unhandled_key_input =
        api->rebel_method_bind_get_method(
            "MenuButton",
            "_unhandled_key_input"
        );
    method_bindings.mb_get_popup =
        api->rebel_method_bind_get_method(
            "MenuButton",
            "get_popup"
        );
    method_bindings.mb_is_switch_on_hover =
        api->rebel_method_bind_get_method(
            "MenuButton",
            "is_switch_on_hover"
        );
    method_bindings.mb_set_disable_shortcuts =
        api->rebel_method_bind_get_method(
            "MenuButton",
            "set_disable_shortcuts"
        );
    method_bindings.mb_set_switch_on_hover =
        api->rebel_method_bind_get_method(
            "MenuButton",
            "set_switch_on_hover"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MenuButton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MenuButton::MethodBindings MenuButton::method_bindings = {};
void* MenuButton::class_tag = nullptr;
} // namespace Rebel
