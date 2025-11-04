// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INPUTMAP_H
#define REBEL_INPUTMAP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;

class InputMap : public Object {
public:
    void action_add_event(const String action, const Ref<InputEvent> event);
    void action_erase_event(const String action, const Ref<InputEvent> event);
    void action_erase_events(const String action);
    real_t action_get_deadzone(const String action);
    bool action_has_event(const String action, const Ref<InputEvent> event);
    void action_set_deadzone(const String action, const real_t deadzone);
    void add_action(const String action, const real_t deadzone = 0.5);
    void erase_action(const String action);
    bool event_is_action(const Ref<InputEvent> event, const String action, const bool exact_match = false) const;
    Array get_action_list(const String action);
    Array get_actions();
    bool has_action(const String action) const;
    void load_from_globals();

    static inline InputMap* get_singleton() {
        if (!InputMap::singleton) {
            InputMap::singleton = new InputMap;
        }
        return InputMap::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InputMap";
    }

    inline static const char* get_rebel_class_name() {
        return "InputMap";
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
    InputMap();
    static InputMap* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_action_add_event;
        rebel_method_bind* mb_action_erase_event;
        rebel_method_bind* mb_action_erase_events;
        rebel_method_bind* mb_action_get_deadzone;
        rebel_method_bind* mb_action_has_event;
        rebel_method_bind* mb_action_set_deadzone;
        rebel_method_bind* mb_add_action;
        rebel_method_bind* mb_erase_action;
        rebel_method_bind* mb_event_is_action;
        rebel_method_bind* mb_get_action_list;
        rebel_method_bind* mb_get_actions;
        rebel_method_bind* mb_has_action;
        rebel_method_bind* mb_load_from_globals;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INPUTMAP_H
