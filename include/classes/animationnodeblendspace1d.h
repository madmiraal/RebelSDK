// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONNODEBLENDSPACE1D_H
#define REBEL_ANIMATIONNODEBLENDSPACE1D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/animationrootnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AnimationNodeBlendSpace1D : public AnimationRootNode {
public:
    void _add_blend_point(const int64_t index, const Ref<AnimationRootNode> node);
    void _tree_changed();
    void add_blend_point(const Ref<AnimationRootNode> node, const real_t pos, const int64_t at_index = -1);
    int64_t get_blend_point_count() const;
    Ref<AnimationRootNode> get_blend_point_node(const int64_t point) const;
    real_t get_blend_point_position(const int64_t point) const;
    real_t get_max_space() const;
    real_t get_min_space() const;
    real_t get_snap() const;
    String get_value_label() const;
    void remove_blend_point(const int64_t point);
    void set_blend_point_node(const int64_t point, const Ref<AnimationRootNode> node);
    void set_blend_point_position(const int64_t point, const real_t pos);
    void set_max_space(const real_t max_space);
    void set_min_space(const real_t min_space);
    void set_snap(const real_t snap);
    void set_value_label(const String text);

    static AnimationNodeBlendSpace1D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationNodeBlendSpace1D";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationNodeBlendSpace1D";
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
        rebel_method_bind* mb__add_blend_point;
        rebel_method_bind* mb__tree_changed;
        rebel_method_bind* mb_add_blend_point;
        rebel_method_bind* mb_get_blend_point_count;
        rebel_method_bind* mb_get_blend_point_node;
        rebel_method_bind* mb_get_blend_point_position;
        rebel_method_bind* mb_get_max_space;
        rebel_method_bind* mb_get_min_space;
        rebel_method_bind* mb_get_snap;
        rebel_method_bind* mb_get_value_label;
        rebel_method_bind* mb_remove_blend_point;
        rebel_method_bind* mb_set_blend_point_node;
        rebel_method_bind* mb_set_blend_point_position;
        rebel_method_bind* mb_set_max_space;
        rebel_method_bind* mb_set_min_space;
        rebel_method_bind* mb_set_snap;
        rebel_method_bind* mb_set_value_label;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONNODEBLENDSPACE1D_H
