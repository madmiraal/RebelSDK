// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SCROLLBAR_H
#define REBEL_SCROLLBAR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/range.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;

class ScrollBar : public Range {
public:
    void _drag_node_exit();
    void _drag_node_input(const Ref<InputEvent> arg0);
    void _gui_input(const Ref<InputEvent> arg0);
    real_t get_custom_step() const;
    void set_custom_step(const real_t step);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ScrollBar";
    }

    inline static const char* get_rebel_class_name() {
        return "ScrollBar";
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
        rebel_method_bind* mb__drag_node_exit;
        rebel_method_bind* mb__drag_node_input;
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb_get_custom_step;
        rebel_method_bind* mb_set_custom_step;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SCROLLBAR_H
