// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INPUTEVENTACTION_H
#define REBEL_INPUTEVENTACTION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/inputevent.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEventAction : public InputEvent {
public:
    String get_action() const;
    real_t get_strength() const;
    void set_action(const String action);
    void set_pressed(const bool pressed);
    void set_strength(const real_t strength);

    static InputEventAction* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InputEventAction";
    }

    inline static const char* get_rebel_class_name() {
        return "InputEventAction";
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
        rebel_method_bind* mb_get_action;
        rebel_method_bind* mb_get_strength;
        rebel_method_bind* mb_set_action;
        rebel_method_bind* mb_set_pressed;
        rebel_method_bind* mb_set_strength;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INPUTEVENTACTION_H
