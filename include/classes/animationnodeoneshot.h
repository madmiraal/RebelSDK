// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ANIMATIONNODEONESHOT_H
#define REBEL_ANIMATIONNODEONESHOT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/animationnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AnimationNodeOneShot : public AnimationNode {
public:
    enum MixMode {
        MIX_MODE_BLEND = 0,
        MIX_MODE_ADD = 1,
    };

    real_t get_autorestart_delay() const;
    real_t get_autorestart_random_delay() const;
    real_t get_fadein_time() const;
    real_t get_fadeout_time() const;
    AnimationNodeOneShot::MixMode get_mix_mode() const;
    bool has_autorestart() const;
    bool is_using_sync() const;
    void set_autorestart(const bool enable);
    void set_autorestart_delay(const real_t enable);
    void set_autorestart_random_delay(const real_t enable);
    void set_fadein_time(const real_t time);
    void set_fadeout_time(const real_t time);
    void set_mix_mode(const int64_t mode);
    void set_use_sync(const bool enable);

    static AnimationNodeOneShot* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AnimationNodeOneShot";
    }

    inline static const char* get_rebel_class_name() {
        return "AnimationNodeOneShot";
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
        rebel_method_bind* mb_get_autorestart_delay;
        rebel_method_bind* mb_get_autorestart_random_delay;
        rebel_method_bind* mb_get_fadein_time;
        rebel_method_bind* mb_get_fadeout_time;
        rebel_method_bind* mb_get_mix_mode;
        rebel_method_bind* mb_has_autorestart;
        rebel_method_bind* mb_is_using_sync;
        rebel_method_bind* mb_set_autorestart;
        rebel_method_bind* mb_set_autorestart_delay;
        rebel_method_bind* mb_set_autorestart_random_delay;
        rebel_method_bind* mb_set_fadein_time;
        rebel_method_bind* mb_set_fadeout_time;
        rebel_method_bind* mb_set_mix_mode;
        rebel_method_bind* mb_set_use_sync;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ANIMATIONNODEONESHOT_H
