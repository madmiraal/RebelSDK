// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INPUTEVENTMOUSE_H
#define REBEL_INPUTEVENTMOUSE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/inputeventwithmodifiers.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEventMouse : public InputEventWithModifiers {
public:
    int64_t get_button_mask() const;
    Vector2 get_global_position() const;
    Vector2 get_position() const;
    void set_button_mask(const int64_t button_mask);
    void set_global_position(const Vector2 global_position);
    void set_position(const Vector2 position);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InputEventMouse";
    }

    inline static const char* get_rebel_class_name() {
        return "InputEventMouse";
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
        rebel_method_bind* mb_get_button_mask;
        rebel_method_bind* mb_get_global_position;
        rebel_method_bind* mb_get_position;
        rebel_method_bind* mb_set_button_mask;
        rebel_method_bind* mb_set_global_position;
        rebel_method_bind* mb_set_position;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INPUTEVENTMOUSE_H
