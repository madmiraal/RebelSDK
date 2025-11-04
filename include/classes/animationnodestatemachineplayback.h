// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONNODESTATEMACHINEPLAYBACK_H
#define REBEL_ANIMATIONNODESTATEMACHINEPLAYBACK_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AnimationNodeStateMachinePlayback : public Resource {
public:
    real_t get_current_length() const;
    String get_current_node() const;
    real_t get_current_play_position() const;
    PoolStringArray get_travel_path() const;
    bool is_playing() const;
    void start(const String node);
    void stop();
    void travel(const String to_node);

    static AnimationNodeStateMachinePlayback* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationNodeStateMachinePlayback";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationNodeStateMachinePlayback";
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
        rebel_method_bind* mb_get_current_length;
        rebel_method_bind* mb_get_current_node;
        rebel_method_bind* mb_get_current_play_position;
        rebel_method_bind* mb_get_travel_path;
        rebel_method_bind* mb_is_playing;
        rebel_method_bind* mb_start;
        rebel_method_bind* mb_stop;
        rebel_method_bind* mb_travel;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONNODESTATEMACHINEPLAYBACK_H
