// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONNODESTATEMACHINETRANSITION_H
#define REBEL_ANIMATIONNODESTATEMACHINETRANSITION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AnimationNodeStateMachineTransition : public Resource {
public:
    enum SwitchMode {
        SWITCH_MODE_IMMEDIATE = 0,
        SWITCH_MODE_SYNC = 1,
        SWITCH_MODE_AT_END = 2,
    };

    String get_advance_condition() const;
    int64_t get_priority() const;
    AnimationNodeStateMachineTransition::SwitchMode get_switch_mode() const;
    real_t get_xfade_time() const;
    bool has_auto_advance() const;
    bool is_disabled() const;
    void set_advance_condition(const String name);
    void set_auto_advance(const bool auto_advance);
    void set_disabled(const bool disabled);
    void set_priority(const int64_t priority);
    void set_switch_mode(const int64_t mode);
    void set_xfade_time(const real_t secs);

    static AnimationNodeStateMachineTransition* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationNodeStateMachineTransition";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationNodeStateMachineTransition";
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
        rebel_method_bind* mb_get_advance_condition;
        rebel_method_bind* mb_get_priority;
        rebel_method_bind* mb_get_switch_mode;
        rebel_method_bind* mb_get_xfade_time;
        rebel_method_bind* mb_has_auto_advance;
        rebel_method_bind* mb_is_disabled;
        rebel_method_bind* mb_set_advance_condition;
        rebel_method_bind* mb_set_auto_advance;
        rebel_method_bind* mb_set_disabled;
        rebel_method_bind* mb_set_priority;
        rebel_method_bind* mb_set_switch_mode;
        rebel_method_bind* mb_set_xfade_time;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONNODESTATEMACHINETRANSITION_H
