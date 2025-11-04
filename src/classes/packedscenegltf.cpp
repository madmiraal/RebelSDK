// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/packedscenegltf.h"

#include "classes/gltfstate.h"
#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Error PackedSceneGLTF::export_gltf(const Node* node, const String path, const int64_t flags, const real_t bake_fps) {
    return (Error)rebel_icall_int_object_string_int_float(
        method_bindings.mb_export_gltf,
        (const Object*)this,
        node,
        path,
        flags,
        bake_fps
    );
}

Node* PackedSceneGLTF::import_gltf_scene(const String path, const int64_t flags, const real_t bake_fps, const int64_t compress_flags, const Ref<GLTFState> state) {
    return (Node*)rebel_icall_object_string_int_float_int_object(
        method_bindings.mb_import_gltf_scene,
        (const Object*)this,
        path,
        flags,
        bake_fps,
        compress_flags,
        state.ptr()
    );
}

void PackedSceneGLTF::pack_gltf(const String path, const int64_t flags, const real_t bake_fps, const int64_t compress_flags, const Ref<GLTFState> state) {
    rebel_icall_void_string_int_float_int_object(
        method_bindings.mb_pack_gltf,
        (const Object*)this,
        path,
        flags,
        bake_fps,
        compress_flags,
        state.ptr()
    );
}

PackedSceneGLTF* PackedSceneGLTF::create() {
    return (PackedSceneGLTF*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PackedSceneGLTF")()
         );
}

void PackedSceneGLTF::init_method_bindings() {
    method_bindings.mb_export_gltf =
        api->rebel_method_bind_get_method(
            "PackedSceneGLTF",
            "export_gltf"
        );
    method_bindings.mb_import_gltf_scene =
        api->rebel_method_bind_get_method(
            "PackedSceneGLTF",
            "import_gltf_scene"
        );
    method_bindings.mb_pack_gltf =
        api->rebel_method_bind_get_method(
            "PackedSceneGLTF",
            "pack_gltf"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PackedSceneGLTF");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PackedSceneGLTF::MethodBindings PackedSceneGLTF::method_bindings = {};
void* PackedSceneGLTF::class_tag = nullptr;
} // namespace Rebel
