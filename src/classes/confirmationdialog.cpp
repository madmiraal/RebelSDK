// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/confirmationdialog.h"

#include "classes/button.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Button* ConfirmationDialog::get_cancel() {
    return (Button*)rebel_icall_object(
        method_bindings.mb_get_cancel,
        (const Object*)this
    );
}

ConfirmationDialog* ConfirmationDialog::create() {
    return (ConfirmationDialog*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ConfirmationDialog")()
         );
}

void ConfirmationDialog::init_method_bindings() {
    method_bindings.mb_get_cancel =
        api->rebel_method_bind_get_method(
            "ConfirmationDialog",
            "get_cancel"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ConfirmationDialog");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ConfirmationDialog::MethodBindings ConfirmationDialog::method_bindings = {};
void* ConfirmationDialog::class_tag = nullptr;
} // namespace Rebel
