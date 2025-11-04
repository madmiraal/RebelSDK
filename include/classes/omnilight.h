// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_OMNILIGHT_H
#define REBEL_OMNILIGHT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/light.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class OmniLight : public Light {
public:
    enum ShadowMode {
        SHADOW_DUAL_PARABOLOID = 0,
        SHADOW_CUBE = 1,
    };

    enum ShadowDetail {
        SHADOW_DETAIL_VERTICAL = 0,
        SHADOW_DETAIL_HORIZONTAL = 1,
    };

    OmniLight::ShadowDetail get_shadow_detail() const;
    OmniLight::ShadowMode get_shadow_mode() const;
    void set_shadow_detail(const int64_t detail);
    void set_shadow_mode(const int64_t mode);

    static OmniLight* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "OmniLight";
    }

    inline static const char* get_rebel_class_name() {
        return "OmniLight";
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
        rebel_method_bind* mb_get_shadow_detail;
        rebel_method_bind* mb_get_shadow_mode;
        rebel_method_bind* mb_set_shadow_detail;
        rebel_method_bind* mb_set_shadow_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_OMNILIGHT_H
