// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MULTIMESH_H
#define REBEL_MULTIMESH_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Mesh;

class MultiMesh : public Resource {
public:
    enum TransformFormat {
        TRANSFORM_2D = 0,
        TRANSFORM_3D = 1,
    };

    enum CustomDataFormat {
        CUSTOM_DATA_NONE = 0,
        CUSTOM_DATA_8BIT = 1,
        CUSTOM_DATA_FLOAT = 2,
    };

    enum ColorFormat {
        COLOR_NONE = 0,
        COLOR_8BIT = 1,
        COLOR_FLOAT = 2,
    };

    PoolColorArray _get_color_array() const;
    PoolColorArray _get_custom_data_array() const;
    PoolVector2Array _get_transform_2d_array() const;
    PoolVector3Array _get_transform_array() const;
    void _set_color_array(const PoolColorArray arg0);
    void _set_custom_data_array(const PoolColorArray arg0);
    void _set_transform_2d_array(const PoolVector2Array arg0);
    void _set_transform_array(const PoolVector3Array arg0);
    AABB get_aabb() const;
    MultiMesh::ColorFormat get_color_format() const;
    MultiMesh::CustomDataFormat get_custom_data_format() const;
    Color get_instance_color(const int64_t instance) const;
    int64_t get_instance_count() const;
    Color get_instance_custom_data(const int64_t instance) const;
    Transform get_instance_transform(const int64_t instance) const;
    Transform2D get_instance_transform_2d(const int64_t instance) const;
    Ref<Mesh> get_mesh() const;
    MultiMesh::TransformFormat get_transform_format() const;
    int64_t get_visible_instance_count() const;
    void set_as_bulk_array(const PoolRealArray array);
    void set_color_format(const int64_t format);
    void set_custom_data_format(const int64_t format);
    void set_instance_color(const int64_t instance, const Color color);
    void set_instance_count(const int64_t count);
    void set_instance_custom_data(const int64_t instance, const Color custom_data);
    void set_instance_transform(const int64_t instance, const Transform transform);
    void set_instance_transform_2d(const int64_t instance, const Transform2D transform);
    void set_mesh(const Ref<Mesh> mesh);
    void set_transform_format(const int64_t format);
    void set_visible_instance_count(const int64_t count);

    static MultiMesh* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "MultiMesh";
    }

    inline static const char* get_rebel_class_name() {
        return "MultiMesh";
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
        rebel_method_bind* mb__get_color_array;
        rebel_method_bind* mb__get_custom_data_array;
        rebel_method_bind* mb__get_transform_2d_array;
        rebel_method_bind* mb__get_transform_array;
        rebel_method_bind* mb__set_color_array;
        rebel_method_bind* mb__set_custom_data_array;
        rebel_method_bind* mb__set_transform_2d_array;
        rebel_method_bind* mb__set_transform_array;
        rebel_method_bind* mb_get_aabb;
        rebel_method_bind* mb_get_color_format;
        rebel_method_bind* mb_get_custom_data_format;
        rebel_method_bind* mb_get_instance_color;
        rebel_method_bind* mb_get_instance_count;
        rebel_method_bind* mb_get_instance_custom_data;
        rebel_method_bind* mb_get_instance_transform;
        rebel_method_bind* mb_get_instance_transform_2d;
        rebel_method_bind* mb_get_mesh;
        rebel_method_bind* mb_get_transform_format;
        rebel_method_bind* mb_get_visible_instance_count;
        rebel_method_bind* mb_set_as_bulk_array;
        rebel_method_bind* mb_set_color_format;
        rebel_method_bind* mb_set_custom_data_format;
        rebel_method_bind* mb_set_instance_color;
        rebel_method_bind* mb_set_instance_count;
        rebel_method_bind* mb_set_instance_custom_data;
        rebel_method_bind* mb_set_instance_transform;
        rebel_method_bind* mb_set_instance_transform_2d;
        rebel_method_bind* mb_set_mesh;
        rebel_method_bind* mb_set_transform_format;
        rebel_method_bind* mb_set_visible_instance_count;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_MULTIMESH_H
