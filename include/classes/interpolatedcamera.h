// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_INTERPOLATEDCAMERA_H
#define REBEL_INTERPOLATEDCAMERA_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/camera.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class InterpolatedCamera : public Camera {
public:
    real_t get_speed() const;
    NodePath get_target_path() const;
    bool is_interpolation_enabled() const;
    void set_interpolation_enabled(const bool target_path);
    void set_speed(const real_t speed);
    void set_target(const Object* target);
    void set_target_path(const NodePath target_path);

    static InterpolatedCamera* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "InterpolatedCamera";
    }

    inline static const char* get_rebel_class_name() {
        return "InterpolatedCamera";
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
        rebel_method_bind* mb_get_speed;
        rebel_method_bind* mb_get_target_path;
        rebel_method_bind* mb_is_interpolation_enabled;
        rebel_method_bind* mb_set_interpolation_enabled;
        rebel_method_bind* mb_set_speed;
        rebel_method_bind* mb_set_target;
        rebel_method_bind* mb_set_target_path;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_INTERPOLATEDCAMERA_H
