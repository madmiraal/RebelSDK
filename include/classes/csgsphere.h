// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CSGSPHERE_H
#define REBEL_CSGSPHERE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/csgprimitive.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Material;

class CSGSphere : public CSGPrimitive {
public:
    Ref<Material> get_material() const;
    int64_t get_radial_segments() const;
    real_t get_radius() const;
    int64_t get_rings() const;
    bool get_smooth_faces() const;
    void set_material(const Ref<Material> material);
    void set_radial_segments(const int64_t radial_segments);
    void set_radius(const real_t radius);
    void set_rings(const int64_t rings);
    void set_smooth_faces(const bool smooth_faces);

    static CSGSphere* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CSGSphere";
    }

    inline static const char* get_rebel_class_name() {
        return "CSGSphere";
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
        rebel_method_bind* mb_get_material;
        rebel_method_bind* mb_get_radial_segments;
        rebel_method_bind* mb_get_radius;
        rebel_method_bind* mb_get_rings;
        rebel_method_bind* mb_get_smooth_faces;
        rebel_method_bind* mb_set_material;
        rebel_method_bind* mb_set_radial_segments;
        rebel_method_bind* mb_set_radius;
        rebel_method_bind* mb_set_rings;
        rebel_method_bind* mb_set_smooth_faces;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CSGSPHERE_H
