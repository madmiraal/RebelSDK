// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PERFORMANCE_H
#define REBEL_PERFORMANCE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Performance : public Object {
public:
    enum Monitor {
        TIME_FPS = 0,
        TIME_PROCESS = 1,
        TIME_PHYSICS_PROCESS = 2,
        MEMORY_STATIC = 3,
        MEMORY_DYNAMIC = 4,
        MEMORY_STATIC_MAX = 5,
        MEMORY_DYNAMIC_MAX = 6,
        MEMORY_MESSAGE_BUFFER_MAX = 7,
        OBJECT_COUNT = 8,
        OBJECT_RESOURCE_COUNT = 9,
        OBJECT_NODE_COUNT = 10,
        OBJECT_ORPHAN_NODE_COUNT = 11,
        RENDER_OBJECTS_IN_FRAME = 12,
        RENDER_VERTICES_IN_FRAME = 13,
        RENDER_MATERIAL_CHANGES_IN_FRAME = 14,
        RENDER_SHADER_CHANGES_IN_FRAME = 15,
        RENDER_SURFACE_CHANGES_IN_FRAME = 16,
        RENDER_DRAW_CALLS_IN_FRAME = 17,
        RENDER_2D_ITEMS_IN_FRAME = 18,
        RENDER_2D_DRAW_CALLS_IN_FRAME = 19,
        RENDER_VIDEO_MEM_USED = 20,
        RENDER_TEXTURE_MEM_USED = 21,
        RENDER_VERTEX_MEM_USED = 22,
        RENDER_USAGE_VIDEO_MEM_TOTAL = 23,
        PHYSICS_2D_ACTIVE_OBJECTS = 24,
        PHYSICS_2D_COLLISION_PAIRS = 25,
        PHYSICS_2D_ISLAND_COUNT = 26,
        PHYSICS_3D_ACTIVE_OBJECTS = 27,
        PHYSICS_3D_COLLISION_PAIRS = 28,
        PHYSICS_3D_ISLAND_COUNT = 29,
        AUDIO_OUTPUT_LATENCY = 30,
        MONITOR_MAX = 31,
    };

    real_t get_monitor(const int64_t monitor) const;

    static inline Performance* get_singleton() {
        if (!Performance::singleton) {
            Performance::singleton = new Performance;
        }
        return Performance::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Performance";
    }

    inline static const char* get_rebel_class_name() {
        return "Performance";
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
    Performance();
    static Performance* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_get_monitor;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PERFORMANCE_H
