// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/inputeventjoypadmotion.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t InputEventJoypadMotion::get_axis() const {
    return rebel_icall_int(
        method_bindings.mb_get_axis,
        (const Object*)this
    );
}

real_t InputEventJoypadMotion::get_axis_value() const {
    return rebel_icall_float(
        method_bindings.mb_get_axis_value,
        (const Object*)this
    );
}

void InputEventJoypadMotion::set_axis(const int64_t axis) {
    rebel_icall_void_int(
        method_bindings.mb_set_axis,
        (const Object*)this,
        axis
    );
}

void InputEventJoypadMotion::set_axis_value(const real_t axis_value) {
    rebel_icall_void_float(
        method_bindings.mb_set_axis_value,
        (const Object*)this,
        axis_value
    );
}

InputEventJoypadMotion* InputEventJoypadMotion::create() {
    return (InputEventJoypadMotion*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"InputEventJoypadMotion")()
         );
}

void InputEventJoypadMotion::init_method_bindings() {
    method_bindings.mb_get_axis =
        api->rebel_method_bind_get_method(
            "InputEventJoypadMotion",
            "get_axis"
        );
    method_bindings.mb_get_axis_value =
        api->rebel_method_bind_get_method(
            "InputEventJoypadMotion",
            "get_axis_value"
        );
    method_bindings.mb_set_axis =
        api->rebel_method_bind_get_method(
            "InputEventJoypadMotion",
            "set_axis"
        );
    method_bindings.mb_set_axis_value =
        api->rebel_method_bind_get_method(
            "InputEventJoypadMotion",
            "set_axis_value"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "InputEventJoypadMotion");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

InputEventJoypadMotion::MethodBindings InputEventJoypadMotion::method_bindings = {};
void* InputEventJoypadMotion::class_tag = nullptr;
} // namespace Rebel
