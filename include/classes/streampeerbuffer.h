// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_STREAMPEERBUFFER_H
#define REBEL_STREAMPEERBUFFER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/streampeer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class StreamPeerBuffer : public StreamPeer {
public:
    void clear();
    Ref<StreamPeerBuffer> duplicate() const;
    PoolByteArray get_data_array() const;
    int64_t get_position() const;
    int64_t get_size() const;
    void resize(const int64_t size);
    void seek(const int64_t position);
    void set_data_array(const PoolByteArray data);

    static StreamPeerBuffer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "StreamPeerBuffer";
    }

    inline static const char* get_rebel_class_name() {
        return "StreamPeerBuffer";
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
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_duplicate;
        rebel_method_bind* mb_get_data_array;
        rebel_method_bind* mb_get_position;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_resize;
        rebel_method_bind* mb_seek;
        rebel_method_bind* mb_set_data_array;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_STREAMPEERBUFFER_H
