// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SPRITEBASE3D_H
#define REBEL_SPRITEBASE3D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/geometryinstance.h"
#include "classes/spatialmaterial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class TriangleMesh;

class SpriteBase3D : public GeometryInstance {
public:
    enum DrawFlags {
        FLAG_TRANSPARENT = 0,
        FLAG_SHADED = 1,
        FLAG_DOUBLE_SIDED = 2,
        FLAG_MAX = 3,
    };

    enum AlphaCutMode {
        ALPHA_CUT_DISABLED = 0,
        ALPHA_CUT_DISCARD = 1,
        ALPHA_CUT_OPAQUE_PREPASS = 2,
    };

    void _im_update();
    void _queue_update();
    Ref<TriangleMesh> generate_triangle_mesh() const;
    SpriteBase3D::AlphaCutMode get_alpha_cut_mode() const;
    Vector3::Axis get_axis() const;
    SpatialMaterial::BillboardMode get_billboard_mode() const;
    bool get_draw_flag(const int64_t flag) const;
    Rect2 get_item_rect() const;
    Color get_modulate() const;
    Vector2 get_offset() const;
    real_t get_opacity() const;
    real_t get_pixel_size() const;
    bool is_centered() const;
    bool is_flipped_h() const;
    bool is_flipped_v() const;
    void set_alpha_cut_mode(const int64_t mode);
    void set_axis(const int64_t axis);
    void set_billboard_mode(const int64_t mode);
    void set_centered(const bool centered);
    void set_draw_flag(const int64_t flag, const bool enabled);
    void set_flip_h(const bool flip_h);
    void set_flip_v(const bool flip_v);
    void set_modulate(const Color modulate);
    void set_offset(const Vector2 offset);
    void set_opacity(const real_t opacity);
    void set_pixel_size(const real_t pixel_size);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SpriteBase3D";
    }

    inline static const char* get_rebel_class_name() {
        return "SpriteBase3D";
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
        rebel_method_bind* mb__im_update;
        rebel_method_bind* mb__queue_update;
        rebel_method_bind* mb_generate_triangle_mesh;
        rebel_method_bind* mb_get_alpha_cut_mode;
        rebel_method_bind* mb_get_axis;
        rebel_method_bind* mb_get_billboard_mode;
        rebel_method_bind* mb_get_draw_flag;
        rebel_method_bind* mb_get_item_rect;
        rebel_method_bind* mb_get_modulate;
        rebel_method_bind* mb_get_offset;
        rebel_method_bind* mb_get_opacity;
        rebel_method_bind* mb_get_pixel_size;
        rebel_method_bind* mb_is_centered;
        rebel_method_bind* mb_is_flipped_h;
        rebel_method_bind* mb_is_flipped_v;
        rebel_method_bind* mb_set_alpha_cut_mode;
        rebel_method_bind* mb_set_axis;
        rebel_method_bind* mb_set_billboard_mode;
        rebel_method_bind* mb_set_centered;
        rebel_method_bind* mb_set_draw_flag;
        rebel_method_bind* mb_set_flip_h;
        rebel_method_bind* mb_set_flip_v;
        rebel_method_bind* mb_set_modulate;
        rebel_method_bind* mb_set_offset;
        rebel_method_bind* mb_set_opacity;
        rebel_method_bind* mb_set_pixel_size;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SPRITEBASE3D_H
