// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/mainloop.h"

#include "classes/icalls.h"
#include "classes/inputevent.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void MainLoop::_drop_files(const PoolStringArray files, const int64_t from_screen) {
    rebel_icall_void_poolstringarray_int(
        method_bindings.mb__drop_files,
        (const Object*)this,
        files,
        from_screen
    );
}

void MainLoop::_finalize() {
    rebel_icall_void(
        method_bindings.mb__finalize,
        (const Object*)this
    );
}

void MainLoop::_global_menu_action(const Variant id, const Variant meta) {
    rebel_icall_void_variant_variant(
        method_bindings.mb__global_menu_action,
        (const Object*)this,
        id,
        meta
    );
}

bool MainLoop::_idle(const real_t delta) {
    return rebel_icall_bool_float(
        method_bindings.mb__idle,
        (const Object*)this,
        delta
    );
}

void MainLoop::_initialize() {
    rebel_icall_void(
        method_bindings.mb__initialize,
        (const Object*)this
    );
}

void MainLoop::_input_event(const Ref<InputEvent> event) {
    rebel_icall_void_object(
        method_bindings.mb__input_event,
        (const Object*)this,
        event.ptr()
    );
}

void MainLoop::_input_text(const String text) {
    rebel_icall_void_string(
        method_bindings.mb__input_text,
        (const Object*)this,
        text
    );
}

bool MainLoop::_iteration(const real_t delta) {
    return rebel_icall_bool_float(
        method_bindings.mb__iteration,
        (const Object*)this,
        delta
    );
}

void MainLoop::finish() {
    rebel_icall_void(
        method_bindings.mb_finish,
        (const Object*)this
    );
}

bool MainLoop::idle(const real_t delta) {
    return rebel_icall_bool_float(
        method_bindings.mb_idle,
        (const Object*)this,
        delta
    );
}

void MainLoop::init() {
    rebel_icall_void(
        method_bindings.mb_init,
        (const Object*)this
    );
}

void MainLoop::input_event(const Ref<InputEvent> event) {
    rebel_icall_void_object(
        method_bindings.mb_input_event,
        (const Object*)this,
        event.ptr()
    );
}

void MainLoop::input_text(const String text) {
    rebel_icall_void_string(
        method_bindings.mb_input_text,
        (const Object*)this,
        text
    );
}

bool MainLoop::iteration(const real_t delta) {
    return rebel_icall_bool_float(
        method_bindings.mb_iteration,
        (const Object*)this,
        delta
    );
}

MainLoop* MainLoop::create() {
    return (MainLoop*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MainLoop")()
         );
}

void MainLoop::init_method_bindings() {
    method_bindings.mb__drop_files =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "_drop_files"
        );
    method_bindings.mb__finalize =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "_finalize"
        );
    method_bindings.mb__global_menu_action =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "_global_menu_action"
        );
    method_bindings.mb__idle =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "_idle"
        );
    method_bindings.mb__initialize =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "_initialize"
        );
    method_bindings.mb__input_event =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "_input_event"
        );
    method_bindings.mb__input_text =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "_input_text"
        );
    method_bindings.mb__iteration =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "_iteration"
        );
    method_bindings.mb_finish =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "finish"
        );
    method_bindings.mb_idle =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "idle"
        );
    method_bindings.mb_init =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "init"
        );
    method_bindings.mb_input_event =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "input_event"
        );
    method_bindings.mb_input_text =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "input_text"
        );
    method_bindings.mb_iteration =
        api->rebel_method_bind_get_method(
            "MainLoop",
            "iteration"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MainLoop");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MainLoop::MethodBindings MainLoop::method_bindings = {};
void* MainLoop::class_tag = nullptr;
} // namespace Rebel
