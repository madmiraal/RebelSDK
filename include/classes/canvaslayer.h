// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CANVASLAYER_H
#define REBEL_CANVASLAYER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CanvasLayer : public Node {
public:
    RID get_canvas() const;
    Node* get_custom_viewport() const;
    real_t get_follow_viewport_scale() const;
    int64_t get_layer() const;
    Vector2 get_offset() const;
    real_t get_rotation() const;
    real_t get_rotation_degrees() const;
    Vector2 get_scale() const;
    Transform2D get_transform() const;
    bool is_following_viewport() const;
    void set_custom_viewport(const Node* viewport);
    void set_follow_viewport(const bool enable);
    void set_follow_viewport_scale(const real_t scale);
    void set_layer(const int64_t layer);
    void set_offset(const Vector2 offset);
    void set_rotation(const real_t radians);
    void set_rotation_degrees(const real_t degrees);
    void set_scale(const Vector2 scale);
    void set_transform(const Transform2D transform);

    static CanvasLayer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CanvasLayer";
    }

    inline static const char* get_rebel_class_name() {
        return "CanvasLayer";
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
        rebel_method_bind* mb_get_canvas;
        rebel_method_bind* mb_get_custom_viewport;
        rebel_method_bind* mb_get_follow_viewport_scale;
        rebel_method_bind* mb_get_layer;
        rebel_method_bind* mb_get_offset;
        rebel_method_bind* mb_get_rotation;
        rebel_method_bind* mb_get_rotation_degrees;
        rebel_method_bind* mb_get_scale;
        rebel_method_bind* mb_get_transform;
        rebel_method_bind* mb_is_following_viewport;
        rebel_method_bind* mb_set_custom_viewport;
        rebel_method_bind* mb_set_follow_viewport;
        rebel_method_bind* mb_set_follow_viewport_scale;
        rebel_method_bind* mb_set_layer;
        rebel_method_bind* mb_set_offset;
        rebel_method_bind* mb_set_rotation;
        rebel_method_bind* mb_set_rotation_degrees;
        rebel_method_bind* mb_set_scale;
        rebel_method_bind* mb_set_transform;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CANVASLAYER_H
