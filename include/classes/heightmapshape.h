// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_HEIGHTMAPSHAPE_H
#define REBEL_HEIGHTMAPSHAPE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/shape.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class HeightMapShape : public Shape {
public:
    PoolRealArray get_map_data() const;
    int64_t get_map_depth() const;
    int64_t get_map_width() const;
    void set_map_data(const PoolRealArray data);
    void set_map_depth(const int64_t height);
    void set_map_width(const int64_t width);

    static HeightMapShape* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "HeightMapShape";
    }

    inline static const char* get_rebel_class_name() {
        return "HeightMapShape";
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
        rebel_method_bind* mb_get_map_data;
        rebel_method_bind* mb_get_map_depth;
        rebel_method_bind* mb_get_map_width;
        rebel_method_bind* mb_set_map_data;
        rebel_method_bind* mb_set_map_depth;
        rebel_method_bind* mb_set_map_width;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_HEIGHTMAPSHAPE_H
