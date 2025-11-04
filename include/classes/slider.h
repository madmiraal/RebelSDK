// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SLIDER_H
#define REBEL_SLIDER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/range.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;

class Slider : public Range {
public:
    void _gui_input(const Ref<InputEvent> arg0);
    int64_t get_ticks() const;
    bool get_ticks_on_borders() const;
    bool is_editable() const;
    bool is_scrollable() const;
    void set_editable(const bool editable);
    void set_scrollable(const bool scrollable);
    void set_ticks(const int64_t count);
    void set_ticks_on_borders(const bool ticks_on_border);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Slider";
    }

    inline static const char* get_rebel_class_name() {
        return "Slider";
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
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb_get_ticks;
        rebel_method_bind* mb_get_ticks_on_borders;
        rebel_method_bind* mb_is_editable;
        rebel_method_bind* mb_is_scrollable;
        rebel_method_bind* mb_set_editable;
        rebel_method_bind* mb_set_scrollable;
        rebel_method_bind* mb_set_ticks;
        rebel_method_bind* mb_set_ticks_on_borders;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SLIDER_H
