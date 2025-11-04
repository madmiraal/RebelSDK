// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TEXTURERECT_H
#define REBEL_TEXTURERECT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class TextureRect : public Control {
public:
    enum StretchMode {
        STRETCH_SCALE_ON_EXPAND = 0,
        STRETCH_SCALE = 1,
        STRETCH_TILE = 2,
        STRETCH_KEEP = 3,
        STRETCH_KEEP_CENTERED = 4,
        STRETCH_KEEP_ASPECT = 5,
        STRETCH_KEEP_ASPECT_CENTERED = 6,
        STRETCH_KEEP_ASPECT_COVERED = 7,
    };

    void _texture_changed();
    TextureRect::StretchMode get_stretch_mode() const;
    Ref<Texture> get_texture() const;
    bool has_expand() const;
    bool is_flipped_h() const;
    bool is_flipped_v() const;
    void set_expand(const bool enable);
    void set_flip_h(const bool enable);
    void set_flip_v(const bool enable);
    void set_stretch_mode(const int64_t stretch_mode);
    void set_texture(const Ref<Texture> texture);

    static TextureRect* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "TextureRect";
    }

    inline static const char* get_rebel_class_name() {
        return "TextureRect";
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
        rebel_method_bind* mb__texture_changed;
        rebel_method_bind* mb_get_stretch_mode;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_has_expand;
        rebel_method_bind* mb_is_flipped_h;
        rebel_method_bind* mb_is_flipped_v;
        rebel_method_bind* mb_set_expand;
        rebel_method_bind* mb_set_flip_h;
        rebel_method_bind* mb_set_flip_v;
        rebel_method_bind* mb_set_stretch_mode;
        rebel_method_bind* mb_set_texture;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TEXTURERECT_H
