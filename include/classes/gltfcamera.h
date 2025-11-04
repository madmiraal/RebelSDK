// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLTFCAMERA_H
#define REBEL_GLTFCAMERA_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GLTFCamera : public Resource {
public:
    real_t get_fov_size() const;
    bool get_perspective() const;
    real_t get_zfar() const;
    real_t get_znear() const;
    void set_fov_size(const real_t fov_size);
    void set_perspective(const bool perspective);
    void set_zfar(const real_t zfar);
    void set_znear(const real_t znear);

    static GLTFCamera* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GLTFCamera";
    }

    inline static const char* get_rebel_class_name() {
        return "GLTFCamera";
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
        rebel_method_bind* mb_get_fov_size;
        rebel_method_bind* mb_get_perspective;
        rebel_method_bind* mb_get_zfar;
        rebel_method_bind* mb_get_znear;
        rebel_method_bind* mb_set_fov_size;
        rebel_method_bind* mb_set_perspective;
        rebel_method_bind* mb_set_zfar;
        rebel_method_bind* mb_set_znear;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GLTFCAMERA_H
