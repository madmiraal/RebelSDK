// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TIMER_H
#define REBEL_TIMER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Timer : public Node {
public:
    enum TimerProcessMode {
        TIMER_PROCESS_PHYSICS = 0,
        TIMER_PROCESS_IDLE = 1,
    };

    real_t get_time_left() const;
    Timer::TimerProcessMode get_timer_process_mode() const;
    real_t get_wait_time() const;
    bool has_autostart() const;
    bool is_one_shot() const;
    bool is_paused() const;
    bool is_stopped() const;
    void set_autostart(const bool enable);
    void set_one_shot(const bool enable);
    void set_paused(const bool paused);
    void set_timer_process_mode(const int64_t mode);
    void set_wait_time(const real_t time_sec);
    void start(const real_t time_sec = -1);
    void stop();

    static Timer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Timer";
    }

    inline static const char* get_rebel_class_name() {
        return "Timer";
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
        rebel_method_bind* mb_get_time_left;
        rebel_method_bind* mb_get_timer_process_mode;
        rebel_method_bind* mb_get_wait_time;
        rebel_method_bind* mb_has_autostart;
        rebel_method_bind* mb_is_one_shot;
        rebel_method_bind* mb_is_paused;
        rebel_method_bind* mb_is_stopped;
        rebel_method_bind* mb_set_autostart;
        rebel_method_bind* mb_set_one_shot;
        rebel_method_bind* mb_set_paused;
        rebel_method_bind* mb_set_timer_process_mode;
        rebel_method_bind* mb_set_wait_time;
        rebel_method_bind* mb_start;
        rebel_method_bind* mb_stop;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TIMER_H
