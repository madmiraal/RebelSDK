// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INPUTEVENTKEY_H
#define REBEL_INPUTEVENTKEY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/inputeventwithmodifiers.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEventKey : public InputEventWithModifiers {
public:
    int64_t get_physical_scancode() const;
    int64_t get_physical_scancode_with_modifiers() const;
    int64_t get_scancode() const;
    int64_t get_scancode_with_modifiers() const;
    int64_t get_unicode() const;
    void set_echo(const bool echo);
    void set_physical_scancode(const int64_t scancode);
    void set_pressed(const bool pressed);
    void set_scancode(const int64_t scancode);
    void set_unicode(const int64_t unicode);

    static InputEventKey* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InputEventKey";
    }

    inline static const char* get_rebel_class_name() {
        return "InputEventKey";
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
        rebel_method_bind* mb_get_physical_scancode;
        rebel_method_bind* mb_get_physical_scancode_with_modifiers;
        rebel_method_bind* mb_get_scancode;
        rebel_method_bind* mb_get_scancode_with_modifiers;
        rebel_method_bind* mb_get_unicode;
        rebel_method_bind* mb_set_echo;
        rebel_method_bind* mb_set_physical_scancode;
        rebel_method_bind* mb_set_pressed;
        rebel_method_bind* mb_set_scancode;
        rebel_method_bind* mb_set_unicode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INPUTEVENTKEY_H
