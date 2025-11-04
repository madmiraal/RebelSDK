// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SHADERMATERIAL_H
#define REBEL_SHADERMATERIAL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/material.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Shader;

class ShaderMaterial : public Material {
public:
    void _shader_changed();
    Ref<Shader> get_shader() const;
    Variant get_shader_param(const String param) const;
    bool property_can_revert(const String name);
    Variant property_get_revert(const String name);
    void set_shader(const Ref<Shader> shader);
    void set_shader_param(const String param, const Variant value);

    static ShaderMaterial* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ShaderMaterial";
    }

    inline static const char* get_rebel_class_name() {
        return "ShaderMaterial";
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
        rebel_method_bind* mb__shader_changed;
        rebel_method_bind* mb_get_shader;
        rebel_method_bind* mb_get_shader_param;
        rebel_method_bind* mb_property_can_revert;
        rebel_method_bind* mb_property_get_revert;
        rebel_method_bind* mb_set_shader;
        rebel_method_bind* mb_set_shader_param;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SHADERMATERIAL_H
