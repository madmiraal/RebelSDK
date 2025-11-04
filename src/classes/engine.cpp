// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/engine.h"

#include "classes/icalls.h"
#include "classes/mainloop.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary Engine::get_author_info() const {
    return rebel_icall_dictionary(
        method_bindings.mb_get_author_info,
        (const Object*)this
    );
}

Array Engine::get_copyright_info() const {
    return rebel_icall_array(
        method_bindings.mb_get_copyright_info,
        (const Object*)this
    );
}

Dictionary Engine::get_donor_info() const {
    return rebel_icall_dictionary(
        method_bindings.mb_get_donor_info,
        (const Object*)this
    );
}

int64_t Engine::get_frames_drawn() {
    return rebel_icall_int(
        method_bindings.mb_get_frames_drawn,
        (const Object*)this
    );
}

real_t Engine::get_frames_per_second() const {
    return rebel_icall_float(
        method_bindings.mb_get_frames_per_second,
        (const Object*)this
    );
}

int64_t Engine::get_idle_frames() const {
    return rebel_icall_int(
        method_bindings.mb_get_idle_frames,
        (const Object*)this
    );
}

int64_t Engine::get_iterations_per_second() const {
    return rebel_icall_int(
        method_bindings.mb_get_iterations_per_second,
        (const Object*)this
    );
}

Dictionary Engine::get_license_info() const {
    return rebel_icall_dictionary(
        method_bindings.mb_get_license_info,
        (const Object*)this
    );
}

String Engine::get_license_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_license_text,
        (const Object*)this
    );
}

MainLoop* Engine::get_main_loop() const {
    return (MainLoop*)rebel_icall_object(
        method_bindings.mb_get_main_loop,
        (const Object*)this
    );
}

int64_t Engine::get_physics_frames() const {
    return rebel_icall_int(
        method_bindings.mb_get_physics_frames,
        (const Object*)this
    );
}

real_t Engine::get_physics_interpolation_fraction() const {
    return rebel_icall_float(
        method_bindings.mb_get_physics_interpolation_fraction,
        (const Object*)this
    );
}

real_t Engine::get_physics_jitter_fix() const {
    return rebel_icall_float(
        method_bindings.mb_get_physics_jitter_fix,
        (const Object*)this
    );
}

Object* Engine::get_singleton(const String name) const {
    return (Object*)rebel_icall_object_string(
        method_bindings.mb_get_singleton,
        (const Object*)this,
        name
    );
}

int64_t Engine::get_target_fps() const {
    return rebel_icall_int(
        method_bindings.mb_get_target_fps,
        (const Object*)this
    );
}

real_t Engine::get_time_scale() {
    return rebel_icall_float(
        method_bindings.mb_get_time_scale,
        (const Object*)this
    );
}

Dictionary Engine::get_version_info() const {
    return rebel_icall_dictionary(
        method_bindings.mb_get_version_info,
        (const Object*)this
    );
}

bool Engine::has_singleton(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_singleton,
        (const Object*)this,
        name
    );
}

bool Engine::is_editor_hint() const {
    return rebel_icall_bool(
        method_bindings.mb_is_editor_hint,
        (const Object*)this
    );
}

bool Engine::is_in_physics_frame() const {
    return rebel_icall_bool(
        method_bindings.mb_is_in_physics_frame,
        (const Object*)this
    );
}

bool Engine::is_printing_error_messages() const {
    return rebel_icall_bool(
        method_bindings.mb_is_printing_error_messages,
        (const Object*)this
    );
}

void Engine::set_editor_hint(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_editor_hint,
        (const Object*)this,
        enabled
    );
}

void Engine::set_iterations_per_second(const int64_t iterations_per_second) {
    rebel_icall_void_int(
        method_bindings.mb_set_iterations_per_second,
        (const Object*)this,
        iterations_per_second
    );
}

void Engine::set_physics_jitter_fix(const real_t physics_jitter_fix) {
    rebel_icall_void_float(
        method_bindings.mb_set_physics_jitter_fix,
        (const Object*)this,
        physics_jitter_fix
    );
}

void Engine::set_print_error_messages(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_print_error_messages,
        (const Object*)this,
        enabled
    );
}

void Engine::set_target_fps(const int64_t target_fps) {
    rebel_icall_void_int(
        method_bindings.mb_set_target_fps,
        (const Object*)this,
        target_fps
    );
}

void Engine::set_time_scale(const real_t time_scale) {
    rebel_icall_void_float(
        method_bindings.mb_set_time_scale,
        (const Object*)this,
        time_scale
    );
}

Engine* Engine::singleton = nullptr;

Engine::Engine() {
    owner = api->rebel_global_get_singleton((char*) "Engine");
}

void Engine::init_method_bindings() {
    method_bindings.mb_get_author_info =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_author_info"
        );
    method_bindings.mb_get_copyright_info =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_copyright_info"
        );
    method_bindings.mb_get_donor_info =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_donor_info"
        );
    method_bindings.mb_get_frames_drawn =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_frames_drawn"
        );
    method_bindings.mb_get_frames_per_second =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_frames_per_second"
        );
    method_bindings.mb_get_idle_frames =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_idle_frames"
        );
    method_bindings.mb_get_iterations_per_second =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_iterations_per_second"
        );
    method_bindings.mb_get_license_info =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_license_info"
        );
    method_bindings.mb_get_license_text =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_license_text"
        );
    method_bindings.mb_get_main_loop =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_main_loop"
        );
    method_bindings.mb_get_physics_frames =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_physics_frames"
        );
    method_bindings.mb_get_physics_interpolation_fraction =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_physics_interpolation_fraction"
        );
    method_bindings.mb_get_physics_jitter_fix =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_physics_jitter_fix"
        );
    method_bindings.mb_get_singleton =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_singleton"
        );
    method_bindings.mb_get_target_fps =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_target_fps"
        );
    method_bindings.mb_get_time_scale =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_time_scale"
        );
    method_bindings.mb_get_version_info =
        api->rebel_method_bind_get_method(
            "_Engine",
            "get_version_info"
        );
    method_bindings.mb_has_singleton =
        api->rebel_method_bind_get_method(
            "_Engine",
            "has_singleton"
        );
    method_bindings.mb_is_editor_hint =
        api->rebel_method_bind_get_method(
            "_Engine",
            "is_editor_hint"
        );
    method_bindings.mb_is_in_physics_frame =
        api->rebel_method_bind_get_method(
            "_Engine",
            "is_in_physics_frame"
        );
    method_bindings.mb_is_printing_error_messages =
        api->rebel_method_bind_get_method(
            "_Engine",
            "is_printing_error_messages"
        );
    method_bindings.mb_set_editor_hint =
        api->rebel_method_bind_get_method(
            "_Engine",
            "set_editor_hint"
        );
    method_bindings.mb_set_iterations_per_second =
        api->rebel_method_bind_get_method(
            "_Engine",
            "set_iterations_per_second"
        );
    method_bindings.mb_set_physics_jitter_fix =
        api->rebel_method_bind_get_method(
            "_Engine",
            "set_physics_jitter_fix"
        );
    method_bindings.mb_set_print_error_messages =
        api->rebel_method_bind_get_method(
            "_Engine",
            "set_print_error_messages"
        );
    method_bindings.mb_set_target_fps =
        api->rebel_method_bind_get_method(
            "_Engine",
            "set_target_fps"
        );
    method_bindings.mb_set_time_scale =
        api->rebel_method_bind_get_method(
            "_Engine",
            "set_time_scale"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_Engine");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Engine::MethodBindings Engine::method_bindings = {};
void* Engine::class_tag = nullptr;
} // namespace Rebel
