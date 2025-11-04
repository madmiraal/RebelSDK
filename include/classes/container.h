// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CONTAINER_H
#define REBEL_CONTAINER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Container : public Control {
public:
    static const int NOTIFICATION_SORT_CHILDREN = 50;

    void _child_minsize_changed();
    void _sort_children();
    void fit_child_in_rect(const Control* child, const Rect2 rect);
    void queue_sort();

    static Container* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Container";
    }

    inline static const char* get_rebel_class_name() {
        return "Container";
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
        rebel_method_bind* mb__child_minsize_changed;
        rebel_method_bind* mb__sort_children;
        rebel_method_bind* mb_fit_child_in_rect;
        rebel_method_bind* mb_queue_sort;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CONTAINER_H
