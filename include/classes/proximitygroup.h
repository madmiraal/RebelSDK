// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PROXIMITYGROUP_H
#define REBEL_PROXIMITYGROUP_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ProximityGroup : public Spatial {
public:
    enum DispatchMode {
        MODE_PROXY = 0,
        MODE_SIGNAL = 1,
    };

    void _proximity_group_broadcast(const String method, const Variant parameters);
    void broadcast(const String method, const Variant parameters);
    ProximityGroup::DispatchMode get_dispatch_mode() const;
    Vector3 get_grid_radius() const;
    String get_group_name() const;
    void set_dispatch_mode(const int64_t mode);
    void set_grid_radius(const Vector3 radius);
    void set_group_name(const String name);

    static ProximityGroup* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ProximityGroup";
    }

    inline static const char* get_rebel_class_name() {
        return "ProximityGroup";
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
        rebel_method_bind* mb__proximity_group_broadcast;
        rebel_method_bind* mb_broadcast;
        rebel_method_bind* mb_get_dispatch_mode;
        rebel_method_bind* mb_get_grid_radius;
        rebel_method_bind* mb_get_group_name;
        rebel_method_bind* mb_set_dispatch_mode;
        rebel_method_bind* mb_set_grid_radius;
        rebel_method_bind* mb_set_group_name;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PROXIMITYGROUP_H
