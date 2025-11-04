// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLTFTEXTURE_H
#define REBEL_GLTFTEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GLTFTexture : public Resource {
public:
    int64_t get_src_image() const;
    void set_src_image(const int64_t src_image);

    static GLTFTexture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GLTFTexture";
    }

    inline static const char* get_rebel_class_name() {
        return "GLTFTexture";
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
        rebel_method_bind* mb_get_src_image;
        rebel_method_bind* mb_set_src_image;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GLTFTEXTURE_H
