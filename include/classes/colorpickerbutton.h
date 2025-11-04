// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_COLORPICKERBUTTON_H
#define REBEL_COLORPICKERBUTTON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/button.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ColorPicker;
class PopupPanel;

class ColorPickerButton : public Button {
public:
    void _about_to_show();
    void _color_changed(const Color arg0);
    void _modal_closed();
    Color get_pick_color() const;
    ColorPicker* get_picker();
    PopupPanel* get_popup();
    bool is_editing_alpha() const;
    void set_edit_alpha(const bool show);
    void set_pick_color(const Color color);

    static ColorPickerButton* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ColorPickerButton";
    }

    inline static const char* get_rebel_class_name() {
        return "ColorPickerButton";
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
        rebel_method_bind* mb__about_to_show;
        rebel_method_bind* mb__color_changed;
        rebel_method_bind* mb__modal_closed;
        rebel_method_bind* mb_get_pick_color;
        rebel_method_bind* mb_get_picker;
        rebel_method_bind* mb_get_popup;
        rebel_method_bind* mb_is_editing_alpha;
        rebel_method_bind* mb_set_edit_alpha;
        rebel_method_bind* mb_set_pick_color;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_COLORPICKERBUTTON_H
