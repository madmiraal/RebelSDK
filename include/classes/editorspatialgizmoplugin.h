// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORSPATIALGIZMOPLUGIN_H
#define REBEL_EDITORSPATIALGIZMOPLUGIN_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Camera;
class EditorSpatialGizmo;
class Spatial;
class SpatialMaterial;
class Texture;

class EditorSpatialGizmoPlugin : public Resource {
public:
    void add_material(const String name, const Ref<SpatialMaterial> material);
    bool can_be_hidden();
    void commit_handle(const Ref<EditorSpatialGizmo> gizmo, const int64_t index, const Variant restore, const bool cancel);
    Ref<EditorSpatialGizmo> create_gizmo(const Spatial* spatial);
    void create_handle_material(const String name, const bool billboard = false, const Ref<Texture> texture = nullptr);
    void create_icon_material(const String name, const Ref<Texture> texture, const bool on_top = false, const Color color = Color(1,1,1,1));
    void create_material(const String name, const Color color, const bool billboard = false, const bool on_top = false, const bool use_vertex_color = false);
    String get_handle_name(const Ref<EditorSpatialGizmo> gizmo, const int64_t index);
    Variant get_handle_value(const Ref<EditorSpatialGizmo> gizmo, const int64_t index);
    Ref<SpatialMaterial> get_material(const String name, const Ref<EditorSpatialGizmo> gizmo = nullptr);
    String get_name();
    int64_t get_priority();
    bool has_gizmo(const Spatial* spatial);
    bool is_handle_highlighted(const Ref<EditorSpatialGizmo> gizmo, const int64_t index);
    bool is_selectable_when_hidden();
    void redraw(const Ref<EditorSpatialGizmo> gizmo);
    void set_handle(const Ref<EditorSpatialGizmo> gizmo, const int64_t index, const Camera* camera, const Vector2 point);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorSpatialGizmoPlugin";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorSpatialGizmoPlugin";
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
        rebel_method_bind* mb_add_material;
        rebel_method_bind* mb_can_be_hidden;
        rebel_method_bind* mb_commit_handle;
        rebel_method_bind* mb_create_gizmo;
        rebel_method_bind* mb_create_handle_material;
        rebel_method_bind* mb_create_icon_material;
        rebel_method_bind* mb_create_material;
        rebel_method_bind* mb_get_handle_name;
        rebel_method_bind* mb_get_handle_value;
        rebel_method_bind* mb_get_material;
        rebel_method_bind* mb_get_name;
        rebel_method_bind* mb_get_priority;
        rebel_method_bind* mb_has_gizmo;
        rebel_method_bind* mb_is_handle_highlighted;
        rebel_method_bind* mb_is_selectable_when_hidden;
        rebel_method_bind* mb_redraw;
        rebel_method_bind* mb_set_handle;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORSPATIALGIZMOPLUGIN_H
