// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_COLORPICKER_H
#define REBEL_COLORPICKER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/boxcontainer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Control;
class InputEvent;

class ColorPicker : public BoxContainer {
public:
    void _add_preset_pressed();
    void _focus_enter();
    void _focus_exit();
    void _hsv_draw(const int64_t arg0, const Control* arg1);
    void _html_entered(const String arg0);
    void _html_focus_exit();
    void _preset_input(const Ref<InputEvent> arg0);
    void _sample_draw();
    void _sample_input(const Ref<InputEvent> arg0);
    void _screen_input(const Ref<InputEvent> arg0);
    void _screen_pick_pressed();
    void _text_type_toggled();
    void _update_presets();
    void _uv_input(const Ref<InputEvent> arg0);
    void _value_changed(const real_t arg0);
    void _w_input(const Ref<InputEvent> arg0);
    void add_preset(const Color color);
    bool are_presets_enabled() const;
    bool are_presets_visible() const;
    void erase_preset(const Color color);
    Color get_pick_color() const;
    PoolColorArray get_presets() const;
    bool is_deferred_mode() const;
    bool is_editing_alpha() const;
    bool is_hsv_mode() const;
    bool is_raw_mode() const;
    void set_deferred_mode(const bool mode);
    void set_edit_alpha(const bool show);
    void set_hsv_mode(const bool mode);
    void set_pick_color(const Color color);
    void set_presets_enabled(const bool enabled);
    void set_presets_visible(const bool visible);
    void set_raw_mode(const bool mode);

    static ColorPicker* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ColorPicker";
    }

    inline static const char* get_rebel_class_name() {
        return "ColorPicker";
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
        rebel_method_bind* mb__add_preset_pressed;
        rebel_method_bind* mb__focus_enter;
        rebel_method_bind* mb__focus_exit;
        rebel_method_bind* mb__hsv_draw;
        rebel_method_bind* mb__html_entered;
        rebel_method_bind* mb__html_focus_exit;
        rebel_method_bind* mb__preset_input;
        rebel_method_bind* mb__sample_draw;
        rebel_method_bind* mb__sample_input;
        rebel_method_bind* mb__screen_input;
        rebel_method_bind* mb__screen_pick_pressed;
        rebel_method_bind* mb__text_type_toggled;
        rebel_method_bind* mb__update_presets;
        rebel_method_bind* mb__uv_input;
        rebel_method_bind* mb__value_changed;
        rebel_method_bind* mb__w_input;
        rebel_method_bind* mb_add_preset;
        rebel_method_bind* mb_are_presets_enabled;
        rebel_method_bind* mb_are_presets_visible;
        rebel_method_bind* mb_erase_preset;
        rebel_method_bind* mb_get_pick_color;
        rebel_method_bind* mb_get_presets;
        rebel_method_bind* mb_is_deferred_mode;
        rebel_method_bind* mb_is_editing_alpha;
        rebel_method_bind* mb_is_hsv_mode;
        rebel_method_bind* mb_is_raw_mode;
        rebel_method_bind* mb_set_deferred_mode;
        rebel_method_bind* mb_set_edit_alpha;
        rebel_method_bind* mb_set_hsv_mode;
        rebel_method_bind* mb_set_pick_color;
        rebel_method_bind* mb_set_presets_enabled;
        rebel_method_bind* mb_set_presets_visible;
        rebel_method_bind* mb_set_raw_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_COLORPICKER_H
