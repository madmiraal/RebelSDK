// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VIEWPORTCONTAINER_H
#define REBEL_VIEWPORTCONTAINER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/container.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;

class ViewportContainer : public Container {
public:
    void _input(const Ref<InputEvent> event);
    void _unhandled_input(const Ref<InputEvent> event);
    int64_t get_stretch_shrink() const;
    bool is_stretch_enabled() const;
    void set_stretch(const bool enable);
    void set_stretch_shrink(const int64_t amount);

    static ViewportContainer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ViewportContainer";
    }

    inline static const char* get_rebel_class_name() {
        return "ViewportContainer";
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
        rebel_method_bind* mb__input;
        rebel_method_bind* mb__unhandled_input;
        rebel_method_bind* mb_get_stretch_shrink;
        rebel_method_bind* mb_is_stretch_enabled;
        rebel_method_bind* mb_set_stretch;
        rebel_method_bind* mb_set_stretch_shrink;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VIEWPORTCONTAINER_H
