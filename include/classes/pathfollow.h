// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PATHFOLLOW_H
#define REBEL_PATHFOLLOW_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PathFollow : public Spatial {
public:
    enum RotationMode {
        ROTATION_NONE = 0,
        ROTATION_Y = 1,
        ROTATION_XY = 2,
        ROTATION_XYZ = 3,
        ROTATION_ORIENTED = 4,
    };

    bool get_cubic_interpolation() const;
    real_t get_h_offset() const;
    real_t get_offset() const;
    PathFollow::RotationMode get_rotation_mode() const;
    real_t get_unit_offset() const;
    real_t get_v_offset() const;
    bool has_loop() const;
    void set_cubic_interpolation(const bool enable);
    void set_h_offset(const real_t h_offset);
    void set_loop(const bool loop);
    void set_offset(const real_t offset);
    void set_rotation_mode(const int64_t rotation_mode);
    void set_unit_offset(const real_t unit_offset);
    void set_v_offset(const real_t v_offset);

    static PathFollow* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PathFollow";
    }

    inline static const char* get_rebel_class_name() {
        return "PathFollow";
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
        rebel_method_bind* mb_get_cubic_interpolation;
        rebel_method_bind* mb_get_h_offset;
        rebel_method_bind* mb_get_offset;
        rebel_method_bind* mb_get_rotation_mode;
        rebel_method_bind* mb_get_unit_offset;
        rebel_method_bind* mb_get_v_offset;
        rebel_method_bind* mb_has_loop;
        rebel_method_bind* mb_set_cubic_interpolation;
        rebel_method_bind* mb_set_h_offset;
        rebel_method_bind* mb_set_loop;
        rebel_method_bind* mb_set_offset;
        rebel_method_bind* mb_set_rotation_mode;
        rebel_method_bind* mb_set_unit_offset;
        rebel_method_bind* mb_set_v_offset;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PATHFOLLOW_H
