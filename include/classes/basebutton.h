// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_BASEBUTTON_H
#define REBEL_BASEBUTTON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ButtonGroup;
class InputEvent;
class ShortCut;

class BaseButton : public Control {
public:
    enum ActionMode {
        ACTION_MODE_BUTTON_PRESS = 0,
        ACTION_MODE_BUTTON_RELEASE = 1,
    };

    enum DrawMode {
        DRAW_NORMAL = 0,
        DRAW_PRESSED = 1,
        DRAW_HOVER = 2,
        DRAW_DISABLED = 3,
        DRAW_HOVER_PRESSED = 4,
    };

    void _gui_input(const Ref<InputEvent> arg0);
    void _pressed();
    void _toggled(const bool button_pressed);
    void _unhandled_input(const Ref<InputEvent> arg0);
    BaseButton::ActionMode get_action_mode() const;
    Ref<ButtonGroup> get_button_group() const;
    int64_t get_button_mask() const;
    BaseButton::DrawMode get_draw_mode() const;
    Control::FocusMode get_enabled_focus_mode() const;
    Ref<ShortCut> get_shortcut() const;
    bool is_disabled() const;
    bool is_hovered() const;
    bool is_keep_pressed_outside() const;
    bool is_pressed() const;
    bool is_shortcut_in_tooltip_enabled() const;
    bool is_toggle_mode() const;
    void set_action_mode(const int64_t mode);
    void set_button_group(const Ref<ButtonGroup> button_group);
    void set_button_mask(const int64_t mask);
    void set_disabled(const bool disabled);
    void set_enabled_focus_mode(const int64_t mode);
    void set_keep_pressed_outside(const bool enabled);
    void set_pressed(const bool pressed);
    void set_pressed_no_signal(const bool pressed);
    void set_shortcut(const Ref<ShortCut> shortcut);
    void set_shortcut_in_tooltip(const bool enabled);
    void set_toggle_mode(const bool enabled);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "BaseButton";
    }

    inline static const char* get_rebel_class_name() {
        return "BaseButton";
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
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb__pressed;
        rebel_method_bind* mb__toggled;
        rebel_method_bind* mb__unhandled_input;
        rebel_method_bind* mb_get_action_mode;
        rebel_method_bind* mb_get_button_group;
        rebel_method_bind* mb_get_button_mask;
        rebel_method_bind* mb_get_draw_mode;
        rebel_method_bind* mb_get_enabled_focus_mode;
        rebel_method_bind* mb_get_shortcut;
        rebel_method_bind* mb_is_disabled;
        rebel_method_bind* mb_is_hovered;
        rebel_method_bind* mb_is_keep_pressed_outside;
        rebel_method_bind* mb_is_pressed;
        rebel_method_bind* mb_is_shortcut_in_tooltip_enabled;
        rebel_method_bind* mb_is_toggle_mode;
        rebel_method_bind* mb_set_action_mode;
        rebel_method_bind* mb_set_button_group;
        rebel_method_bind* mb_set_button_mask;
        rebel_method_bind* mb_set_disabled;
        rebel_method_bind* mb_set_enabled_focus_mode;
        rebel_method_bind* mb_set_keep_pressed_outside;
        rebel_method_bind* mb_set_pressed;
        rebel_method_bind* mb_set_pressed_no_signal;
        rebel_method_bind* mb_set_shortcut;
        rebel_method_bind* mb_set_shortcut_in_tooltip;
        rebel_method_bind* mb_set_toggle_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_BASEBUTTON_H
