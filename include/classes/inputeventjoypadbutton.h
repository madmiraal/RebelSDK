// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INPUTEVENTJOYPADBUTTON_H
#define REBEL_INPUTEVENTJOYPADBUTTON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/inputevent.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEventJoypadButton : public InputEvent {
public:
    int64_t get_button_index() const;
    real_t get_pressure() const;
    void set_button_index(const int64_t button_index);
    void set_pressed(const bool pressed);
    void set_pressure(const real_t pressure);

    static InputEventJoypadButton* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InputEventJoypadButton";
    }

    inline static const char* get_rebel_class_name() {
        return "InputEventJoypadButton";
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
        rebel_method_bind* mb_get_button_index;
        rebel_method_bind* mb_get_pressure;
        rebel_method_bind* mb_set_button_index;
        rebel_method_bind* mb_set_pressed;
        rebel_method_bind* mb_set_pressure;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INPUTEVENTJOYPADBUTTON_H
