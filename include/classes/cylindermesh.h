// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CYLINDERMESH_H
#define REBEL_CYLINDERMESH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/primitivemesh.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CylinderMesh : public PrimitiveMesh {
public:
    real_t get_bottom_radius() const;
    real_t get_height() const;
    int64_t get_radial_segments() const;
    int64_t get_rings() const;
    real_t get_top_radius() const;
    void set_bottom_radius(const real_t radius);
    void set_height(const real_t height);
    void set_radial_segments(const int64_t segments);
    void set_rings(const int64_t rings);
    void set_top_radius(const real_t radius);

    static CylinderMesh* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CylinderMesh";
    }

    inline static const char* get_rebel_class_name() {
        return "CylinderMesh";
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
        rebel_method_bind* mb_get_bottom_radius;
        rebel_method_bind* mb_get_height;
        rebel_method_bind* mb_get_radial_segments;
        rebel_method_bind* mb_get_rings;
        rebel_method_bind* mb_get_top_radius;
        rebel_method_bind* mb_set_bottom_radius;
        rebel_method_bind* mb_set_height;
        rebel_method_bind* mb_set_radial_segments;
        rebel_method_bind* mb_set_rings;
        rebel_method_bind* mb_set_top_radius;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CYLINDERMESH_H
