// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INPUTEVENTMOUSEMOTION_H
#define REBEL_INPUTEVENTMOUSEMOTION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/inputeventmouse.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEventMouseMotion : public InputEventMouse {
public:
    real_t get_pressure() const;
    Vector2 get_relative() const;
    Vector2 get_speed() const;
    Vector2 get_tilt() const;
    void set_pressure(const real_t pressure);
    void set_relative(const Vector2 relative);
    void set_speed(const Vector2 speed);
    void set_tilt(const Vector2 tilt);

    static InputEventMouseMotion* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InputEventMouseMotion";
    }

    inline static const char* get_rebel_class_name() {
        return "InputEventMouseMotion";
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
        rebel_method_bind* mb_get_pressure;
        rebel_method_bind* mb_get_relative;
        rebel_method_bind* mb_get_speed;
        rebel_method_bind* mb_get_tilt;
        rebel_method_bind* mb_set_pressure;
        rebel_method_bind* mb_set_relative;
        rebel_method_bind* mb_set_speed;
        rebel_method_bind* mb_set_tilt;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INPUTEVENTMOUSEMOTION_H
