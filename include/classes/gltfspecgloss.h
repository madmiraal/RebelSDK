// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLTFSPECGLOSS_H
#define REBEL_GLTFSPECGLOSS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Image;

class GLTFSpecGloss : public Resource {
public:
    Color get_diffuse_factor();
    Ref<Image> get_diffuse_img();
    real_t get_gloss_factor();
    Ref<Image> get_spec_gloss_img();
    Color get_specular_factor();
    void set_diffuse_factor(const Color diffuse_factor);
    void set_diffuse_img(const Ref<Image> diffuse_img);
    void set_gloss_factor(const real_t gloss_factor);
    void set_spec_gloss_img(const Ref<Image> spec_gloss_img);
    void set_specular_factor(const Color specular_factor);

    static GLTFSpecGloss* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GLTFSpecGloss";
    }

    inline static const char* get_rebel_class_name() {
        return "GLTFSpecGloss";
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
        rebel_method_bind* mb_get_diffuse_factor;
        rebel_method_bind* mb_get_diffuse_img;
        rebel_method_bind* mb_get_gloss_factor;
        rebel_method_bind* mb_get_spec_gloss_img;
        rebel_method_bind* mb_get_specular_factor;
        rebel_method_bind* mb_set_diffuse_factor;
        rebel_method_bind* mb_set_diffuse_img;
        rebel_method_bind* mb_set_gloss_factor;
        rebel_method_bind* mb_set_spec_gloss_img;
        rebel_method_bind* mb_set_specular_factor;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GLTFSPECGLOSS_H
