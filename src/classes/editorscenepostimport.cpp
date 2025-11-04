// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorscenepostimport.h"

#include "classes/icalls.h"
#include "classes/object.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String EditorScenePostImport::get_source_file() const {
    return rebel_icall_string(
        method_bindings.mb_get_source_file,
        (const Object*)this
    );
}

String EditorScenePostImport::get_source_folder() const {
    return rebel_icall_string(
        method_bindings.mb_get_source_folder,
        (const Object*)this
    );
}

Object* EditorScenePostImport::post_import(const Object* scene) {
    return (Object*)rebel_icall_object_object(
        method_bindings.mb_post_import,
        (const Object*)this,
        scene
    );
}

void EditorScenePostImport::init_method_bindings() {
    method_bindings.mb_get_source_file =
        api->rebel_method_bind_get_method(
            "EditorScenePostImport",
            "get_source_file"
        );
    method_bindings.mb_get_source_folder =
        api->rebel_method_bind_get_method(
            "EditorScenePostImport",
            "get_source_folder"
        );
    method_bindings.mb_post_import =
        api->rebel_method_bind_get_method(
            "EditorScenePostImport",
            "post_import"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorScenePostImport");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorScenePostImport::MethodBindings EditorScenePostImport::method_bindings = {};
void* EditorScenePostImport::class_tag = nullptr;
} // namespace Rebel
