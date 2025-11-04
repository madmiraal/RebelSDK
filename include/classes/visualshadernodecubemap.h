// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODECUBEMAP_H
#define REBEL_VISUALSHADERNODECUBEMAP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualshadernode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CubeMap;

class VisualShaderNodeCubeMap : public VisualShaderNode {
public:
    enum TextureType {
        TYPE_DATA = 0,
        TYPE_COLOR = 1,
        TYPE_NORMALMAP = 2,
    };

    enum Source {
        SOURCE_TEXTURE = 0,
        SOURCE_PORT = 1,
    };

    Ref<CubeMap> get_cube_map() const;
    VisualShaderNodeCubeMap::Source get_source() const;
    VisualShaderNodeCubeMap::TextureType get_texture_type() const;
    void set_cube_map(const Ref<CubeMap> value);
    void set_source(const int64_t value);
    void set_texture_type(const int64_t value);

    static VisualShaderNodeCubeMap* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNodeCubeMap";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNodeCubeMap";
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
        rebel_method_bind* mb_get_cube_map;
        rebel_method_bind* mb_get_source;
        rebel_method_bind* mb_get_texture_type;
        rebel_method_bind* mb_set_cube_map;
        rebel_method_bind* mb_set_source;
        rebel_method_bind* mb_set_texture_type;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSHADERNODECUBEMAP_H
