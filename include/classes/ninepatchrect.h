// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NINEPATCHRECT_H
#define REBEL_NINEPATCHRECT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class NinePatchRect : public Control {
public:
    enum AxisStretchMode {
        AXIS_STRETCH_MODE_STRETCH = 0,
        AXIS_STRETCH_MODE_TILE = 1,
        AXIS_STRETCH_MODE_TILE_FIT = 2,
    };

    NinePatchRect::AxisStretchMode get_h_axis_stretch_mode() const;
    int64_t get_patch_margin(const int64_t margin) const;
    Rect2 get_region_rect() const;
    Ref<Texture> get_texture() const;
    NinePatchRect::AxisStretchMode get_v_axis_stretch_mode() const;
    bool is_draw_center_enabled() const;
    void set_draw_center(const bool draw_center);
    void set_h_axis_stretch_mode(const int64_t mode);
    void set_patch_margin(const int64_t margin, const int64_t value);
    void set_region_rect(const Rect2 rect);
    void set_texture(const Ref<Texture> texture);
    void set_v_axis_stretch_mode(const int64_t mode);

    static NinePatchRect* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "NinePatchRect";
    }

    inline static const char* get_rebel_class_name() {
        return "NinePatchRect";
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
        rebel_method_bind* mb_get_h_axis_stretch_mode;
        rebel_method_bind* mb_get_patch_margin;
        rebel_method_bind* mb_get_region_rect;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_get_v_axis_stretch_mode;
        rebel_method_bind* mb_is_draw_center_enabled;
        rebel_method_bind* mb_set_draw_center;
        rebel_method_bind* mb_set_h_axis_stretch_mode;
        rebel_method_bind* mb_set_patch_margin;
        rebel_method_bind* mb_set_region_rect;
        rebel_method_bind* mb_set_texture;
        rebel_method_bind* mb_set_v_axis_stretch_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NINEPATCHRECT_H
