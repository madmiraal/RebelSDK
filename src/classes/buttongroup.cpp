// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/buttongroup.h"

#include "classes/basebutton.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array ButtonGroup::get_buttons() {
    return rebel_icall_array(
        method_bindings.mb_get_buttons,
        (const Object*)this
    );
}

BaseButton* ButtonGroup::get_pressed_button() {
    return (BaseButton*)rebel_icall_object(
        method_bindings.mb_get_pressed_button,
        (const Object*)this
    );
}

ButtonGroup* ButtonGroup::create() {
    return (ButtonGroup*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ButtonGroup")()
         );
}

void ButtonGroup::init_method_bindings() {
    method_bindings.mb_get_buttons =
        api->rebel_method_bind_get_method(
            "ButtonGroup",
            "get_buttons"
        );
    method_bindings.mb_get_pressed_button =
        api->rebel_method_bind_get_method(
            "ButtonGroup",
            "get_pressed_button"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ButtonGroup");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ButtonGroup::MethodBindings ButtonGroup::method_bindings = {};
void* ButtonGroup::class_tag = nullptr;
} // namespace Rebel
