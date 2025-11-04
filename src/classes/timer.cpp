// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/timer.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t Timer::get_time_left() const {
    return rebel_icall_float(
        method_bindings.mb_get_time_left,
        (const Object*)this
    );
}

Timer::TimerProcessMode Timer::get_timer_process_mode() const {
    return (Timer::TimerProcessMode)rebel_icall_int(
        method_bindings.mb_get_timer_process_mode,
        (const Object*)this
    );
}

real_t Timer::get_wait_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_wait_time,
        (const Object*)this
    );
}

bool Timer::has_autostart() const {
    return rebel_icall_bool(
        method_bindings.mb_has_autostart,
        (const Object*)this
    );
}

bool Timer::is_one_shot() const {
    return rebel_icall_bool(
        method_bindings.mb_is_one_shot,
        (const Object*)this
    );
}

bool Timer::is_paused() const {
    return rebel_icall_bool(
        method_bindings.mb_is_paused,
        (const Object*)this
    );
}

bool Timer::is_stopped() const {
    return rebel_icall_bool(
        method_bindings.mb_is_stopped,
        (const Object*)this
    );
}

void Timer::set_autostart(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_autostart,
        (const Object*)this,
        enable
    );
}

void Timer::set_one_shot(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_one_shot,
        (const Object*)this,
        enable
    );
}

void Timer::set_paused(const bool paused) {
    rebel_icall_void_bool(
        method_bindings.mb_set_paused,
        (const Object*)this,
        paused
    );
}

void Timer::set_timer_process_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_timer_process_mode,
        (const Object*)this,
        mode
    );
}

void Timer::set_wait_time(const real_t time_sec) {
    rebel_icall_void_float(
        method_bindings.mb_set_wait_time,
        (const Object*)this,
        time_sec
    );
}

void Timer::start(const real_t time_sec) {
    rebel_icall_void_float(
        method_bindings.mb_start,
        (const Object*)this,
        time_sec
    );
}

void Timer::stop() {
    rebel_icall_void(
        method_bindings.mb_stop,
        (const Object*)this
    );
}

Timer* Timer::create() {
    return (Timer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Timer")()
         );
}

void Timer::init_method_bindings() {
    method_bindings.mb_get_time_left =
        api->rebel_method_bind_get_method(
            "Timer",
            "get_time_left"
        );
    method_bindings.mb_get_timer_process_mode =
        api->rebel_method_bind_get_method(
            "Timer",
            "get_timer_process_mode"
        );
    method_bindings.mb_get_wait_time =
        api->rebel_method_bind_get_method(
            "Timer",
            "get_wait_time"
        );
    method_bindings.mb_has_autostart =
        api->rebel_method_bind_get_method(
            "Timer",
            "has_autostart"
        );
    method_bindings.mb_is_one_shot =
        api->rebel_method_bind_get_method(
            "Timer",
            "is_one_shot"
        );
    method_bindings.mb_is_paused =
        api->rebel_method_bind_get_method(
            "Timer",
            "is_paused"
        );
    method_bindings.mb_is_stopped =
        api->rebel_method_bind_get_method(
            "Timer",
            "is_stopped"
        );
    method_bindings.mb_set_autostart =
        api->rebel_method_bind_get_method(
            "Timer",
            "set_autostart"
        );
    method_bindings.mb_set_one_shot =
        api->rebel_method_bind_get_method(
            "Timer",
            "set_one_shot"
        );
    method_bindings.mb_set_paused =
        api->rebel_method_bind_get_method(
            "Timer",
            "set_paused"
        );
    method_bindings.mb_set_timer_process_mode =
        api->rebel_method_bind_get_method(
            "Timer",
            "set_timer_process_mode"
        );
    method_bindings.mb_set_wait_time =
        api->rebel_method_bind_get_method(
            "Timer",
            "set_wait_time"
        );
    method_bindings.mb_start =
        api->rebel_method_bind_get_method(
            "Timer",
            "start"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "Timer",
            "stop"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Timer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Timer::MethodBindings Timer::method_bindings = {};
void* Timer::class_tag = nullptr;
} // namespace Rebel
