// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSHADERNODECOLOROP_H
#define REBEL_VISUALSHADERNODECOLOROP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualshadernode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualShaderNodeColorOp : public VisualShaderNode {
public:
    enum Operator {
        OP_SCREEN = 0,
        OP_DIFFERENCE = 1,
        OP_DARKEN = 2,
        OP_LIGHTEN = 3,
        OP_OVERLAY = 4,
        OP_DODGE = 5,
        OP_BURN = 6,
        OP_SOFT_LIGHT = 7,
        OP_HARD_LIGHT = 8,
    };

    VisualShaderNodeColorOp::Operator get_operator() const;
    void set_operator(const int64_t op);

    static VisualShaderNodeColorOp* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualShaderNodeColorOp";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualShaderNodeColorOp";
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

#endif // REBEL_VISUALSHADERNODECOLOROP_H
