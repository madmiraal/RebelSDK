// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_LARGETEXTURE_H
#define REBEL_LARGETEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/texture.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class LargeTexture : public Texture {
public:
    Array _get_data() const;
    void _set_data(const Array data);
    int64_t add_piece(const Vector2 ofs, const Ref<Texture> texture);
    void clear();
    int64_t get_piece_count() const;
    Vector2 get_piece_offset(const int64_t idx) const;
    Ref<Texture> get_piece_texture(const int64_t idx) const;
    void set_piece_offset(const int64_t idx, const Vector2 ofs);
    void set_piece_texture(const int64_t idx, const Ref<Texture> texture);
    void set_size(const Vector2 size);

    static LargeTexture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "LargeTexture";
    }

    inline static const char* get_rebel_class_name() {
        return "LargeTexture";
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
        rebel_method_bind* mb__get_data;
        rebel_method_bind* mb__set_data;
        rebel_method_bind* mb_add_piece;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_get_piece_count;
        rebel_method_bind* mb_get_piece_offset;
        rebel_method_bind* mb_get_piece_texture;
        rebel_method_bind* mb_set_piece_offset;
        rebel_method_bind* mb_set_piece_texture;
        rebel_method_bind* mb_set_size;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_LARGETEXTURE_H
