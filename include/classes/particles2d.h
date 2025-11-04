// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PARTICLES2D_H
#define REBEL_PARTICLES2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Material;
class Texture;

class Particles2D : public Node2D {
public:
    enum DrawOrder {
        DRAW_ORDER_INDEX = 0,
        DRAW_ORDER_LIFETIME = 1,
    };

    Rect2 capture_rect() const;
    int64_t get_amount() const;
    Particles2D::DrawOrder get_draw_order() const;
    real_t get_explosiveness_ratio() const;
    int64_t get_fixed_fps() const;
    bool get_fractional_delta() const;
    real_t get_lifetime() const;
    Ref<Texture> get_normal_map() const;
    bool get_one_shot() const;
    real_t get_pre_process_time() const;
    Ref<Material> get_process_material() const;
    real_t get_randomness_ratio() const;
    real_t get_speed_scale() const;
    Ref<Texture> get_texture() const;
    bool get_use_local_coordinates() const;
    Rect2 get_visibility_rect() const;
    bool is_emitting() const;
    void restart();
    void set_amount(const int64_t amount);
    void set_draw_order(const int64_t order);
    void set_emitting(const bool emitting);
    void set_explosiveness_ratio(const real_t ratio);
    void set_fixed_fps(const int64_t fps);
    void set_fractional_delta(const bool enable);
    void set_lifetime(const real_t secs);
    void set_normal_map(const Ref<Texture> texture);
    void set_one_shot(const bool secs);
    void set_pre_process_time(const real_t secs);
    void set_process_material(const Ref<Material> material);
    void set_randomness_ratio(const real_t ratio);
    void set_speed_scale(const real_t scale);
    void set_texture(const Ref<Texture> texture);
    void set_use_local_coordinates(const bool enable);
    void set_visibility_rect(const Rect2 visibility_rect);

    static Particles2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Particles2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Particles2D";
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
        rebel_method_bind* mb_capture_rect;
        rebel_method_bind* mb_get_amount;
        rebel_method_bind* mb_get_draw_order;
        rebel_method_bind* mb_get_explosiveness_ratio;
        rebel_method_bind* mb_get_fixed_fps;
        rebel_method_bind* mb_get_fractional_delta;
        rebel_method_bind* mb_get_lifetime;
        rebel_method_bind* mb_get_normal_map;
        rebel_method_bind* mb_get_one_shot;
        rebel_method_bind* mb_get_pre_process_time;
        rebel_method_bind* mb_get_process_material;
        rebel_method_bind* mb_get_randomness_ratio;
        rebel_method_bind* mb_get_speed_scale;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_get_use_local_coordinates;
        rebel_method_bind* mb_get_visibility_rect;
        rebel_method_bind* mb_is_emitting;
        rebel_method_bind* mb_restart;
        rebel_method_bind* mb_set_amount;
        rebel_method_bind* mb_set_draw_order;
        rebel_method_bind* mb_set_emitting;
        rebel_method_bind* mb_set_explosiveness_ratio;
        rebel_method_bind* mb_set_fixed_fps;
        rebel_method_bind* mb_set_fractional_delta;
        rebel_method_bind* mb_set_lifetime;
        rebel_method_bind* mb_set_normal_map;
        rebel_method_bind* mb_set_one_shot;
        rebel_method_bind* mb_set_pre_process_time;
        rebel_method_bind* mb_set_process_material;
        rebel_method_bind* mb_set_randomness_ratio;
        rebel_method_bind* mb_set_speed_scale;
        rebel_method_bind* mb_set_texture;
        rebel_method_bind* mb_set_use_local_coordinates;
        rebel_method_bind* mb_set_visibility_rect;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PARTICLES2D_H
