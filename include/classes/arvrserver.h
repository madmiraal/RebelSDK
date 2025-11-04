// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ARVRSERVER_H
#define REBEL_ARVRSERVER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ARVRInterface;
class ARVRPositionalTracker;

class ARVRServer : public Object {
public:
    enum RotationMode {
        RESET_FULL_ROTATION = 0,
        RESET_BUT_KEEP_TILT = 1,
        DONT_RESET_ROTATION = 2,
    };

    enum TrackerType {
        TRACKER_CONTROLLER = 1,
        TRACKER_BASESTATION = 2,
        TRACKER_ANCHOR = 4,
        TRACKER_ANY_KNOWN = 127,
        TRACKER_UNKNOWN = 128,
        TRACKER_ANY = 255,
    };

    void add_interface(const Ref<ARVRInterface> interface);
    void add_tracker(const Ref<ARVRPositionalTracker> tracker);
    void center_on_hmd(const int64_t rotation_mode, const bool keep_height);
    void clear_primary_interface_if(const Ref<ARVRInterface> interface);
    Ref<ARVRInterface> find_interface(const String name) const;
    Transform get_hmd_transform();
    Ref<ARVRInterface> get_interface(const int64_t idx) const;
    int64_t get_interface_count() const;
    Array get_interfaces() const;
    int64_t get_last_commit_usec();
    int64_t get_last_frame_usec();
    int64_t get_last_process_usec();
    Ref<ARVRInterface> get_primary_interface() const;
    Transform get_reference_frame() const;
    Ref<ARVRPositionalTracker> get_tracker(const int64_t idx) const;
    int64_t get_tracker_count() const;
    real_t get_world_scale() const;
    void remove_interface(const Ref<ARVRInterface> interface);
    void remove_tracker(const Ref<ARVRPositionalTracker> tracker);
    void set_primary_interface(const Ref<ARVRInterface> interface);
    void set_world_scale(const real_t arg0);

    static inline ARVRServer* get_singleton() {
        if (!ARVRServer::singleton) {
            ARVRServer::singleton = new ARVRServer;
        }
        return ARVRServer::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ARVRServer";
    }

    inline static const char* get_rebel_class_name() {
        return "ARVRServer";
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
    ARVRServer();
    static ARVRServer* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_add_interface;
        rebel_method_bind* mb_add_tracker;
        rebel_method_bind* mb_center_on_hmd;
        rebel_method_bind* mb_clear_primary_interface_if;
        rebel_method_bind* mb_find_interface;
        rebel_method_bind* mb_get_hmd_transform;
        rebel_method_bind* mb_get_interface;
        rebel_method_bind* mb_get_interface_count;
        rebel_method_bind* mb_get_interfaces;
        rebel_method_bind* mb_get_last_commit_usec;
        rebel_method_bind* mb_get_last_frame_usec;
        rebel_method_bind* mb_get_last_process_usec;
        rebel_method_bind* mb_get_primary_interface;
        rebel_method_bind* mb_get_reference_frame;
        rebel_method_bind* mb_get_tracker;
        rebel_method_bind* mb_get_tracker_count;
        rebel_method_bind* mb_get_world_scale;
        rebel_method_bind* mb_remove_interface;
        rebel_method_bind* mb_remove_tracker;
        rebel_method_bind* mb_set_primary_interface;
        rebel_method_bind* mb_set_world_scale;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ARVRSERVER_H
