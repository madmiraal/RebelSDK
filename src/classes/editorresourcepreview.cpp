// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorresourcepreview.h"

#include "classes/editorresourcepreviewgenerator.h"
#include "classes/icalls.h"
#include "classes/object.h"
#include "classes/resource.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorResourcePreview::_preview_ready(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const int64_t arg3, const String arg4, const Variant arg5) {
    rebel_icall_void_string_object_object_int_string_variant(
        method_bindings.mb__preview_ready,
        (const Object*)this,
        arg0,
        arg1.ptr(),
        arg2.ptr(),
        arg3,
        arg4,
        arg5
    );
}

void EditorResourcePreview::add_preview_generator(const Ref<EditorResourcePreviewGenerator> generator) {
    rebel_icall_void_object(
        method_bindings.mb_add_preview_generator,
        (const Object*)this,
        generator.ptr()
    );
}

void EditorResourcePreview::check_for_invalidation(const String path) {
    rebel_icall_void_string(
        method_bindings.mb_check_for_invalidation,
        (const Object*)this,
        path
    );
}

void EditorResourcePreview::queue_edited_resource_preview(const Ref<Resource> resource, const Object* receiver, const String receiver_func, const Variant userdata) {
    rebel_icall_void_object_object_string_variant(
        method_bindings.mb_queue_edited_resource_preview,
        (const Object*)this,
        resource.ptr(),
        receiver,
        receiver_func,
        userdata
    );
}

void EditorResourcePreview::queue_resource_preview(const String path, const Object* receiver, const String receiver_func, const Variant userdata) {
    rebel_icall_void_string_object_string_variant(
        method_bindings.mb_queue_resource_preview,
        (const Object*)this,
        path,
        receiver,
        receiver_func,
        userdata
    );
}

void EditorResourcePreview::remove_preview_generator(const Ref<EditorResourcePreviewGenerator> generator) {
    rebel_icall_void_object(
        method_bindings.mb_remove_preview_generator,
        (const Object*)this,
        generator.ptr()
    );
}

void EditorResourcePreview::init_method_bindings() {
    method_bindings.mb__preview_ready =
        api->rebel_method_bind_get_method(
            "EditorResourcePreview",
            "_preview_ready"
        );
    method_bindings.mb_add_preview_generator =
        api->rebel_method_bind_get_method(
            "EditorResourcePreview",
            "add_preview_generator"
        );
    method_bindings.mb_check_for_invalidation =
        api->rebel_method_bind_get_method(
            "EditorResourcePreview",
            "check_for_invalidation"
        );
    method_bindings.mb_queue_edited_resource_preview =
        api->rebel_method_bind_get_method(
            "EditorResourcePreview",
            "queue_edited_resource_preview"
        );
    method_bindings.mb_queue_resource_preview =
        api->rebel_method_bind_get_method(
            "EditorResourcePreview",
            "queue_resource_preview"
        );
    method_bindings.mb_remove_preview_generator =
        api->rebel_method_bind_get_method(
            "EditorResourcePreview",
            "remove_preview_generator"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorResourcePreview");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorResourcePreview::MethodBindings EditorResourcePreview::method_bindings = {};
void* EditorResourcePreview::class_tag = nullptr;
} // namespace Rebel
