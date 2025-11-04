// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_OCCLUDERSHAPESPHERE_H
#define REBEL_OCCLUDERSHAPESPHERE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/occludershape.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class OccluderShapeSphere : public OccluderShape {
public:
    Array get_spheres() const;
    void set_sphere_position(const int64_t index, const Vector3 position);
    void set_sphere_radius(const int64_t index, const real_t radius);
    void set_spheres(const Array spheres);

    static OccluderShapeSphere* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "OccluderShapeSphere";
    }

    inline static const char* get_rebel_class_name() {
        return "OccluderShapeSphere";
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
        rebel_method_bind* mb_get_spheres;
        rebel_method_bind* mb_set_sphere_position;
        rebel_method_bind* mb_set_sphere_radius;
        rebel_method_bind* mb_set_spheres;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_OCCLUDERSHAPESPHERE_H
