// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_QUADMESH_H
#define REBEL_QUADMESH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/primitivemesh.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class QuadMesh : public PrimitiveMesh {
public:
    Vector3 get_center_offset() const;
    Vector2 get_size() const;
    void set_center_offset(const Vector3 center_offset);
    void set_size(const Vector2 size);

    static QuadMesh* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "QuadMesh";
    }

    inline static const char* get_rebel_class_name() {
        return "QuadMesh";
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
        rebel_method_bind* mb_get_center_offset;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_set_center_offset;
        rebel_method_bind* mb_set_size;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_QUADMESH_H
