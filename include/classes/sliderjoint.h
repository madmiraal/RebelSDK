// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SLIDERJOINT_H
#define REBEL_SLIDERJOINT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/joint.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class SliderJoint : public Joint {
public:
    enum Param {
        PARAM_LINEAR_LIMIT_UPPER = 0,
        PARAM_LINEAR_LIMIT_LOWER = 1,
        PARAM_LINEAR_LIMIT_SOFTNESS = 2,
        PARAM_LINEAR_LIMIT_RESTITUTION = 3,
        PARAM_LINEAR_LIMIT_DAMPING = 4,
        PARAM_LINEAR_MOTION_SOFTNESS = 5,
        PARAM_LINEAR_MOTION_RESTITUTION = 6,
        PARAM_LINEAR_MOTION_DAMPING = 7,
        PARAM_LINEAR_ORTHOGONAL_SOFTNESS = 8,
        PARAM_LINEAR_ORTHOGONAL_RESTITUTION = 9,
        PARAM_LINEAR_ORTHOGONAL_DAMPING = 10,
        PARAM_ANGULAR_LIMIT_UPPER = 11,
        PARAM_ANGULAR_LIMIT_LOWER = 12,
        PARAM_ANGULAR_LIMIT_SOFTNESS = 13,
        PARAM_ANGULAR_LIMIT_RESTITUTION = 14,
        PARAM_ANGULAR_LIMIT_DAMPING = 15,
        PARAM_ANGULAR_MOTION_SOFTNESS = 16,
        PARAM_ANGULAR_MOTION_RESTITUTION = 17,
        PARAM_ANGULAR_MOTION_DAMPING = 18,
        PARAM_ANGULAR_ORTHOGONAL_SOFTNESS = 19,
        PARAM_ANGULAR_ORTHOGONAL_RESTITUTION = 20,
        PARAM_ANGULAR_ORTHOGONAL_DAMPING = 21,
        PARAM_MAX = 22,
    };

    real_t _get_lower_limit_angular() const;
    real_t _get_upper_limit_angular() const;
    void _set_lower_limit_angular(const real_t lower_limit_angular);
    void _set_upper_limit_angular(const real_t upper_limit_angular);
    real_t get_param(const int64_t param) const;
    void set_param(const int64_t param, const real_t value);

    static SliderJoint* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SliderJoint";
    }

    inline static const char* get_rebel_class_name() {
        return "SliderJoint";
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
        rebel_method_bind* mb__get_lower_limit_angular;
        rebel_method_bind* mb__get_upper_limit_angular;
        rebel_method_bind* mb__set_lower_limit_angular;
        rebel_method_bind* mb__set_upper_limit_angular;
        rebel_method_bind* mb_get_param;
        rebel_method_bind* mb_set_param;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SLIDERJOINT_H
