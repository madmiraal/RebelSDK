// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PINJOINT_H
#define REBEL_PINJOINT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/joint.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PinJoint : public Joint {
public:
    enum Param {
        PARAM_BIAS = 0,
        PARAM_DAMPING = 1,
        PARAM_IMPULSE_CLAMP = 2,
    };

    real_t get_param(const int64_t param) const;
    void set_param(const int64_t param, const real_t value);

    static PinJoint* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PinJoint";
    }

    inline static const char* get_rebel_class_name() {
        return "PinJoint";
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
        rebel_method_bind* mb_get_param;
        rebel_method_bind* mb_set_param;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PINJOINT_H
