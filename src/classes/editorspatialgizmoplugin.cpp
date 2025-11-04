// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorspatialgizmoplugin.h"

#include "classes/camera.h"
#include "classes/editorspatialgizmo.h"
#include "classes/icalls.h"
#include "classes/spatial.h"
#include "classes/spatialmaterial.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorSpatialGizmoPlugin::add_material(const String name, const Ref<SpatialMaterial> material) {
    rebel_icall_void_string_object(
        method_bindings.mb_add_material,
        (const Object*)this,
        name,
        material.ptr()
    );
}

bool EditorSpatialGizmoPlugin::can_be_hidden() {
    return rebel_icall_bool(
        method_bindings.mb_can_be_hidden,
        (const Object*)this
    );
}

void EditorSpatialGizmoPlugin::commit_handle(const Ref<EditorSpatialGizmo> gizmo, const int64_t index, const Variant restore, const bool cancel) {
    rebel_icall_void_object_int_variant_bool(
        method_bindings.mb_commit_handle,
        (const Object*)this,
        gizmo.ptr(),
        index,
        restore,
        cancel
    );
}

Ref<EditorSpatialGizmo> EditorSpatialGizmoPlugin::create_gizmo(const Spatial* spatial) {
    return Ref<EditorSpatialGizmo>::create_ref(rebel_icall_object_object(
        method_bindings.mb_create_gizmo,
        (const Object*)this,
        spatial
    ));
}

void EditorSpatialGizmoPlugin::create_handle_material(const String name, const bool billboard, const Ref<Texture> texture) {
    rebel_icall_void_string_bool_object(
        method_bindings.mb_create_handle_material,
        (const Object*)this,
        name,
        billboard,
        texture.ptr()
    );
}

void EditorSpatialGizmoPlugin::create_icon_material(const String name, const Ref<Texture> texture, const bool on_top, const Color color) {
    rebel_icall_void_string_object_bool_color(
        method_bindings.mb_create_icon_material,
        (const Object*)this,
        name,
        texture.ptr(),
        on_top,
        color
    );
}

void EditorSpatialGizmoPlugin::create_material(const String name, const Color color, const bool billboard, const bool on_top, const bool use_vertex_color) {
    rebel_icall_void_string_color_bool_bool_bool(
        method_bindings.mb_create_material,
        (const Object*)this,
        name,
        color,
        billboard,
        on_top,
        use_vertex_color
    );
}

String EditorSpatialGizmoPlugin::get_handle_name(const Ref<EditorSpatialGizmo> gizmo, const int64_t index) {
    return rebel_icall_string_object_int(
        method_bindings.mb_get_handle_name,
        (const Object*)this,
        gizmo.ptr(),
        index
    );
}

Variant EditorSpatialGizmoPlugin::get_handle_value(const Ref<EditorSpatialGizmo> gizmo, const int64_t index) {
    return rebel_icall_variant_object_int(
        method_bindings.mb_get_handle_value,
        (const Object*)this,
        gizmo.ptr(),
        index
    );
}

Ref<SpatialMaterial> EditorSpatialGizmoPlugin::get_material(const String name, const Ref<EditorSpatialGizmo> gizmo) {
    return Ref<SpatialMaterial>::create_ref(rebel_icall_object_string_object(
        method_bindings.mb_get_material,
        (const Object*)this,
        name,
        gizmo.ptr()
    ));
}

String EditorSpatialGizmoPlugin::get_name() {
    return rebel_icall_string(
        method_bindings.mb_get_name,
        (const Object*)this
    );
}

int64_t EditorSpatialGizmoPlugin::get_priority() {
    return rebel_icall_int(
        method_bindings.mb_get_priority,
        (const Object*)this
    );
}

bool EditorSpatialGizmoPlugin::has_gizmo(const Spatial* spatial) {
    return rebel_icall_bool_object(
        method_bindings.mb_has_gizmo,
        (const Object*)this,
        spatial
    );
}

bool EditorSpatialGizmoPlugin::is_handle_highlighted(const Ref<EditorSpatialGizmo> gizmo, const int64_t index) {
    return rebel_icall_bool_object_int(
        method_bindings.mb_is_handle_highlighted,
        (const Object*)this,
        gizmo.ptr(),
        index
    );
}

bool EditorSpatialGizmoPlugin::is_selectable_when_hidden() {
    return rebel_icall_bool(
        method_bindings.mb_is_selectable_when_hidden,
        (const Object*)this
    );
}

void EditorSpatialGizmoPlugin::redraw(const Ref<EditorSpatialGizmo> gizmo) {
    rebel_icall_void_object(
        method_bindings.mb_redraw,
        (const Object*)this,
        gizmo.ptr()
    );
}

void EditorSpatialGizmoPlugin::set_handle(const Ref<EditorSpatialGizmo> gizmo, const int64_t index, const Camera* camera, const Vector2 point) {
    rebel_icall_void_object_int_object_vector2(
        method_bindings.mb_set_handle,
        (const Object*)this,
        gizmo.ptr(),
        index,
        camera,
        point
    );
}

void EditorSpatialGizmoPlugin::init_method_bindings() {
    method_bindings.mb_add_material =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "add_material"
        );
    method_bindings.mb_can_be_hidden =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "can_be_hidden"
        );
    method_bindings.mb_commit_handle =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "commit_handle"
        );
    method_bindings.mb_create_gizmo =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "create_gizmo"
        );
    method_bindings.mb_create_handle_material =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "create_handle_material"
        );
    method_bindings.mb_create_icon_material =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "create_icon_material"
        );
    method_bindings.mb_create_material =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "create_material"
        );
    method_bindings.mb_get_handle_name =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "get_handle_name"
        );
    method_bindings.mb_get_handle_value =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "get_handle_value"
        );
    method_bindings.mb_get_material =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "get_material"
        );
    method_bindings.mb_get_name =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "get_name"
        );
    method_bindings.mb_get_priority =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "get_priority"
        );
    method_bindings.mb_has_gizmo =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "has_gizmo"
        );
    method_bindings.mb_is_handle_highlighted =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "is_handle_highlighted"
        );
    method_bindings.mb_is_selectable_when_hidden =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "is_selectable_when_hidden"
        );
    method_bindings.mb_redraw =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "redraw"
        );
    method_bindings.mb_set_handle =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmoPlugin",
            "set_handle"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorSpatialGizmoPlugin");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorSpatialGizmoPlugin::MethodBindings EditorSpatialGizmoPlugin::method_bindings = {};
void* EditorSpatialGizmoPlugin::class_tag = nullptr;
} // namespace Rebel
