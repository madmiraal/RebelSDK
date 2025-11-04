// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_HINGEJOINT_H
#define REBEL_HINGEJOINT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/joint.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class HingeJoint : public Joint {
public:
    enum Param {
        PARAM_BIAS = 0,
        PARAM_LIMIT_UPPER = 1,
        PARAM_LIMIT_LOWER = 2,
        PARAM_LIMIT_BIAS = 3,
        PARAM_LIMIT_SOFTNESS = 4,
        PARAM_LIMIT_RELAXATION = 5,
        PARAM_MOTOR_TARGET_VELOCITY = 6,
        PARAM_MOTOR_MAX_IMPULSE = 7,
        PARAM_MAX = 8,
    };

    enum Flag {
        FLAG_USE_LIMIT = 0,
        FLAG_ENABLE_MOTOR = 1,
        FLAG_MAX = 2,
    };

    real_t _get_lower_limit() const;
    real_t _get_upper_limit() const;
    void _set_lower_limit(const real_t lower_limit);
    void _set_upper_limit(const real_t upper_limit);
    bool get_flag(const int64_t flag) const;
    real_t get_param(const int64_t param) const;
    void set_flag(const int64_t flag, const bool enabled);
    void set_param(const int64_t param, const real_t value);

    static HingeJoint* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "HingeJoint";
    }

    inline static const char* get_rebel_class_name() {
        return "HingeJoint";
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
        rebel_method_bind* mb__get_lower_limit;
        rebel_method_bind* mb__get_upper_limit;
        rebel_method_bind* mb__set_lower_limit;
        rebel_method_bind* mb__set_upper_limit;
        rebel_method_bind* mb_get_flag;
        rebel_method_bind* mb_get_param;
        rebel_method_bind* mb_set_flag;
        rebel_method_bind* mb_set_param;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_HINGEJOINT_H
