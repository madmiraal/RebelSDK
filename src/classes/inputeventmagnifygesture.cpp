// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventmagnifygesture.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t InputEventMagnifyGesture::get_factor() const {
    return rebel_icall_float(
        method_bindings.mb_get_factor,
        (const Object*)this
    );
}

void InputEventMagnifyGesture::set_factor(const real_t factor) {
    rebel_icall_void_float(
        method_bindings.mb_set_factor,
        (const Object*)this,
        factor
    );
}

InputEventMagnifyGesture* InputEventMagnifyGesture::create() {
    return (InputEventMagnifyGesture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InputEventMagnifyGesture")()
         );
}

void InputEventMagnifyGesture::init_method_bindings() {
    method_bindings.mb_get_factor =
        api->rebel_method_bind_get_method(
            "InputEventMagnifyGesture",
            "get_factor"
        );
    method_bindings.mb_set_factor =
        api->rebel_method_bind_get_method(
            "InputEventMagnifyGesture",
            "set_factor"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventMagnifyGesture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventMagnifyGesture::MethodBindings InputEventMagnifyGesture::method_bindings = {};
void* InputEventMagnifyGesture::class_tag = nullptr;
} // namespace Rebel
