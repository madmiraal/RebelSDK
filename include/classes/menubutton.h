// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MENUBUTTON_H
#define REBEL_MENUBUTTON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/button.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class PopupMenu;

class MenuButton : public Button {
public:
    Array _get_items() const;
    void _set_items(const Array arg0);
    void _unhandled_key_input(const Ref<InputEvent> arg0);
    PopupMenu* get_popup() const;
    bool is_switch_on_hover();
    void set_disable_shortcuts(const bool disabled);
    void set_switch_on_hover(const bool enable);

    static MenuButton* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "MenuButton";
    }

    inline static const char* get_rebel_class_name() {
        return "MenuButton";
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
        rebel_method_bind* mb__get_items;
        rebel_method_bind* mb__set_items;
        rebel_method_bind* mb__unhandled_key_input;
        rebel_method_bind* mb_get_popup;
        rebel_method_bind* mb_is_switch_on_hover;
        rebel_method_bind* mb_set_disable_shortcuts;
        rebel_method_bind* mb_set_switch_on_hover;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_MENUBUTTON_H
