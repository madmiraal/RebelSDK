// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ATLASTEXTURE_H
#define REBEL_ATLASTEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/texture.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AtlasTexture : public Texture {
public:
    Ref<Texture> get_atlas() const;
    Rect2 get_margin() const;
    Rect2 get_region() const;
    bool has_filter_clip() const;
    void set_atlas(const Ref<Texture> atlas);
    void set_filter_clip(const bool enable);
    void set_margin(const Rect2 margin);
    void set_region(const Rect2 region);

    static AtlasTexture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AtlasTexture";
    }

    inline static const char* get_rebel_class_name() {
        return "AtlasTexture";
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
        rebel_method_bind* mb_get_atlas;
        rebel_method_bind* mb_get_margin;
        rebel_method_bind* mb_get_region;
        rebel_method_bind* mb_has_filter_clip;
        rebel_method_bind* mb_set_atlas;
        rebel_method_bind* mb_set_filter_clip;
        rebel_method_bind* mb_set_margin;
        rebel_method_bind* mb_set_region;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ATLASTEXTURE_H
