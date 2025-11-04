// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CSGCYLINDER_H
#define REBEL_CSGCYLINDER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/csgprimitive.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Material;

class CSGCylinder : public CSGPrimitive {
public:
    real_t get_height() const;
    Ref<Material> get_material() const;
    real_t get_radius() const;
    int64_t get_sides() const;
    bool get_smooth_faces() const;
    bool is_cone() const;
    void set_cone(const bool cone);
    void set_height(const real_t height);
    void set_material(const Ref<Material> material);
    void set_radius(const real_t radius);
    void set_sides(const int64_t sides);
    void set_smooth_faces(const bool smooth_faces);

    static CSGCylinder* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CSGCylinder";
    }

    inline static const char* get_rebel_class_name() {
        return "CSGCylinder";
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
        rebel_method_bind* mb_get_height;
        rebel_method_bind* mb_get_material;
        rebel_method_bind* mb_get_radius;
        rebel_method_bind* mb_get_sides;
        rebel_method_bind* mb_get_smooth_faces;
        rebel_method_bind* mb_is_cone;
        rebel_method_bind* mb_set_cone;
        rebel_method_bind* mb_set_height;
        rebel_method_bind* mb_set_material;
        rebel_method_bind* mb_set_radius;
        rebel_method_bind* mb_set_sides;
        rebel_method_bind* mb_set_smooth_faces;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CSGCYLINDER_H
