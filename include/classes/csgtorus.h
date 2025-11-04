// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CSGTORUS_H
#define REBEL_CSGTORUS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/csgprimitive.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Material;

class CSGTorus : public CSGPrimitive {
public:
    real_t get_inner_radius() const;
    Ref<Material> get_material() const;
    real_t get_outer_radius() const;
    int64_t get_ring_sides() const;
    int64_t get_sides() const;
    bool get_smooth_faces() const;
    void set_inner_radius(const real_t radius);
    void set_material(const Ref<Material> material);
    void set_outer_radius(const real_t radius);
    void set_ring_sides(const int64_t sides);
    void set_sides(const int64_t sides);
    void set_smooth_faces(const bool smooth_faces);

    static CSGTorus* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CSGTorus";
    }

    inline static const char* get_rebel_class_name() {
        return "CSGTorus";
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
        rebel_method_bind* mb_get_inner_radius;
        rebel_method_bind* mb_get_material;
        rebel_method_bind* mb_get_outer_radius;
        rebel_method_bind* mb_get_ring_sides;
        rebel_method_bind* mb_get_sides;
        rebel_method_bind* mb_get_smooth_faces;
        rebel_method_bind* mb_set_inner_radius;
        rebel_method_bind* mb_set_material;
        rebel_method_bind* mb_set_outer_radius;
        rebel_method_bind* mb_set_ring_sides;
        rebel_method_bind* mb_set_sides;
        rebel_method_bind* mb_set_smooth_faces;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CSGTORUS_H
