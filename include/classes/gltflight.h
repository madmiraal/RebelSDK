// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLTFLIGHT_H
#define REBEL_GLTFLIGHT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GLTFLight : public Resource {
public:
    Color get_color();
    real_t get_inner_cone_angle();
    real_t get_intensity();
    real_t get_outer_cone_angle();
    real_t get_range();
    String get_type();
    void set_color(const Color color);
    void set_inner_cone_angle(const real_t inner_cone_angle);
    void set_intensity(const real_t intensity);
    void set_outer_cone_angle(const real_t outer_cone_angle);
    void set_range(const real_t range);
    void set_type(const String type);

    static GLTFLight* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GLTFLight";
    }

    inline static const char* get_rebel_class_name() {
        return "GLTFLight";
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
        rebel_method_bind* mb_get_inner_cone_angle;
        rebel_method_bind* mb_get_intensity;
        rebel_method_bind* mb_get_outer_cone_angle;
        rebel_method_bind* mb_get_range;
        rebel_method_bind* mb_get_type;
        rebel_method_bind* mb_set_color;
        rebel_method_bind* mb_set_inner_cone_angle;
        rebel_method_bind* mb_set_intensity;
        rebel_method_bind* mb_set_outer_cone_angle;
        rebel_method_bind* mb_set_range;
        rebel_method_bind* mb_set_type;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GLTFLIGHT_H
