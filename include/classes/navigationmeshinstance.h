// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NAVIGATIONMESHINSTANCE_H
#define REBEL_NAVIGATIONMESHINSTANCE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class NavigationMesh;

class NavigationMeshInstance : public Spatial {
public:
    Ref<NavigationMesh> get_navigation_mesh() const;
    bool is_enabled() const;
    void set_enabled(const bool enabled);
    void set_navigation_mesh(const Ref<NavigationMesh> navmesh);

    static NavigationMeshInstance* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "NavigationMeshInstance";
    }

    inline static const char* get_rebel_class_name() {
        return "NavigationMeshInstance";
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
        rebel_method_bind* mb_get_navigation_mesh;
        rebel_method_bind* mb_is_enabled;
        rebel_method_bind* mb_set_enabled;
        rebel_method_bind* mb_set_navigation_mesh;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NAVIGATIONMESHINSTANCE_H
