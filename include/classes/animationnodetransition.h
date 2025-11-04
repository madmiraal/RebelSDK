// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONNODETRANSITION_H
#define REBEL_ANIMATIONNODETRANSITION_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/animationnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AnimationNodeTransition : public AnimationNode {
public:
    real_t get_cross_fade_time() const;
    int64_t get_enabled_inputs();
    String get_input_caption(const int64_t input) const;
    bool is_input_set_as_auto_advance(const int64_t input) const;
    void set_cross_fade_time(const real_t time);
    void set_enabled_inputs(const int64_t amount);
    void set_input_as_auto_advance(const int64_t input, const bool enable);
    void set_input_caption(const int64_t input, const String caption);

    static AnimationNodeTransition* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationNodeTransition";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationNodeTransition";
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
        rebel_method_bind* mb_get_cross_fade_time;
        rebel_method_bind* mb_get_enabled_inputs;
        rebel_method_bind* mb_get_input_caption;
        rebel_method_bind* mb_is_input_set_as_auto_advance;
        rebel_method_bind* mb_set_cross_fade_time;
        rebel_method_bind* mb_set_enabled_inputs;
        rebel_method_bind* mb_set_input_as_auto_advance;
        rebel_method_bind* mb_set_input_caption;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONNODETRANSITION_H
