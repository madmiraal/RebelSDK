// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/animationplayer.h"

#include "classes/animation.h"
#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void AnimationPlayer::_animation_changed() {
    rebel_icall_void(
        method_bindings.mb__animation_changed,
        (const Object*)this
    );
}

void AnimationPlayer::_node_removed(const Node* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__node_removed,
        (const Object*)this,
        arg0
    );
}

Error AnimationPlayer::add_animation(const String name, const Ref<Animation> animation) {
    return (Error)rebel_icall_int_string_object(
        method_bindings.mb_add_animation,
        (const Object*)this,
        name,
        animation.ptr()
    );
}

void AnimationPlayer::advance(const real_t delta) {
    rebel_icall_void_float(
        method_bindings.mb_advance,
        (const Object*)this,
        delta
    );
}

String AnimationPlayer::animation_get_next(const String anim_from) const {
    return rebel_icall_string_string(
        method_bindings.mb_animation_get_next,
        (const Object*)this,
        anim_from
    );
}

void AnimationPlayer::animation_set_next(const String anim_from, const String anim_to) {
    rebel_icall_void_string_string(
        method_bindings.mb_animation_set_next,
        (const Object*)this,
        anim_from,
        anim_to
    );
}

void AnimationPlayer::clear_caches() {
    rebel_icall_void(
        method_bindings.mb_clear_caches,
        (const Object*)this
    );
}

void AnimationPlayer::clear_queue() {
    rebel_icall_void(
        method_bindings.mb_clear_queue,
        (const Object*)this
    );
}

String AnimationPlayer::find_animation(const Ref<Animation> animation) const {
    return rebel_icall_string_object(
        method_bindings.mb_find_animation,
        (const Object*)this,
        animation.ptr()
    );
}

Ref<Animation> AnimationPlayer::get_animation(const String name) const {
    return Ref<Animation>::create_ref(rebel_icall_object_string(
        method_bindings.mb_get_animation,
        (const Object*)this,
        name
    ));
}

PoolStringArray AnimationPlayer::get_animation_list() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_animation_list,
        (const Object*)this
    );
}

AnimationPlayer::AnimationProcessMode AnimationPlayer::get_animation_process_mode() const {
    return (AnimationPlayer::AnimationProcessMode)rebel_icall_int(
        method_bindings.mb_get_animation_process_mode,
        (const Object*)this
    );
}

String AnimationPlayer::get_assigned_animation() const {
    return rebel_icall_string(
        method_bindings.mb_get_assigned_animation,
        (const Object*)this
    );
}

String AnimationPlayer::get_autoplay() const {
    return rebel_icall_string(
        method_bindings.mb_get_autoplay,
        (const Object*)this
    );
}

real_t AnimationPlayer::get_blend_time(const String anim_from, const String anim_to) const {
    return rebel_icall_float_string_string(
        method_bindings.mb_get_blend_time,
        (const Object*)this,
        anim_from,
        anim_to
    );
}

String AnimationPlayer::get_current_animation() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_animation,
        (const Object*)this
    );
}

real_t AnimationPlayer::get_current_animation_length() const {
    return rebel_icall_float(
        method_bindings.mb_get_current_animation_length,
        (const Object*)this
    );
}

real_t AnimationPlayer::get_current_animation_position() const {
    return rebel_icall_float(
        method_bindings.mb_get_current_animation_position,
        (const Object*)this
    );
}

real_t AnimationPlayer::get_default_blend_time() const {
    return rebel_icall_float(
        method_bindings.mb_get_default_blend_time,
        (const Object*)this
    );
}

AnimationPlayer::AnimationMethodCallMode AnimationPlayer::get_method_call_mode() const {
    return (AnimationPlayer::AnimationMethodCallMode)rebel_icall_int(
        method_bindings.mb_get_method_call_mode,
        (const Object*)this
    );
}

real_t AnimationPlayer::get_playing_speed() const {
    return rebel_icall_float(
        method_bindings.mb_get_playing_speed,
        (const Object*)this
    );
}

PoolStringArray AnimationPlayer::get_queue() {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_queue,
        (const Object*)this
    );
}

NodePath AnimationPlayer::get_root() const {
    return rebel_icall_nodepath(
        method_bindings.mb_get_root,
        (const Object*)this
    );
}

real_t AnimationPlayer::get_speed_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_speed_scale,
        (const Object*)this
    );
}

bool AnimationPlayer::has_animation(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_animation,
        (const Object*)this,
        name
    );
}

bool AnimationPlayer::is_active() const {
    return rebel_icall_bool(
        method_bindings.mb_is_active,
        (const Object*)this
    );
}

bool AnimationPlayer::is_playing() const {
    return rebel_icall_bool(
        method_bindings.mb_is_playing,
        (const Object*)this
    );
}

bool AnimationPlayer::is_reset_on_save_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_reset_on_save_enabled,
        (const Object*)this
    );
}

void AnimationPlayer::play(const String name, const real_t custom_blend, const real_t custom_speed, const bool from_end) {
    rebel_icall_void_string_float_float_bool(
        method_bindings.mb_play,
        (const Object*)this,
        name,
        custom_blend,
        custom_speed,
        from_end
    );
}

void AnimationPlayer::play_backwards(const String name, const real_t custom_blend) {
    rebel_icall_void_string_float(
        method_bindings.mb_play_backwards,
        (const Object*)this,
        name,
        custom_blend
    );
}

void AnimationPlayer::queue(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_queue,
        (const Object*)this,
        name
    );
}

void AnimationPlayer::remove_animation(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_remove_animation,
        (const Object*)this,
        name
    );
}

void AnimationPlayer::rename_animation(const String name, const String newname) {
    rebel_icall_void_string_string(
        method_bindings.mb_rename_animation,
        (const Object*)this,
        name,
        newname
    );
}

void AnimationPlayer::seek(const real_t seconds, const bool update) {
    rebel_icall_void_float_bool(
        method_bindings.mb_seek,
        (const Object*)this,
        seconds,
        update
    );
}

void AnimationPlayer::set_active(const bool active) {
    rebel_icall_void_bool(
        method_bindings.mb_set_active,
        (const Object*)this,
        active
    );
}

void AnimationPlayer::set_animation_process_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_animation_process_mode,
        (const Object*)this,
        mode
    );
}

void AnimationPlayer::set_assigned_animation(const String anim) {
    rebel_icall_void_string(
        method_bindings.mb_set_assigned_animation,
        (const Object*)this,
        anim
    );
}

void AnimationPlayer::set_autoplay(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_autoplay,
        (const Object*)this,
        name
    );
}

void AnimationPlayer::set_blend_time(const String anim_from, const String anim_to, const real_t sec) {
    rebel_icall_void_string_string_float(
        method_bindings.mb_set_blend_time,
        (const Object*)this,
        anim_from,
        anim_to,
        sec
    );
}

void AnimationPlayer::set_current_animation(const String anim) {
    rebel_icall_void_string(
        method_bindings.mb_set_current_animation,
        (const Object*)this,
        anim
    );
}

void AnimationPlayer::set_default_blend_time(const real_t sec) {
    rebel_icall_void_float(
        method_bindings.mb_set_default_blend_time,
        (const Object*)this,
        sec
    );
}

void AnimationPlayer::set_method_call_mode(const int64_t mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_method_call_mode,
        (const Object*)this,
        mode
    );
}

void AnimationPlayer::set_reset_on_save_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_reset_on_save_enabled,
        (const Object*)this,
        enabled
    );
}

void AnimationPlayer::set_root(const NodePath path) {
    rebel_icall_void_nodepath(
        method_bindings.mb_set_root,
        (const Object*)this,
        path
    );
}

void AnimationPlayer::set_speed_scale(const real_t speed) {
    rebel_icall_void_float(
        method_bindings.mb_set_speed_scale,
        (const Object*)this,
        speed
    );
}

void AnimationPlayer::stop(const bool reset) {
    rebel_icall_void_bool(
        method_bindings.mb_stop,
        (const Object*)this,
        reset
    );
}

AnimationPlayer* AnimationPlayer::create() {
    return (AnimationPlayer*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"AnimationPlayer")()
         );
}

void AnimationPlayer::init_method_bindings() {
    method_bindings.mb__animation_changed =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "_animation_changed"
        );
    method_bindings.mb__node_removed =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "_node_removed"
        );
    method_bindings.mb_add_animation =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "add_animation"
        );
    method_bindings.mb_advance =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "advance"
        );
    method_bindings.mb_animation_get_next =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "animation_get_next"
        );
    method_bindings.mb_animation_set_next =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "animation_set_next"
        );
    method_bindings.mb_clear_caches =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "clear_caches"
        );
    method_bindings.mb_clear_queue =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "clear_queue"
        );
    method_bindings.mb_find_animation =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "find_animation"
        );
    method_bindings.mb_get_animation =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_animation"
        );
    method_bindings.mb_get_animation_list =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_animation_list"
        );
    method_bindings.mb_get_animation_process_mode =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_animation_process_mode"
        );
    method_bindings.mb_get_assigned_animation =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_assigned_animation"
        );
    method_bindings.mb_get_autoplay =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_autoplay"
        );
    method_bindings.mb_get_blend_time =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_blend_time"
        );
    method_bindings.mb_get_current_animation =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_current_animation"
        );
    method_bindings.mb_get_current_animation_length =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_current_animation_length"
        );
    method_bindings.mb_get_current_animation_position =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_current_animation_position"
        );
    method_bindings.mb_get_default_blend_time =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_default_blend_time"
        );
    method_bindings.mb_get_method_call_mode =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_method_call_mode"
        );
    method_bindings.mb_get_playing_speed =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_playing_speed"
        );
    method_bindings.mb_get_queue =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_queue"
        );
    method_bindings.mb_get_root =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_root"
        );
    method_bindings.mb_get_speed_scale =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "get_speed_scale"
        );
    method_bindings.mb_has_animation =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "has_animation"
        );
    method_bindings.mb_is_active =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "is_active"
        );
    method_bindings.mb_is_playing =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "is_playing"
        );
    method_bindings.mb_is_reset_on_save_enabled =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "is_reset_on_save_enabled"
        );
    method_bindings.mb_play =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "play"
        );
    method_bindings.mb_play_backwards =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "play_backwards"
        );
    method_bindings.mb_queue =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "queue"
        );
    method_bindings.mb_remove_animation =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "remove_animation"
        );
    method_bindings.mb_rename_animation =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "rename_animation"
        );
    method_bindings.mb_seek =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "seek"
        );
    method_bindings.mb_set_active =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "set_active"
        );
    method_bindings.mb_set_animation_process_mode =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "set_animation_process_mode"
        );
    method_bindings.mb_set_assigned_animation =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "set_assigned_animation"
        );
    method_bindings.mb_set_autoplay =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "set_autoplay"
        );
    method_bindings.mb_set_blend_time =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "set_blend_time"
        );
    method_bindings.mb_set_current_animation =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "set_current_animation"
        );
    method_bindings.mb_set_default_blend_time =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "set_default_blend_time"
        );
    method_bindings.mb_set_method_call_mode =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "set_method_call_mode"
        );
    method_bindings.mb_set_reset_on_save_enabled =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "set_reset_on_save_enabled"
        );
    method_bindings.mb_set_root =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "set_root"
        );
    method_bindings.mb_set_speed_scale =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "set_speed_scale"
        );
    method_bindings.mb_stop =
        api->rebel_method_bind_get_method(
            "AnimationPlayer",
            "stop"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "AnimationPlayer");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

AnimationPlayer::MethodBindings AnimationPlayer::method_bindings = {};
void* AnimationPlayer::class_tag = nullptr;
} // namespace Rebel
