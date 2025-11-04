// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/button.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Texture> Button::get_button_icon() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_button_icon,
        (const Object*)this
    ));
}

bool Button::get_clip_text() const {
    return rebel_icall_bool(
        method_bindings.mb_get_clip_text,
        (const Object*)this
    );
}

String Button::get_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_text,
        (const Object*)this
    );
}

Button::TextAlign Button::get_text_align() const {
    return (Button::TextAlign)rebel_icall_int(
        method_bindings.mb_get_text_align,
        (const Object*)this
    );
}

bool Button::is_expand_icon() const {
    return rebel_icall_bool(
        method_bindings.mb_is_expand_icon,
        (const Object*)this
    );
}

bool Button::is_flat() const {
    return rebel_icall_bool(
        method_bindings.mb_is_flat,
        (const Object*)this
    );
}

void Button::set_button_icon(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_button_icon,
        (const Object*)this,
        texture.ptr()
    );
}

void Button::set_clip_text(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_clip_text,
        (const Object*)this,
        enabled
    );
}

void Button::set_expand_icon(const bool arg0) {
    rebel_icall_void_bool(
        method_bindings.mb_set_expand_icon,
        (const Object*)this,
        arg0
    );
}

void Button::set_flat(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_flat,
        (const Object*)this,
        enabled
    );
}

void Button::set_text(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_set_text,
        (const Object*)this,
        text
    );
}

void Button::set_text_align(const int64_t align) {
    rebel_icall_void_int(
        method_bindings.mb_set_text_align,
        (const Object*)this,
        align
    );
}

Button* Button::create() {
    return (Button*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Button")()
         );
}

void Button::init_method_bindings() {
    method_bindings.mb_get_button_icon =
        api->rebel_method_bind_get_method(
            "Button",
            "get_button_icon"
        );
    method_bindings.mb_get_clip_text =
        api->rebel_method_bind_get_method(
            "Button",
            "get_clip_text"
        );
    method_bindings.mb_get_text =
        api->rebel_method_bind_get_method(
            "Button",
            "get_text"
        );
    method_bindings.mb_get_text_align =
        api->rebel_method_bind_get_method(
            "Button",
            "get_text_align"
        );
    method_bindings.mb_is_expand_icon =
        api->rebel_method_bind_get_method(
            "Button",
            "is_expand_icon"
        );
    method_bindings.mb_is_flat =
        api->rebel_method_bind_get_method(
            "Button",
            "is_flat"
        );
    method_bindings.mb_set_button_icon =
        api->rebel_method_bind_get_method(
            "Button",
            "set_button_icon"
        );
    method_bindings.mb_set_clip_text =
        api->rebel_method_bind_get_method(
            "Button",
            "set_clip_text"
        );
    method_bindings.mb_set_expand_icon =
        api->rebel_method_bind_get_method(
            "Button",
            "set_expand_icon"
        );
    method_bindings.mb_set_flat =
        api->rebel_method_bind_get_method(
            "Button",
            "set_flat"
        );
    method_bindings.mb_set_text =
        api->rebel_method_bind_get_method(
            "Button",
            "set_text"
        );
    method_bindings.mb_set_text_align =
        api->rebel_method_bind_get_method(
            "Button",
            "set_text_align"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Button");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Button::MethodBindings Button::method_bindings = {};
void* Button::class_tag = nullptr;
} // namespace Rebel
