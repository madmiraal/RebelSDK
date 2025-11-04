// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorspatialgizmo.h"

#include "classes/camera.h"
#include "classes/editorspatialgizmoplugin.h"
#include "classes/icalls.h"
#include "classes/material.h"
#include "classes/mesh.h"
#include "classes/node.h"
#include "classes/skinreference.h"
#include "classes/spatial.h"
#include "classes/trianglemesh.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void EditorSpatialGizmo::add_collision_segments(const PoolVector3Array segments) {
    rebel_icall_void_poolvector3array(
        method_bindings.mb_add_collision_segments,
        (const Object*)this,
        segments
    );
}

void EditorSpatialGizmo::add_collision_triangles(const Ref<TriangleMesh> triangles) {
    rebel_icall_void_object(
        method_bindings.mb_add_collision_triangles,
        (const Object*)this,
        triangles.ptr()
    );
}

void EditorSpatialGizmo::add_handles(const PoolVector3Array handles, const Ref<Material> material, const bool billboard, const bool secondary) {
    rebel_icall_void_poolvector3array_object_bool_bool(
        method_bindings.mb_add_handles,
        (const Object*)this,
        handles,
        material.ptr(),
        billboard,
        secondary
    );
}

void EditorSpatialGizmo::add_lines(const PoolVector3Array lines, const Ref<Material> material, const bool billboard, const Color modulate) {
    rebel_icall_void_poolvector3array_object_bool_color(
        method_bindings.mb_add_lines,
        (const Object*)this,
        lines,
        material.ptr(),
        billboard,
        modulate
    );
}

void EditorSpatialGizmo::add_mesh(const Ref<Mesh> mesh, const bool billboard, const Ref<SkinReference> skeleton, const Ref<Material> material) {
    rebel_icall_void_object_bool_object_object(
        method_bindings.mb_add_mesh,
        (const Object*)this,
        mesh.ptr(),
        billboard,
        skeleton.ptr(),
        material.ptr()
    );
}

void EditorSpatialGizmo::add_unscaled_billboard(const Ref<Material> material, const real_t default_scale, const Color modulate) {
    rebel_icall_void_object_float_color(
        method_bindings.mb_add_unscaled_billboard,
        (const Object*)this,
        material.ptr(),
        default_scale,
        modulate
    );
}

void EditorSpatialGizmo::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

void EditorSpatialGizmo::commit_handle(const int64_t index, const Variant restore, const bool cancel) {
    rebel_icall_void_int_variant_bool(
        method_bindings.mb_commit_handle,
        (const Object*)this,
        index,
        restore,
        cancel
    );
}

String EditorSpatialGizmo::get_handle_name(const int64_t index) {
    return rebel_icall_string_int(
        method_bindings.mb_get_handle_name,
        (const Object*)this,
        index
    );
}

Variant EditorSpatialGizmo::get_handle_value(const int64_t index) {
    return rebel_icall_variant_int(
        method_bindings.mb_get_handle_value,
        (const Object*)this,
        index
    );
}

Ref<EditorSpatialGizmoPlugin> EditorSpatialGizmo::get_plugin() const {
    return Ref<EditorSpatialGizmoPlugin>::create_ref(rebel_icall_object(
        method_bindings.mb_get_plugin,
        (const Object*)this
    ));
}

Spatial* EditorSpatialGizmo::get_spatial_node() const {
    return (Spatial*)rebel_icall_object(
        method_bindings.mb_get_spatial_node,
        (const Object*)this
    );
}

bool EditorSpatialGizmo::is_handle_highlighted(const int64_t index) {
    return rebel_icall_bool_int(
        method_bindings.mb_is_handle_highlighted,
        (const Object*)this,
        index
    );
}

void EditorSpatialGizmo::redraw() {
    rebel_icall_void(
        method_bindings.mb_redraw,
        (const Object*)this
    );
}

void EditorSpatialGizmo::set_handle(const int64_t index, const Camera* camera, const Vector2 point) {
    rebel_icall_void_int_object_vector2(
        method_bindings.mb_set_handle,
        (const Object*)this,
        index,
        camera,
        point
    );
}

void EditorSpatialGizmo::set_hidden(const bool hidden) {
    rebel_icall_void_bool(
        method_bindings.mb_set_hidden,
        (const Object*)this,
        hidden
    );
}

void EditorSpatialGizmo::set_spatial_node(const Node* node) {
    rebel_icall_void_object(
        method_bindings.mb_set_spatial_node,
        (const Object*)this,
        node
    );
}

void EditorSpatialGizmo::init_method_bindings() {
    method_bindings.mb_add_collision_segments =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "add_collision_segments"
        );
    method_bindings.mb_add_collision_triangles =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "add_collision_triangles"
        );
    method_bindings.mb_add_handles =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "add_handles"
        );
    method_bindings.mb_add_lines =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "add_lines"
        );
    method_bindings.mb_add_mesh =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "add_mesh"
        );
    method_bindings.mb_add_unscaled_billboard =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "add_unscaled_billboard"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "clear"
        );
    method_bindings.mb_commit_handle =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "commit_handle"
        );
    method_bindings.mb_get_handle_name =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "get_handle_name"
        );
    method_bindings.mb_get_handle_value =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "get_handle_value"
        );
    method_bindings.mb_get_plugin =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "get_plugin"
        );
    method_bindings.mb_get_spatial_node =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "get_spatial_node"
        );
    method_bindings.mb_is_handle_highlighted =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "is_handle_highlighted"
        );
    method_bindings.mb_redraw =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "redraw"
        );
    method_bindings.mb_set_handle =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "set_handle"
        );
    method_bindings.mb_set_hidden =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "set_hidden"
        );
    method_bindings.mb_set_spatial_node =
        api->rebel_method_bind_get_method(
            "EditorSpatialGizmo",
            "set_spatial_node"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorSpatialGizmo");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorSpatialGizmo::MethodBindings EditorSpatialGizmo::method_bindings = {};
void* EditorSpatialGizmo::class_tag = nullptr;
} // namespace Rebel
