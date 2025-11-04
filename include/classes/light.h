// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_LIGHT_H
#define REBEL_LIGHT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Light : public VisualInstance {
public:
    enum BakeMode {
        BAKE_DISABLED = 0,
        BAKE_INDIRECT = 1,
        BAKE_ALL = 2,
    };

    enum Param {
        PARAM_ENERGY = 0,
        PARAM_INDIRECT_ENERGY = 1,
        PARAM_SIZE = 2,
        PARAM_SPECULAR = 3,
        PARAM_RANGE = 4,
        PARAM_ATTENUATION = 5,
        PARAM_SPOT_ANGLE = 6,
        PARAM_SPOT_ATTENUATION = 7,
        PARAM_CONTACT_SHADOW_SIZE = 8,
        PARAM_SHADOW_MAX_DISTANCE = 9,
        PARAM_SHADOW_SPLIT_1_OFFSET = 10,
        PARAM_SHADOW_SPLIT_2_OFFSET = 11,
        PARAM_SHADOW_SPLIT_3_OFFSET = 12,
        PARAM_SHADOW_NORMAL_BIAS = 13,
        PARAM_SHADOW_BIAS = 14,
        PARAM_SHADOW_BIAS_SPLIT_SCALE = 15,
        PARAM_MAX = 16,
    };

    Light::BakeMode get_bake_mode() const;
    Color get_color() const;
    int64_t get_cull_mask() const;
    real_t get_param(const int64_t param) const;
    Color get_shadow_color() const;
    bool get_shadow_reverse_cull_face() const;
    bool has_shadow() const;
    bool is_editor_only() const;
    bool is_negative() const;
    void set_bake_mode(const int64_t bake_mode);
    void set_color(const Color color);
    void set_cull_mask(const int64_t cull_mask);
    void set_editor_only(const bool editor_only);
    void set_negative(const bool enabled);
    void set_param(const int64_t param, const real_t value);
    void set_shadow(const bool enabled);
    void set_shadow_color(const Color shadow_color);
    void set_shadow_reverse_cull_face(const bool enable);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Light";
    }

    inline static const char* get_rebel_class_name() {
        return "Light";
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
        rebel_method_bind* mb_get_bake_mode;
        rebel_method_bind* mb_get_color;
        rebel_method_bind* mb_get_cull_mask;
        rebel_method_bind* mb_get_param;
        rebel_method_bind* mb_get_shadow_color;
        rebel_method_bind* mb_get_shadow_reverse_cull_face;
        rebel_method_bind* mb_has_shadow;
        rebel_method_bind* mb_is_editor_only;
        rebel_method_bind* mb_is_negative;
        rebel_method_bind* mb_set_bake_mode;
        rebel_method_bind* mb_set_color;
        rebel_method_bind* mb_set_cull_mask;
        rebel_method_bind* mb_set_editor_only;
        rebel_method_bind* mb_set_negative;
        rebel_method_bind* mb_set_param;
        rebel_method_bind* mb_set_shadow;
        rebel_method_bind* mb_set_shadow_color;
        rebel_method_bind* mb_set_shadow_reverse_cull_face;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_LIGHT_H
