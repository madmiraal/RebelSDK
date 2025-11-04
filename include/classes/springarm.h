// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SPRINGARM_H
#define REBEL_SPRINGARM_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Shape;

class SpringArm : public Spatial {
public:
    void add_excluded_object(const RID RID);
    void clear_excluded_objects();
    int64_t get_collision_mask();
    real_t get_hit_length();
    real_t get_length() const;
    real_t get_margin();
    Ref<Shape> get_shape() const;
    bool remove_excluded_object(const RID RID);
    void set_collision_mask(const int64_t mask);
    void set_length(const real_t length);
    void set_margin(const real_t margin);
    void set_shape(const Ref<Shape> shape);

    static SpringArm* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SpringArm";
    }

    inline static const char* get_rebel_class_name() {
        return "SpringArm";
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
        rebel_method_bind* mb_add_excluded_object;
        rebel_method_bind* mb_clear_excluded_objects;
        rebel_method_bind* mb_get_collision_mask;
        rebel_method_bind* mb_get_hit_length;
        rebel_method_bind* mb_get_length;
        rebel_method_bind* mb_get_margin;
        rebel_method_bind* mb_get_shape;
        rebel_method_bind* mb_remove_excluded_object;
        rebel_method_bind* mb_set_collision_mask;
        rebel_method_bind* mb_set_length;
        rebel_method_bind* mb_set_margin;
        rebel_method_bind* mb_set_shape;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SPRINGARM_H
