// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_LIGHT2D_H
#define REBEL_LIGHT2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class Light2D : public Node2D {
public:
    enum ShadowFilter {
        SHADOW_FILTER_NONE = 0,
        SHADOW_FILTER_PCF3 = 1,
        SHADOW_FILTER_PCF5 = 2,
        SHADOW_FILTER_PCF7 = 3,
        SHADOW_FILTER_PCF9 = 4,
        SHADOW_FILTER_PCF13 = 5,
    };

    enum Mode {
        MODE_ADD = 0,
        MODE_SUB = 1,
        MODE_MIX = 2,
        MODE_MASK = 3,
    };

    Color get_color() const;
    real_t get_energy() const;
    real_t get_height() const;
    int64_t get_item_cull_mask() const;
    int64_t get_item_shadow_cull_mask() const;
    int64_t get_layer_range_max() const;
    int64_t get_layer_range_min() const;
    Light2D::Mode get_mode() const;
    int64_t get_shadow_buffer_size() const;
    Color get_shadow_color() const;
    Light2D::ShadowFilter get_shadow_filter() const;
    real_t get_shadow_gradient_length() const;
    real_t get_shadow_smooth() const;
    Ref<Texture> get_texture() const;
    Vector2 get_texture_offset() const;
    real_t get_texture_scale() const;
    int64_t get_z_range_max() const;
    int64_t get_z_range_min() const;
    bool is_editor_only() const;
    bool is_enabled() const;
    bool is_shadow_enabled() const;
    void set_color(const Color color);
    void set_editor_only(const bool editor_only);
    void set_enabled(const bool enabled);
    void set_energy(const real_t energy);
    void set_height(const real_t height);
    void set_item_cull_mask(const int64_t item_cull_mask);
    void set_item_shadow_cull_mask(const int64_t item_shadow_cull_mask);
    void set_layer_range_max(const int64_t layer);
    void set_layer_range_min(const int64_t layer);
    void set_mode(const int64_t mode);
    void set_shadow_buffer_size(const int64_t size);
    void set_shadow_color(const Color shadow_color);
    void set_shadow_enabled(const bool enabled);
    void set_shadow_filter(const int64_t filter);
    void set_shadow_gradient_length(const real_t multiplier);
    void set_shadow_smooth(const real_t smooth);
    void set_texture(const Ref<Texture> texture);
    void set_texture_offset(const Vector2 texture_offset);
    void set_texture_scale(const real_t texture_scale);
    void set_z_range_max(const int64_t z);
    void set_z_range_min(const int64_t z);

    static Light2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Light2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Light2D";
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
        rebel_method_bind* mb_get_color;
        rebel_method_bind* mb_get_energy;
        rebel_method_bind* mb_get_height;
        rebel_method_bind* mb_get_item_cull_mask;
        rebel_method_bind* mb_get_item_shadow_cull_mask;
        rebel_method_bind* mb_get_layer_range_max;
        rebel_method_bind* mb_get_layer_range_min;
        rebel_method_bind* mb_get_mode;
        rebel_method_bind* mb_get_shadow_buffer_size;
        rebel_method_bind* mb_get_shadow_color;
        rebel_method_bind* mb_get_shadow_filter;
        rebel_method_bind* mb_get_shadow_gradient_length;
        rebel_method_bind* mb_get_shadow_smooth;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_get_texture_offset;
        rebel_method_bind* mb_get_texture_scale;
        rebel_method_bind* mb_get_z_range_max;
        rebel_method_bind* mb_get_z_range_min;
        rebel_method_bind* mb_is_editor_only;
        rebel_method_bind* mb_is_enabled;
        rebel_method_bind* mb_is_shadow_enabled;
        rebel_method_bind* mb_set_color;
        rebel_method_bind* mb_set_editor_only;
        rebel_method_bind* mb_set_enabled;
        rebel_method_bind* mb_set_energy;
        rebel_method_bind* mb_set_height;
        rebel_method_bind* mb_set_item_cull_mask;
        rebel_method_bind* mb_set_item_shadow_cull_mask;
        rebel_method_bind* mb_set_layer_range_max;
        rebel_method_bind* mb_set_layer_range_min;
        rebel_method_bind* mb_set_mode;
        rebel_method_bind* mb_set_shadow_buffer_size;
        rebel_method_bind* mb_set_shadow_color;
        rebel_method_bind* mb_set_shadow_enabled;
        rebel_method_bind* mb_set_shadow_filter;
        rebel_method_bind* mb_set_shadow_gradient_length;
        rebel_method_bind* mb_set_shadow_smooth;
        rebel_method_bind* mb_set_texture;
        rebel_method_bind* mb_set_texture_offset;
        rebel_method_bind* mb_set_texture_scale;
        rebel_method_bind* mb_set_z_range_max;
        rebel_method_bind* mb_set_z_range_min;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_LIGHT2D_H
