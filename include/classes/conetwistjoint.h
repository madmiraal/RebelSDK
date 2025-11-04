// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CONETWISTJOINT_H
#define REBEL_CONETWISTJOINT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/joint.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ConeTwistJoint : public Joint {
public:
    enum Param {
        PARAM_SWING_SPAN = 0,
        PARAM_TWIST_SPAN = 1,
        PARAM_BIAS = 2,
        PARAM_SOFTNESS = 3,
        PARAM_RELAXATION = 4,
        PARAM_MAX = 5,
    };

    real_t _get_swing_span() const;
    real_t _get_twist_span() const;
    void _set_swing_span(const real_t swing_span);
    void _set_twist_span(const real_t twist_span);
    real_t get_param(const int64_t param) const;
    void set_param(const int64_t param, const real_t value);

    static ConeTwistJoint* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ConeTwistJoint";
    }

    inline static const char* get_rebel_class_name() {
        return "ConeTwistJoint";
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
        rebel_method_bind* mb__get_swing_span;
        rebel_method_bind* mb__get_twist_span;
        rebel_method_bind* mb__set_swing_span;
        rebel_method_bind* mb__set_twist_span;
        rebel_method_bind* mb_get_param;
        rebel_method_bind* mb_set_param;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CONETWISTJOINT_H
