// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_BAKEDLIGHTMAP_H
#define REBEL_BAKEDLIGHTMAP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class BakedLightmapData;
class Node;
class Sky;

class BakedLightmap : public VisualInstance {
public:
    enum BakeQuality {
        BAKE_QUALITY_LOW = 0,
        BAKE_QUALITY_MEDIUM = 1,
        BAKE_QUALITY_HIGH = 2,
        BAKE_QUALITY_ULTRA = 3,
    };

    enum BakeError {
        BAKE_ERROR_OK = 0,
        BAKE_ERROR_NO_SAVE_PATH = 1,
        BAKE_ERROR_NO_MESHES = 2,
        BAKE_ERROR_CANT_CREATE_IMAGE = 3,
        BAKE_ERROR_LIGHTMAP_SIZE = 4,
        BAKE_ERROR_INVALID_MESH = 5,
        BAKE_ERROR_USER_ABORTED = 6,
        BAKE_ERROR_NO_LIGHTMAPPER = 7,
        BAKE_ERROR_NO_ROOT = 8,
    };

    enum EnvironmentMode {
        ENVIRONMENT_MODE_DISABLED = 0,
        ENVIRONMENT_MODE_SCENE = 1,
        ENVIRONMENT_MODE_CUSTOM_SKY = 2,
        ENVIRONMENT_MODE_CUSTOM_COLOR = 3,
    };

    BakedLightmap::BakeError bake(const Node* from_node = nullptr, const String data_save_path = "");
    BakedLightmap::BakeQuality get_bake_quality() const;
    real_t get_bias() const;
    real_t get_bounce_indirect_energy() const;
    int64_t get_bounces() const;
    real_t get_capture_cell_size() const;
    bool get_capture_enabled() const;
    real_t get_capture_propagation() const;
    BakedLightmap::BakeQuality get_capture_quality() const;
    real_t get_default_texels_per_unit() const;
    Color get_environment_custom_color() const;
    real_t get_environment_custom_energy() const;
    Ref<Sky> get_environment_custom_sky() const;
    Vector3 get_environment_custom_sky_rotation_degrees() const;
    Color get_environment_min_light() const;
    BakedLightmap::EnvironmentMode get_environment_mode() const;
    Vector3 get_extents() const;
    String get_image_path() const;
    Ref<BakedLightmapData> get_light_data() const;
    int64_t get_max_atlas_size() const;
    bool is_generate_atlas_enabled() const;
    bool is_using_color() const;
    bool is_using_denoiser() const;
    bool is_using_hdr() const;
    void set_bake_quality(const int64_t quality);
    void set_bias(const real_t bias);
    void set_bounce_indirect_energy(const real_t bounce_indirect_energy);
    void set_bounces(const int64_t bounces);
    void set_capture_cell_size(const real_t capture_cell_size);
    void set_capture_enabled(const bool enabled);
    void set_capture_propagation(const real_t propagation);
    void set_capture_quality(const int64_t capture_quality);
    void set_default_texels_per_unit(const real_t texels);
    void set_environment_custom_color(const Color color);
    void set_environment_custom_energy(const real_t energy);
    void set_environment_custom_sky(const Ref<Sky> sky);
    void set_environment_custom_sky_rotation_degrees(const Vector3 rotation);
    void set_environment_min_light(const Color min_light);
    void set_environment_mode(const int64_t mode);
    void set_extents(const Vector3 extents);
    void set_generate_atlas(const bool enabled);
    void set_image_path(const String image_path);
    void set_light_data(const Ref<BakedLightmapData> data);
    void set_max_atlas_size(const int64_t max_atlas_size);
    void set_use_color(const bool use_denoiser);
    void set_use_denoiser(const bool use_denoiser);
    void set_use_hdr(const bool use_denoiser);

    static BakedLightmap* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "BakedLightmap";
    }

    inline static const char* get_rebel_class_name() {
        return "BakedLightmap";
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
        rebel_method_bind* mb_bake;
        rebel_method_bind* mb_get_bake_quality;
        rebel_method_bind* mb_get_bias;
        rebel_method_bind* mb_get_bounce_indirect_energy;
        rebel_method_bind* mb_get_bounces;
        rebel_method_bind* mb_get_capture_cell_size;
        rebel_method_bind* mb_get_capture_enabled;
        rebel_method_bind* mb_get_capture_propagation;
        rebel_method_bind* mb_get_capture_quality;
        rebel_method_bind* mb_get_default_texels_per_unit;
        rebel_method_bind* mb_get_environment_custom_color;
        rebel_method_bind* mb_get_environment_custom_energy;
        rebel_method_bind* mb_get_environment_custom_sky;
        rebel_method_bind* mb_get_environment_custom_sky_rotation_degrees;
        rebel_method_bind* mb_get_environment_min_light;
        rebel_method_bind* mb_get_environment_mode;
        rebel_method_bind* mb_get_extents;
        rebel_method_bind* mb_get_image_path;
        rebel_method_bind* mb_get_light_data;
        rebel_method_bind* mb_get_max_atlas_size;
        rebel_method_bind* mb_is_generate_atlas_enabled;
        rebel_method_bind* mb_is_using_color;
        rebel_method_bind* mb_is_using_denoiser;
        rebel_method_bind* mb_is_using_hdr;
        rebel_method_bind* mb_set_bake_quality;
        rebel_method_bind* mb_set_bias;
        rebel_method_bind* mb_set_bounce_indirect_energy;
        rebel_method_bind* mb_set_bounces;
        rebel_method_bind* mb_set_capture_cell_size;
        rebel_method_bind* mb_set_capture_enabled;
        rebel_method_bind* mb_set_capture_propagation;
        rebel_method_bind* mb_set_capture_quality;
        rebel_method_bind* mb_set_default_texels_per_unit;
        rebel_method_bind* mb_set_environment_custom_color;
        rebel_method_bind* mb_set_environment_custom_energy;
        rebel_method_bind* mb_set_environment_custom_sky;
        rebel_method_bind* mb_set_environment_custom_sky_rotation_degrees;
        rebel_method_bind* mb_set_environment_min_light;
        rebel_method_bind* mb_set_environment_mode;
        rebel_method_bind* mb_set_extents;
        rebel_method_bind* mb_set_generate_atlas;
        rebel_method_bind* mb_set_image_path;
        rebel_method_bind* mb_set_light_data;
        rebel_method_bind* mb_set_max_atlas_size;
        rebel_method_bind* mb_set_use_color;
        rebel_method_bind* mb_set_use_denoiser;
        rebel_method_bind* mb_set_use_hdr;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_BAKEDLIGHTMAP_H
