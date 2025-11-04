// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INPUTEVENTJOYPADMOTION_H
#define REBEL_INPUTEVENTJOYPADMOTION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/inputevent.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEventJoypadMotion : public InputEvent {
public:
    int64_t get_axis() const;
    real_t get_axis_value() const;
    void set_axis(const int64_t axis);
    void set_axis_value(const real_t axis_value);

    static InputEventJoypadMotion* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InputEventJoypadMotion";
    }

    inline static const char* get_rebel_class_name() {
        return "InputEventJoypadMotion";
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
        rebel_method_bind* mb_get_axis;
        rebel_method_bind* mb_get_axis_value;
        rebel_method_bind* mb_set_axis;
        rebel_method_bind* mb_set_axis_value;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INPUTEVENTJOYPADMOTION_H
