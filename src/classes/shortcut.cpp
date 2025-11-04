// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/shortcut.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String ShortCut::get_as_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_as_text,
        (const Object*)this
    );
}

Ref<InputEvent> ShortCut::get_shortcut() const {
    return Ref<InputEvent>::create_ref(rebel_icall_object(
        method_bindings.mb_get_shortcut,
        (const Object*)this
    ));
}

bool ShortCut::is_shortcut(const Ref<InputEvent> event) const {
    return rebel_icall_bool_object(
        method_bindings.mb_is_shortcut,
        (const Object*)this,
        event.ptr()
    );
}

bool ShortCut::is_valid() const {
    return rebel_icall_bool(
        method_bindings.mb_is_valid,
        (const Object*)this
    );
}

void ShortCut::set_shortcut(const Ref<InputEvent> event) {
    rebel_icall_void_object(
        method_bindings.mb_set_shortcut,
        (const Object*)this,
        event.ptr()
    );
}

ShortCut* ShortCut::create() {
    return (ShortCut*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ShortCut")()
         );
}

void ShortCut::init_method_bindings() {
    method_bindings.mb_get_as_text =
        api->rebel_method_bind_get_method(
            "ShortCut",
            "get_as_text"
        );
    method_bindings.mb_get_shortcut =
        api->rebel_method_bind_get_method(
            "ShortCut",
            "get_shortcut"
        );
    method_bindings.mb_is_shortcut =
        api->rebel_method_bind_get_method(
            "ShortCut",
            "is_shortcut"
        );
    method_bindings.mb_is_valid =
        api->rebel_method_bind_get_method(
            "ShortCut",
            "is_valid"
        );
    method_bindings.mb_set_shortcut =
        api->rebel_method_bind_get_method(
            "ShortCut",
            "set_shortcut"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ShortCut");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ShortCut::MethodBindings ShortCut::method_bindings = {};
void* ShortCut::class_tag = nullptr;
} // namespace Rebel
