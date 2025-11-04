// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_IMMEDIATEGEOMETRY_H
#define REBEL_IMMEDIATEGEOMETRY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/geometryinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Texture;

class ImmediateGeometry : public GeometryInstance {
public:
    void add_sphere(const int64_t lats, const int64_t lons, const real_t radius, const bool add_uv = true);
    void add_vertex(const Vector3 position);
    void begin(const int64_t primitive, const Ref<Texture> texture = nullptr);
    void clear();
    void end();
    void set_color(const Color color);
    void set_normal(const Vector3 normal);
    void set_tangent(const Plane tangent);
    void set_uv(const Vector2 uv);
    void set_uv2(const Vector2 uv);

    static ImmediateGeometry* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ImmediateGeometry";
    }

    inline static const char* get_rebel_class_name() {
        return "ImmediateGeometry";
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
        rebel_method_bind* mb_add_sphere;
        rebel_method_bind* mb_add_vertex;
        rebel_method_bind* mb_begin;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_end;
        rebel_method_bind* mb_set_color;
        rebel_method_bind* mb_set_normal;
        rebel_method_bind* mb_set_tangent;
        rebel_method_bind* mb_set_uv;
        rebel_method_bind* mb_set_uv2;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_IMMEDIATEGEOMETRY_H
