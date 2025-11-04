// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ACCEPTDIALOG_H
#define REBEL_ACCEPTDIALOG_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/windowdialog.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Button;
class Control;
class Label;
class Node;

class AcceptDialog : public WindowDialog {
public:
    void _builtin_text_entered(const String arg0);
    void _custom_action(const String arg0);
    void _ok();
    Button* add_button(const String text, const bool right = false, const String action = "");
    Button* add_cancel(const String name);
    bool get_hide_on_ok() const;
    Label* get_label();
    Button* get_ok();
    String get_text() const;
    bool has_autowrap();
    void register_text_enter(const Node* line_edit);
    void remove_button(const Control* button);
    void set_autowrap(const bool autowrap);
    void set_hide_on_ok(const bool enabled);
    void set_text(const String text);

    static AcceptDialog* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AcceptDialog";
    }

    inline static const char* get_rebel_class_name() {
        return "AcceptDialog";
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
        rebel_method_bind* mb__builtin_text_entered;
        rebel_method_bind* mb__custom_action;
        rebel_method_bind* mb__ok;
        rebel_method_bind* mb_add_button;
        rebel_method_bind* mb_add_cancel;
        rebel_method_bind* mb_get_hide_on_ok;
        rebel_method_bind* mb_get_label;
        rebel_method_bind* mb_get_ok;
        rebel_method_bind* mb_get_text;
        rebel_method_bind* mb_has_autowrap;
        rebel_method_bind* mb_register_text_enter;
        rebel_method_bind* mb_remove_button;
        rebel_method_bind* mb_set_autowrap;
        rebel_method_bind* mb_set_hide_on_ok;
        rebel_method_bind* mb_set_text;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ACCEPTDIALOG_H
