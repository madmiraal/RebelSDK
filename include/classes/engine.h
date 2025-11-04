// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ENGINE_H
#define REBEL_ENGINE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class MainLoop;

class Engine : public Object {
public:
    Dictionary get_author_info() const;
    Array get_copyright_info() const;
    Dictionary get_donor_info() const;
    int64_t get_frames_drawn();
    real_t get_frames_per_second() const;
    int64_t get_idle_frames() const;
    int64_t get_iterations_per_second() const;
    Dictionary get_license_info() const;
    String get_license_text() const;
    MainLoop* get_main_loop() const;
    int64_t get_physics_frames() const;
    real_t get_physics_interpolation_fraction() const;
    real_t get_physics_jitter_fix() const;
    Object* get_singleton(const String name) const;
    int64_t get_target_fps() const;
    real_t get_time_scale();
    Dictionary get_version_info() const;
    bool has_singleton(const String name) const;
    bool is_editor_hint() const;
    bool is_in_physics_frame() const;
    bool is_printing_error_messages() const;
    void set_editor_hint(const bool enabled);
    void set_iterations_per_second(const int64_t iterations_per_second);
    void set_physics_jitter_fix(const real_t physics_jitter_fix);
    void set_print_error_messages(const bool enabled);
    void set_target_fps(const int64_t target_fps);
    void set_time_scale(const real_t time_scale);

    static inline Engine* get_singleton() {
        if (!Engine::singleton) {
            Engine::singleton = new Engine;
        }
        return Engine::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Engine";
    }

    inline static const char* get_rebel_class_name() {
        return "Engine";
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
    Engine();
    static Engine* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_get_author_info;
        rebel_method_bind* mb_get_copyright_info;
        rebel_method_bind* mb_get_donor_info;
        rebel_method_bind* mb_get_frames_drawn;
        rebel_method_bind* mb_get_frames_per_second;
        rebel_method_bind* mb_get_idle_frames;
        rebel_method_bind* mb_get_iterations_per_second;
        rebel_method_bind* mb_get_license_info;
        rebel_method_bind* mb_get_license_text;
        rebel_method_bind* mb_get_main_loop;
        rebel_method_bind* mb_get_physics_frames;
        rebel_method_bind* mb_get_physics_interpolation_fraction;
        rebel_method_bind* mb_get_physics_jitter_fix;
        rebel_method_bind* mb_get_singleton;
        rebel_method_bind* mb_get_target_fps;
        rebel_method_bind* mb_get_time_scale;
        rebel_method_bind* mb_get_version_info;
        rebel_method_bind* mb_has_singleton;
        rebel_method_bind* mb_is_editor_hint;
        rebel_method_bind* mb_is_in_physics_frame;
        rebel_method_bind* mb_is_printing_error_messages;
        rebel_method_bind* mb_set_editor_hint;
        rebel_method_bind* mb_set_iterations_per_second;
        rebel_method_bind* mb_set_physics_jitter_fix;
        rebel_method_bind* mb_set_print_error_messages;
        rebel_method_bind* mb_set_target_fps;
        rebel_method_bind* mb_set_time_scale;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ENGINE_H
