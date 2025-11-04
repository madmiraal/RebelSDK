// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INPUTEVENTSCREENTOUCH_H
#define REBEL_INPUTEVENTSCREENTOUCH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/inputevent.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEventScreenTouch : public InputEvent {
public:
    int64_t get_index() const;
    Vector2 get_position() const;
    void set_index(const int64_t index);
    void set_position(const Vector2 position);
    void set_pressed(const bool pressed);

    static InputEventScreenTouch* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InputEventScreenTouch";
    }

    inline static const char* get_rebel_class_name() {
        return "InputEventScreenTouch";
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
        rebel_method_bind* mb_get_index;
        rebel_method_bind* mb_get_position;
        rebel_method_bind* mb_set_index;
        rebel_method_bind* mb_set_position;
        rebel_method_bind* mb_set_pressed;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INPUTEVENTSCREENTOUCH_H
