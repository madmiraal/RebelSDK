// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORPROPERTY_H
#define REBEL_EDITORPROPERTY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/container.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Control;
class InputEvent;
class Object;

class EditorProperty : public Container {
public:
    void _focusable_focused(const int64_t arg0);
    void _gui_input(const Ref<InputEvent> arg0);
    void add_focusable(const Control* control);
    void emit_changed(const String property, const Variant value, const String field = "", const bool changing = false);
    Object* get_edited_object();
    String get_edited_property();
    String get_label() const;
    String get_tooltip_text() const;
    bool is_checkable() const;
    bool is_checked() const;
    bool is_draw_red() const;
    bool is_keying() const;
    bool is_read_only() const;
    void set_bottom_editor(const Control* editor);
    void set_checkable(const bool checkable);
    void set_checked(const bool checked);
    void set_draw_red(const bool draw_red);
    void set_keying(const bool keying);
    void set_label(const String text);
    void set_read_only(const bool read_only);
    void update_property();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorProperty";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorProperty";
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
        rebel_method_bind* mb__focusable_focused;
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb_add_focusable;
        rebel_method_bind* mb_emit_changed;
        rebel_method_bind* mb_get_edited_object;
        rebel_method_bind* mb_get_edited_property;
        rebel_method_bind* mb_get_label;
        rebel_method_bind* mb_get_tooltip_text;
        rebel_method_bind* mb_is_checkable;
        rebel_method_bind* mb_is_checked;
        rebel_method_bind* mb_is_draw_red;
        rebel_method_bind* mb_is_keying;
        rebel_method_bind* mb_is_read_only;
        rebel_method_bind* mb_set_bottom_editor;
        rebel_method_bind* mb_set_checkable;
        rebel_method_bind* mb_set_checked;
        rebel_method_bind* mb_set_draw_red;
        rebel_method_bind* mb_set_keying;
        rebel_method_bind* mb_set_label;
        rebel_method_bind* mb_set_read_only;
        rebel_method_bind* mb_update_property;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORPROPERTY_H
