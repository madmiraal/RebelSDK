// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TEXTURE_H
#define REBEL_TEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Image;

class Texture : public Resource {
public:
    enum Flags {
        FLAG_MIPMAPS = 1,
        FLAG_REPEAT = 2,
        FLAG_FILTER = 4,
        FLAGS_DEFAULT = 7,
        FLAG_ANISOTROPIC_FILTER = 8,
        FLAG_CONVERT_TO_LINEAR = 16,
        FLAG_MIRRORED_REPEAT = 32,
        FLAG_VIDEO_SURFACE = 2048,
    };

    void draw(const RID canvas_item, const Vector2 position, const Color modulate = Color(1,1,1,1), const bool transpose = false, const Ref<Texture> normal_map = nullptr) const;
    void draw_rect(const RID canvas_item, const Rect2 rect, const bool tile, const Color modulate = Color(1,1,1,1), const bool transpose = false, const Ref<Texture> normal_map = nullptr) const;
    void draw_rect_region(const RID canvas_item, const Rect2 rect, const Rect2 src_rect, const Color modulate = Color(1,1,1,1), const bool transpose = false, const Ref<Texture> normal_map = nullptr, const bool clip_uv = true) const;
    Ref<Image> get_data() const;
    int64_t get_flags() const;
    int64_t get_height() const;
    Vector2 get_size() const;
    int64_t get_width() const;
    bool has_alpha() const;
    void set_flags(const int64_t flags);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Texture";
    }

    inline static const char* get_rebel_class_name() {
        return "Texture";
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
        rebel_method_bind* mb_draw;
        rebel_method_bind* mb_draw_rect;
        rebel_method_bind* mb_draw_rect_region;
        rebel_method_bind* mb_get_data;
        rebel_method_bind* mb_get_flags;
        rebel_method_bind* mb_get_height;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_get_width;
        rebel_method_bind* mb_has_alpha;
        rebel_method_bind* mb_set_flags;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TEXTURE_H
