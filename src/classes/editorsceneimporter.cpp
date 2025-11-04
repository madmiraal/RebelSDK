// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorsceneimporter.h"

#include "classes/animation.h"
#include "classes/icalls.h"
#include "classes/node.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Array EditorSceneImporter::_get_extensions() {
    return rebel_icall_array(
        method_bindings.mb__get_extensions,
        (const Object*)this
    );
}

int64_t EditorSceneImporter::_get_import_flags() {
    return rebel_icall_int(
        method_bindings.mb__get_import_flags,
        (const Object*)this
    );
}

Ref<Animation> EditorSceneImporter::_import_animation(const String path, const int64_t flags, const int64_t bake_fps) {
    return Ref<Animation>::create_ref(rebel_icall_object_string_int_int(
        method_bindings.mb__import_animation,
        (const Object*)this,
        path,
        flags,
        bake_fps
    ));
}

Node* EditorSceneImporter::_import_scene(const String path, const int64_t flags, const int64_t bake_fps) {
    return (Node*)rebel_icall_object_string_int_int(
        method_bindings.mb__import_scene,
        (const Object*)this,
        path,
        flags,
        bake_fps
    );
}

Ref<Animation> EditorSceneImporter::import_animation_from_other_importer(const String path, const int64_t flags, const int64_t bake_fps) {
    return Ref<Animation>::create_ref(rebel_icall_object_string_int_int(
        method_bindings.mb_import_animation_from_other_importer,
        (const Object*)this,
        path,
        flags,
        bake_fps
    ));
}

Node* EditorSceneImporter::import_scene_from_other_importer(const String path, const int64_t flags, const int64_t bake_fps, const int64_t compress_flags) {
    return (Node*)rebel_icall_object_string_int_int_int(
        method_bindings.mb_import_scene_from_other_importer,
        (const Object*)this,
        path,
        flags,
        bake_fps,
        compress_flags
    );
}

void EditorSceneImporter::init_method_bindings() {
    method_bindings.mb__get_extensions =
        api->rebel_method_bind_get_method(
            "EditorSceneImporter",
            "_get_extensions"
        );
    method_bindings.mb__get_import_flags =
        api->rebel_method_bind_get_method(
            "EditorSceneImporter",
            "_get_import_flags"
        );
    method_bindings.mb__import_animation =
        api->rebel_method_bind_get_method(
            "EditorSceneImporter",
            "_import_animation"
        );
    method_bindings.mb__import_scene =
        api->rebel_method_bind_get_method(
            "EditorSceneImporter",
            "_import_scene"
        );
    method_bindings.mb_import_animation_from_other_importer =
        api->rebel_method_bind_get_method(
            "EditorSceneImporter",
            "import_animation_from_other_importer"
        );
    method_bindings.mb_import_scene_from_other_importer =
        api->rebel_method_bind_get_method(
            "EditorSceneImporter",
            "import_scene_from_other_importer"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorSceneImporter");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorSceneImporter::MethodBindings EditorSceneImporter::method_bindings = {};
void* EditorSceneImporter::class_tag = nullptr;
} // namespace Rebel
