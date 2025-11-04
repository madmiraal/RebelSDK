// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventpangesture.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Vector2 InputEventPanGesture::get_delta() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_delta,
        (const Object*)this
    );
}

void InputEventPanGesture::set_delta(const Vector2 delta) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_delta,
        (const Object*)this,
        delta
    );
}

InputEventPanGesture* InputEventPanGesture::create() {
    return (InputEventPanGesture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InputEventPanGesture")()
         );
}

void InputEventPanGesture::init_method_bindings() {
    method_bindings.mb_get_delta =
        api->rebel_method_bind_get_method(
            "InputEventPanGesture",
            "get_delta"
        );
    method_bindings.mb_set_delta =
        api->rebel_method_bind_get_method(
            "InputEventPanGesture",
            "set_delta"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventPanGesture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventPanGesture::MethodBindings InputEventPanGesture::method_bindings = {};
void* InputEventPanGesture::class_tag = nullptr;
} // namespace Rebel
