// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_WEBXRINTERFACE_H
#define REBEL_WEBXRINTERFACE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/arvrinterface.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ARVRPositionalTracker;

class WebXRInterface : public ARVRInterface {
public:
    PoolVector3Array get_bounds_geometry() const;
    Ref<ARVRPositionalTracker> get_controller(const int64_t controller_id) const;
    String get_optional_features() const;
    String get_reference_space_type() const;
    String get_requested_reference_space_types() const;
    String get_required_features() const;
    String get_session_mode() const;
    String get_visibility_state() const;
    void is_session_supported(const String session_mode);
    void set_optional_features(const String optional_features);
    void set_requested_reference_space_types(const String requested_reference_space_types);
    void set_required_features(const String required_features);
    void set_session_mode(const String session_mode);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "WebXRInterface";
    }

    inline static const char* get_rebel_class_name() {
        return "WebXRInterface";
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
        rebel_method_bind* mb_get_bounds_geometry;
        rebel_method_bind* mb_get_controller;
        rebel_method_bind* mb_get_optional_features;
        rebel_method_bind* mb_get_reference_space_type;
        rebel_method_bind* mb_get_requested_reference_space_types;
        rebel_method_bind* mb_get_required_features;
        rebel_method_bind* mb_get_session_mode;
        rebel_method_bind* mb_get_visibility_state;
        rebel_method_bind* mb_is_session_supported;
        rebel_method_bind* mb_set_optional_features;
        rebel_method_bind* mb_set_requested_reference_space_types;
        rebel_method_bind* mb_set_required_features;
        rebel_method_bind* mb_set_session_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_WEBXRINTERFACE_H
