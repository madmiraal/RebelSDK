// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/slider.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Slider::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

int64_t Slider::get_ticks() const {
    return rebel_icall_int(
        method_bindings.mb_get_ticks,
        (const Object*)this
    );
}

bool Slider::get_ticks_on_borders() const {
    return rebel_icall_bool(
        method_bindings.mb_get_ticks_on_borders,
        (const Object*)this
    );
}

bool Slider::is_editable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_editable,
        (const Object*)this
    );
}

bool Slider::is_scrollable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_scrollable,
        (const Object*)this
    );
}

void Slider::set_editable(const bool editable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_editable,
        (const Object*)this,
        editable
    );
}

void Slider::set_scrollable(const bool scrollable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_scrollable,
        (const Object*)this,
        scrollable
    );
}

void Slider::set_ticks(const int64_t count) {
    rebel_icall_void_int(
        method_bindings.mb_set_ticks,
        (const Object*)this,
        count
    );
}

void Slider::set_ticks_on_borders(const bool ticks_on_border) {
    rebel_icall_void_bool(
        method_bindings.mb_set_ticks_on_borders,
        (const Object*)this,
        ticks_on_border
    );
}

void Slider::init_method_bindings() {
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "Slider",
            "_gui_input"
        );
    method_bindings.mb_get_ticks =
        api->rebel_method_bind_get_method(
            "Slider",
            "get_ticks"
        );
    method_bindings.mb_get_ticks_on_borders =
        api->rebel_method_bind_get_method(
            "Slider",
            "get_ticks_on_borders"
        );
    method_bindings.mb_is_editable =
        api->rebel_method_bind_get_method(
            "Slider",
            "is_editable"
        );
    method_bindings.mb_is_scrollable =
        api->rebel_method_bind_get_method(
            "Slider",
            "is_scrollable"
        );
    method_bindings.mb_set_editable =
        api->rebel_method_bind_get_method(
            "Slider",
            "set_editable"
        );
    method_bindings.mb_set_scrollable =
        api->rebel_method_bind_get_method(
            "Slider",
            "set_scrollable"
        );
    method_bindings.mb_set_ticks =
        api->rebel_method_bind_get_method(
            "Slider",
            "set_ticks"
        );
    method_bindings.mb_set_ticks_on_borders =
        api->rebel_method_bind_get_method(
            "Slider",
            "set_ticks_on_borders"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Slider");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Slider::MethodBindings Slider::method_bindings = {};
void* Slider::class_tag = nullptr;
} // namespace Rebel
