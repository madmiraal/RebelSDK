// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLTFBUFFERVIEW_H
#define REBEL_GLTFBUFFERVIEW_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GLTFBufferView : public Resource {
public:
    int64_t get_buffer();
    int64_t get_byte_length();
    int64_t get_byte_offset();
    int64_t get_byte_stride();
    bool get_indices();
    void set_buffer(const int64_t buffer);
    void set_byte_length(const int64_t byte_length);
    void set_byte_offset(const int64_t byte_offset);
    void set_byte_stride(const int64_t byte_stride);
    void set_indices(const bool indices);

    static GLTFBufferView* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GLTFBufferView";
    }

    inline static const char* get_rebel_class_name() {
        return "GLTFBufferView";
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
        rebel_method_bind* mb_get_buffer;
        rebel_method_bind* mb_get_byte_length;
        rebel_method_bind* mb_get_byte_offset;
        rebel_method_bind* mb_get_byte_stride;
        rebel_method_bind* mb_get_indices;
        rebel_method_bind* mb_set_buffer;
        rebel_method_bind* mb_set_byte_length;
        rebel_method_bind* mb_set_byte_offset;
        rebel_method_bind* mb_set_byte_stride;
        rebel_method_bind* mb_set_indices;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GLTFBUFFERVIEW_H
