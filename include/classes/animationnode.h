// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONNODE_H
#define REBEL_ANIMATIONNODE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class AnimationNode : public Resource {
public:
    enum FilterAction {
        FILTER_IGNORE = 0,
        FILTER_PASS = 1,
        FILTER_STOP = 2,
        FILTER_BLEND = 3,
    };

    Array _get_filters() const;
    void _set_filters(const Array filters);
    void add_input(const String name);
    void blend_animation(const String animation, const real_t time, const real_t delta, const bool seeked, const real_t blend);
    real_t blend_input(const int64_t input_index, const real_t time, const bool seek, const real_t blend, const int64_t filter = 0, const bool optimize = true);
    real_t blend_node(const String name, const Ref<AnimationNode> node, const real_t time, const bool seek, const real_t blend, const int64_t filter = 0, const bool optimize = true);
    String get_caption();
    Object* get_child_by_name(const String name);
    Dictionary get_child_nodes();
    int64_t get_input_count() const;
    String get_input_name(const int64_t input);
    Variant get_parameter(const String name) const;
    Variant get_parameter_default_value(const String name);
    Array get_parameter_list();
    String has_filter();
    bool is_filter_enabled() const;
    bool is_path_filtered(const NodePath path) const;
    void process(const real_t time, const bool seek);
    void remove_input(const int64_t index);
    void set_filter_enabled(const bool enable);
    void set_filter_path(const NodePath path, const bool enable);
    void set_parameter(const String name, const Variant value);

    static AnimationNode* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationNode";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationNode";
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
        rebel_method_bind* mb__get_filters;
        rebel_method_bind* mb__set_filters;
        rebel_method_bind* mb_add_input;
        rebel_method_bind* mb_blend_animation;
        rebel_method_bind* mb_blend_input;
        rebel_method_bind* mb_blend_node;
        rebel_method_bind* mb_get_caption;
        rebel_method_bind* mb_get_child_by_name;
        rebel_method_bind* mb_get_child_nodes;
        rebel_method_bind* mb_get_input_count;
        rebel_method_bind* mb_get_input_name;
        rebel_method_bind* mb_get_parameter;
        rebel_method_bind* mb_get_parameter_default_value;
        rebel_method_bind* mb_get_parameter_list;
        rebel_method_bind* mb_has_filter;
        rebel_method_bind* mb_is_filter_enabled;
        rebel_method_bind* mb_is_path_filtered;
        rebel_method_bind* mb_process;
        rebel_method_bind* mb_remove_input;
        rebel_method_bind* mb_set_filter_enabled;
        rebel_method_bind* mb_set_filter_path;
        rebel_method_bind* mb_set_parameter;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONNODE_H
