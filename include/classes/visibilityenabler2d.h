// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISIBILITYENABLER2D_H
#define REBEL_VISIBILITYENABLER2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visibilitynotifier2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;

class VisibilityEnabler2D : public VisibilityNotifier2D {
public:
    enum Enabler {
        ENABLER_PAUSE_ANIMATIONS = 0,
        ENABLER_FREEZE_BODIES = 1,
        ENABLER_PAUSE_PARTICLES = 2,
        ENABLER_PARENT_PROCESS = 3,
        ENABLER_PARENT_PHYSICS_PROCESS = 4,
        ENABLER_PAUSE_ANIMATED_SPRITES = 5,
        ENABLER_MAX = 6,
    };

    void _node_removed(const Node* arg0);
    bool is_enabler_enabled(const int64_t enabler) const;
    void set_enabler(const int64_t enabler, const bool enabled);

    static VisibilityEnabler2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisibilityEnabler2D";
    }

    inline static const char* get_rebel_class_name() {
        return "VisibilityEnabler2D";
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
        rebel_method_bind* mb__node_removed;
        rebel_method_bind* mb_is_enabler_enabled;
        rebel_method_bind* mb_set_enabler;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISIBILITYENABLER2D_H
