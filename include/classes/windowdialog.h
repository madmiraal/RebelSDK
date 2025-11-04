// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_WINDOWDIALOG_H
#define REBEL_WINDOWDIALOG_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/popup.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class TextureButton;

class WindowDialog : public Popup {
public:
    void _closed();
    void _gui_input(const Ref<InputEvent> arg0);
    TextureButton* get_close_button();
    bool get_resizable() const;
    String get_title() const;
    void set_resizable(const bool resizable);
    void set_title(const String title);

    static WindowDialog* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "WindowDialog";
    }

    inline static const char* get_rebel_class_name() {
        return "WindowDialog";
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
        rebel_method_bind* mb__closed;
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb_get_close_button;
        rebel_method_bind* mb_get_resizable;
        rebel_method_bind* mb_get_title;
        rebel_method_bind* mb_set_resizable;
        rebel_method_bind* mb_set_title;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_WINDOWDIALOG_H
