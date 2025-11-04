// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PORTAL_H
#define REBEL_PORTAL_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Portal : public Spatial {
public:
    NodePath get_linked_room() const;
    PoolVector2Array get_points() const;
    bool get_portal_active() const;
    real_t get_portal_margin() const;
    bool get_use_default_margin() const;
    bool is_two_way() const;
    void set_linked_room(const NodePath p_room);
    void set_point(const int64_t index, const Vector2 position);
    void set_points(const PoolVector2Array points);
    void set_portal_active(const bool p_active);
    void set_portal_margin(const real_t p_margin);
    void set_two_way(const bool p_two_way);
    void set_use_default_margin(const bool p_use);

    static Portal* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Portal";
    }

    inline static const char* get_rebel_class_name() {
        return "Portal";
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
        rebel_method_bind* mb_get_linked_room;
        rebel_method_bind* mb_get_points;
        rebel_method_bind* mb_get_portal_active;
        rebel_method_bind* mb_get_portal_margin;
        rebel_method_bind* mb_get_use_default_margin;
        rebel_method_bind* mb_is_two_way;
        rebel_method_bind* mb_set_linked_room;
        rebel_method_bind* mb_set_point;
        rebel_method_bind* mb_set_points;
        rebel_method_bind* mb_set_portal_active;
        rebel_method_bind* mb_set_portal_margin;
        rebel_method_bind* mb_set_two_way;
        rebel_method_bind* mb_set_use_default_margin;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PORTAL_H
