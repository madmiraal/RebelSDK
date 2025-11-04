// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORSPINSLIDER_H
#define REBEL_EDITORSPINSLIDER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/range.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;

class EditorSpinSlider : public Range {
public:
    void _grabber_gui_input(const Ref<InputEvent> arg0);
    void _grabber_mouse_entered();
    void _grabber_mouse_exited();
    void _gui_input(const Ref<InputEvent> arg0);
    void _value_focus_exited();
    void _value_input_closed();
    void _value_input_entered(const String arg0);
    void _value_input_gui_input(const Ref<InputEvent> event);
    String get_label() const;
    bool is_flat() const;
    bool is_read_only() const;
    void set_flat(const bool flat);
    void set_label(const String label);
    void set_read_only(const bool read_only);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorSpinSlider";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorSpinSlider";
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
        rebel_method_bind* mb__grabber_gui_input;
        rebel_method_bind* mb__grabber_mouse_entered;
        rebel_method_bind* mb__grabber_mouse_exited;
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb__value_focus_exited;
        rebel_method_bind* mb__value_input_closed;
        rebel_method_bind* mb__value_input_entered;
        rebel_method_bind* mb__value_input_gui_input;
        rebel_method_bind* mb_get_label;
        rebel_method_bind* mb_is_flat;
        rebel_method_bind* mb_is_read_only;
        rebel_method_bind* mb_set_flat;
        rebel_method_bind* mb_set_label;
        rebel_method_bind* mb_set_read_only;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORSPINSLIDER_H
