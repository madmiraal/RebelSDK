// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLTFSKIN_H
#define REBEL_GLTFSKIN_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Skin;

class GLTFSkin : public Resource {
public:
    Array get_inverse_binds();
    Dictionary get_joint_i_to_bone_i();
    Dictionary get_joint_i_to_name();
    PoolIntArray get_joints();
    PoolIntArray get_joints_original();
    PoolIntArray get_non_joints();
    PoolIntArray get_roots();
    int64_t get_skeleton();
    Ref<Skin> get_skin();
    int64_t get_skin_root();
    void set_inverse_binds(const Array inverse_binds);
    void set_joint_i_to_bone_i(const Dictionary joint_i_to_bone_i);
    void set_joint_i_to_name(const Dictionary joint_i_to_name);
    void set_joints(const PoolIntArray joints);
    void set_joints_original(const PoolIntArray joints_original);
    void set_non_joints(const PoolIntArray non_joints);
    void set_roots(const PoolIntArray roots);
    void set_skeleton(const int64_t skeleton);
    void set_skin(const Ref<Skin> skin);
    void set_skin_root(const int64_t skin_root);

    static GLTFSkin* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GLTFSkin";
    }

    inline static const char* get_rebel_class_name() {
        return "GLTFSkin";
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
        rebel_method_bind* mb_get_inverse_binds;
        rebel_method_bind* mb_get_joint_i_to_bone_i;
        rebel_method_bind* mb_get_joint_i_to_name;
        rebel_method_bind* mb_get_joints;
        rebel_method_bind* mb_get_joints_original;
        rebel_method_bind* mb_get_non_joints;
        rebel_method_bind* mb_get_roots;
        rebel_method_bind* mb_get_skeleton;
        rebel_method_bind* mb_get_skin;
        rebel_method_bind* mb_get_skin_root;
        rebel_method_bind* mb_set_inverse_binds;
        rebel_method_bind* mb_set_joint_i_to_bone_i;
        rebel_method_bind* mb_set_joint_i_to_name;
        rebel_method_bind* mb_set_joints;
        rebel_method_bind* mb_set_joints_original;
        rebel_method_bind* mb_set_non_joints;
        rebel_method_bind* mb_set_roots;
        rebel_method_bind* mb_set_skeleton;
        rebel_method_bind* mb_set_skin;
        rebel_method_bind* mb_set_skin_root;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GLTFSKIN_H
