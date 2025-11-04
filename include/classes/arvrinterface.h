// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ARVRINTERFACE_H
#define REBEL_ARVRINTERFACE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ARVRInterface : public Reference {
public:
    enum Tracking_status {
        ARVR_NORMAL_TRACKING = 0,
        ARVR_EXCESSIVE_MOTION = 1,
        ARVR_INSUFFICIENT_FEATURES = 2,
        ARVR_UNKNOWN_TRACKING = 3,
        ARVR_NOT_TRACKING = 4,
    };

    enum Eyes {
        EYE_MONO = 0,
        EYE_LEFT = 1,
        EYE_RIGHT = 2,
    };

    enum Capabilities {
        ARVR_NONE = 0,
        ARVR_MONO = 1,
        ARVR_STEREO = 2,
        ARVR_AR = 4,
        ARVR_EXTERNAL = 8,
    };

    bool get_anchor_detection_is_enabled() const;
    int64_t get_camera_feed_id();
    int64_t get_capabilities() const;
    String get_name() const;
    Vector2 get_render_targetsize();
    ARVRInterface::Tracking_status get_tracking_status() const;
    bool initialize();
    bool is_initialized() const;
    bool is_primary();
    bool is_stereo();
    void set_anchor_detection_is_enabled(const bool enable);
    void set_is_initialized(const bool initialized);
    void set_is_primary(const bool enable);
    void uninitialize();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ARVRInterface";
    }

    inline static const char* get_rebel_class_name() {
        return "ARVRInterface";
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
        rebel_method_bind* mb_get_anchor_detection_is_enabled;
        rebel_method_bind* mb_get_camera_feed_id;
        rebel_method_bind* mb_get_capabilities;
        rebel_method_bind* mb_get_name;
        rebel_method_bind* mb_get_render_targetsize;
        rebel_method_bind* mb_get_tracking_status;
        rebel_method_bind* mb_initialize;
        rebel_method_bind* mb_is_initialized;
        rebel_method_bind* mb_is_primary;
        rebel_method_bind* mb_is_stereo;
        rebel_method_bind* mb_set_anchor_detection_is_enabled;
        rebel_method_bind* mb_set_is_initialized;
        rebel_method_bind* mb_set_is_primary;
        rebel_method_bind* mb_uninitialize;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ARVRINTERFACE_H
