// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CLIPPEDCAMERA_H
#define REBEL_CLIPPEDCAMERA_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/camera.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class ClippedCamera : public Camera {
public:
    enum ProcessMode {
        CLIP_PROCESS_PHYSICS = 0,
        CLIP_PROCESS_IDLE = 1,
    };

    void add_exception(const Object* node);
    void add_exception_rid(const RID rid);
    void clear_exceptions();
    real_t get_clip_offset() const;
    int64_t get_collision_mask() const;
    bool get_collision_mask_bit(const int64_t bit) const;
    real_t get_margin() const;
    ClippedCamera::ProcessMode get_process_mode() const;
    bool is_clip_to_areas_enabled() const;
    bool is_clip_to_bodies_enabled() const;
    void remove_exception(const Object* node);
    void remove_exception_rid(const RID rid);
    void set_clip_to_areas(const bool enable);
    void set_clip_to_bodies(const bool enable);
    void set_collision_mask(const int64_t mask);
    void set_collision_mask_bit(const int64_t bit, const bool value);
    void set_margin(const real_t margin);
    void set_process_mode(const int64_t process_mode);

    static ClippedCamera* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ClippedCamera";
    }

    inline static const char* get_rebel_class_name() {
        return "ClippedCamera";
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
        rebel_method_bind* mb_add_exception;
        rebel_method_bind* mb_add_exception_rid;
        rebel_method_bind* mb_clear_exceptions;
        rebel_method_bind* mb_get_clip_offset;
        rebel_method_bind* mb_get_collision_mask;
        rebel_method_bind* mb_get_collision_mask_bit;
        rebel_method_bind* mb_get_margin;
        rebel_method_bind* mb_get_process_mode;
        rebel_method_bind* mb_is_clip_to_areas_enabled;
        rebel_method_bind* mb_is_clip_to_bodies_enabled;
        rebel_method_bind* mb_remove_exception;
        rebel_method_bind* mb_remove_exception_rid;
        rebel_method_bind* mb_set_clip_to_areas;
        rebel_method_bind* mb_set_clip_to_bodies;
        rebel_method_bind* mb_set_collision_mask;
        rebel_method_bind* mb_set_collision_mask_bit;
        rebel_method_bind* mb_set_margin;
        rebel_method_bind* mb_set_process_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CLIPPEDCAMERA_H
