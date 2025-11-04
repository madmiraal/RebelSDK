// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_OCCLUDERPOLYGON2D_H
#define REBEL_OCCLUDERPOLYGON2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class OccluderPolygon2D : public Resource {
public:
    enum CullMode {
        CULL_DISABLED = 0,
        CULL_CLOCKWISE = 1,
        CULL_COUNTER_CLOCKWISE = 2,
    };

    OccluderPolygon2D::CullMode get_cull_mode() const;
    PoolVector2Array get_polygon() const;
    bool is_closed() const;
    void set_closed(const bool closed);
    void set_cull_mode(const int64_t cull_mode);
    void set_polygon(const PoolVector2Array polygon);

    static OccluderPolygon2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "OccluderPolygon2D";
    }

    inline static const char* get_rebel_class_name() {
        return "OccluderPolygon2D";
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
        rebel_method_bind* mb_get_cull_mode;
        rebel_method_bind* mb_get_polygon;
        rebel_method_bind* mb_is_closed;
        rebel_method_bind* mb_set_closed;
        rebel_method_bind* mb_set_cull_mode;
        rebel_method_bind* mb_set_polygon;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_OCCLUDERPOLYGON2D_H
