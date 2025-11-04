// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GEOMETRYINSTANCE_H
#define REBEL_GEOMETRYINSTANCE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Material;

class GeometryInstance : public VisualInstance {
public:
    enum Flags {
        FLAG_USE_BAKED_LIGHT = 0,
        FLAG_DRAW_NEXT_FRAME_IF_VISIBLE = 1,
        FLAG_MAX = 2,
    };

    enum ShadowCastingSetting {
        SHADOW_CASTING_SETTING_OFF = 0,
        SHADOW_CASTING_SETTING_ON = 1,
        SHADOW_CASTING_SETTING_DOUBLE_SIDED = 2,
        SHADOW_CASTING_SETTING_SHADOWS_ONLY = 3,
    };

    enum LightmapScale {
        LIGHTMAP_SCALE_1X = 0,
        LIGHTMAP_SCALE_2X = 1,
        LIGHTMAP_SCALE_4X = 2,
        LIGHTMAP_SCALE_8X = 3,
        LIGHTMAP_SCALE_MAX = 4,
    };

    GeometryInstance::ShadowCastingSetting get_cast_shadows_setting() const;
    real_t get_extra_cull_margin() const;
    bool get_flag(const int64_t flag) const;
    bool get_generate_lightmap();
    GeometryInstance::LightmapScale get_lightmap_scale() const;
    real_t get_lod_max_distance() const;
    real_t get_lod_max_hysteresis() const;
    real_t get_lod_min_distance() const;
    real_t get_lod_min_hysteresis() const;
    Ref<Material> get_material_override() const;
    void set_cast_shadows_setting(const int64_t shadow_casting_setting);
    void set_custom_aabb(const AABB aabb);
    void set_extra_cull_margin(const real_t margin);
    void set_flag(const int64_t flag, const bool value);
    void set_generate_lightmap(const bool enabled);
    void set_lightmap_scale(const int64_t scale);
    void set_lod_max_distance(const real_t mode);
    void set_lod_max_hysteresis(const real_t mode);
    void set_lod_min_distance(const real_t mode);
    void set_lod_min_hysteresis(const real_t mode);
    void set_material_override(const Ref<Material> material);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GeometryInstance";
    }

    inline static const char* get_rebel_class_name() {
        return "GeometryInstance";
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
        rebel_method_bind* mb_get_cast_shadows_setting;
        rebel_method_bind* mb_get_extra_cull_margin;
        rebel_method_bind* mb_get_flag;
        rebel_method_bind* mb_get_generate_lightmap;
        rebel_method_bind* mb_get_lightmap_scale;
        rebel_method_bind* mb_get_lod_max_distance;
        rebel_method_bind* mb_get_lod_max_hysteresis;
        rebel_method_bind* mb_get_lod_min_distance;
        rebel_method_bind* mb_get_lod_min_hysteresis;
        rebel_method_bind* mb_get_material_override;
        rebel_method_bind* mb_set_cast_shadows_setting;
        rebel_method_bind* mb_set_custom_aabb;
        rebel_method_bind* mb_set_extra_cull_margin;
        rebel_method_bind* mb_set_flag;
        rebel_method_bind* mb_set_generate_lightmap;
        rebel_method_bind* mb_set_lightmap_scale;
        rebel_method_bind* mb_set_lod_max_distance;
        rebel_method_bind* mb_set_lod_max_hysteresis;
        rebel_method_bind* mb_set_lod_min_distance;
        rebel_method_bind* mb_set_lod_min_hysteresis;
        rebel_method_bind* mb_set_material_override;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GEOMETRYINSTANCE_H
