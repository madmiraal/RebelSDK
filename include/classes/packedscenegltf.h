// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PACKEDSCENEGLTF_H
#define REBEL_PACKEDSCENEGLTF_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/packedscene.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GLTFState;
class Node;

class PackedSceneGLTF : public PackedScene {
public:
    Error export_gltf(const Node* node, const String path, const int64_t flags = 0, const real_t bake_fps = 1000);
    Node* import_gltf_scene(const String path, const int64_t flags = 0, const real_t bake_fps = 1000, const int64_t compress_flags = 2194432, const Ref<GLTFState> state = nullptr);
    void pack_gltf(const String path, const int64_t flags = 0, const real_t bake_fps = 1000, const int64_t compress_flags = 2194432, const Ref<GLTFState> state = nullptr);

    static PackedSceneGLTF* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PackedSceneGLTF";
    }

    inline static const char* get_rebel_class_name() {
        return "PackedSceneGLTF";
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
        rebel_method_bind* mb_export_gltf;
        rebel_method_bind* mb_import_gltf_scene;
        rebel_method_bind* mb_pack_gltf;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PACKEDSCENEGLTF_H
