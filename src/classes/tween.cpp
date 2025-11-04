// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/tween.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Tween::_remove_by_uid(const int64_t uid) {
    rebel_icall_void_int(
        method_bindings.mb__remove_by_uid,
        (const Object*)this,
        uid
    );
}

bool Tween::follow_method(const Object* object, const String method, const Variant initial_val, const Object* target, const String target_method, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
    return rebel_icall_bool_object_string_variant_object_string_float_int_int_float(
        method_bindings.mb_follow_method,
        (const Object*)this,
        object,
        method,
        initial_val,
        target,
        target_method,
        duration,
        trans_type,
        ease_type,
        delay
    );
}

bool Tween::follow_property(const Object* object, const NodePath property, const Variant initial_val, const Object* target, const NodePath target_property, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
    return rebel_icall_bool_object_nodepath_variant_object_nodepath_float_int_int_float(
        method_bindings.mb_follow_property,
        (const Object*)this,
        object,
        property,
        initial_val,
        target,
        target_property,
        duration,
        trans_type,
        ease_type,
        delay
    );
}

real_t Tween::get_runtime() const {
    return rebel_icall_float(
        method_bindings.mb_get_runtime,
        (const Object*)this
    );
}

real_t Tween::get_speed_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_speed_scale,
        (const Object*)this
    );
}

Tween::TweenProcessMode Tween::get_tween_process_mode() const {
    return (Tween::TweenProcessMode)rebel_icall_int(
        method_bindings.mb_get_tween_process_mode,
        (const Object*)this
    );
}

bool Tween::interpolate_callback(const Object* object, const real_t duration, const String callback, const Variant arg1, const Variant arg2, const Variant arg3, const Variant arg4, const Variant arg5) {
    return rebel_icall_bool_object_float_string_variant_variant_variant_variant_variant(
        method_bindings.mb_interpolate_callback,
        (const Object*)this,
        object,
        duration,
        callback,
        arg1,
        arg2,
        arg3,
        arg4,
        arg5
    );
}

bool Tween::interpolate_deferred_callback(const Object* object, const real_t duration, const String callback, const Variant arg1, const Variant arg2, const Variant arg3, const Variant arg4, const Variant arg5) {
    return rebel_icall_bool_object_float_string_variant_variant_variant_variant_variant(
        method_bindings.mb_interpolate_deferred_callback,
        (const Object*)this,
        object,
        duration,
        callback,
        arg1,
        arg2,
        arg3,
        arg4,
        arg5
    );
}

bool Tween::interpolate_method(const Object* object, const String method, const Variant initial_val, const Variant final_val, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
    return rebel_icall_bool_object_string_variant_variant_float_int_int_float(
        method_bindings.mb_interpolate_method,
        (const Object*)this,
        object,
        method,
        initial_val,
        final_val,
        duration,
        trans_type,
        ease_type,
        delay
    );
}

bool Tween::interpolate_property(const Object* object, const NodePath property, const Variant initial_val, const Variant final_val, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
    return rebel_icall_bool_object_nodepath_variant_variant_float_int_int_float(
        method_bindings.mb_interpolate_property,
        (const Object*)this,
        object,
        property,
        initial_val,
        final_val,
        duration,
        trans_type,
        ease_type,
        delay
    );
}

bool Tween::is_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_active,
        (const Object*)this
    );
}

bool Tween::is_repeat() const {
    return rebel_icall_bool(
        method_bindings.mb_is_repeat,
        (const Object*)this
    );
}

bool Tween::remove(const Object* object, const String key) {
    return rebel_icall_bool_object_string(
        method_bindings.mb_remove,
        (const Object*)this,
        object,
        key
    );
}

bool Tween::remove_all() {
    return rebel_icall_bool(
        method_bindings.mb_remove_all,
        (const Object*)this
    );
}

bool Tween::reset(const Object* object, const String key) {
    return rebel_icall_bool_object_string(
        method_bindings.mb_reset,
        (const Object*)this,
        object,
        key
    );
}

bool Tween::reset_all() {
    return rebel_icall_bool(
        method_bindings.mb_reset_all,
        (const Object*)this
    );
}

bool Tween::resume(const Object* object, const String key) {
    return rebel_icall_bool_object_string(
        method_bindings.mb_resume,
        (const Object*)this,
        object,
        key
    );
}

bool Tween::resume_all() {
    return rebel_icall_bool(
        method_bindings.mb_resume_all,
        (const Object*)this
    );
}

bool Tween::seek(const real_t time) {
    return rebel_icall_bool_float(
        method_bindings.mb_seek,
        (const Object*)this,
        time
    );
}

void Tween::set_active(const bool active) {
    rebel_icall_void_bool(
        method_bindings.mb_set_active,
        (const Object*)this,
        active
    );
}

void Tween::set_repeat(const bool repeat) {
    rebel_icall_void_bool(
        method_bindings.mb_set_repeat,
        (const Object*)this,
        repeat
    );
}

void Tween::set_speed_scale(const real_t speed) {
    rebel_icall_void_float(
        method_bindings.mb_set_speed_scale,
        (const Object*)this,
        speed
    );
}

void Tween::set_tween_process_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_tween_process_mode,
        (const Object*)this,
        mode
    );
}

bool Tween::start() {
    return rebel_icall_bool(
        method_bindings.mb_start,
        (const Object*)this
    );
}

bool Tween::stop(const Object* object, const String key) {
    return rebel_icall_bool_object_string(
        method_bindings.mb_stop,
        (const Object*)this,
        object,
        key
    );
}

bool Tween::stop_all() {
    return rebel_icall_bool(
        method_bindings.mb_stop_all,
        (const Object*)this
    );
}

bool Tween::targeting_method(const Object* object, const String method, const Object* initial, const String initial_method, const Variant final_val, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
    return rebel_icall_bool_object_string_object_string_variant_float_int_int_float(
        method_bindings.mb_targeting_method,
        (const Object*)this,
        object,
        method,
        initial,
        initial_method,
        final_val,
        duration,
        trans_type,
        ease_type,
        delay
    );
}

bool Tween::targeting_property(const Object* object, const NodePath property, const Object* initial, const NodePath initial_val, const Variant final_val, const real_t duration, const int64_t trans_type, const int64_t ease_type, const real_t delay) {
    return rebel_icall_bool_object_nodepath_object_nodepath_variant_float_int_int_float(
        method_bindings.mb_targeting_property,
        (const Object*)this,
        object,
        property,
        initial,
        initial_val,
        final_val,
        duration,
        trans_type,
        ease_type,
        delay
    );
}

real_t Tween::tell() const {
    return rebel_icall_float(
        method_bindings.mb_tell,
        (const Object*)this
    );
}

Tween* Tween::create() {
    return (Tween*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Tween")()
         );
}

void Tween::init_method_bindings() {
    method_bindings.mb__remove_by_uid =
        api->rebel_method_bind_get_method(
            "Tween",
            "_remove_by_uid"
        );
    method_bindings.mb_follow_method =
        api->rebel_method_bind_get_method(
            "Tween",
            "follow_method"
        );
    method_bindings.mb_follow_property =
        api->rebel_method_bind_get_method(
            "Tween",
            "follow_property"
        );
    method_bindings.mb_get_runtime =
        api->rebel_method_bind_get_method(
            "Tween",
            "get_runtime"
        );
    method_bindings.mb_get_speed_scale =
        api->rebel_method_bind_get_method(
            "Tween",
            "get_speed_scale"
        );
    method_bindings.mb_get_tween_process_mode =
        api->rebel_method_bind_get_method(
            "Tween",
            "get_tween_process_mode"
        );
    method_bindings.mb_interpolate_callback =
        api->rebel_method_bind_get_method(
            "Tween",
            "interpolate_callback"
        );
    method_bindings.mb_interpolate_deferred_callback =
        api->rebel_method_bind_get_method(
            "Tween",
            "interpolate_deferred_callback"
        );
    method_bindings.mb_interpolate_method =
        api->rebel_method_bind_get_method(
            "Tween",
            "interpolate_method"
        );
    method_bindings.mb_interpolate_property =
        api->rebel_method_bind_get_method(
            "Tween",
            "interpolate_property"
        );
    method_bindings.mb_is_active =
        api->rebel_method_bind_get_method(
            "Tween",
            "is_active"
        );
    method_bindings.mb_is_repeat =
        api->rebel_method_bind_get_method(
            "Tween",
            "is_repeat"
        );
    method_bindings.mb_remove =
        api->rebel_method_bind_get_method(
            "Tween",
            "remove"
        );
    method_bindings.mb_remove_all =
        api->rebel_method_bind_get_method(
            "Tween",
            "remove_all"
        );
    method_bindings.mb_reset =
        api->rebel_method_bind_get_method(
            "Tween",
            "reset"
        );
    method_bindings.mb_reset_all =
        api->rebel_method_bind_get_method(
            "Tween",
            "reset_all"
        );
    method_bindings.mb_resume =
        api->rebel_method_bind_get_method(
            "Tween",
            "resume"
        );
    method_bindings.mb_resume_all =
        api->rebel_method_bind_get_method(
            "Tween",
            "resume_all"
        );
    method_bindings.mb_seek =
        api->rebel_method_bind_get_method(
            "Tween",
            "seek"
        );
    method_bindings.mb_set_active =
        api->rebel_method_bind_get_method(
            "Tween",
            "set_active"
        );
    method_bindings.mb_set_repeat =
        api->rebel_method_bind_get_method(
            "Tween",
            "set_repeat"
        );
    method_bindings.mb_set_speed_scale =
        api->rebel_method_bind_get_method(
            "Tween",
            "set_speed_scale"
        );
    method_bindings.mb_set_tween_process_mode =
        api->rebel_method_bind_get_method(
            "Tween",
            "set_tween_process_mode"
        );
    method_bindings.mb_start =
        api->rebel_method_bind_get_method(
            "Tween",
            "start"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "Tween",
            "stop"
        );
    method_bindings.mb_stop_all =
        api->rebel_method_bind_get_method(
            "Tween",
            "stop_all"
        );
    method_bindings.mb_targeting_method =
        api->rebel_method_bind_get_method(
            "Tween",
            "targeting_method"
        );
    method_bindings.mb_targeting_property =
        api->rebel_method_bind_get_method(
            "Tween",
            "targeting_property"
        );
    method_bindings.mb_tell =
        api->rebel_method_bind_get_method(
            "Tween",
            "tell"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Tween");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Tween::MethodBindings Tween::method_bindings = {};
void* Tween::class_tag = nullptr;
} // namespace Rebel
