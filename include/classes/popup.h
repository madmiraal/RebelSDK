// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_POPUP_H
#define REBEL_POPUP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Popup : public Control {
public:
    static const int NOTIFICATION_POPUP_HIDE = 81;
    static const int NOTIFICATION_POST_POPUP = 80;

    bool is_exclusive() const;
    void popup(const Rect2 bounds = Rect2(0, 0, 0, 0));
    void popup_centered(const Vector2 size = Vector2(0, 0));
    void popup_centered_clamped(const Vector2 size = Vector2(0, 0), const real_t fallback_ratio = 0.75);
    void popup_centered_minsize(const Vector2 minsize = Vector2(0, 0));
    void popup_centered_ratio(const real_t ratio = 0.75);
    void set_as_minsize();
    void set_exclusive(const bool enable);

    static Popup* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Popup";
    }

    inline static const char* get_rebel_class_name() {
        return "Popup";
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
        rebel_method_bind* mb_is_exclusive;
        rebel_method_bind* mb_popup;
        rebel_method_bind* mb_popup_centered;
        rebel_method_bind* mb_popup_centered_clamped;
        rebel_method_bind* mb_popup_centered_minsize;
        rebel_method_bind* mb_popup_centered_ratio;
        rebel_method_bind* mb_set_as_minsize;
        rebel_method_bind* mb_set_exclusive;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_POPUP_H
