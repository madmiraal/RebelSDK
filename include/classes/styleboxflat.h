// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_STYLEBOXFLAT_H
#define REBEL_STYLEBOXFLAT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/stylebox.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class StyleBoxFlat : public StyleBox {
public:
    real_t get_aa_size() const;
    Color get_bg_color() const;
    bool get_border_blend() const;
    Color get_border_color() const;
    int64_t get_border_width(const int64_t margin) const;
    int64_t get_border_width_min() const;
    int64_t get_corner_detail() const;
    int64_t get_corner_radius(const int64_t corner) const;
    real_t get_expand_margin(const int64_t margin) const;
    Color get_shadow_color() const;
    Vector2 get_shadow_offset() const;
    int64_t get_shadow_size() const;
    bool is_anti_aliased() const;
    bool is_draw_center_enabled() const;
    void set_aa_size(const real_t size);
    void set_anti_aliased(const bool anti_aliased);
    void set_bg_color(const Color color);
    void set_border_blend(const bool blend);
    void set_border_color(const Color color);
    void set_border_width(const int64_t margin, const int64_t width);
    void set_border_width_all(const int64_t width);
    void set_corner_detail(const int64_t detail);
    void set_corner_radius(const int64_t corner, const int64_t radius);
    void set_corner_radius_all(const int64_t radius);
    void set_corner_radius_individual(const int64_t radius_top_left, const int64_t radius_top_right, const int64_t radius_bottom_right, const int64_t radius_bottom_left);
    void set_draw_center(const bool draw_center);
    void set_expand_margin(const int64_t margin, const real_t size);
    void set_expand_margin_all(const real_t size);
    void set_expand_margin_individual(const real_t size_left, const real_t size_top, const real_t size_right, const real_t size_bottom);
    void set_shadow_color(const Color color);
    void set_shadow_offset(const Vector2 offset);
    void set_shadow_size(const int64_t size);

    static StyleBoxFlat* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "StyleBoxFlat";
    }

    inline static const char* get_rebel_class_name() {
        return "StyleBoxFlat";
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
        rebel_method_bind* mb_get_aa_size;
        rebel_method_bind* mb_get_bg_color;
        rebel_method_bind* mb_get_border_blend;
        rebel_method_bind* mb_get_border_color;
        rebel_method_bind* mb_get_border_width;
        rebel_method_bind* mb_get_border_width_min;
        rebel_method_bind* mb_get_corner_detail;
        rebel_method_bind* mb_get_corner_radius;
        rebel_method_bind* mb_get_expand_margin;
        rebel_method_bind* mb_get_shadow_color;
        rebel_method_bind* mb_get_shadow_offset;
        rebel_method_bind* mb_get_shadow_size;
        rebel_method_bind* mb_is_anti_aliased;
        rebel_method_bind* mb_is_draw_center_enabled;
        rebel_method_bind* mb_set_aa_size;
        rebel_method_bind* mb_set_anti_aliased;
        rebel_method_bind* mb_set_bg_color;
        rebel_method_bind* mb_set_border_blend;
        rebel_method_bind* mb_set_border_color;
        rebel_method_bind* mb_set_border_width;
        rebel_method_bind* mb_set_border_width_all;
        rebel_method_bind* mb_set_corner_detail;
        rebel_method_bind* mb_set_corner_radius;
        rebel_method_bind* mb_set_corner_radius_all;
        rebel_method_bind* mb_set_corner_radius_individual;
        rebel_method_bind* mb_set_draw_center;
        rebel_method_bind* mb_set_expand_margin;
        rebel_method_bind* mb_set_expand_margin_all;
        rebel_method_bind* mb_set_expand_margin_individual;
        rebel_method_bind* mb_set_shadow_color;
        rebel_method_bind* mb_set_shadow_offset;
        rebel_method_bind* mb_set_shadow_size;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_STYLEBOXFLAT_H
