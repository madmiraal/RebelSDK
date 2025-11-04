// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GRADIENTTEXTURE_H
#define REBEL_GRADIENTTEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/texture.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Gradient;

class GradientTexture : public Texture {
public:
    void _update();
    Ref<Gradient> get_gradient() const;
    void set_gradient(const Ref<Gradient> gradient);
    void set_width(const int64_t width);

    static GradientTexture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GradientTexture";
    }

    inline static const char* get_rebel_class_name() {
        return "GradientTexture";
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
        rebel_method_bind* mb__update;
        rebel_method_bind* mb_get_gradient;
        rebel_method_bind* mb_set_gradient;
        rebel_method_bind* mb_set_width;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GRADIENTTEXTURE_H
