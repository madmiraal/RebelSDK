// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/scrollbar.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void ScrollBar::_drag_node_exit() {
    rebel_icall_void(
        method_bindings.mb__drag_node_exit,
        (const Object*)this
    );
}

void ScrollBar::_drag_node_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__drag_node_input,
        (const Object*)this,
        arg0.ptr()
    );
}

void ScrollBar::_gui_input(const Ref<InputEvent> arg0) {
    rebel_icall_void_object(
        method_bindings.mb__gui_input,
        (const Object*)this,
        arg0.ptr()
    );
}

real_t ScrollBar::get_custom_step() const {
    return rebel_icall_float(
        method_bindings.mb_get_custom_step,
        (const Object*)this
    );
}

void ScrollBar::set_custom_step(const real_t step) {
    rebel_icall_void_float(
        method_bindings.mb_set_custom_step,
        (const Object*)this,
        step
    );
}

void ScrollBar::init_method_bindings() {
    method_bindings.mb__drag_node_exit =
        api->rebel_method_bind_get_method(
            "ScrollBar",
            "_drag_node_exit"
        );
    method_bindings.mb__drag_node_input =
        api->rebel_method_bind_get_method(
            "ScrollBar",
            "_drag_node_input"
        );
    method_bindings.mb__gui_input =
        api->rebel_method_bind_get_method(
            "ScrollBar",
            "_gui_input"
        );
    method_bindings.mb_get_custom_step =
        api->rebel_method_bind_get_method(
            "ScrollBar",
            "get_custom_step"
        );
    method_bindings.mb_set_custom_step =
        api->rebel_method_bind_get_method(
            "ScrollBar",
            "set_custom_step"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ScrollBar");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ScrollBar::MethodBindings ScrollBar::method_bindings = {};
void* ScrollBar::class_tag = nullptr;
} // namespace Rebel
