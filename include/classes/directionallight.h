// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_DIRECTIONALLIGHT_H
#define REBEL_DIRECTIONALLIGHT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/light.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class DirectionalLight : public Light {
public:
    enum ShadowMode {
        SHADOW_ORTHOGONAL = 0,
        SHADOW_PARALLEL_2_SPLITS = 1,
        SHADOW_PARALLEL_4_SPLITS = 2,
    };

    enum ShadowDepthRange {
        SHADOW_DEPTH_RANGE_STABLE = 0,
        SHADOW_DEPTH_RANGE_OPTIMIZED = 1,
    };

    DirectionalLight::ShadowDepthRange get_shadow_depth_range() const;
    DirectionalLight::ShadowMode get_shadow_mode() const;
    bool is_blend_splits_enabled() const;
    void set_blend_splits(const bool enabled);
    void set_shadow_depth_range(const int64_t mode);
    void set_shadow_mode(const int64_t mode);

    static DirectionalLight* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "DirectionalLight";
    }

    inline static const char* get_rebel_class_name() {
        return "DirectionalLight";
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
        rebel_method_bind* mb_get_shadow_depth_range;
        rebel_method_bind* mb_get_shadow_mode;
        rebel_method_bind* mb_is_blend_splits_enabled;
        rebel_method_bind* mb_set_blend_splits;
        rebel_method_bind* mb_set_shadow_depth_range;
        rebel_method_bind* mb_set_shadow_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_DIRECTIONALLIGHT_H
