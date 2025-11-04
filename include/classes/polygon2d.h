// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_POLYGON2D_H
#define REBEL_POLYGON2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class Polygon2D : public Node2D {
public:
    Array _get_bones() const;
    void _set_bones(const Array bones);
    void _skeleton_bone_setup_changed();
    void add_bone(const NodePath path, const PoolRealArray weights);
    void clear_bones();
    void erase_bone(const int64_t index);
    bool get_antialiased() const;
    int64_t get_bone_count() const;
    NodePath get_bone_path(const int64_t index) const;
    PoolRealArray get_bone_weights(const int64_t index) const;
    Color get_color() const;
    int64_t get_internal_vertex_count() const;
    bool get_invert() const;
    real_t get_invert_border() const;
    Vector2 get_offset() const;
    PoolVector2Array get_polygon() const;
    Array get_polygons() const;
    NodePath get_skeleton() const;
    Ref<Texture> get_texture() const;
    Vector2 get_texture_offset() const;
    real_t get_texture_rotation() const;
    real_t get_texture_rotation_degrees() const;
    Vector2 get_texture_scale() const;
    PoolVector2Array get_uv() const;
    PoolColorArray get_vertex_colors() const;
    void set_antialiased(const bool antialiased);
    void set_bone_path(const int64_t index, const NodePath path);
    void set_bone_weights(const int64_t index, const PoolRealArray weights);
    void set_color(const Color color);
    void set_internal_vertex_count(const int64_t internal_vertex_count);
    void set_invert(const bool invert);
    void set_invert_border(const real_t invert_border);
    void set_offset(const Vector2 offset);
    void set_polygon(const PoolVector2Array polygon);
    void set_polygons(const Array polygons);
    void set_skeleton(const NodePath skeleton);
    void set_texture(const Ref<Texture> texture);
    void set_texture_offset(const Vector2 texture_offset);
    void set_texture_rotation(const real_t texture_rotation);
    void set_texture_rotation_degrees(const real_t texture_rotation);
    void set_texture_scale(const Vector2 texture_scale);
    void set_uv(const PoolVector2Array uv);
    void set_vertex_colors(const PoolColorArray vertex_colors);

    static Polygon2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Polygon2D";
    }

    inline static const char* get_rebel_class_name() {
        return "Polygon2D";
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
        rebel_method_bind* mb__get_bones;
        rebel_method_bind* mb__set_bones;
        rebel_method_bind* mb__skeleton_bone_setup_changed;
        rebel_method_bind* mb_add_bone;
        rebel_method_bind* mb_clear_bones;
        rebel_method_bind* mb_erase_bone;
        rebel_method_bind* mb_get_antialiased;
        rebel_method_bind* mb_get_bone_count;
        rebel_method_bind* mb_get_bone_path;
        rebel_method_bind* mb_get_bone_weights;
        rebel_method_bind* mb_get_color;
        rebel_method_bind* mb_get_internal_vertex_count;
        rebel_method_bind* mb_get_invert;
        rebel_method_bind* mb_get_invert_border;
        rebel_method_bind* mb_get_offset;
        rebel_method_bind* mb_get_polygon;
        rebel_method_bind* mb_get_polygons;
        rebel_method_bind* mb_get_skeleton;
        rebel_method_bind* mb_get_texture;
        rebel_method_bind* mb_get_texture_offset;
        rebel_method_bind* mb_get_texture_rotation;
        rebel_method_bind* mb_get_texture_rotation_degrees;
        rebel_method_bind* mb_get_texture_scale;
        rebel_method_bind* mb_get_uv;
        rebel_method_bind* mb_get_vertex_colors;
        rebel_method_bind* mb_set_antialiased;
        rebel_method_bind* mb_set_bone_path;
        rebel_method_bind* mb_set_bone_weights;
        rebel_method_bind* mb_set_color;
        rebel_method_bind* mb_set_internal_vertex_count;
        rebel_method_bind* mb_set_invert;
        rebel_method_bind* mb_set_invert_border;
        rebel_method_bind* mb_set_offset;
        rebel_method_bind* mb_set_polygon;
        rebel_method_bind* mb_set_polygons;
        rebel_method_bind* mb_set_skeleton;
        rebel_method_bind* mb_set_texture;
        rebel_method_bind* mb_set_texture_offset;
        rebel_method_bind* mb_set_texture_rotation;
        rebel_method_bind* mb_set_texture_rotation_degrees;
        rebel_method_bind* mb_set_texture_scale;
        rebel_method_bind* mb_set_uv;
        rebel_method_bind* mb_set_vertex_colors;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_POLYGON2D_H
