// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ARVRANCHOR_H
#define REBEL_ARVRANCHOR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Mesh;

class ARVRAnchor : public Spatial {
public:
    int64_t get_anchor_id() const;
    String get_anchor_name() const;
    bool get_is_active() const;
    Ref<Mesh> get_mesh() const;
    Plane get_plane() const;
    Vector3 get_size() const;
    void set_anchor_id(const int64_t anchor_id);

    static ARVRAnchor* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ARVRAnchor";
    }

    inline static const char* get_rebel_class_name() {
        return "ARVRAnchor";
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
        rebel_method_bind* mb_get_anchor_id;
        rebel_method_bind* mb_get_anchor_name;
        rebel_method_bind* mb_get_is_active;
        rebel_method_bind* mb_get_mesh;
        rebel_method_bind* mb_get_plane;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_set_anchor_id;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ARVRANCHOR_H
