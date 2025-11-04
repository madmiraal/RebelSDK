// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TEXTUREBUTTON_H
#define REBEL_TEXTUREBUTTON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/basebutton.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class BitMap;
class Texture;

class TextureButton : public BaseButton {
public:
    enum StretchMode {
        STRETCH_SCALE = 0,
        STRETCH_TILE = 1,
        STRETCH_KEEP = 2,
        STRETCH_KEEP_CENTERED = 3,
        STRETCH_KEEP_ASPECT = 4,
        STRETCH_KEEP_ASPECT_CENTERED = 5,
        STRETCH_KEEP_ASPECT_COVERED = 6,
    };

    Ref<BitMap> get_click_mask() const;
    Ref<Texture> get_disabled_texture() const;
    bool get_expand() const;
    Ref<Texture> get_focused_texture() const;
    Ref<Texture> get_hover_texture() const;
    Ref<Texture> get_normal_texture() const;
    Ref<Texture> get_pressed_texture() const;
    TextureButton::StretchMode get_stretch_mode() const;
    bool is_flipped_h() const;
    bool is_flipped_v() const;
    void set_click_mask(const Ref<BitMap> mask);
    void set_disabled_texture(const Ref<Texture> texture);
    void set_expand(const bool p_expand);
    void set_flip_h(const bool enable);
    void set_flip_v(const bool enable);
    void set_focused_texture(const Ref<Texture> texture);
    void set_hover_texture(const Ref<Texture> texture);
    void set_normal_texture(const Ref<Texture> texture);
    void set_pressed_texture(const Ref<Texture> texture);
    void set_stretch_mode(const int64_t p_mode);

    static TextureButton* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "TextureButton";
    }

    inline static const char* get_rebel_class_name() {
        return "TextureButton";
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
        rebel_method_bind* mb_get_click_mask;
        rebel_method_bind* mb_get_disabled_texture;
        rebel_method_bind* mb_get_expand;
        rebel_method_bind* mb_get_focused_texture;
        rebel_method_bind* mb_get_hover_texture;
        rebel_method_bind* mb_get_normal_texture;
        rebel_method_bind* mb_get_pressed_texture;
        rebel_method_bind* mb_get_stretch_mode;
        rebel_method_bind* mb_is_flipped_h;
        rebel_method_bind* mb_is_flipped_v;
        rebel_method_bind* mb_set_click_mask;
        rebel_method_bind* mb_set_disabled_texture;
        rebel_method_bind* mb_set_expand;
        rebel_method_bind* mb_set_flip_h;
        rebel_method_bind* mb_set_flip_v;
        rebel_method_bind* mb_set_focused_texture;
        rebel_method_bind* mb_set_hover_texture;
        rebel_method_bind* mb_set_normal_texture;
        rebel_method_bind* mb_set_pressed_texture;
        rebel_method_bind* mb_set_stretch_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TEXTUREBUTTON_H
