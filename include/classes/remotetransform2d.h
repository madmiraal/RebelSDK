// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_REMOTETRANSFORM2D_H
#define REBEL_REMOTETRANSFORM2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class RemoteTransform2D : public Node2D {
public:
    void force_update_cache();
    NodePath get_remote_node() const;
    bool get_update_position() const;
    bool get_update_rotation() const;
    bool get_update_scale() const;
    bool get_use_global_coordinates() const;
    void set_remote_node(const NodePath path);
    void set_update_position(const bool update_remote_position);
    void set_update_rotation(const bool update_remote_rotation);
    void set_update_scale(const bool update_remote_scale);
    void set_use_global_coordinates(const bool use_global_coordinates);

    static RemoteTransform2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "RemoteTransform2D";
    }

    inline static const char* get_rebel_class_name() {
        return "RemoteTransform2D";
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
        rebel_method_bind* mb_force_update_cache;
        rebel_method_bind* mb_get_remote_node;
        rebel_method_bind* mb_get_update_position;
        rebel_method_bind* mb_get_update_rotation;
        rebel_method_bind* mb_get_update_scale;
        rebel_method_bind* mb_get_use_global_coordinates;
        rebel_method_bind* mb_set_remote_node;
        rebel_method_bind* mb_set_update_position;
        rebel_method_bind* mb_set_update_rotation;
        rebel_method_bind* mb_set_update_scale;
        rebel_method_bind* mb_set_use_global_coordinates;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_REMOTETRANSFORM2D_H
