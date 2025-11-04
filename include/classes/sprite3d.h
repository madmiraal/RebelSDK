// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SPRITE3D_H
#define REBEL_SPRITE3D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spritebase3d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class Sprite3D : public SpriteBase3D {
public:
    int64_t get_frame() const;
    Vector2 get_frame_coords() const;
    int64_t get_hframes() const;
    Rect2 get_region_rect() const;
    Ref<Texture> get_texture() const;
    int64_t get_vframes() const;
    bool is_region() const;
    void set_frame(const int64_t frame);
    void set_frame_coords(const Vector2 coords);
    void set_hframes(const int64_t hframes);
    void set_region(const bool enabled);
    void set_region_rect(const Rect2 rect);
    void set_texture(const Ref<Texture> texture);
    void set_vframes(const int64_t vframes);

    static Sprite3D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Sprite3D";
    }

    inline static const char* get_rebel_class_name() {
        return "Sprite3D";
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
        rebel_method_bind* mb_get_frame;
        rebel_method_bind* mb_get_frame_coords;
        rebel_method_bind* mb_get_hframes;
        rebel_method_bind* mb_get_region_rect;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_get_vframes;
        rebel_method_bind* mb_is_region;
        rebel_method_bind* mb_set_frame;
        rebel_method_bind* mb_set_frame_coords;
        rebel_method_bind* mb_set_hframes;
        rebel_method_bind* mb_set_region;
        rebel_method_bind* mb_set_region_rect;
        rebel_method_bind* mb_set_texture;
        rebel_method_bind* mb_set_vframes;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SPRITE3D_H
