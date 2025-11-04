// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLTFNODE_H
#define REBEL_GLTFNODE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GLTFNode : public Resource {
public:
    int64_t get_camera();
    PoolIntArray get_children();
    int64_t get_height();
    bool get_joint();
    int64_t get_light();
    int64_t get_mesh();
    int64_t get_parent();
    Quat get_rotation();
    Vector3 get_scale();
    int64_t get_skeleton();
    int64_t get_skin();
    Vector3 get_translation();
    Transform get_xform();
    void set_camera(const int64_t camera);
    void set_children(const PoolIntArray children);
    void set_height(const int64_t height);
    void set_joint(const bool joint);
    void set_light(const int64_t light);
    void set_mesh(const int64_t mesh);
    void set_parent(const int64_t parent);
    void set_rotation(const Quat rotation);
    void set_scale(const Vector3 scale);
    void set_skeleton(const int64_t skeleton);
    void set_skin(const int64_t skin);
    void set_translation(const Vector3 translation);
    void set_xform(const Transform xform);

    static GLTFNode* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GLTFNode";
    }

    inline static const char* get_rebel_class_name() {
        return "GLTFNode";
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
        rebel_method_bind* mb_get_camera;
        rebel_method_bind* mb_get_children;
        rebel_method_bind* mb_get_height;
        rebel_method_bind* mb_get_joint;
        rebel_method_bind* mb_get_light;
        rebel_method_bind* mb_get_mesh;
        rebel_method_bind* mb_get_parent;
        rebel_method_bind* mb_get_rotation;
        rebel_method_bind* mb_get_scale;
        rebel_method_bind* mb_get_skeleton;
        rebel_method_bind* mb_get_skin;
        rebel_method_bind* mb_get_translation;
        rebel_method_bind* mb_get_xform;
        rebel_method_bind* mb_set_camera;
        rebel_method_bind* mb_set_children;
        rebel_method_bind* mb_set_height;
        rebel_method_bind* mb_set_joint;
        rebel_method_bind* mb_set_light;
        rebel_method_bind* mb_set_mesh;
        rebel_method_bind* mb_set_parent;
        rebel_method_bind* mb_set_rotation;
        rebel_method_bind* mb_set_scale;
        rebel_method_bind* mb_set_skeleton;
        rebel_method_bind* mb_set_skin;
        rebel_method_bind* mb_set_translation;
        rebel_method_bind* mb_set_xform;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GLTFNODE_H
