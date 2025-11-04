// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLTFACCESSOR_H
#define REBEL_GLTFACCESSOR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GLTFAccessor : public Resource {
public:
    int64_t get_buffer_view();
    int64_t get_byte_offset();
    int64_t get_component_type();
    int64_t get_count();
    PoolRealArray get_max();
    PoolRealArray get_min();
    bool get_normalized();
    int64_t get_sparse_count();
    int64_t get_sparse_indices_buffer_view();
    int64_t get_sparse_indices_byte_offset();
    int64_t get_sparse_indices_component_type();
    int64_t get_sparse_values_buffer_view();
    int64_t get_sparse_values_byte_offset();
    int64_t get_type();
    void set_buffer_view(const int64_t buffer_view);
    void set_byte_offset(const int64_t byte_offset);
    void set_component_type(const int64_t component_type);
    void set_count(const int64_t count);
    void set_max(const PoolRealArray max);
    void set_min(const PoolRealArray min);
    void set_normalized(const bool normalized);
    void set_sparse_count(const int64_t sparse_count);
    void set_sparse_indices_buffer_view(const int64_t sparse_indices_buffer_view);
    void set_sparse_indices_byte_offset(const int64_t sparse_indices_byte_offset);
    void set_sparse_indices_component_type(const int64_t sparse_indices_component_type);
    void set_sparse_values_buffer_view(const int64_t sparse_values_buffer_view);
    void set_sparse_values_byte_offset(const int64_t sparse_values_byte_offset);
    void set_type(const int64_t type);

    static GLTFAccessor* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GLTFAccessor";
    }

    inline static const char* get_rebel_class_name() {
        return "GLTFAccessor";
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
        rebel_method_bind* mb_get_buffer_view;
        rebel_method_bind* mb_get_byte_offset;
        rebel_method_bind* mb_get_component_type;
        rebel_method_bind* mb_get_count;
        rebel_method_bind* mb_get_max;
        rebel_method_bind* mb_get_min;
        rebel_method_bind* mb_get_normalized;
        rebel_method_bind* mb_get_sparse_count;
        rebel_method_bind* mb_get_sparse_indices_buffer_view;
        rebel_method_bind* mb_get_sparse_indices_byte_offset;
        rebel_method_bind* mb_get_sparse_indices_component_type;
        rebel_method_bind* mb_get_sparse_values_buffer_view;
        rebel_method_bind* mb_get_sparse_values_byte_offset;
        rebel_method_bind* mb_get_type;
        rebel_method_bind* mb_set_buffer_view;
        rebel_method_bind* mb_set_byte_offset;
        rebel_method_bind* mb_set_component_type;
        rebel_method_bind* mb_set_count;
        rebel_method_bind* mb_set_max;
        rebel_method_bind* mb_set_min;
        rebel_method_bind* mb_set_normalized;
        rebel_method_bind* mb_set_sparse_count;
        rebel_method_bind* mb_set_sparse_indices_buffer_view;
        rebel_method_bind* mb_set_sparse_indices_byte_offset;
        rebel_method_bind* mb_set_sparse_indices_component_type;
        rebel_method_bind* mb_set_sparse_values_buffer_view;
        rebel_method_bind* mb_set_sparse_values_byte_offset;
        rebel_method_bind* mb_set_type;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GLTFACCESSOR_H
