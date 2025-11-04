// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ARVRPOSITIONALTRACKER_H
#define REBEL_ARVRPOSITIONALTRACKER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/arvrserver.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Mesh;

class ARVRPositionalTracker : public Reference {
public:
    enum TrackerHand {
        TRACKER_HAND_UNKNOWN = 0,
        TRACKER_LEFT_HAND = 1,
        TRACKER_RIGHT_HAND = 2,
    };

    void _set_joy_id(const int64_t joy_id);
    void _set_mesh(const Ref<Mesh> mesh);
    void _set_name(const String name);
    void _set_orientation(const Basis orientation);
    void _set_rw_position(const Vector3 rw_position);
    void _set_type(const int64_t type);
    ARVRPositionalTracker::TrackerHand get_hand() const;
    int64_t get_joy_id() const;
    Ref<Mesh> get_mesh() const;
    String get_name() const;
    Basis get_orientation() const;
    Vector3 get_position() const;
    real_t get_rumble() const;
    int64_t get_tracker_id() const;
    bool get_tracks_orientation() const;
    bool get_tracks_position() const;
    Transform get_transform(const bool adjust_by_reference_frame) const;
    ARVRServer::TrackerType get_type() const;
    void set_rumble(const real_t rumble);

    static ARVRPositionalTracker* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ARVRPositionalTracker";
    }

    inline static const char* get_rebel_class_name() {
        return "ARVRPositionalTracker";
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
        rebel_method_bind* mb__set_joy_id;
        rebel_method_bind* mb__set_mesh;
        rebel_method_bind* mb__set_name;
        rebel_method_bind* mb__set_orientation;
        rebel_method_bind* mb__set_rw_position;
        rebel_method_bind* mb__set_type;
        rebel_method_bind* mb_get_hand;
        rebel_method_bind* mb_get_joy_id;
        rebel_method_bind* mb_get_mesh;
        rebel_method_bind* mb_get_name;
        rebel_method_bind* mb_get_orientation;
        rebel_method_bind* mb_get_position;
        rebel_method_bind* mb_get_rumble;
        rebel_method_bind* mb_get_tracker_id;
        rebel_method_bind* mb_get_tracks_orientation;
        rebel_method_bind* mb_get_tracks_position;
        rebel_method_bind* mb_get_transform;
        rebel_method_bind* mb_get_type;
        rebel_method_bind* mb_set_rumble;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ARVRPOSITIONALTRACKER_H
