// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORNAVIGATIONMESHGENERATOR_H
#define REBEL_EDITORNAVIGATIONMESHGENERATOR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class NavigationMesh;
class Node;

class EditorNavigationMeshGenerator : public Object {
public:
    void bake(const Ref<NavigationMesh> nav_mesh, const Node* root_node);
    void clear(const Ref<NavigationMesh> nav_mesh);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorNavigationMeshGenerator";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorNavigationMeshGenerator";
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
        rebel_method_bind* mb_bake;
        rebel_method_bind* mb_clear;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORNAVIGATIONMESHGENERATOR_H
