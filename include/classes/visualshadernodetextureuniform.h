// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODETEXTUREUNIFORM_H
#define REBEL_VISUALSHADERNODETEXTUREUNIFORM_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualshadernodeuniform.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNodeTextureUniform : public VisualShaderNodeUniform {
public:
    enum TextureType {
        TYPE_DATA = 0,
        TYPE_COLOR = 1,
        TYPE_NORMALMAP = 2,
        TYPE_ANISO = 3,
    };

    enum ColorDefault {
        COLOR_DEFAULT_WHITE = 0,
        COLOR_DEFAULT_BLACK = 1,
    };

    VisualShaderNodeTextureUniform::ColorDefault get_color_default() const;
    VisualShaderNodeTextureUniform::TextureType get_texture_type() const;
    void set_color_default(const int64_t type);
    void set_texture_type(const int64_t type);

    static VisualShaderNodeTextureUniform* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNodeTextureUniform";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNodeTextureUniform";
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
        rebel_method_bind* mb_get_color_default;
        rebel_method_bind* mb_get_texture_type;
        rebel_method_bind* mb_set_color_default;
        rebel_method_bind* mb_set_texture_type;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSHADERNODETEXTUREUNIFORM_H
