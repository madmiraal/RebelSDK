// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONPLAYER_H
#define REBEL_ANIMATIONPLAYER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Animation;

class AnimationPlayer : public Node {
public:
    enum AnimationProcessMode {
        ANIMATION_PROCESS_PHYSICS = 0,
        ANIMATION_PROCESS_IDLE = 1,
        ANIMATION_PROCESS_MANUAL = 2,
    };

    enum AnimationMethodCallMode {
        ANIMATION_METHOD_CALL_DEFERRED = 0,
        ANIMATION_METHOD_CALL_IMMEDIATE = 1,
    };

    void _animation_changed();
    void _node_removed(const Node* arg0);
    Error add_animation(const String name, const Ref<Animation> animation);
    void advance(const real_t delta);
    String animation_get_next(const String anim_from) const;
    void animation_set_next(const String anim_from, const String anim_to);
    void clear_caches();
    void clear_queue();
    String find_animation(const Ref<Animation> animation) const;
    Ref<Animation> get_animation(const String name) const;
    PoolStringArray get_animation_list() const;
    AnimationPlayer::AnimationProcessMode get_animation_process_mode() const;
    String get_assigned_animation() const;
    String get_autoplay() const;
    real_t get_blend_time(const String anim_from, const String anim_to) const;
    String get_current_animation() const;
    real_t get_current_animation_length() const;
    real_t get_current_animation_position() const;
    real_t get_default_blend_time() const;
    AnimationPlayer::AnimationMethodCallMode get_method_call_mode() const;
    real_t get_playing_speed() const;
    PoolStringArray get_queue();
    NodePath get_root() const;
    real_t get_speed_scale() const;
    bool has_animation(const String name) const;
    bool is_active() const;
    bool is_playing() const;
    bool is_reset_on_save_enabled() const;
    void play(const String name = "", const real_t custom_blend = -1, const real_t custom_speed = 1, const bool from_end = false);
    void play_backwards(const String name = "", const real_t custom_blend = -1);
    void queue(const String name);
    void remove_animation(const String name);
    void rename_animation(const String name, const String newname);
    void seek(const real_t seconds, const bool update = false);
    void set_active(const bool active);
    void set_animation_process_mode(const int64_t mode);
    void set_assigned_animation(const String anim);
    void set_autoplay(const String name);
    void set_blend_time(const String anim_from, const String anim_to, const real_t sec);
    void set_current_animation(const String anim);
    void set_default_blend_time(const real_t sec);
    void set_method_call_mode(const int64_t mode);
    void set_reset_on_save_enabled(const bool enabled);
    void set_root(const NodePath path);
    void set_speed_scale(const real_t speed);
    void stop(const bool reset = true);

    static AnimationPlayer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationPlayer";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationPlayer";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb__animation_changed;
        rebel_method_bind* mb__node_removed;
        rebel_method_bind* mb_add_animation;
        rebel_method_bind* mb_advance;
        rebel_method_bind* mb_animation_get_next;
        rebel_method_bind* mb_animation_set_next;
        rebel_method_bind* mb_clear_caches;
        rebel_method_bind* mb_clear_queue;
        rebel_method_bind* mb_find_animation;
        rebel_method_bind* mb_get_animation;
        rebel_method_bind* mb_get_animation_list;
        rebel_method_bind* mb_get_animation_process_mode;
        rebel_method_bind* mb_get_assigned_animation;
        rebel_method_bind* mb_get_autoplay;
        rebel_method_bind* mb_get_blend_time;
        rebel_method_bind* mb_get_current_animation;
        rebel_method_bind* mb_get_current_animation_length;
        rebel_method_bind* mb_get_current_animation_position;
        rebel_method_bind* mb_get_default_blend_time;
        rebel_method_bind* mb_get_method_call_mode;
        rebel_method_bind* mb_get_playing_speed;
        rebel_method_bind* mb_get_queue;
        rebel_method_bind* mb_get_root;
        rebel_method_bind* mb_get_speed_scale;
        rebel_method_bind* mb_has_animation;
        rebel_method_bind* mb_is_active;
        rebel_method_bind* mb_is_playing;
        rebel_method_bind* mb_is_reset_on_save_enabled;
        rebel_method_bind* mb_play;
        rebel_method_bind* mb_play_backwards;
        rebel_method_bind* mb_queue;
        rebel_method_bind* mb_remove_animation;
        rebel_method_bind* mb_rename_animation;
        rebel_method_bind* mb_seek;
        rebel_method_bind* mb_set_active;
        rebel_method_bind* mb_set_animation_process_mode;
        rebel_method_bind* mb_set_assigned_animation;
        rebel_method_bind* mb_set_autoplay;
        rebel_method_bind* mb_set_blend_time;
        rebel_method_bind* mb_set_current_animation;
        rebel_method_bind* mb_set_default_blend_time;
        rebel_method_bind* mb_set_method_call_mode;
        rebel_method_bind* mb_set_reset_on_save_enabled;
        rebel_method_bind* mb_set_root;
        rebel_method_bind* mb_set_speed_scale;
        rebel_method_bind* mb_stop;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONPLAYER_H
