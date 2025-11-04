// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SPINBOX_H
#define REBEL_SPINBOX_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/lineedit.h"
#include "classes/range.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class LineEdit;

class SpinBox : public Range {
public:
    void _gui_input(const Ref<InputEvent> arg0);
    void _line_edit_focus_exit();
    void _line_edit_input(const Ref<InputEvent> arg0);
    void _range_click_timeout();
    void _text_entered(const String arg0);
    void apply();
    LineEdit::Align get_align() const;
    LineEdit* get_line_edit();
    String get_prefix() const;
    String get_suffix() const;
    bool is_editable() const;
    void set_align(const int64_t align);
    void set_editable(const bool editable);
    void set_prefix(const String prefix);
    void set_suffix(const String suffix);

    static SpinBox* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SpinBox";
    }

    inline static const char* get_rebel_class_name() {
        return "SpinBox";
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
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb__line_edit_focus_exit;
        rebel_method_bind* mb__line_edit_input;
        rebel_method_bind* mb__range_click_timeout;
        rebel_method_bind* mb__text_entered;
        rebel_method_bind* mb_apply;
        rebel_method_bind* mb_get_align;
        rebel_method_bind* mb_get_line_edit;
        rebel_method_bind* mb_get_prefix;
        rebel_method_bind* mb_get_suffix;
        rebel_method_bind* mb_is_editable;
        rebel_method_bind* mb_set_align;
        rebel_method_bind* mb_set_editable;
        rebel_method_bind* mb_set_prefix;
        rebel_method_bind* mb_set_suffix;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SPINBOX_H
