// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PRISMMESH_H
#define REBEL_PRISMMESH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/primitivemesh.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PrismMesh : public PrimitiveMesh {
public:
    real_t get_left_to_right() const;
    Vector3 get_size() const;
    int64_t get_subdivide_depth() const;
    int64_t get_subdivide_height() const;
    int64_t get_subdivide_width() const;
    void set_left_to_right(const real_t left_to_right);
    void set_size(const Vector3 size);
    void set_subdivide_depth(const int64_t segments);
    void set_subdivide_height(const int64_t segments);
    void set_subdivide_width(const int64_t segments);

    static PrismMesh* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PrismMesh";
    }

    inline static const char* get_rebel_class_name() {
        return "PrismMesh";
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
        rebel_method_bind* mb_get_left_to_right;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_get_subdivide_depth;
        rebel_method_bind* mb_get_subdivide_height;
        rebel_method_bind* mb_get_subdivide_width;
        rebel_method_bind* mb_set_left_to_right;
        rebel_method_bind* mb_set_size;
        rebel_method_bind* mb_set_subdivide_depth;
        rebel_method_bind* mb_set_subdivide_height;
        rebel_method_bind* mb_set_subdivide_width;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PRISMMESH_H
