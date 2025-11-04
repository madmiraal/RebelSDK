// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_REFLECTIONPROBE_H
#define REBEL_REFLECTIONPROBE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ReflectionProbe : public VisualInstance {
public:
    enum UpdateMode {
        UPDATE_ONCE = 0,
        UPDATE_ALWAYS = 1,
    };

    bool are_shadows_enabled() const;
    int64_t get_cull_mask() const;
    Vector3 get_extents() const;
    real_t get_intensity() const;
    Color get_interior_ambient() const;
    real_t get_interior_ambient_energy() const;
    real_t get_interior_ambient_probe_contribution() const;
    real_t get_max_distance() const;
    Vector3 get_origin_offset() const;
    ReflectionProbe::UpdateMode get_update_mode() const;
    bool is_box_projection_enabled() const;
    bool is_set_as_interior() const;
    void set_as_interior(const bool enable);
    void set_cull_mask(const int64_t layers);
    void set_enable_box_projection(const bool enable);
    void set_enable_shadows(const bool enable);
    void set_extents(const Vector3 extents);
    void set_intensity(const real_t intensity);
    void set_interior_ambient(const Color ambient);
    void set_interior_ambient_energy(const real_t ambient_energy);
    void set_interior_ambient_probe_contribution(const real_t ambient_probe_contribution);
    void set_max_distance(const real_t max_distance);
    void set_origin_offset(const Vector3 origin_offset);
    void set_update_mode(const int64_t mode);

    static ReflectionProbe* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ReflectionProbe";
    }

    inline static const char* get_rebel_class_name() {
        return "ReflectionProbe";
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
        rebel_method_bind* mb_are_shadows_enabled;
        rebel_method_bind* mb_get_cull_mask;
        rebel_method_bind* mb_get_extents;
        rebel_method_bind* mb_get_intensity;
        rebel_method_bind* mb_get_interior_ambient;
        rebel_method_bind* mb_get_interior_ambient_energy;
        rebel_method_bind* mb_get_interior_ambient_probe_contribution;
        rebel_method_bind* mb_get_max_distance;
        rebel_method_bind* mb_get_origin_offset;
        rebel_method_bind* mb_get_update_mode;
        rebel_method_bind* mb_is_box_projection_enabled;
        rebel_method_bind* mb_is_set_as_interior;
        rebel_method_bind* mb_set_as_interior;
        rebel_method_bind* mb_set_cull_mask;
        rebel_method_bind* mb_set_enable_box_projection;
        rebel_method_bind* mb_set_enable_shadows;
        rebel_method_bind* mb_set_extents;
        rebel_method_bind* mb_set_intensity;
        rebel_method_bind* mb_set_interior_ambient;
        rebel_method_bind* mb_set_interior_ambient_energy;
        rebel_method_bind* mb_set_interior_ambient_probe_contribution;
        rebel_method_bind* mb_set_max_distance;
        rebel_method_bind* mb_set_origin_offset;
        rebel_method_bind* mb_set_update_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_REFLECTIONPROBE_H
