// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MAINLOOP_H
#define REBEL_MAINLOOP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;

class MainLoop : public Object {
public:
    static const int NOTIFICATION_APP_PAUSED = 1015;
    static const int NOTIFICATION_APP_RESUMED = 1014;
    static const int NOTIFICATION_CRASH = 1012;
    static const int NOTIFICATION_OS_IME_UPDATE = 1013;
    static const int NOTIFICATION_OS_MEMORY_WARNING = 1009;
    static const int NOTIFICATION_TRANSLATION_CHANGED = 1010;
    static const int NOTIFICATION_WM_ABOUT = 1011;
    static const int NOTIFICATION_WM_FOCUS_IN = 1004;
    static const int NOTIFICATION_WM_FOCUS_OUT = 1005;
    static const int NOTIFICATION_WM_GO_BACK_REQUEST = 1007;
    static const int NOTIFICATION_WM_MOUSE_ENTER = 1002;
    static const int NOTIFICATION_WM_MOUSE_EXIT = 1003;
    static const int NOTIFICATION_WM_QUIT_REQUEST = 1006;
    static const int NOTIFICATION_WM_UNFOCUS_REQUEST = 1008;

    void _drop_files(const PoolStringArray files, const int64_t from_screen);
    void _finalize();
    void _global_menu_action(const Variant id, const Variant meta);
    bool _idle(const real_t delta);
    void _initialize();
    void _input_event(const Ref<InputEvent> event);
    void _input_text(const String text);
    bool _iteration(const real_t delta);
    void finish();
    bool idle(const real_t delta);
    void init();
    void input_event(const Ref<InputEvent> event);
    void input_text(const String text);
    bool iteration(const real_t delta);

    static MainLoop* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "MainLoop";
    }

    inline static const char* get_rebel_class_name() {
        return "MainLoop";
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
        rebel_method_bind* mb__drop_files;
        rebel_method_bind* mb__finalize;
        rebel_method_bind* mb__global_menu_action;
        rebel_method_bind* mb__idle;
        rebel_method_bind* mb__initialize;
        rebel_method_bind* mb__input_event;
        rebel_method_bind* mb__input_text;
        rebel_method_bind* mb__iteration;
        rebel_method_bind* mb_finish;
        rebel_method_bind* mb_idle;
        rebel_method_bind* mb_init;
        rebel_method_bind* mb_input_event;
        rebel_method_bind* mb_input_text;
        rebel_method_bind* mb_iteration;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_MAINLOOP_H
