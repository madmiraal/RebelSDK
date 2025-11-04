// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_REFERENCERECT_H
#define REBEL_REFERENCERECT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ReferenceRect : public Control {
public:
    Color get_border_color() const;
    real_t get_border_width() const;
    bool get_editor_only() const;
    void set_border_color(const Color color);
    void set_border_width(const real_t width);
    void set_editor_only(const bool enabled);

    static ReferenceRect* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ReferenceRect";
    }

    inline static const char* get_rebel_class_name() {
        return "ReferenceRect";
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
        rebel_method_bind* mb_get_border_color;
        rebel_method_bind* mb_get_border_width;
        rebel_method_bind* mb_get_editor_only;
        rebel_method_bind* mb_set_border_color;
        rebel_method_bind* mb_set_border_width;
        rebel_method_bind* mb_set_editor_only;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_REFERENCERECT_H
