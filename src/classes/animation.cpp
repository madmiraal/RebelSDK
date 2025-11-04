// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animation.h"

#include "classes/animation.h"
#include "classes/icalls.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t Animation::add_track(const int64_t type, const int64_t at_position) {
    return rebel_icall_int_int_int(
        method_bindings.mb_add_track,
        (const Object*)this,
        type,
        at_position
    );
}

String Animation::animation_track_get_key_animation(const int64_t track_idx, const int64_t key_idx) const {
    return rebel_icall_string_int_int(
        method_bindings.mb_animation_track_get_key_animation,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

int64_t Animation::animation_track_insert_key(const int64_t track_idx, const real_t time, const String animation) {
    return rebel_icall_int_int_float_string(
        method_bindings.mb_animation_track_insert_key,
        (const Object*)this,
        track_idx,
        time,
        animation
    );
}

void Animation::animation_track_set_key_animation(const int64_t track_idx, const int64_t key_idx, const String animation) {
    rebel_icall_void_int_int_string(
        method_bindings.mb_animation_track_set_key_animation,
        (const Object*)this,
        track_idx,
        key_idx,
        animation
    );
}

real_t Animation::audio_track_get_key_end_offset(const int64_t track_idx, const int64_t key_idx) const {
    return rebel_icall_float_int_int(
        method_bindings.mb_audio_track_get_key_end_offset,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

real_t Animation::audio_track_get_key_start_offset(const int64_t track_idx, const int64_t key_idx) const {
    return rebel_icall_float_int_int(
        method_bindings.mb_audio_track_get_key_start_offset,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

Ref<Resource> Animation::audio_track_get_key_stream(const int64_t track_idx, const int64_t key_idx) const {
    return Ref<Resource>::create_ref(rebel_icall_object_int_int(
        method_bindings.mb_audio_track_get_key_stream,
        (const Object*)this,
        track_idx,
        key_idx
    ));
}

int64_t Animation::audio_track_insert_key(const int64_t track_idx, const real_t time, const Ref<Resource> stream, const real_t start_offset, const real_t end_offset) {
    return rebel_icall_int_int_float_object_float_float(
        method_bindings.mb_audio_track_insert_key,
        (const Object*)this,
        track_idx,
        time,
        stream.ptr(),
        start_offset,
        end_offset
    );
}

void Animation::audio_track_set_key_end_offset(const int64_t track_idx, const int64_t key_idx, const real_t offset) {
    rebel_icall_void_int_int_float(
        method_bindings.mb_audio_track_set_key_end_offset,
        (const Object*)this,
        track_idx,
        key_idx,
        offset
    );
}

void Animation::audio_track_set_key_start_offset(const int64_t track_idx, const int64_t key_idx, const real_t offset) {
    rebel_icall_void_int_int_float(
        method_bindings.mb_audio_track_set_key_start_offset,
        (const Object*)this,
        track_idx,
        key_idx,
        offset
    );
}

void Animation::audio_track_set_key_stream(const int64_t track_idx, const int64_t key_idx, const Ref<Resource> stream) {
    rebel_icall_void_int_int_object(
        method_bindings.mb_audio_track_set_key_stream,
        (const Object*)this,
        track_idx,
        key_idx,
        stream.ptr()
    );
}

Vector2 Animation::bezier_track_get_key_in_handle(const int64_t track_idx, const int64_t key_idx) const {
    return rebel_icall_vector2_int_int(
        method_bindings.mb_bezier_track_get_key_in_handle,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

Vector2 Animation::bezier_track_get_key_out_handle(const int64_t track_idx, const int64_t key_idx) const {
    return rebel_icall_vector2_int_int(
        method_bindings.mb_bezier_track_get_key_out_handle,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

real_t Animation::bezier_track_get_key_value(const int64_t track_idx, const int64_t key_idx) const {
    return rebel_icall_float_int_int(
        method_bindings.mb_bezier_track_get_key_value,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

int64_t Animation::bezier_track_insert_key(const int64_t track_idx, const real_t time, const real_t value, const Vector2 in_handle, const Vector2 out_handle) {
    return rebel_icall_int_int_float_float_vector2_vector2(
        method_bindings.mb_bezier_track_insert_key,
        (const Object*)this,
        track_idx,
        time,
        value,
        in_handle,
        out_handle
    );
}

real_t Animation::bezier_track_interpolate(const int64_t track_idx, const real_t time) const {
    return rebel_icall_float_int_float(
        method_bindings.mb_bezier_track_interpolate,
        (const Object*)this,
        track_idx,
        time
    );
}

void Animation::bezier_track_set_key_in_handle(const int64_t track_idx, const int64_t key_idx, const Vector2 in_handle) {
    rebel_icall_void_int_int_vector2(
        method_bindings.mb_bezier_track_set_key_in_handle,
        (const Object*)this,
        track_idx,
        key_idx,
        in_handle
    );
}

void Animation::bezier_track_set_key_out_handle(const int64_t track_idx, const int64_t key_idx, const Vector2 out_handle) {
    rebel_icall_void_int_int_vector2(
        method_bindings.mb_bezier_track_set_key_out_handle,
        (const Object*)this,
        track_idx,
        key_idx,
        out_handle
    );
}

void Animation::bezier_track_set_key_value(const int64_t track_idx, const int64_t key_idx, const real_t value) {
    rebel_icall_void_int_int_float(
        method_bindings.mb_bezier_track_set_key_value,
        (const Object*)this,
        track_idx,
        key_idx,
        value
    );
}

void Animation::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void Animation::copy_track(const int64_t track_idx, const Ref<Animation> to_animation) {
    rebel_icall_void_int_object(
        method_bindings.mb_copy_track,
        (const Object*)this,
        track_idx,
        to_animation.ptr()
    );
}

int64_t Animation::find_track(const NodePath path) const {
    return rebel_icall_int_nodepath(
        method_bindings.mb_find_track,
        (const Object*)this,
        path
    );
}

real_t Animation::get_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_length,
        (const Object*)this
    );
}

real_t Animation::get_step() const {
    return rebel_icall_float(
        method_bindings.mb_get_step,
        (const Object*)this
    );
}

int64_t Animation::get_track_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_track_count,
        (const Object*)this
    );
}

bool Animation::has_loop() const {
    return rebel_icall_bool(
        method_bindings.mb_has_loop,
        (const Object*)this
    );
}

PoolIntArray Animation::method_track_get_key_indices(const int64_t track_idx, const real_t time_sec, const real_t delta) const {
    return rebel_icall_poolintarray_int_float_float(
        method_bindings.mb_method_track_get_key_indices,
        (const Object*)this,
        track_idx,
        time_sec,
        delta
    );
}

String Animation::method_track_get_name(const int64_t track_idx, const int64_t key_idx) const {
    return rebel_icall_string_int_int(
        method_bindings.mb_method_track_get_name,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

Array Animation::method_track_get_params(const int64_t track_idx, const int64_t key_idx) const {
    return rebel_icall_array_int_int(
        method_bindings.mb_method_track_get_params,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

void Animation::remove_track(const int64_t track_idx) {
    rebel_icall_void_int(
        method_bindings.mb_remove_track,
        (const Object*)this,
        track_idx
    );
}

void Animation::set_length(const real_t time_sec) {
    rebel_icall_void_float(
        method_bindings.mb_set_length,
        (const Object*)this,
        time_sec
    );
}

void Animation::set_loop(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_loop,
        (const Object*)this,
        enabled
    );
}

void Animation::set_step(const real_t size_sec) {
    rebel_icall_void_float(
        method_bindings.mb_set_step,
        (const Object*)this,
        size_sec
    );
}

int64_t Animation::track_find_key(const int64_t track_idx, const real_t time, const bool exact) const {
    return rebel_icall_int_int_float_bool(
        method_bindings.mb_track_find_key,
        (const Object*)this,
        track_idx,
        time,
        exact
    );
}

bool Animation::track_get_interpolation_loop_wrap(const int64_t track_idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_track_get_interpolation_loop_wrap,
        (const Object*)this,
        track_idx
    );
}

Animation::InterpolationType Animation::track_get_interpolation_type(const int64_t track_idx) const {
    return (Animation::InterpolationType)rebel_icall_int_int(
        method_bindings.mb_track_get_interpolation_type,
        (const Object*)this,
        track_idx
    );
}

int64_t Animation::track_get_key_count(const int64_t track_idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_track_get_key_count,
        (const Object*)this,
        track_idx
    );
}

real_t Animation::track_get_key_time(const int64_t track_idx, const int64_t key_idx) const {
    return rebel_icall_float_int_int(
        method_bindings.mb_track_get_key_time,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

real_t Animation::track_get_key_transition(const int64_t track_idx, const int64_t key_idx) const {
    return rebel_icall_float_int_int(
        method_bindings.mb_track_get_key_transition,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

Variant Animation::track_get_key_value(const int64_t track_idx, const int64_t key_idx) const {
    return rebel_icall_variant_int_int(
        method_bindings.mb_track_get_key_value,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

NodePath Animation::track_get_path(const int64_t track_idx) const {
    return rebel_icall_nodepath_int(
        method_bindings.mb_track_get_path,
        (const Object*)this,
        track_idx
    );
}

Animation::TrackType Animation::track_get_type(const int64_t track_idx) const {
    return (Animation::TrackType)rebel_icall_int_int(
        method_bindings.mb_track_get_type,
        (const Object*)this,
        track_idx
    );
}

void Animation::track_insert_key(const int64_t track_idx, const real_t time, const Variant key, const real_t transition) {
    rebel_icall_void_int_float_variant_float(
        method_bindings.mb_track_insert_key,
        (const Object*)this,
        track_idx,
        time,
        key,
        transition
    );
}

bool Animation::track_is_enabled(const int64_t track_idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_track_is_enabled,
        (const Object*)this,
        track_idx
    );
}

bool Animation::track_is_imported(const int64_t track_idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_track_is_imported,
        (const Object*)this,
        track_idx
    );
}

void Animation::track_move_down(const int64_t track_idx) {
    rebel_icall_void_int(
        method_bindings.mb_track_move_down,
        (const Object*)this,
        track_idx
    );
}

void Animation::track_move_to(const int64_t track_idx, const int64_t to_idx) {
    rebel_icall_void_int_int(
        method_bindings.mb_track_move_to,
        (const Object*)this,
        track_idx,
        to_idx
    );
}

void Animation::track_move_up(const int64_t track_idx) {
    rebel_icall_void_int(
        method_bindings.mb_track_move_up,
        (const Object*)this,
        track_idx
    );
}

void Animation::track_remove_key(const int64_t track_idx, const int64_t key_idx) {
    rebel_icall_void_int_int(
        method_bindings.mb_track_remove_key,
        (const Object*)this,
        track_idx,
        key_idx
    );
}

void Animation::track_remove_key_at_position(const int64_t track_idx, const real_t position) {
    rebel_icall_void_int_float(
        method_bindings.mb_track_remove_key_at_position,
        (const Object*)this,
        track_idx,
        position
    );
}

void Animation::track_set_enabled(const int64_t track_idx, const bool enabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_track_set_enabled,
        (const Object*)this,
        track_idx,
        enabled
    );
}

void Animation::track_set_imported(const int64_t track_idx, const bool imported) {
    rebel_icall_void_int_bool(
        method_bindings.mb_track_set_imported,
        (const Object*)this,
        track_idx,
        imported
    );
}

void Animation::track_set_interpolation_loop_wrap(const int64_t track_idx, const bool interpolation) {
    rebel_icall_void_int_bool(
        method_bindings.mb_track_set_interpolation_loop_wrap,
        (const Object*)this,
        track_idx,
        interpolation
    );
}

void Animation::track_set_interpolation_type(const int64_t track_idx, const int64_t interpolation) {
    rebel_icall_void_int_int(
        method_bindings.mb_track_set_interpolation_type,
        (const Object*)this,
        track_idx,
        interpolation
    );
}

void Animation::track_set_key_time(const int64_t track_idx, const int64_t key_idx, const real_t time) {
    rebel_icall_void_int_int_float(
        method_bindings.mb_track_set_key_time,
        (const Object*)this,
        track_idx,
        key_idx,
        time
    );
}

void Animation::track_set_key_transition(const int64_t track_idx, const int64_t key_idx, const real_t transition) {
    rebel_icall_void_int_int_float(
        method_bindings.mb_track_set_key_transition,
        (const Object*)this,
        track_idx,
        key_idx,
        transition
    );
}

void Animation::track_set_key_value(const int64_t track_idx, const int64_t key, const Variant value) {
    rebel_icall_void_int_int_variant(
        method_bindings.mb_track_set_key_value,
        (const Object*)this,
        track_idx,
        key,
        value
    );
}

void Animation::track_set_path(const int64_t track_idx, const NodePath path) {
    rebel_icall_void_int_nodepath(
        method_bindings.mb_track_set_path,
        (const Object*)this,
        track_idx,
        path
    );
}

void Animation::track_swap(const int64_t track_idx, const int64_t with_idx) {
    rebel_icall_void_int_int(
        method_bindings.mb_track_swap,
        (const Object*)this,
        track_idx,
        with_idx
    );
}

int64_t Animation::transform_track_insert_key(const int64_t track_idx, const real_t time, const Vector3 location, const Quat rotation, const Vector3 scale) {
    return rebel_icall_int_int_float_vector3_quat_vector3(
        method_bindings.mb_transform_track_insert_key,
        (const Object*)this,
        track_idx,
        time,
        location,
        rotation,
        scale
    );
}

Array Animation::transform_track_interpolate(const int64_t track_idx, const real_t time_sec) const {
    return rebel_icall_array_int_float(
        method_bindings.mb_transform_track_interpolate,
        (const Object*)this,
        track_idx,
        time_sec
    );
}

PoolIntArray Animation::value_track_get_key_indices(const int64_t track_idx, const real_t time_sec, const real_t delta) const {
    return rebel_icall_poolintarray_int_float_float(
        method_bindings.mb_value_track_get_key_indices,
        (const Object*)this,
        track_idx,
        time_sec,
        delta
    );
}

Animation::UpdateMode Animation::value_track_get_update_mode(const int64_t track_idx) const {
    return (Animation::UpdateMode)rebel_icall_int_int(
        method_bindings.mb_value_track_get_update_mode,
        (const Object*)this,
        track_idx
    );
}

Variant Animation::value_track_interpolate(const int64_t track_idx, const real_t time_sec) const {
    return rebel_icall_variant_int_float(
        method_bindings.mb_value_track_interpolate,
        (const Object*)this,
        track_idx,
        time_sec
    );
}

void Animation::value_track_set_update_mode(const int64_t track_idx, const int64_t mode) {
    rebel_icall_void_int_int(
        method_bindings.mb_value_track_set_update_mode,
        (const Object*)this,
        track_idx,
        mode
    );
}

Animation* Animation::create() {
    return (Animation*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Animation")()
         );
}

void Animation::init_method_bindings() {
    method_bindings.mb_add_track =
        api->rebel_method_bind_get_method(
            "Animation",
            "add_track"
        );
    method_bindings.mb_animation_track_get_key_animation =
        api->rebel_method_bind_get_method(
            "Animation",
            "animation_track_get_key_animation"
        );
    method_bindings.mb_animation_track_insert_key =
        api->rebel_method_bind_get_method(
            "Animation",
            "animation_track_insert_key"
        );
    method_bindings.mb_animation_track_set_key_animation =
        api->rebel_method_bind_get_method(
            "Animation",
            "animation_track_set_key_animation"
        );
    method_bindings.mb_audio_track_get_key_end_offset =
        api->rebel_method_bind_get_method(
            "Animation",
            "audio_track_get_key_end_offset"
        );
    method_bindings.mb_audio_track_get_key_start_offset =
        api->rebel_method_bind_get_method(
            "Animation",
            "audio_track_get_key_start_offset"
        );
    method_bindings.mb_audio_track_get_key_stream =
        api->rebel_method_bind_get_method(
            "Animation",
            "audio_track_get_key_stream"
        );
    method_bindings.mb_audio_track_insert_key =
        api->rebel_method_bind_get_method(
            "Animation",
            "audio_track_insert_key"
        );
    method_bindings.mb_audio_track_set_key_end_offset =
        api->rebel_method_bind_get_method(
            "Animation",
            "audio_track_set_key_end_offset"
        );
    method_bindings.mb_audio_track_set_key_start_offset =
        api->rebel_method_bind_get_method(
            "Animation",
            "audio_track_set_key_start_offset"
        );
    method_bindings.mb_audio_track_set_key_stream =
        api->rebel_method_bind_get_method(
            "Animation",
            "audio_track_set_key_stream"
        );
    method_bindings.mb_bezier_track_get_key_in_handle =
        api->rebel_method_bind_get_method(
            "Animation",
            "bezier_track_get_key_in_handle"
        );
    method_bindings.mb_bezier_track_get_key_out_handle =
        api->rebel_method_bind_get_method(
            "Animation",
            "bezier_track_get_key_out_handle"
        );
    method_bindings.mb_bezier_track_get_key_value =
        api->rebel_method_bind_get_method(
            "Animation",
            "bezier_track_get_key_value"
        );
    method_bindings.mb_bezier_track_insert_key =
        api->rebel_method_bind_get_method(
            "Animation",
            "bezier_track_insert_key"
        );
    method_bindings.mb_bezier_track_interpolate =
        api->rebel_method_bind_get_method(
            "Animation",
            "bezier_track_interpolate"
        );
    method_bindings.mb_bezier_track_set_key_in_handle =
        api->rebel_method_bind_get_method(
            "Animation",
            "bezier_track_set_key_in_handle"
        );
    method_bindings.mb_bezier_track_set_key_out_handle =
        api->rebel_method_bind_get_method(
            "Animation",
            "bezier_track_set_key_out_handle"
        );
    method_bindings.mb_bezier_track_set_key_value =
        api->rebel_method_bind_get_method(
            "Animation",
            "bezier_track_set_key_value"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "Animation",
            "clear"
        );
    method_bindings.mb_copy_track =
        api->rebel_method_bind_get_method(
            "Animation",
            "copy_track"
        );
    method_bindings.mb_find_track =
        api->rebel_method_bind_get_method(
            "Animation",
            "find_track"
        );
    method_bindings.mb_get_length =
        api->rebel_method_bind_get_method(
            "Animation",
            "get_length"
        );
    method_bindings.mb_get_step =
        api->rebel_method_bind_get_method(
            "Animation",
            "get_step"
        );
    method_bindings.mb_get_track_count =
        api->rebel_method_bind_get_method(
            "Animation",
            "get_track_count"
        );
    method_bindings.mb_has_loop =
        api->rebel_method_bind_get_method(
            "Animation",
            "has_loop"
        );
    method_bindings.mb_method_track_get_key_indices =
        api->rebel_method_bind_get_method(
            "Animation",
            "method_track_get_key_indices"
        );
    method_bindings.mb_method_track_get_name =
        api->rebel_method_bind_get_method(
            "Animation",
            "method_track_get_name"
        );
    method_bindings.mb_method_track_get_params =
        api->rebel_method_bind_get_method(
            "Animation",
            "method_track_get_params"
        );
    method_bindings.mb_remove_track =
        api->rebel_method_bind_get_method(
            "Animation",
            "remove_track"
        );
    method_bindings.mb_set_length =
        api->rebel_method_bind_get_method(
            "Animation",
            "set_length"
        );
    method_bindings.mb_set_loop =
        api->rebel_method_bind_get_method(
            "Animation",
            "set_loop"
        );
    method_bindings.mb_set_step =
        api->rebel_method_bind_get_method(
            "Animation",
            "set_step"
        );
    method_bindings.mb_track_find_key =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_find_key"
        );
    method_bindings.mb_track_get_interpolation_loop_wrap =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_get_interpolation_loop_wrap"
        );
    method_bindings.mb_track_get_interpolation_type =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_get_interpolation_type"
        );
    method_bindings.mb_track_get_key_count =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_get_key_count"
        );
    method_bindings.mb_track_get_key_time =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_get_key_time"
        );
    method_bindings.mb_track_get_key_transition =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_get_key_transition"
        );
    method_bindings.mb_track_get_key_value =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_get_key_value"
        );
    method_bindings.mb_track_get_path =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_get_path"
        );
    method_bindings.mb_track_get_type =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_get_type"
        );
    method_bindings.mb_track_insert_key =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_insert_key"
        );
    method_bindings.mb_track_is_enabled =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_is_enabled"
        );
    method_bindings.mb_track_is_imported =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_is_imported"
        );
    method_bindings.mb_track_move_down =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_move_down"
        );
    method_bindings.mb_track_move_to =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_move_to"
        );
    method_bindings.mb_track_move_up =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_move_up"
        );
    method_bindings.mb_track_remove_key =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_remove_key"
        );
    method_bindings.mb_track_remove_key_at_position =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_remove_key_at_position"
        );
    method_bindings.mb_track_set_enabled =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_set_enabled"
        );
    method_bindings.mb_track_set_imported =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_set_imported"
        );
    method_bindings.mb_track_set_interpolation_loop_wrap =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_set_interpolation_loop_wrap"
        );
    method_bindings.mb_track_set_interpolation_type =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_set_interpolation_type"
        );
    method_bindings.mb_track_set_key_time =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_set_key_time"
        );
    method_bindings.mb_track_set_key_transition =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_set_key_transition"
        );
    method_bindings.mb_track_set_key_value =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_set_key_value"
        );
    method_bindings.mb_track_set_path =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_set_path"
        );
    method_bindings.mb_track_swap =
        api->rebel_method_bind_get_method(
            "Animation",
            "track_swap"
        );
    method_bindings.mb_transform_track_insert_key =
        api->rebel_method_bind_get_method(
            "Animation",
            "transform_track_insert_key"
        );
    method_bindings.mb_transform_track_interpolate =
        api->rebel_method_bind_get_method(
            "Animation",
            "transform_track_interpolate"
        );
    method_bindings.mb_value_track_get_key_indices =
        api->rebel_method_bind_get_method(
            "Animation",
            "value_track_get_key_indices"
        );
    method_bindings.mb_value_track_get_update_mode =
        api->rebel_method_bind_get_method(
            "Animation",
            "value_track_get_update_mode"
        );
    method_bindings.mb_value_track_interpolate =
        api->rebel_method_bind_get_method(
            "Animation",
            "value_track_interpolate"
        );
    method_bindings.mb_value_track_set_update_mode =
        api->rebel_method_bind_get_method(
            "Animation",
            "value_track_set_update_mode"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Animation");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Animation::MethodBindings Animation::method_bindings = {};
void* Animation::class_tag = nullptr;
} // namespace Rebel
