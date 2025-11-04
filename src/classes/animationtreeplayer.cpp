// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationtreeplayer.h"

#include "classes/animation.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AnimationTreePlayer::add_node(const int64_t type, const String id) {
    rebel_icall_void_int_string(
        method_bindings.mb_add_node,
        (const Object*)this,
        type,
        id
    );
}

void AnimationTreePlayer::advance(const real_t delta) {
    rebel_icall_void_float(
        method_bindings.mb_advance,
        (const Object*)this,
        delta
    );
}

Ref<Animation> AnimationTreePlayer::animation_node_get_animation(const String id) const {
    return Ref<Animation>::create_ref(rebel_icall_object_string(
        method_bindings.mb_animation_node_get_animation,
        (const Object*)this,
        id
    ));
}

String AnimationTreePlayer::animation_node_get_master_animation(const String id) const {
    return rebel_icall_string_string(
        method_bindings.mb_animation_node_get_master_animation,
        (const Object*)this,
        id
    );
}

real_t AnimationTreePlayer::animation_node_get_position(const String id) const {
    return rebel_icall_float_string(
        method_bindings.mb_animation_node_get_position,
        (const Object*)this,
        id
    );
}

void AnimationTreePlayer::animation_node_set_animation(const String id, const Ref<Animation> animation) {
    rebel_icall_void_string_object(
        method_bindings.mb_animation_node_set_animation,
        (const Object*)this,
        id,
        animation.ptr()
    );
}

void AnimationTreePlayer::animation_node_set_filter_path(const String id, const NodePath path, const bool enable) {
    rebel_icall_void_string_nodepath_bool(
        method_bindings.mb_animation_node_set_filter_path,
        (const Object*)this,
        id,
        path,
        enable
    );
}

void AnimationTreePlayer::animation_node_set_master_animation(const String id, const String source) {
    rebel_icall_void_string_string(
        method_bindings.mb_animation_node_set_master_animation,
        (const Object*)this,
        id,
        source
    );
}

bool AnimationTreePlayer::are_nodes_connected(const String id, const String dst_id, const int64_t dst_input_idx) const {
    return rebel_icall_bool_string_string_int(
        method_bindings.mb_are_nodes_connected,
        (const Object*)this,
        id,
        dst_id,
        dst_input_idx
    );
}

real_t AnimationTreePlayer::blend2_node_get_amount(const String id) const {
    return rebel_icall_float_string(
        method_bindings.mb_blend2_node_get_amount,
        (const Object*)this,
        id
    );
}

void AnimationTreePlayer::blend2_node_set_amount(const String id, const real_t blend) {
    rebel_icall_void_string_float(
        method_bindings.mb_blend2_node_set_amount,
        (const Object*)this,
        id,
        blend
    );
}

void AnimationTreePlayer::blend2_node_set_filter_path(const String id, const NodePath path, const bool enable) {
    rebel_icall_void_string_nodepath_bool(
        method_bindings.mb_blend2_node_set_filter_path,
        (const Object*)this,
        id,
        path,
        enable
    );
}

real_t AnimationTreePlayer::blend3_node_get_amount(const String id) const {
    return rebel_icall_float_string(
        method_bindings.mb_blend3_node_get_amount,
        (const Object*)this,
        id
    );
}

void AnimationTreePlayer::blend3_node_set_amount(const String id, const real_t blend) {
    rebel_icall_void_string_float(
        method_bindings.mb_blend3_node_set_amount,
        (const Object*)this,
        id,
        blend
    );
}

Vector2 AnimationTreePlayer::blend4_node_get_amount(const String id) const {
    return rebel_icall_vector2_string(
        method_bindings.mb_blend4_node_get_amount,
        (const Object*)this,
        id
    );
}

void AnimationTreePlayer::blend4_node_set_amount(const String id, const Vector2 blend) {
    rebel_icall_void_string_vector2(
        method_bindings.mb_blend4_node_set_amount,
        (const Object*)this,
        id,
        blend
    );
}

Error AnimationTreePlayer::connect_nodes(const String id, const String dst_id, const int64_t dst_input_idx) {
    return (Error)rebel_icall_int_string_string_int(
        method_bindings.mb_connect_nodes,
        (const Object*)this,
        id,
        dst_id,
        dst_input_idx
    );
}

void AnimationTreePlayer::disconnect_nodes(const String id, const int64_t dst_input_idx) {
    rebel_icall_void_string_int(
        method_bindings.mb_disconnect_nodes,
        (const Object*)this,
        id,
        dst_input_idx
    );
}

AnimationTreePlayer::AnimationProcessMode AnimationTreePlayer::get_animation_process_mode() const {
    return (AnimationTreePlayer::AnimationProcessMode)rebel_icall_int(
        method_bindings.mb_get_animation_process_mode,
        (const Object*)this
    );
}

NodePath AnimationTreePlayer::get_base_path() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_base_path,
        (const Object*)this
    );
}

NodePath AnimationTreePlayer::get_master_player() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_master_player,
        (const Object*)this
    );
}

PoolStringArray AnimationTreePlayer::get_node_list() {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_node_list,
        (const Object*)this
    );
}

bool AnimationTreePlayer::is_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_active,
        (const Object*)this
    );
}

real_t AnimationTreePlayer::mix_node_get_amount(const String id) const {
    return rebel_icall_float_string(
        method_bindings.mb_mix_node_get_amount,
        (const Object*)this,
        id
    );
}

void AnimationTreePlayer::mix_node_set_amount(const String id, const real_t ratio) {
    rebel_icall_void_string_float(
        method_bindings.mb_mix_node_set_amount,
        (const Object*)this,
        id,
        ratio
    );
}

bool AnimationTreePlayer::node_exists(const String node) const {
    return rebel_icall_bool_string(
        method_bindings.mb_node_exists,
        (const Object*)this,
        node
    );
}

int64_t AnimationTreePlayer::node_get_input_count(const String id) const {
    return rebel_icall_int_string(
        method_bindings.mb_node_get_input_count,
        (const Object*)this,
        id
    );
}

String AnimationTreePlayer::node_get_input_source(const String id, const int64_t idx) const {
    return rebel_icall_string_string_int(
        method_bindings.mb_node_get_input_source,
        (const Object*)this,
        id,
        idx
    );
}

Vector2 AnimationTreePlayer::node_get_position(const String id) const {
    return rebel_icall_vector2_string(
        method_bindings.mb_node_get_position,
        (const Object*)this,
        id
    );
}

AnimationTreePlayer::NodeType AnimationTreePlayer::node_get_type(const String id) const {
    return (AnimationTreePlayer::NodeType)rebel_icall_int_string(
        method_bindings.mb_node_get_type,
        (const Object*)this,
        id
    );
}

Error AnimationTreePlayer::node_rename(const String node, const String new_name) {
    return (Error)rebel_icall_int_string_string(
        method_bindings.mb_node_rename,
        (const Object*)this,
        node,
        new_name
    );
}

void AnimationTreePlayer::node_set_position(const String id, const Vector2 screen_position) {
    rebel_icall_void_string_vector2(
        method_bindings.mb_node_set_position,
        (const Object*)this,
        id,
        screen_position
    );
}

real_t AnimationTreePlayer::oneshot_node_get_autorestart_delay(const String id) const {
    return rebel_icall_float_string(
        method_bindings.mb_oneshot_node_get_autorestart_delay,
        (const Object*)this,
        id
    );
}

real_t AnimationTreePlayer::oneshot_node_get_autorestart_random_delay(const String id) const {
    return rebel_icall_float_string(
        method_bindings.mb_oneshot_node_get_autorestart_random_delay,
        (const Object*)this,
        id
    );
}

real_t AnimationTreePlayer::oneshot_node_get_fadein_time(const String id) const {
    return rebel_icall_float_string(
        method_bindings.mb_oneshot_node_get_fadein_time,
        (const Object*)this,
        id
    );
}

real_t AnimationTreePlayer::oneshot_node_get_fadeout_time(const String id) const {
    return rebel_icall_float_string(
        method_bindings.mb_oneshot_node_get_fadeout_time,
        (const Object*)this,
        id
    );
}

bool AnimationTreePlayer::oneshot_node_has_autorestart(const String id) const {
    return rebel_icall_bool_string(
        method_bindings.mb_oneshot_node_has_autorestart,
        (const Object*)this,
        id
    );
}

bool AnimationTreePlayer::oneshot_node_is_active(const String id) const {
    return rebel_icall_bool_string(
        method_bindings.mb_oneshot_node_is_active,
        (const Object*)this,
        id
    );
}

void AnimationTreePlayer::oneshot_node_set_autorestart(const String id, const bool enable) {
    rebel_icall_void_string_bool(
        method_bindings.mb_oneshot_node_set_autorestart,
        (const Object*)this,
        id,
        enable
    );
}

void AnimationTreePlayer::oneshot_node_set_autorestart_delay(const String id, const real_t delay_sec) {
    rebel_icall_void_string_float(
        method_bindings.mb_oneshot_node_set_autorestart_delay,
        (const Object*)this,
        id,
        delay_sec
    );
}

void AnimationTreePlayer::oneshot_node_set_autorestart_random_delay(const String id, const real_t rand_sec) {
    rebel_icall_void_string_float(
        method_bindings.mb_oneshot_node_set_autorestart_random_delay,
        (const Object*)this,
        id,
        rand_sec
    );
}

void AnimationTreePlayer::oneshot_node_set_fadein_time(const String id, const real_t time_sec) {
    rebel_icall_void_string_float(
        method_bindings.mb_oneshot_node_set_fadein_time,
        (const Object*)this,
        id,
        time_sec
    );
}

void AnimationTreePlayer::oneshot_node_set_fadeout_time(const String id, const real_t time_sec) {
    rebel_icall_void_string_float(
        method_bindings.mb_oneshot_node_set_fadeout_time,
        (const Object*)this,
        id,
        time_sec
    );
}

void AnimationTreePlayer::oneshot_node_set_filter_path(const String id, const NodePath path, const bool enable) {
    rebel_icall_void_string_nodepath_bool(
        method_bindings.mb_oneshot_node_set_filter_path,
        (const Object*)this,
        id,
        path,
        enable
    );
}

void AnimationTreePlayer::oneshot_node_start(const String id) {
    rebel_icall_void_string(
        method_bindings.mb_oneshot_node_start,
        (const Object*)this,
        id
    );
}

void AnimationTreePlayer::oneshot_node_stop(const String id) {
    rebel_icall_void_string(
        method_bindings.mb_oneshot_node_stop,
        (const Object*)this,
        id
    );
}

void AnimationTreePlayer::recompute_caches() {
    rebel_icall_void(
        method_bindings.mb_recompute_caches,
        (const Object*)this
    );
}

void AnimationTreePlayer::remove_node(const String id) {
    rebel_icall_void_string(
        method_bindings.mb_remove_node,
        (const Object*)this,
        id
    );
}

void AnimationTreePlayer::reset() {
    rebel_icall_void(
        method_bindings.mb_reset,
        (const Object*)this
    );
}

void AnimationTreePlayer::set_active(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_active,
        (const Object*)this,
        enabled
    );
}

void AnimationTreePlayer::set_animation_process_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_animation_process_mode,
        (const Object*)this,
        mode
    );
}

void AnimationTreePlayer::set_base_path(const NodePath path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_base_path,
        (const Object*)this,
        path
    );
}

void AnimationTreePlayer::set_master_player(const NodePath nodepath) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_master_player,
        (const Object*)this,
        nodepath
    );
}

real_t AnimationTreePlayer::timescale_node_get_scale(const String id) const {
    return rebel_icall_float_string(
        method_bindings.mb_timescale_node_get_scale,
        (const Object*)this,
        id
    );
}

void AnimationTreePlayer::timescale_node_set_scale(const String id, const real_t scale) {
    rebel_icall_void_string_float(
        method_bindings.mb_timescale_node_set_scale,
        (const Object*)this,
        id,
        scale
    );
}

void AnimationTreePlayer::timeseek_node_seek(const String id, const real_t seconds) {
    rebel_icall_void_string_float(
        method_bindings.mb_timeseek_node_seek,
        (const Object*)this,
        id,
        seconds
    );
}

void AnimationTreePlayer::transition_node_delete_input(const String id, const int64_t input_idx) {
    rebel_icall_void_string_int(
        method_bindings.mb_transition_node_delete_input,
        (const Object*)this,
        id,
        input_idx
    );
}

int64_t AnimationTreePlayer::transition_node_get_current(const String id) const {
    return rebel_icall_int_string(
        method_bindings.mb_transition_node_get_current,
        (const Object*)this,
        id
    );
}

int64_t AnimationTreePlayer::transition_node_get_input_count(const String id) const {
    return rebel_icall_int_string(
        method_bindings.mb_transition_node_get_input_count,
        (const Object*)this,
        id
    );
}

real_t AnimationTreePlayer::transition_node_get_xfade_time(const String id) const {
    return rebel_icall_float_string(
        method_bindings.mb_transition_node_get_xfade_time,
        (const Object*)this,
        id
    );
}

bool AnimationTreePlayer::transition_node_has_input_auto_advance(const String id, const int64_t input_idx) const {
    return rebel_icall_bool_string_int(
        method_bindings.mb_transition_node_has_input_auto_advance,
        (const Object*)this,
        id,
        input_idx
    );
}

void AnimationTreePlayer::transition_node_set_current(const String id, const int64_t input_idx) {
    rebel_icall_void_string_int(
        method_bindings.mb_transition_node_set_current,
        (const Object*)this,
        id,
        input_idx
    );
}

void AnimationTreePlayer::transition_node_set_input_auto_advance(const String id, const int64_t input_idx, const bool enable) {
    rebel_icall_void_string_int_bool(
        method_bindings.mb_transition_node_set_input_auto_advance,
        (const Object*)this,
        id,
        input_idx,
        enable
    );
}

void AnimationTreePlayer::transition_node_set_input_count(const String id, const int64_t count) {
    rebel_icall_void_string_int(
        method_bindings.mb_transition_node_set_input_count,
        (const Object*)this,
        id,
        count
    );
}

void AnimationTreePlayer::transition_node_set_xfade_time(const String id, const real_t time_sec) {
    rebel_icall_void_string_float(
        method_bindings.mb_transition_node_set_xfade_time,
        (const Object*)this,
        id,
        time_sec
    );
}

AnimationTreePlayer* AnimationTreePlayer::create() {
    return (AnimationTreePlayer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationTreePlayer")()
         );
}

void AnimationTreePlayer::init_method_bindings() {
    method_bindings.mb_add_node =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "add_node"
        );
    method_bindings.mb_advance =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "advance"
        );
    method_bindings.mb_animation_node_get_animation =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "animation_node_get_animation"
        );
    method_bindings.mb_animation_node_get_master_animation =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "animation_node_get_master_animation"
        );
    method_bindings.mb_animation_node_get_position =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "animation_node_get_position"
        );
    method_bindings.mb_animation_node_set_animation =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "animation_node_set_animation"
        );
    method_bindings.mb_animation_node_set_filter_path =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "animation_node_set_filter_path"
        );
    method_bindings.mb_animation_node_set_master_animation =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "animation_node_set_master_animation"
        );
    method_bindings.mb_are_nodes_connected =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "are_nodes_connected"
        );
    method_bindings.mb_blend2_node_get_amount =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "blend2_node_get_amount"
        );
    method_bindings.mb_blend2_node_set_amount =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "blend2_node_set_amount"
        );
    method_bindings.mb_blend2_node_set_filter_path =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "blend2_node_set_filter_path"
        );
    method_bindings.mb_blend3_node_get_amount =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "blend3_node_get_amount"
        );
    method_bindings.mb_blend3_node_set_amount =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "blend3_node_set_amount"
        );
    method_bindings.mb_blend4_node_get_amount =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "blend4_node_get_amount"
        );
    method_bindings.mb_blend4_node_set_amount =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "blend4_node_set_amount"
        );
    method_bindings.mb_connect_nodes =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "connect_nodes"
        );
    method_bindings.mb_disconnect_nodes =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "disconnect_nodes"
        );
    method_bindings.mb_get_animation_process_mode =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "get_animation_process_mode"
        );
    method_bindings.mb_get_base_path =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "get_base_path"
        );
    method_bindings.mb_get_master_player =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "get_master_player"
        );
    method_bindings.mb_get_node_list =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "get_node_list"
        );
    method_bindings.mb_is_active =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "is_active"
        );
    method_bindings.mb_mix_node_get_amount =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "mix_node_get_amount"
        );
    method_bindings.mb_mix_node_set_amount =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "mix_node_set_amount"
        );
    method_bindings.mb_node_exists =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "node_exists"
        );
    method_bindings.mb_node_get_input_count =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "node_get_input_count"
        );
    method_bindings.mb_node_get_input_source =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "node_get_input_source"
        );
    method_bindings.mb_node_get_position =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "node_get_position"
        );
    method_bindings.mb_node_get_type =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "node_get_type"
        );
    method_bindings.mb_node_rename =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "node_rename"
        );
    method_bindings.mb_node_set_position =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "node_set_position"
        );
    method_bindings.mb_oneshot_node_get_autorestart_delay =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_get_autorestart_delay"
        );
    method_bindings.mb_oneshot_node_get_autorestart_random_delay =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_get_autorestart_random_delay"
        );
    method_bindings.mb_oneshot_node_get_fadein_time =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_get_fadein_time"
        );
    method_bindings.mb_oneshot_node_get_fadeout_time =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_get_fadeout_time"
        );
    method_bindings.mb_oneshot_node_has_autorestart =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_has_autorestart"
        );
    method_bindings.mb_oneshot_node_is_active =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_is_active"
        );
    method_bindings.mb_oneshot_node_set_autorestart =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_set_autorestart"
        );
    method_bindings.mb_oneshot_node_set_autorestart_delay =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_set_autorestart_delay"
        );
    method_bindings.mb_oneshot_node_set_autorestart_random_delay =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_set_autorestart_random_delay"
        );
    method_bindings.mb_oneshot_node_set_fadein_time =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_set_fadein_time"
        );
    method_bindings.mb_oneshot_node_set_fadeout_time =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_set_fadeout_time"
        );
    method_bindings.mb_oneshot_node_set_filter_path =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_set_filter_path"
        );
    method_bindings.mb_oneshot_node_start =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_start"
        );
    method_bindings.mb_oneshot_node_stop =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "oneshot_node_stop"
        );
    method_bindings.mb_recompute_caches =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "recompute_caches"
        );
    method_bindings.mb_remove_node =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "remove_node"
        );
    method_bindings.mb_reset =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "reset"
        );
    method_bindings.mb_set_active =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "set_active"
        );
    method_bindings.mb_set_animation_process_mode =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "set_animation_process_mode"
        );
    method_bindings.mb_set_base_path =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "set_base_path"
        );
    method_bindings.mb_set_master_player =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "set_master_player"
        );
    method_bindings.mb_timescale_node_get_scale =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "timescale_node_get_scale"
        );
    method_bindings.mb_timescale_node_set_scale =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "timescale_node_set_scale"
        );
    method_bindings.mb_timeseek_node_seek =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "timeseek_node_seek"
        );
    method_bindings.mb_transition_node_delete_input =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "transition_node_delete_input"
        );
    method_bindings.mb_transition_node_get_current =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "transition_node_get_current"
        );
    method_bindings.mb_transition_node_get_input_count =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "transition_node_get_input_count"
        );
    method_bindings.mb_transition_node_get_xfade_time =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "transition_node_get_xfade_time"
        );
    method_bindings.mb_transition_node_has_input_auto_advance =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "transition_node_has_input_auto_advance"
        );
    method_bindings.mb_transition_node_set_current =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "transition_node_set_current"
        );
    method_bindings.mb_transition_node_set_input_auto_advance =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "transition_node_set_input_auto_advance"
        );
    method_bindings.mb_transition_node_set_input_count =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "transition_node_set_input_count"
        );
    method_bindings.mb_transition_node_set_xfade_time =
        api->rebel_method_bind_get_method(
            "AnimationTreePlayer",
            "transition_node_set_xfade_time"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationTreePlayer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationTreePlayer::MethodBindings AnimationTreePlayer::method_bindings = {};
void* AnimationTreePlayer::class_tag = nullptr;
} // namespace Rebel
