// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CHARFXTRANSFORM_H
#define REBEL_CHARFXTRANSFORM_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CharFXTransform : public Reference {
public:
    int64_t get_absolute_index();
    int64_t get_character();
    Color get_color();
    real_t get_elapsed_time();
    Dictionary get_environment();
    Vector2 get_offset();
    int64_t get_relative_index();
    bool is_visible();
    void set_absolute_index(const int64_t index);
    void set_character(const int64_t character);
    void set_color(const Color color);
    void set_elapsed_time(const real_t time);
    void set_environment(const Dictionary environment);
    void set_offset(const Vector2 offset);
    void set_relative_index(const int64_t index);
    void set_visibility(const bool visibility);

    static CharFXTransform* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CharFXTransform";
    }

    inline static const char* get_rebel_class_name() {
        return "CharFXTransform";
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
        rebel_method_bind* mb_get_absolute_index;
        rebel_method_bind* mb_get_character;
        rebel_method_bind* mb_get_color;
        rebel_method_bind* mb_get_elapsed_time;
        rebel_method_bind* mb_get_environment;
        rebel_method_bind* mb_get_offset;
        rebel_method_bind* mb_get_relative_index;
        rebel_method_bind* mb_is_visible;
        rebel_method_bind* mb_set_absolute_index;
        rebel_method_bind* mb_set_character;
        rebel_method_bind* mb_set_color;
        rebel_method_bind* mb_set_elapsed_time;
        rebel_method_bind* mb_set_environment;
        rebel_method_bind* mb_set_offset;
        rebel_method_bind* mb_set_relative_index;
        rebel_method_bind* mb_set_visibility;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CHARFXTRANSFORM_H
