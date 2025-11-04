// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLTFSKELETON_H
#define REBEL_GLTFSKELETON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class BoneAttachment;
class Skeleton;

class GLTFSkeleton : public Resource {
public:
    BoneAttachment* get_bone_attachment(const int64_t idx);
    int64_t get_bone_attachment_count();
    Dictionary get_bone_node();
    PoolIntArray get_joints();
    PoolIntArray get_roots();
    Skeleton* get_skeleton();
    Array get_unique_names();
    void set_bone_node(const Dictionary bone_node);
    void set_joints(const PoolIntArray joints);
    void set_roots(const PoolIntArray roots);
    void set_unique_names(const Array unique_names);

    static GLTFSkeleton* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GLTFSkeleton";
    }

    inline static const char* get_rebel_class_name() {
        return "GLTFSkeleton";
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
        rebel_method_bind* mb_get_bone_attachment;
        rebel_method_bind* mb_get_bone_attachment_count;
        rebel_method_bind* mb_get_bone_node;
        rebel_method_bind* mb_get_joints;
        rebel_method_bind* mb_get_roots;
        rebel_method_bind* mb_get_skeleton;
        rebel_method_bind* mb_get_unique_names;
        rebel_method_bind* mb_set_bone_node;
        rebel_method_bind* mb_set_joints;
        rebel_method_bind* mb_set_roots;
        rebel_method_bind* mb_set_unique_names;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GLTFSKELETON_H
