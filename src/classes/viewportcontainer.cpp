// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/viewportcontainer.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ViewportContainer::_input(const Ref<InputEvent> event) {
    rebel_icall_void_object(
        method_bindings.mb__input,
        (const Object*)this,
        event.ptr()
    );
}

void ViewportContainer::_unhandled_input(const Ref<InputEvent> event) {
    rebel_icall_void_object(
        method_bindings.mb__unhandled_input,
        (const Object*)this,
        event.ptr()
    );
}

int64_t ViewportContainer::get_stretch_shrink() const {
    return rebel_icall_int(
        method_bindings.mb_get_stretch_shrink,
        (const Object*)this
    );
}

bool ViewportContainer::is_stretch_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_stretch_enabled,
        (const Object*)this
    );
}

void ViewportContainer::set_stretch(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_stretch,
        (const Object*)this,
        enable
    );
}

void ViewportContainer::set_stretch_shrink(const int64_t amount) {
    rebel_icall_void_int(
        method_bindings.mb_set_stretch_shrink,
        (const Object*)this,
        amount
    );
}

ViewportContainer* ViewportContainer::create() {
    return (ViewportContainer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ViewportContainer")()
         );
}

void ViewportContainer::init_method_bindings() {
    method_bindings.mb__input =
        api->rebel_method_bind_get_method(
            "ViewportContainer",
            "_input"
        );
    method_bindings.mb__unhandled_input =
        api->rebel_method_bind_get_method(
            "ViewportContainer",
            "_unhandled_input"
        );
    method_bindings.mb_get_stretch_shrink =
        api->rebel_method_bind_get_method(
            "ViewportContainer",
            "get_stretch_shrink"
        );
    method_bindings.mb_is_stretch_enabled =
        api->rebel_method_bind_get_method(
            "ViewportContainer",
            "is_stretch_enabled"
        );
    method_bindings.mb_set_stretch =
        api->rebel_method_bind_get_method(
            "ViewportContainer",
            "set_stretch"
        );
    method_bindings.mb_set_stretch_shrink =
        api->rebel_method_bind_get_method(
            "ViewportContainer",
            "set_stretch_shrink"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ViewportContainer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ViewportContainer::MethodBindings ViewportContainer::method_bindings = {};
void* ViewportContainer::class_tag = nullptr;
} // namespace Rebel
