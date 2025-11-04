// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AUDIOSTREAMGENERATORPLAYBACK_H
#define REBEL_AUDIOSTREAMGENERATORPLAYBACK_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/audiostreamplaybackresampled.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AudioStreamGeneratorPlayback : public AudioStreamPlaybackResampled {
public:
    bool can_push_buffer(const int64_t amount) const;
    void clear_buffer();
    int64_t get_frames_available() const;
    int64_t get_skips() const;
    bool push_buffer(const PoolVector2Array frames);
    bool push_frame(const Vector2 frame);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AudioStreamGeneratorPlayback";
    }

    inline static const char* get_rebel_class_name() {
        return "AudioStreamGeneratorPlayback";
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
        rebel_method_bind* mb_can_push_buffer;
        rebel_method_bind* mb_clear_buffer;
        rebel_method_bind* mb_get_frames_available;
        rebel_method_bind* mb_get_skips;
        rebel_method_bind* mb_push_buffer;
        rebel_method_bind* mb_push_frame;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AUDIOSTREAMGENERATORPLAYBACK_H
