// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorresourcepreviewgenerator.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool EditorResourcePreviewGenerator::can_generate_small_preview() {
    return rebel_icall_bool(
        method_bindings.mb_can_generate_small_preview,
        (const Object*)this
    );
}

Ref<Texture> EditorResourcePreviewGenerator::generate(const Ref<Resource> from, const Vector2 size) {
    return Ref<Texture>::create_ref(rebel_icall_object_object_vector2(
        method_bindings.mb_generate,
        (const Object*)this,
        from.ptr(),
        size
    ));
}

Ref<Texture> EditorResourcePreviewGenerator::generate_from_path(const String path, const Vector2 size) {
    return Ref<Texture>::create_ref(rebel_icall_object_string_vector2(
        method_bindings.mb_generate_from_path,
        (const Object*)this,
        path,
        size
    ));
}

bool EditorResourcePreviewGenerator::generate_small_preview_automatically() {
    return rebel_icall_bool(
        method_bindings.mb_generate_small_preview_automatically,
        (const Object*)this
    );
}

bool EditorResourcePreviewGenerator::handles(const String type) {
    return rebel_icall_bool_string(
        method_bindings.mb_handles,
        (const Object*)this,
        type
    );
}

void EditorResourcePreviewGenerator::init_method_bindings() {
    method_bindings.mb_can_generate_small_preview =
        api->rebel_method_bind_get_method(
            "EditorResourcePreviewGenerator",
            "can_generate_small_preview"
        );
    method_bindings.mb_generate =
        api->rebel_method_bind_get_method(
            "EditorResourcePreviewGenerator",
            "generate"
        );
    method_bindings.mb_generate_from_path =
        api->rebel_method_bind_get_method(
            "EditorResourcePreviewGenerator",
            "generate_from_path"
        );
    method_bindings.mb_generate_small_preview_automatically =
        api->rebel_method_bind_get_method(
            "EditorResourcePreviewGenerator",
            "generate_small_preview_automatically"
        );
    method_bindings.mb_handles =
        api->rebel_method_bind_get_method(
            "EditorResourcePreviewGenerator",
            "handles"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorResourcePreviewGenerator");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorResourcePreviewGenerator::MethodBindings EditorResourcePreviewGenerator::method_bindings = {};
void* EditorResourcePreviewGenerator::class_tag = nullptr;
} // namespace Rebel
