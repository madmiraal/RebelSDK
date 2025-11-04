// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/popup.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool Popup::is_exclusive() const {
    return rebel_icall_bool(
        method_bindings.mb_is_exclusive,
        (const Object*)this
    );
}

void Popup::popup(const Rect2 bounds) {
    rebel_icall_void_rect2(
        method_bindings.mb_popup,
        (const Object*)this,
        bounds
    );
}

void Popup::popup_centered(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_popup_centered,
        (const Object*)this,
        size
    );
}

void Popup::popup_centered_clamped(const Vector2 size, const real_t fallback_ratio) {
    rebel_icall_void_vector2_float(
        method_bindings.mb_popup_centered_clamped,
        (const Object*)this,
        size,
        fallback_ratio
    );
}

void Popup::popup_centered_minsize(const Vector2 minsize) {
    rebel_icall_void_vector2(
        method_bindings.mb_popup_centered_minsize,
        (const Object*)this,
        minsize
    );
}

void Popup::popup_centered_ratio(const real_t ratio) {
    rebel_icall_void_float(
        method_bindings.mb_popup_centered_ratio,
        (const Object*)this,
        ratio
    );
}

void Popup::set_as_minsize() {
    rebel_icall_void(
        method_bindings.mb_set_as_minsize,
        (const Object*)this
    );
}

void Popup::set_exclusive(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_exclusive,
        (const Object*)this,
        enable
    );
}

Popup* Popup::create() {
    return (Popup*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Popup")()
         );
}

void Popup::init_method_bindings() {
    method_bindings.mb_is_exclusive =
        api->rebel_method_bind_get_method(
            "Popup",
            "is_exclusive"
        );
    method_bindings.mb_popup =
        api->rebel_method_bind_get_method(
            "Popup",
            "popup"
        );
    method_bindings.mb_popup_centered =
        api->rebel_method_bind_get_method(
            "Popup",
            "popup_centered"
        );
    method_bindings.mb_popup_centered_clamped =
        api->rebel_method_bind_get_method(
            "Popup",
            "popup_centered_clamped"
        );
    method_bindings.mb_popup_centered_minsize =
        api->rebel_method_bind_get_method(
            "Popup",
            "popup_centered_minsize"
        );
    method_bindings.mb_popup_centered_ratio =
        api->rebel_method_bind_get_method(
            "Popup",
            "popup_centered_ratio"
        );
    method_bindings.mb_set_as_minsize =
        api->rebel_method_bind_get_method(
            "Popup",
            "set_as_minsize"
        );
    method_bindings.mb_set_exclusive =
        api->rebel_method_bind_get_method(
            "Popup",
            "set_exclusive"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Popup");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Popup::MethodBindings Popup::method_bindings = {};
void* Popup::class_tag = nullptr;
} // namespace Rebel
