// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_BUTTON_H
#define REBEL_BUTTON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/basebutton.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class Button : public BaseButton {
public:
    enum TextAlign {
        ALIGN_LEFT = 0,
        ALIGN_CENTER = 1,
        ALIGN_RIGHT = 2,
    };

    Ref<Texture> get_button_icon() const;
    bool get_clip_text() const;
    String get_text() const;
    Button::TextAlign get_text_align() const;
    bool is_expand_icon() const;
    bool is_flat() const;
    void set_button_icon(const Ref<Texture> texture);
    void set_clip_text(const bool enabled);
    void set_expand_icon(const bool arg0);
    void set_flat(const bool enabled);
    void set_text(const String text);
    void set_text_align(const int64_t align);

    static Button* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Button";
    }

    inline static const char* get_rebel_class_name() {
        return "Button";
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
        rebel_method_bind* mb_get_button_icon;
        rebel_method_bind* mb_get_clip_text;
        rebel_method_bind* mb_get_text;
        rebel_method_bind* mb_get_text_align;
        rebel_method_bind* mb_is_expand_icon;
        rebel_method_bind* mb_is_flat;
        rebel_method_bind* mb_set_button_icon;
        rebel_method_bind* mb_set_clip_text;
        rebel_method_bind* mb_set_expand_icon;
        rebel_method_bind* mb_set_flat;
        rebel_method_bind* mb_set_text;
        rebel_method_bind* mb_set_text_align;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_BUTTON_H
