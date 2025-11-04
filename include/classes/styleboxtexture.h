// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_STYLEBOXTEXTURE_H
#define REBEL_STYLEBOXTEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/stylebox.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class StyleBoxTexture : public StyleBox {
public:
    enum AxisStretchMode {
        AXIS_STRETCH_MODE_STRETCH = 0,
        AXIS_STRETCH_MODE_TILE = 1,
        AXIS_STRETCH_MODE_TILE_FIT = 2,
    };

    real_t get_expand_margin_size(const int64_t margin) const;
    StyleBoxTexture::AxisStretchMode get_h_axis_stretch_mode() const;
    real_t get_margin_size(const int64_t margin) const;
    Color get_modulate() const;
    Ref<Texture> get_normal_map() const;
    Rect2 get_region_rect() const;
    Ref<Texture> get_texture() const;
    StyleBoxTexture::AxisStretchMode get_v_axis_stretch_mode() const;
    bool is_draw_center_enabled() const;
    void set_draw_center(const bool enable);
    void set_expand_margin_all(const real_t size);
    void set_expand_margin_individual(const real_t size_left, const real_t size_top, const real_t size_right, const real_t size_bottom);
    void set_expand_margin_size(const int64_t margin, const real_t size);
    void set_h_axis_stretch_mode(const int64_t mode);
    void set_margin_size(const int64_t margin, const real_t size);
    void set_modulate(const Color color);
    void set_normal_map(const Ref<Texture> normal_map);
    void set_region_rect(const Rect2 region);
    void set_texture(const Ref<Texture> texture);
    void set_v_axis_stretch_mode(const int64_t mode);

    static StyleBoxTexture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "StyleBoxTexture";
    }

    inline static const char* get_rebel_class_name() {
        return "StyleBoxTexture";
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
        rebel_method_bind* mb_get_expand_margin_size;
        rebel_method_bind* mb_get_h_axis_stretch_mode;
        rebel_method_bind* mb_get_margin_size;
        rebel_method_bind* mb_get_modulate;
        rebel_method_bind* mb_get_normal_map;
        rebel_method_bind* mb_get_region_rect;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_get_v_axis_stretch_mode;
        rebel_method_bind* mb_is_draw_center_enabled;
        rebel_method_bind* mb_set_draw_center;
        rebel_method_bind* mb_set_expand_margin_all;
        rebel_method_bind* mb_set_expand_margin_individual;
        rebel_method_bind* mb_set_expand_margin_size;
        rebel_method_bind* mb_set_h_axis_stretch_mode;
        rebel_method_bind* mb_set_margin_size;
        rebel_method_bind* mb_set_modulate;
        rebel_method_bind* mb_set_normal_map;
        rebel_method_bind* mb_set_region_rect;
        rebel_method_bind* mb_set_texture;
        rebel_method_bind* mb_set_v_axis_stretch_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_STYLEBOXTEXTURE_H
