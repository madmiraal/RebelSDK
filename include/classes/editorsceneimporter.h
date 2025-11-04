// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORSCENEIMPORTER_H
#define REBEL_EDITORSCENEIMPORTER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Animation;
class Node;

class EditorSceneImporter : public Reference {
public:
    static const int IMPORT_ANIMATION = 2;
    static const int IMPORT_ANIMATION_DETECT_LOOP = 4;
    static const int IMPORT_ANIMATION_FORCE_ALL_TRACKS_IN_ALL_CLIPS = 16;
    static const int IMPORT_ANIMATION_KEEP_VALUE_TRACKS = 32;
    static const int IMPORT_ANIMATION_OPTIMIZE = 8;
    static const int IMPORT_FAIL_ON_MISSING_DEPENDENCIES = 512;
    static const int IMPORT_GENERATE_TANGENT_ARRAYS = 256;
    static const int IMPORT_MATERIALS_IN_INSTANCES = 1024;
    static const int IMPORT_SCENE = 1;

    Array _get_extensions();
    int64_t _get_import_flags();
    Ref<Animation> _import_animation(const String path, const int64_t flags, const int64_t bake_fps);
    Node* _import_scene(const String path, const int64_t flags, const int64_t bake_fps);
    Ref<Animation> import_animation_from_other_importer(const String path, const int64_t flags, const int64_t bake_fps);
    Node* import_scene_from_other_importer(const String path, const int64_t flags, const int64_t bake_fps, const int64_t compress_flags);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorSceneImporter";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorSceneImporter";
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
        rebel_method_bind* mb__get_extensions;
        rebel_method_bind* mb__get_import_flags;
        rebel_method_bind* mb__import_animation;
        rebel_method_bind* mb__import_scene;
        rebel_method_bind* mb_import_animation_from_other_importer;
        rebel_method_bind* mb_import_scene_from_other_importer;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORSCENEIMPORTER_H
