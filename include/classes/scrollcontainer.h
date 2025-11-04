// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SCROLLCONTAINER_H
#define REBEL_SCROLLCONTAINER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/container.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Control;
class HScrollBar;
class InputEvent;
class VScrollBar;

class ScrollContainer : public Container {
public:
    void _gui_focus_changed(const Control* arg0);
    void _gui_input(const Ref<InputEvent> arg0);
    void _scroll_moved(const real_t arg0);
    void _update_scrollbar_position();
    void ensure_control_visible(const Control* control);
    int64_t get_deadzone() const;
    int64_t get_h_scroll() const;
    HScrollBar* get_h_scrollbar();
    int64_t get_v_scroll() const;
    VScrollBar* get_v_scrollbar();
    bool is_following_focus() const;
    bool is_h_scroll_enabled() const;
    bool is_v_scroll_enabled() const;
    void set_deadzone(const int64_t deadzone);
    void set_enable_h_scroll(const bool enable);
    void set_enable_v_scroll(const bool enable);
    void set_follow_focus(const bool enabled);
    void set_h_scroll(const int64_t value);
    void set_v_scroll(const int64_t value);

    static ScrollContainer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ScrollContainer";
    }

    inline static const char* get_rebel_class_name() {
        return "ScrollContainer";
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
        rebel_method_bind* mb__gui_focus_changed;
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb__scroll_moved;
        rebel_method_bind* mb__update_scrollbar_position;
        rebel_method_bind* mb_ensure_control_visible;
        rebel_method_bind* mb_get_deadzone;
        rebel_method_bind* mb_get_h_scroll;
        rebel_method_bind* mb_get_h_scrollbar;
        rebel_method_bind* mb_get_v_scroll;
        rebel_method_bind* mb_get_v_scrollbar;
        rebel_method_bind* mb_is_following_focus;
        rebel_method_bind* mb_is_h_scroll_enabled;
        rebel_method_bind* mb_is_v_scroll_enabled;
        rebel_method_bind* mb_set_deadzone;
        rebel_method_bind* mb_set_enable_h_scroll;
        rebel_method_bind* mb_set_enable_v_scroll;
        rebel_method_bind* mb_set_follow_focus;
        rebel_method_bind* mb_set_h_scroll;
        rebel_method_bind* mb_set_v_scroll;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SCROLLCONTAINER_H
