// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TOUCHSCREENBUTTON_H
#define REBEL_TOUCHSCREENBUTTON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class BitMap;
class InputEvent;
class Shape2D;
class Texture;

class TouchScreenButton : public Node2D {
public:
    enum VisibilityMode {
        VISIBILITY_ALWAYS = 0,
        VISIBILITY_TOUCHSCREEN_ONLY = 1,
    };

    void _input(const Ref<InputEvent> arg0);
    String get_action() const;
    Ref<BitMap> get_bitmask() const;
    Ref<Shape2D> get_shape() const;
    Ref<Texture> get_texture() const;
    Ref<Texture> get_texture_pressed() const;
    TouchScreenButton::VisibilityMode get_visibility_mode() const;
    bool is_passby_press_enabled() const;
    bool is_pressed() const;
    bool is_shape_centered() const;
    bool is_shape_visible() const;
    void set_action(const String action);
    void set_bitmask(const Ref<BitMap> bitmask);
    void set_passby_press(const bool enabled);
    void set_shape(const Ref<Shape2D> shape);
    void set_shape_centered(const bool _bool);
    void set_shape_visible(const bool _bool);
    void set_texture(const Ref<Texture> texture);
    void set_texture_pressed(const Ref<Texture> texture_pressed);
    void set_visibility_mode(const int64_t mode);

    static TouchScreenButton* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "TouchScreenButton";
    }

    inline static const char* get_rebel_class_name() {
        return "TouchScreenButton";
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
        rebel_method_bind* mb__input;
        rebel_method_bind* mb_get_action;
        rebel_method_bind* mb_get_bitmask;
        rebel_method_bind* mb_get_shape;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_get_texture_pressed;
        rebel_method_bind* mb_get_visibility_mode;
        rebel_method_bind* mb_is_passby_press_enabled;
        rebel_method_bind* mb_is_pressed;
        rebel_method_bind* mb_is_shape_centered;
        rebel_method_bind* mb_is_shape_visible;
        rebel_method_bind* mb_set_action;
        rebel_method_bind* mb_set_bitmask;
        rebel_method_bind* mb_set_passby_press;
        rebel_method_bind* mb_set_shape;
        rebel_method_bind* mb_set_shape_centered;
        rebel_method_bind* mb_set_shape_visible;
        rebel_method_bind* mb_set_texture;
        rebel_method_bind* mb_set_texture_pressed;
        rebel_method_bind* mb_set_visibility_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TOUCHSCREENBUTTON_H
