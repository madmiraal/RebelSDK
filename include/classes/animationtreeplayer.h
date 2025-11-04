// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONTREEPLAYER_H
#define REBEL_ANIMATIONTREEPLAYER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Animation;

class AnimationTreePlayer : public Node {
public:
    enum AnimationProcessMode {
        ANIMATION_PROCESS_PHYSICS = 0,
        ANIMATION_PROCESS_IDLE = 1,
    };

    enum NodeType {
        NODE_OUTPUT = 0,
        NODE_ANIMATION = 1,
        NODE_ONESHOT = 2,
        NODE_MIX = 3,
        NODE_BLEND2 = 4,
        NODE_BLEND3 = 5,
        NODE_BLEND4 = 6,
        NODE_TIMESCALE = 7,
        NODE_TIMESEEK = 8,
        NODE_TRANSITION = 9,
    };

    void add_node(const int64_t type, const String id);
    void advance(const real_t delta);
    Ref<Animation> animation_node_get_animation(const String id) const;
    String animation_node_get_master_animation(const String id) const;
    real_t animation_node_get_position(const String id) const;
    void animation_node_set_animation(const String id, const Ref<Animation> animation);
    void animation_node_set_filter_path(const String id, const NodePath path, const bool enable);
    void animation_node_set_master_animation(const String id, const String source);
    bool are_nodes_connected(const String id, const String dst_id, const int64_t dst_input_idx) const;
    real_t blend2_node_get_amount(const String id) const;
    void blend2_node_set_amount(const String id, const real_t blend);
    void blend2_node_set_filter_path(const String id, const NodePath path, const bool enable);
    real_t blend3_node_get_amount(const String id) const;
    void blend3_node_set_amount(const String id, const real_t blend);
    Vector2 blend4_node_get_amount(const String id) const;
    void blend4_node_set_amount(const String id, const Vector2 blend);
    Error connect_nodes(const String id, const String dst_id, const int64_t dst_input_idx);
    void disconnect_nodes(const String id, const int64_t dst_input_idx);
    AnimationTreePlayer::AnimationProcessMode get_animation_process_mode() const;
    NodePath get_base_path() const;
    NodePath get_master_player() const;
    PoolStringArray get_node_list();
    bool is_active() const;
    real_t mix_node_get_amount(const String id) const;
    void mix_node_set_amount(const String id, const real_t ratio);
    bool node_exists(const String node) const;
    int64_t node_get_input_count(const String id) const;
    String node_get_input_source(const String id, const int64_t idx) const;
    Vector2 node_get_position(const String id) const;
    AnimationTreePlayer::NodeType node_get_type(const String id) const;
    Error node_rename(const String node, const String new_name);
    void node_set_position(const String id, const Vector2 screen_position);
    real_t oneshot_node_get_autorestart_delay(const String id) const;
    real_t oneshot_node_get_autorestart_random_delay(const String id) const;
    real_t oneshot_node_get_fadein_time(const String id) const;
    real_t oneshot_node_get_fadeout_time(const String id) const;
    bool oneshot_node_has_autorestart(const String id) const;
    bool oneshot_node_is_active(const String id) const;
    void oneshot_node_set_autorestart(const String id, const bool enable);
    void oneshot_node_set_autorestart_delay(const String id, const real_t delay_sec);
    void oneshot_node_set_autorestart_random_delay(const String id, const real_t rand_sec);
    void oneshot_node_set_fadein_time(const String id, const real_t time_sec);
    void oneshot_node_set_fadeout_time(const String id, const real_t time_sec);
    void oneshot_node_set_filter_path(const String id, const NodePath path, const bool enable);
    void oneshot_node_start(const String id);
    void oneshot_node_stop(const String id);
    void recompute_caches();
    void remove_node(const String id);
    void reset();
    void set_active(const bool enabled);
    void set_animation_process_mode(const int64_t mode);
    void set_base_path(const NodePath path);
    void set_master_player(const NodePath nodepath);
    real_t timescale_node_get_scale(const String id) const;
    void timescale_node_set_scale(const String id, const real_t scale);
    void timeseek_node_seek(const String id, const real_t seconds);
    void transition_node_delete_input(const String id, const int64_t input_idx);
    int64_t transition_node_get_current(const String id) const;
    int64_t transition_node_get_input_count(const String id) const;
    real_t transition_node_get_xfade_time(const String id) const;
    bool transition_node_has_input_auto_advance(const String id, const int64_t input_idx) const;
    void transition_node_set_current(const String id, const int64_t input_idx);
    void transition_node_set_input_auto_advance(const String id, const int64_t input_idx, const bool enable);
    void transition_node_set_input_count(const String id, const int64_t count);
    void transition_node_set_xfade_time(const String id, const real_t time_sec);

    static AnimationTreePlayer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationTreePlayer";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationTreePlayer";
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
        rebel_method_bind* mb_add_node;
        rebel_method_bind* mb_advance;
        rebel_method_bind* mb_animation_node_get_animation;
        rebel_method_bind* mb_animation_node_get_master_animation;
        rebel_method_bind* mb_animation_node_get_position;
        rebel_method_bind* mb_animation_node_set_animation;
        rebel_method_bind* mb_animation_node_set_filter_path;
        rebel_method_bind* mb_animation_node_set_master_animation;
        rebel_method_bind* mb_are_nodes_connected;
        rebel_method_bind* mb_blend2_node_get_amount;
        rebel_method_bind* mb_blend2_node_set_amount;
        rebel_method_bind* mb_blend2_node_set_filter_path;
        rebel_method_bind* mb_blend3_node_get_amount;
        rebel_method_bind* mb_blend3_node_set_amount;
        rebel_method_bind* mb_blend4_node_get_amount;
        rebel_method_bind* mb_blend4_node_set_amount;
        rebel_method_bind* mb_connect_nodes;
        rebel_method_bind* mb_disconnect_nodes;
        rebel_method_bind* mb_get_animation_process_mode;
        rebel_method_bind* mb_get_base_path;
        rebel_method_bind* mb_get_master_player;
        rebel_method_bind* mb_get_node_list;
        rebel_method_bind* mb_is_active;
        rebel_method_bind* mb_mix_node_get_amount;
        rebel_method_bind* mb_mix_node_set_amount;
        rebel_method_bind* mb_node_exists;
        rebel_method_bind* mb_node_get_input_count;
        rebel_method_bind* mb_node_get_input_source;
        rebel_method_bind* mb_node_get_position;
        rebel_method_bind* mb_node_get_type;
        rebel_method_bind* mb_node_rename;
        rebel_method_bind* mb_node_set_position;
        rebel_method_bind* mb_oneshot_node_get_autorestart_delay;
        rebel_method_bind* mb_oneshot_node_get_autorestart_random_delay;
        rebel_method_bind* mb_oneshot_node_get_fadein_time;
        rebel_method_bind* mb_oneshot_node_get_fadeout_time;
        rebel_method_bind* mb_oneshot_node_has_autorestart;
        rebel_method_bind* mb_oneshot_node_is_active;
        rebel_method_bind* mb_oneshot_node_set_autorestart;
        rebel_method_bind* mb_oneshot_node_set_autorestart_delay;
        rebel_method_bind* mb_oneshot_node_set_autorestart_random_delay;
        rebel_method_bind* mb_oneshot_node_set_fadein_time;
        rebel_method_bind* mb_oneshot_node_set_fadeout_time;
        rebel_method_bind* mb_oneshot_node_set_filter_path;
        rebel_method_bind* mb_oneshot_node_start;
        rebel_method_bind* mb_oneshot_node_stop;
        rebel_method_bind* mb_recompute_caches;
        rebel_method_bind* mb_remove_node;
        rebel_method_bind* mb_reset;
        rebel_method_bind* mb_set_active;
        rebel_method_bind* mb_set_animation_process_mode;
        rebel_method_bind* mb_set_base_path;
        rebel_method_bind* mb_set_master_player;
        rebel_method_bind* mb_timescale_node_get_scale;
        rebel_method_bind* mb_timescale_node_set_scale;
        rebel_method_bind* mb_timeseek_node_seek;
        rebel_method_bind* mb_transition_node_delete_input;
        rebel_method_bind* mb_transition_node_get_current;
        rebel_method_bind* mb_transition_node_get_input_count;
        rebel_method_bind* mb_transition_node_get_xfade_time;
        rebel_method_bind* mb_transition_node_has_input_auto_advance;
        rebel_method_bind* mb_transition_node_set_current;
        rebel_method_bind* mb_transition_node_set_input_auto_advance;
        rebel_method_bind* mb_transition_node_set_input_count;
        rebel_method_bind* mb_transition_node_set_xfade_time;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONTREEPLAYER_H
