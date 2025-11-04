// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INPUTEVENT_H
#define REBEL_INPUTEVENT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent : public Resource {
public:
    bool accumulate(const Ref<InputEvent> with_event);
    String as_text() const;
    real_t get_action_strength(const String action, const bool exact_match = false) const;
    int64_t get_device() const;
    bool is_action(const String action, const bool exact_match = false) const;
    bool is_action_pressed(const String action, const bool allow_echo = false, const bool exact_match = false) const;
    bool is_action_released(const String action, const bool exact_match = false) const;
    bool is_action_type() const;
    bool is_echo() const;
    bool is_pressed() const;
    void set_device(const int64_t device);
    bool shortcut_match(const Ref<InputEvent> event, const bool exact_match = true) const;
    Ref<InputEvent> xformed_by(const Transform2D xform, const Vector2 local_ofs = Vector2(0, 0)) const;

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InputEvent";
    }

    inline static const char* get_rebel_class_name() {
        return "InputEvent";
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
        rebel_method_bind* mb_accumulate;
        rebel_method_bind* mb_as_text;
        rebel_method_bind* mb_get_action_strength;
        rebel_method_bind* mb_get_device;
        rebel_method_bind* mb_is_action;
        rebel_method_bind* mb_is_action_pressed;
        rebel_method_bind* mb_is_action_released;
        rebel_method_bind* mb_is_action_type;
        rebel_method_bind* mb_is_echo;
        rebel_method_bind* mb_is_pressed;
        rebel_method_bind* mb_set_device;
        rebel_method_bind* mb_shortcut_match;
        rebel_method_bind* mb_xformed_by;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INPUTEVENT_H
