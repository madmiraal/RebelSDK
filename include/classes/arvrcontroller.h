// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ARVRCONTROLLER_H
#define REBEL_ARVRCONTROLLER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/arvrpositionaltracker.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Mesh;

class ARVRController : public Spatial {
public:
    int64_t get_controller_id() const;
    String get_controller_name() const;
    ARVRPositionalTracker::TrackerHand get_hand() const;
    bool get_is_active() const;
    real_t get_joystick_axis(const int64_t axis) const;
    int64_t get_joystick_id() const;
    Ref<Mesh> get_mesh() const;
    real_t get_rumble() const;
    int64_t is_button_pressed(const int64_t button) const;
    void set_controller_id(const int64_t controller_id);
    void set_rumble(const real_t rumble);

    static ARVRController* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ARVRController";
    }

    inline static const char* get_rebel_class_name() {
        return "ARVRController";
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
        rebel_method_bind* mb_get_controller_id;
        rebel_method_bind* mb_get_controller_name;
        rebel_method_bind* mb_get_hand;
        rebel_method_bind* mb_get_is_active;
        rebel_method_bind* mb_get_joystick_axis;
        rebel_method_bind* mb_get_joystick_id;
        rebel_method_bind* mb_get_mesh;
        rebel_method_bind* mb_get_rumble;
        rebel_method_bind* mb_is_button_pressed;
        rebel_method_bind* mb_set_controller_id;
        rebel_method_bind* mb_set_rumble;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ARVRCONTROLLER_H
