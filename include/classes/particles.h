// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PARTICLES_H
#define REBEL_PARTICLES_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/geometryinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Material;
class Mesh;

class Particles : public GeometryInstance {
public:
    enum DrawOrder {
        DRAW_ORDER_INDEX = 0,
        DRAW_ORDER_LIFETIME = 1,
        DRAW_ORDER_VIEW_DEPTH = 2,
    };

    static const int MAX_DRAW_PASSES = 4;

    AABB capture_aabb() const;
    int64_t get_amount() const;
    Particles::DrawOrder get_draw_order() const;
    Ref<Mesh> get_draw_pass_mesh(const int64_t pass) const;
    int64_t get_draw_passes() const;
    real_t get_explosiveness_ratio() const;
    int64_t get_fixed_fps() const;
    bool get_fractional_delta() const;
    real_t get_lifetime() const;
    bool get_one_shot() const;
    real_t get_pre_process_time() const;
    Ref<Material> get_process_material() const;
    real_t get_randomness_ratio() const;
    real_t get_speed_scale() const;
    bool get_use_local_coordinates() const;
    AABB get_visibility_aabb() const;
    bool is_emitting() const;
    void restart();
    void set_amount(const int64_t amount);
    void set_draw_order(const int64_t order);
    void set_draw_pass_mesh(const int64_t pass, const Ref<Mesh> mesh);
    void set_draw_passes(const int64_t passes);
    void set_emitting(const bool emitting);
    void set_explosiveness_ratio(const real_t ratio);
    void set_fixed_fps(const int64_t fps);
    void set_fractional_delta(const bool enable);
    void set_lifetime(const real_t secs);
    void set_one_shot(const bool enable);
    void set_pre_process_time(const real_t secs);
    void set_process_material(const Ref<Material> material);
    void set_randomness_ratio(const real_t ratio);
    void set_speed_scale(const real_t scale);
    void set_use_local_coordinates(const bool enable);
    void set_visibility_aabb(const AABB aabb);

    static Particles* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Particles";
    }

    inline static const char* get_rebel_class_name() {
        return "Particles";
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
        rebel_method_bind* mb_capture_aabb;
        rebel_method_bind* mb_get_amount;
        rebel_method_bind* mb_get_draw_order;
        rebel_method_bind* mb_get_draw_pass_mesh;
        rebel_method_bind* mb_get_draw_passes;
        rebel_method_bind* mb_get_explosiveness_ratio;
        rebel_method_bind* mb_get_fixed_fps;
        rebel_method_bind* mb_get_fractional_delta;
        rebel_method_bind* mb_get_lifetime;
        rebel_method_bind* mb_get_one_shot;
        rebel_method_bind* mb_get_pre_process_time;
        rebel_method_bind* mb_get_process_material;
        rebel_method_bind* mb_get_randomness_ratio;
        rebel_method_bind* mb_get_speed_scale;
        rebel_method_bind* mb_get_use_local_coordinates;
        rebel_method_bind* mb_get_visibility_aabb;
        rebel_method_bind* mb_is_emitting;
        rebel_method_bind* mb_restart;
        rebel_method_bind* mb_set_amount;
        rebel_method_bind* mb_set_draw_order;
        rebel_method_bind* mb_set_draw_pass_mesh;
        rebel_method_bind* mb_set_draw_passes;
        rebel_method_bind* mb_set_emitting;
        rebel_method_bind* mb_set_explosiveness_ratio;
        rebel_method_bind* mb_set_fixed_fps;
        rebel_method_bind* mb_set_fractional_delta;
        rebel_method_bind* mb_set_lifetime;
        rebel_method_bind* mb_set_one_shot;
        rebel_method_bind* mb_set_pre_process_time;
        rebel_method_bind* mb_set_process_material;
        rebel_method_bind* mb_set_randomness_ratio;
        rebel_method_bind* mb_set_speed_scale;
        rebel_method_bind* mb_set_use_local_coordinates;
        rebel_method_bind* mb_set_visibility_aabb;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PARTICLES_H
