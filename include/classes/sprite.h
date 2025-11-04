// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SPRITE_H
#define REBEL_SPRITE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class Sprite : public Node2D {
public:
    void _texture_changed();
    int64_t get_frame() const;
    Vector2 get_frame_coords() const;
    int64_t get_hframes() const;
    Ref<Texture> get_normal_map() const;
    Vector2 get_offset() const;
    Rect2 get_rect() const;
    Rect2 get_region_rect() const;
    Ref<Texture> get_texture() const;
    int64_t get_vframes() const;
    bool is_centered() const;
    bool is_flipped_h() const;
    bool is_flipped_v() const;
    bool is_pixel_opaque(const Vector2 pos) const;
    bool is_region() const;
    bool is_region_filter_clip_enabled() const;
    void set_centered(const bool centered);
    void set_flip_h(const bool flip_h);
    void set_flip_v(const bool flip_v);
    void set_frame(const int64_t frame);
    void set_frame_coords(const Vector2 coords);
    void set_hframes(const int64_t hframes);
    void set_normal_map(const Ref<Texture> normal_map);
    void set_offset(const Vector2 offset);
    void set_region(const bool enabled);
    void set_region_filter_clip(const bool enabled);
    void set_region_rect(const Rect2 rect);
    void set_texture(const Ref<Texture> texture);
    void set_vframes(const int64_t vframes);

    static Sprite* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Sprite";
    }

    inline static const char* get_rebel_class_name() {
        return "Sprite";
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
        rebel_method_bind* mb_get_frame;
        rebel_method_bind* mb_get_frame_coords;
        rebel_method_bind* mb_get_hframes;
        rebel_method_bind* mb_get_normal_map;
        rebel_method_bind* mb_get_offset;
        rebel_method_bind* mb_get_rect;
        rebel_method_bind* mb_get_region_rect;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_get_vframes;
        rebel_method_bind* mb_is_centered;
        rebel_method_bind* mb_is_flipped_h;
        rebel_method_bind* mb_is_flipped_v;
        rebel_method_bind* mb_is_pixel_opaque;
        rebel_method_bind* mb_is_region;
        rebel_method_bind* mb_is_region_filter_clip_enabled;
        rebel_method_bind* mb_set_centered;
        rebel_method_bind* mb_set_flip_h;
        rebel_method_bind* mb_set_flip_v;
        rebel_method_bind* mb_set_frame;
        rebel_method_bind* mb_set_frame_coords;
        rebel_method_bind* mb_set_hframes;
        rebel_method_bind* mb_set_normal_map;
        rebel_method_bind* mb_set_offset;
        rebel_method_bind* mb_set_region;
        rebel_method_bind* mb_set_region_filter_clip;
        rebel_method_bind* mb_set_region_rect;
        rebel_method_bind* mb_set_texture;
        rebel_method_bind* mb_set_vframes;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SPRITE_H
