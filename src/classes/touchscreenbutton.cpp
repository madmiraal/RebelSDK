// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/touchscreenbutton.h"

#include "classes/bitmap.h"
#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "classes/shape2d.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void TouchScreenButton::_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__input,
        (const Object*)this,
        arg0.ptr()
    );
}

String TouchScreenButton::get_action() const {
    return rebel_icall_string(
        method_bindings.mb_get_action,
        (const Object*)this
    );
}

Ref<BitMap> TouchScreenButton::get_bitmask() const {
    return Ref<BitMap>::create_ref(rebel_icall_object(
        method_bindings.mb_get_bitmask,
        (const Object*)this
    ));
}

Ref<Shape2D> TouchScreenButton::get_shape() const {
    return Ref<Shape2D>::create_ref(rebel_icall_object(
        method_bindings.mb_get_shape,
        (const Object*)this
    ));
}

Ref<Texture> TouchScreenButton::get_texture() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture,
        (const Object*)this
    ));
}

Ref<Texture> TouchScreenButton::get_texture_pressed() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_texture_pressed,
        (const Object*)this
    ));
}

TouchScreenButton::VisibilityMode TouchScreenButton::get_visibility_mode() const {
    return (TouchScreenButton::VisibilityMode)rebel_icall_int(
        method_bindings.mb_get_visibility_mode,
        (const Object*)this
    );
}

bool TouchScreenButton::is_passby_press_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_passby_press_enabled,
        (const Object*)this
    );
}

bool TouchScreenButton::is_pressed() const {
    return rebel_icall_bool(
        method_bindings.mb_is_pressed,
        (const Object*)this
    );
}

bool TouchScreenButton::is_shape_centered() const {
    return rebel_icall_bool(
        method_bindings.mb_is_shape_centered,
        (const Object*)this
    );
}

bool TouchScreenButton::is_shape_visible() const {
    return rebel_icall_bool(
        method_bindings.mb_is_shape_visible,
        (const Object*)this
    );
}

void TouchScreenButton::set_action(const String action) {
    rebel_icall_void_string(
        method_bindings.mb_set_action,
        (const Object*)this,
        action
    );
}

void TouchScreenButton::set_bitmask(const Ref<BitMap> bitmask) {
    rebel_icall_void_object(
        method_bindings.mb_set_bitmask,
        (const Object*)this,
        bitmask.ptr()
    );
}

void TouchScreenButton::set_passby_press(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_passby_press,
        (const Object*)this,
        enabled
    );
}

void TouchScreenButton::set_shape(const Ref<Shape2D> shape) {
    rebel_icall_void_object(
        method_bindings.mb_set_shape,
        (const Object*)this,
        shape.ptr()
    );
}

void TouchScreenButton::set_shape_centered(const bool _bool) {
    rebel_icall_void_bool(
        method_bindings.mb_set_shape_centered,
        (const Object*)this,
        _bool
    );
}

void TouchScreenButton::set_shape_visible(const bool _bool) {
    rebel_icall_void_bool(
        method_bindings.mb_set_shape_visible,
        (const Object*)this,
        _bool
    );
}

void TouchScreenButton::set_texture(const Ref<Texture> texture) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture,
        (const Object*)this,
        texture.ptr()
    );
}

void TouchScreenButton::set_texture_pressed(const Ref<Texture> texture_pressed) {
    rebel_icall_void_object(
        method_bindings.mb_set_texture_pressed,
        (const Object*)this,
        texture_pressed.ptr()
    );
}

void TouchScreenButton::set_visibility_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_visibility_mode,
        (const Object*)this,
        mode
    );
}

TouchScreenButton* TouchScreenButton::create() {
    return (TouchScreenButton*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"TouchScreenButton")()
         );
}

void TouchScreenButton::init_method_bindings() {
    method_bindings.mb__input =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "_input"
        );
    method_bindings.mb_get_action =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "get_action"
        );
    method_bindings.mb_get_bitmask =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "get_bitmask"
        );
    method_bindings.mb_get_shape =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "get_shape"
        );
    method_bindings.mb_get_texture =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "get_texture"
        );
    method_bindings.mb_get_texture_pressed =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "get_texture_pressed"
        );
    method_bindings.mb_get_visibility_mode =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "get_visibility_mode"
        );
    method_bindings.mb_is_passby_press_enabled =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "is_passby_press_enabled"
        );
    method_bindings.mb_is_pressed =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "is_pressed"
        );
    method_bindings.mb_is_shape_centered =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "is_shape_centered"
        );
    method_bindings.mb_is_shape_visible =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "is_shape_visible"
        );
    method_bindings.mb_set_action =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "set_action"
        );
    method_bindings.mb_set_bitmask =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "set_bitmask"
        );
    method_bindings.mb_set_passby_press =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "set_passby_press"
        );
    method_bindings.mb_set_shape =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "set_shape"
        );
    method_bindings.mb_set_shape_centered =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "set_shape_centered"
        );
    method_bindings.mb_set_shape_visible =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "set_shape_visible"
        );
    method_bindings.mb_set_texture =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "set_texture"
        );
    method_bindings.mb_set_texture_pressed =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "set_texture_pressed"
        );
    method_bindings.mb_set_visibility_mode =
        api->rebel_method_bind_get_method(
            "TouchScreenButton",
            "set_visibility_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "TouchScreenButton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

TouchScreenButton::MethodBindings TouchScreenButton::method_bindings = {};
void* TouchScreenButton::class_tag = nullptr;
} // namespace Rebel
