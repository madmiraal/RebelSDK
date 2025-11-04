// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODETRANSFORMVECMULT_H
#define REBEL_VISUALSHADERNODETRANSFORMVECMULT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualshadernode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNodeTransformVecMult : public VisualShaderNode {
public:
    enum Operator {
        OP_AxB = 0,
        OP_BxA = 1,
        OP_3x3_AxB = 2,
        OP_3x3_BxA = 3,
    };

    VisualShaderNodeTransformVecMult::Operator get_operator() const;
    void set_operator(const int64_t op);

    static VisualShaderNodeTransformVecMult* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNodeTransformVecMult";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNodeTransformVecMult";
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
        rebel_method_bind* mb_get_operator;
        rebel_method_bind* mb_set_operator;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSHADERNODETRANSFORMVECMULT_H
