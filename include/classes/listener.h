// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_LISTENER_H
#define REBEL_LISTENER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Listener : public Spatial {
public:
    void clear_current();
    Transform get_listener_transform() const;
    bool is_current() const;
    void make_current();

    static Listener* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Listener";
    }

    inline static const char* get_rebel_class_name() {
        return "Listener";
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
        rebel_method_bind* mb_clear_current;
        rebel_method_bind* mb_get_listener_transform;
        rebel_method_bind* mb_is_current;
        rebel_method_bind* mb_make_current;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_LISTENER_H
