// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GENERIC6DOFJOINT_H
#define REBEL_GENERIC6DOFJOINT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/joint.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Generic6DOFJoint : public Joint {
public:
    enum Param {
        PARAM_LINEAR_LOWER_LIMIT = 0,
        PARAM_LINEAR_UPPER_LIMIT = 1,
        PARAM_LINEAR_LIMIT_SOFTNESS = 2,
        PARAM_LINEAR_RESTITUTION = 3,
        PARAM_LINEAR_DAMPING = 4,
        PARAM_LINEAR_MOTOR_TARGET_VELOCITY = 5,
        PARAM_LINEAR_MOTOR_FORCE_LIMIT = 6,
        PARAM_LINEAR_SPRING_STIFFNESS = 7,
        PARAM_LINEAR_SPRING_DAMPING = 8,
        PARAM_LINEAR_SPRING_EQUILIBRIUM_POINT = 9,
        PARAM_ANGULAR_LOWER_LIMIT = 10,
        PARAM_ANGULAR_UPPER_LIMIT = 11,
        PARAM_ANGULAR_LIMIT_SOFTNESS = 12,
        PARAM_ANGULAR_DAMPING = 13,
        PARAM_ANGULAR_RESTITUTION = 14,
        PARAM_ANGULAR_FORCE_LIMIT = 15,
        PARAM_ANGULAR_ERP = 16,
        PARAM_ANGULAR_MOTOR_TARGET_VELOCITY = 17,
        PARAM_ANGULAR_MOTOR_FORCE_LIMIT = 18,
        PARAM_ANGULAR_SPRING_STIFFNESS = 19,
        PARAM_ANGULAR_SPRING_DAMPING = 20,
        PARAM_ANGULAR_SPRING_EQUILIBRIUM_POINT = 21,
        PARAM_MAX = 22,
    };

    enum Flag {
        FLAG_ENABLE_LINEAR_LIMIT = 0,
        FLAG_ENABLE_ANGULAR_LIMIT = 1,
        FLAG_ENABLE_ANGULAR_SPRING = 2,
        FLAG_ENABLE_LINEAR_SPRING = 3,
        FLAG_ENABLE_MOTOR = 4,
        FLAG_ENABLE_LINEAR_MOTOR = 5,
        FLAG_MAX = 6,
    };

    real_t _get_angular_hi_limit_x() const;
    real_t _get_angular_hi_limit_y() const;
    real_t _get_angular_hi_limit_z() const;
    real_t _get_angular_lo_limit_x() const;
    real_t _get_angular_lo_limit_y() const;
    real_t _get_angular_lo_limit_z() const;
    void _set_angular_hi_limit_x(const real_t angle);
    void _set_angular_hi_limit_y(const real_t angle);
    void _set_angular_hi_limit_z(const real_t angle);
    void _set_angular_lo_limit_x(const real_t angle);
    void _set_angular_lo_limit_y(const real_t angle);
    void _set_angular_lo_limit_z(const real_t angle);
    bool get_flag_x(const int64_t flag) const;
    bool get_flag_y(const int64_t flag) const;
    bool get_flag_z(const int64_t flag) const;
    real_t get_param_x(const int64_t param) const;
    real_t get_param_y(const int64_t param) const;
    real_t get_param_z(const int64_t param) const;
    void set_flag_x(const int64_t flag, const bool value);
    void set_flag_y(const int64_t flag, const bool value);
    void set_flag_z(const int64_t flag, const bool value);
    void set_param_x(const int64_t param, const real_t value);
    void set_param_y(const int64_t param, const real_t value);
    void set_param_z(const int64_t param, const real_t value);

    static Generic6DOFJoint* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Generic6DOFJoint";
    }

    inline static const char* get_rebel_class_name() {
        return "Generic6DOFJoint";
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
        rebel_method_bind* mb__get_angular_hi_limit_x;
        rebel_method_bind* mb__get_angular_hi_limit_y;
        rebel_method_bind* mb__get_angular_hi_limit_z;
        rebel_method_bind* mb__get_angular_lo_limit_x;
        rebel_method_bind* mb__get_angular_lo_limit_y;
        rebel_method_bind* mb__get_angular_lo_limit_z;
        rebel_method_bind* mb__set_angular_hi_limit_x;
        rebel_method_bind* mb__set_angular_hi_limit_y;
        rebel_method_bind* mb__set_angular_hi_limit_z;
        rebel_method_bind* mb__set_angular_lo_limit_x;
        rebel_method_bind* mb__set_angular_lo_limit_y;
        rebel_method_bind* mb__set_angular_lo_limit_z;
        rebel_method_bind* mb_get_flag_x;
        rebel_method_bind* mb_get_flag_y;
        rebel_method_bind* mb_get_flag_z;
        rebel_method_bind* mb_get_param_x;
        rebel_method_bind* mb_get_param_y;
        rebel_method_bind* mb_get_param_z;
        rebel_method_bind* mb_set_flag_x;
        rebel_method_bind* mb_set_flag_y;
        rebel_method_bind* mb_set_flag_z;
        rebel_method_bind* mb_set_param_x;
        rebel_method_bind* mb_set_param_y;
        rebel_method_bind* mb_set_param_z;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GENERIC6DOFJOINT_H
