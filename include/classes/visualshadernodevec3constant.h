// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODEVEC3CONSTANT_H
#define REBEL_VISUALSHADERNODEVEC3CONSTANT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualshadernode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNodeVec3Constant : public VisualShaderNode {
public:
    Vector3 get_constant() const;
    void set_constant(const Vector3 value);

    static VisualShaderNodeVec3Constant* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNodeVec3Constant";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNodeVec3Constant";
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
        rebel_method_bind* mb_get_constant;
        rebel_method_bind* mb_set_constant;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSHADERNODEVEC3CONSTANT_H
