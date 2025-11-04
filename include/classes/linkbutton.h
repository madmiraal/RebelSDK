// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_LINKBUTTON_H
#define REBEL_LINKBUTTON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/basebutton.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class LinkButton : public BaseButton {
public:
    enum UnderlineMode {
        UNDERLINE_MODE_ALWAYS = 0,
        UNDERLINE_MODE_ON_HOVER = 1,
        UNDERLINE_MODE_NEVER = 2,
    };

    String get_text() const;
    LinkButton::UnderlineMode get_underline_mode() const;
    void set_text(const String text);
    void set_underline_mode(const int64_t underline_mode);

    static LinkButton* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "LinkButton";
    }

    inline static const char* get_rebel_class_name() {
        return "LinkButton";
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
        rebel_method_bind* mb_get_text;
        rebel_method_bind* mb_get_underline_mode;
        rebel_method_bind* mb_set_text;
        rebel_method_bind* mb_set_underline_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_LINKBUTTON_H
