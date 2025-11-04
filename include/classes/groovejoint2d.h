// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GROOVEJOINT2D_H
#define REBEL_GROOVEJOINT2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/joint2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GrooveJoint2D : public Joint2D {
public:
    real_t get_initial_offset() const;
    real_t get_length() const;
    void set_initial_offset(const real_t offset);
    void set_length(const real_t length);

    static GrooveJoint2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GrooveJoint2D";
    }

    inline static const char* get_rebel_class_name() {
        return "GrooveJoint2D";
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
        rebel_method_bind* mb_get_initial_offset;
        rebel_method_bind* mb_get_length;
        rebel_method_bind* mb_set_initial_offset;
        rebel_method_bind* mb_set_length;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GROOVEJOINT2D_H
