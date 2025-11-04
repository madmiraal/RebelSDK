// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TEXTUREPROGRESS_H
#define REBEL_TEXTUREPROGRESS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/range.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class TextureProgress : public Range {
public:
    enum FillMode {
        FILL_LEFT_TO_RIGHT = 0,
        FILL_RIGHT_TO_LEFT = 1,
        FILL_TOP_TO_BOTTOM = 2,
        FILL_BOTTOM_TO_TOP = 3,
        FILL_CLOCKWISE = 4,
        FILL_COUNTER_CLOCKWISE = 5,
        FILL_BILINEAR_LEFT_AND_RIGHT = 6,
        FILL_BILINEAR_TOP_AND_BOTTOM = 7,
        FILL_CLOCKWISE_AND_COUNTER_CLOCKWISE = 8,
    };

    real_t get_fill_degrees();
    int64_t get_fill_mode();
    bool get_nine_patch_stretch() const;
    Ref<Texture> get_over_texture() const;
    Ref<Texture> get_progress_texture() const;
    Vector2 get_radial_center_offset();
    real_t get_radial_initial_angle();
    int64_t get_stretch_margin(const int64_t margin) const;
    Vector2 get_texture_progress_offset() const;
    Color get_tint_over() const;
    Color get_tint_progress() const;
    Color get_tint_under() const;
    Ref<Texture> get_under_texture() const;
    void set_fill_degrees(const real_t mode);
    void set_fill_mode(const int64_t mode);
    void set_nine_patch_stretch(const bool stretch);
    void set_over_texture(const Ref<Texture> tex);
    void set_progress_texture(const Ref<Texture> tex);
    void set_radial_center_offset(const Vector2 mode);
    void set_radial_initial_angle(const real_t mode);
    void set_stretch_margin(const int64_t margin, const int64_t value);
    void set_texture_progress_offset(const Vector2 offset);
    void set_tint_over(const Color tint);
    void set_tint_progress(const Color tint);
    void set_tint_under(const Color tint);
    void set_under_texture(const Ref<Texture> tex);

    static TextureProgress* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "TextureProgress";
    }

    inline static const char* get_rebel_class_name() {
        return "TextureProgress";
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
        rebel_method_bind* mb_get_fill_degrees;
        rebel_method_bind* mb_get_fill_mode;
        rebel_method_bind* mb_get_nine_patch_stretch;
        rebel_method_bind* mb_get_over_texture;
        rebel_method_bind* mb_get_progress_texture;
        rebel_method_bind* mb_get_radial_center_offset;
        rebel_method_bind* mb_get_radial_initial_angle;
        rebel_method_bind* mb_get_stretch_margin;
        rebel_method_bind* mb_get_texture_progress_offset;
        rebel_method_bind* mb_get_tint_over;
        rebel_method_bind* mb_get_tint_progress;
        rebel_method_bind* mb_get_tint_under;
        rebel_method_bind* mb_get_under_texture;
        rebel_method_bind* mb_set_fill_degrees;
        rebel_method_bind* mb_set_fill_mode;
        rebel_method_bind* mb_set_nine_patch_stretch;
        rebel_method_bind* mb_set_over_texture;
        rebel_method_bind* mb_set_progress_texture;
        rebel_method_bind* mb_set_radial_center_offset;
        rebel_method_bind* mb_set_radial_initial_angle;
        rebel_method_bind* mb_set_stretch_margin;
        rebel_method_bind* mb_set_texture_progress_offset;
        rebel_method_bind* mb_set_tint_over;
        rebel_method_bind* mb_set_tint_progress;
        rebel_method_bind* mb_set_tint_under;
        rebel_method_bind* mb_set_under_texture;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TEXTUREPROGRESS_H
