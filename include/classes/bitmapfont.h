// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_BITMAPFONT_H
#define REBEL_BITMAPFONT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/font.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class BitmapFont : public Font {
public:
    PoolIntArray _get_chars() const;
    PoolIntArray _get_kernings() const;
    Array _get_textures() const;
    void _set_chars(const PoolIntArray arg0);
    void _set_kernings(const PoolIntArray arg0);
    void _set_textures(const Array arg0);
    void add_char(const int64_t character, const int64_t texture, const Rect2 rect, const Vector2 align = Vector2(0, 0), const real_t advance = -1);
    void add_kerning_pair(const int64_t char_a, const int64_t char_b, const int64_t kerning);
    void add_texture(const Ref<Texture> texture);
    void clear();
    Error create_from_fnt(const String path);
    Ref<BitmapFont> get_fallback() const;
    int64_t get_kerning_pair(const int64_t char_a, const int64_t char_b) const;
    Ref<Texture> get_texture(const int64_t idx) const;
    int64_t get_texture_count() const;
    void set_ascent(const real_t px);
    void set_distance_field_hint(const bool enable);
    void set_fallback(const Ref<BitmapFont> fallback);
    void set_height(const real_t px);

    static BitmapFont* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "BitmapFont";
    }

    inline static const char* get_rebel_class_name() {
        return "BitmapFont";
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
        rebel_method_bind* mb__get_chars;
        rebel_method_bind* mb__get_kernings;
        rebel_method_bind* mb__get_textures;
        rebel_method_bind* mb__set_chars;
        rebel_method_bind* mb__set_kernings;
        rebel_method_bind* mb__set_textures;
        rebel_method_bind* mb_add_char;
        rebel_method_bind* mb_add_kerning_pair;
        rebel_method_bind* mb_add_texture;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_create_from_fnt;
        rebel_method_bind* mb_get_fallback;
        rebel_method_bind* mb_get_kerning_pair;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_get_texture_count;
        rebel_method_bind* mb_set_ascent;
        rebel_method_bind* mb_set_distance_field_hint;
        rebel_method_bind* mb_set_fallback;
        rebel_method_bind* mb_set_height;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_BITMAPFONT_H
