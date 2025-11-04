// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SHADER_H
#define REBEL_SHADER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class Shader : public Resource {
public:
    enum Mode {
        MODE_SPATIAL = 0,
        MODE_CANVAS_ITEM = 1,
        MODE_PARTICLES = 2,
    };

    String get_code() const;
    String get_custom_defines() const;
    Ref<Texture> get_default_texture_param(const String param) const;
    Shader::Mode get_mode() const;
    bool has_param(const String name) const;
    void set_code(const String code);
    void set_custom_defines(const String custom_defines);
    void set_default_texture_param(const String param, const Ref<Texture> texture);

    static Shader* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Shader";
    }

    inline static const char* get_rebel_class_name() {
        return "Shader";
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
        rebel_method_bind* mb_get_code;
        rebel_method_bind* mb_get_custom_defines;
        rebel_method_bind* mb_get_default_texture_param;
        rebel_method_bind* mb_get_mode;
        rebel_method_bind* mb_has_param;
        rebel_method_bind* mb_set_code;
        rebel_method_bind* mb_set_custom_defines;
        rebel_method_bind* mb_set_default_texture_param;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SHADER_H
