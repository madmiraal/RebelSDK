// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ICALLS_H
#define REBEL_ICALLS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/rebelglobal.h"

#include <stdint.h>

namespace Rebel {
inline static AABB rebel_icall_aabb(
    rebel_method_bind* method_bind,
    const Object* object
) {
    AABB result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static AABB rebel_icall_aabb_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    AABB result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static AABB rebel_icall_aabb_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    AABB result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Array result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_aabb_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const AABB& arg0,
    const RID& arg1
) {
    Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_array_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const Array& arg0,
    const RID& arg1
) {
    Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_array_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Array& arg0,
    int64_t arg1
) {
    Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_nodepath(
    rebel_method_bind* method_bind,
    const Object* object,
    const NodePath& arg0
) {
    Array result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0
) {
    Array result;
    const void* args[1] = {
        (void*)(arg0) ? arg0->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_object_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Vector3& arg1
) {
    Array result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1
) {
    Array result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolByteArray& arg0
) {
    Array result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_poolvector2array_poolvector2array(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0,
    const PoolVector2Array& arg1
) {
    Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_poolvector2array_float_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0,
    double arg1,
    int64_t arg2
) {
    Array result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_poolvector2array_float_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0,
    double arg1,
    int64_t arg2,
    int64_t arg3
) {
    Array result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    Array result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_rect2_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Rect2& arg0,
    double arg1
) {
    Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    Array result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1
) {
    Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1
) {
    Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_string_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    int64_t arg2
) {
    Array result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_transform2d_object_transform2d(
    rebel_method_bind* method_bind,
    const Object* object,
    const Transform2D& arg0,
    const Object* arg1,
    const Transform2D& arg2
) {
    Array result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_transform2d_vector2_object_transform2d_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Transform2D& arg0,
    const Vector2& arg1,
    const Object* arg2,
    const Transform2D& arg3,
    const Vector2& arg4
) {
    Array result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_vector2_int_array_int_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    int64_t arg1,
    const Array& arg2,
    int64_t arg3,
    bool arg4,
    bool arg5
) {
    Array result;
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_vector2_int_int_array_int_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    int64_t arg1,
    int64_t arg2,
    const Array& arg3,
    int64_t arg4,
    bool arg5,
    bool arg6
) {
    Array result;
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0
) {
    Array result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_vector3_vector3_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    const RID& arg2
) {
    Array result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_vector3_int_array_int_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    int64_t arg1,
    const Array& arg2,
    int64_t arg3,
    bool arg4,
    bool arg5
) {
    Array result;
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_float_float_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    double arg1,
    int64_t arg2,
    int64_t arg3
) {
    Array result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_float_float_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    double arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4
) {
    Array result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    Array result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1
) {
    Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Array rebel_icall_array_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Basis rebel_icall_basis(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Basis result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Color rebel_icall_color(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Color result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Color rebel_icall_color_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    Color result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Color rebel_icall_color_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    Color result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Color rebel_icall_color_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1
) {
    Color result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Color rebel_icall_color_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0
) {
    Color result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Color rebel_icall_color_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0
) {
    Color result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Color rebel_icall_color_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    Color result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Color rebel_icall_color_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    Color result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Dictionary result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0
) {
    Dictionary result;
    const void* args[1] = {
        (void*)(arg0) ? arg0->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_poolstringarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolStringArray& arg0
) {
    Dictionary result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_poolvector2array(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0
) {
    Dictionary result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    Dictionary result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1
) {
    Dictionary result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Variant& arg1
) {
    Dictionary result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_string_variant_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Variant& arg1,
    const Variant& arg2
) {
    Dictionary result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_variant_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0,
    const Variant& arg1
) {
    Dictionary result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_vector2_vector2_array_int_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    const Array& arg2,
    int64_t arg3,
    bool arg4,
    bool arg5
) {
    Dictionary result;
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_vector3_vector3_array_int_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    const Array& arg2,
    int64_t arg3,
    bool arg4,
    bool arg5
) {
    Dictionary result;
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0
) {
    Dictionary result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    Dictionary result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Dictionary rebel_icall_dictionary_int_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1,
    const Variant& arg2
) {
    Dictionary result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static NodePath rebel_icall_nodepath(
    rebel_method_bind* method_bind,
    const Object* object
) {
    NodePath result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static NodePath rebel_icall_nodepath_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0
) {
    NodePath result;
    const void* args[1] = {
        (void*)(arg0) ? arg0->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static NodePath rebel_icall_nodepath_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    NodePath result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static NodePath rebel_icall_nodepath_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    bool arg1
) {
    NodePath result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Object* rebel_icall_object(
    rebel_method_bind* method_bind,
    const Object* object
) {
    rebel_object* result = nullptr;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_nodepath(
    rebel_method_bind* method_bind,
    const Object* object,
    const NodePath& arg0
) {
    rebel_object* result = nullptr;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0
) {
    rebel_object* result = nullptr;
    const void* args[1] = {
        (void*)(arg0) ? arg0->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_object_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_object_string_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    const String& arg2,
    const String& arg3
) {
    rebel_object* result = nullptr;
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_object_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Vector2& arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    rebel_object* result = nullptr;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_rect2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Rect2& arg0
) {
    rebel_object* result = nullptr;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    rebel_object* result = nullptr;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string_dictionary(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Dictionary& arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    bool arg2
) {
    rebel_object* result = nullptr;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Vector2& arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string_bool_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1,
    const String& arg2
) {
    rebel_object* result = nullptr;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1,
    bool arg2
) {
    rebel_object* result = nullptr;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string_int_float_int_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    double arg2,
    int64_t arg3,
    const Object* arg4
) {
    rebel_object* result = nullptr;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)(arg4) ? arg4->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    int64_t arg2
) {
    rebel_object* result = nullptr;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_string_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3
) {
    rebel_object* result = nullptr;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_transform2d_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Transform2D& arg0,
    const Vector2& arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0
) {
    rebel_object* result = nullptr;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_vector2_bool_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    bool arg1,
    bool arg2,
    bool arg3
) {
    rebel_object* result = nullptr;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0
) {
    rebel_object* result = nullptr;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_vector3_bool_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    bool arg1,
    bool arg2,
    bool arg3
) {
    rebel_object* result = nullptr;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0
) {
    rebel_object* result = nullptr;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_bool_object(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0,
    const Object* arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0,
    bool arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0
) {
    rebel_object* result = nullptr;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    bool arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    rebel_object* result = nullptr;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_int_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Vector2& arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    rebel_object* result = nullptr;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_int_int_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const Vector2& arg2
) {
    rebel_object* result = nullptr;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Object* rebel_icall_object_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    int64_t arg2
) {
    rebel_object* result = nullptr;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    if (result) {
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                result
            );
    }
    return (Object*)result;
}

inline static Plane rebel_icall_plane(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Plane result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Plane rebel_icall_plane_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    Plane result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolByteArray rebel_icall_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object
) {
    PoolByteArray result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolByteArray rebel_icall_poolbytearray_object_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const PoolByteArray& arg1
) {
    PoolByteArray result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolByteArray rebel_icall_poolbytearray_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolByteArray& arg0
) {
    PoolByteArray result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolByteArray rebel_icall_poolbytearray_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    PoolByteArray result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolByteArray rebel_icall_poolbytearray_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    PoolByteArray result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolByteArray rebel_icall_poolbytearray_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    PoolByteArray result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolByteArray rebel_icall_poolbytearray_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    PoolByteArray result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolByteArray rebel_icall_poolbytearray_int_poolbytearray_object(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const PoolByteArray& arg1,
    const Object* arg2
) {
    PoolByteArray result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolByteArray rebel_icall_poolbytearray_int_poolbytearray_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const PoolByteArray& arg1,
    const PoolByteArray& arg2
) {
    PoolByteArray result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolColorArray rebel_icall_poolcolorarray(
    rebel_method_bind* method_bind,
    const Object* object
) {
    PoolColorArray result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolIntArray rebel_icall_poolintarray(
    rebel_method_bind* method_bind,
    const Object* object
) {
    PoolIntArray result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolIntArray rebel_icall_poolintarray_poolvector2array(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0
) {
    PoolIntArray result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolIntArray rebel_icall_poolintarray_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    PoolIntArray result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolIntArray rebel_icall_poolintarray_string_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3
) {
    PoolIntArray result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolIntArray rebel_icall_poolintarray_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    PoolIntArray result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolIntArray rebel_icall_poolintarray_int_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    double arg2
) {
    PoolIntArray result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolIntArray rebel_icall_poolintarray_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    PoolIntArray result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolRealArray rebel_icall_poolrealarray(
    rebel_method_bind* method_bind,
    const Object* object
) {
    PoolRealArray result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolRealArray rebel_icall_poolrealarray_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    PoolRealArray result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolStringArray rebel_icall_poolstringarray(
    rebel_method_bind* method_bind,
    const Object* object
) {
    PoolStringArray result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolStringArray rebel_icall_poolstringarray_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0
) {
    PoolStringArray result;
    const void* args[1] = {
        (void*)(arg0) ? arg0->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolStringArray rebel_icall_poolstringarray_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    PoolStringArray result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolStringArray rebel_icall_poolstringarray_string_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    bool arg2
) {
    PoolStringArray result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolStringArray rebel_icall_poolstringarray_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1
) {
    PoolStringArray result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolStringArray rebel_icall_poolstringarray_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    PoolStringArray result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolStringArray rebel_icall_poolstringarray_int_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1
) {
    PoolStringArray result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector2Array rebel_icall_poolvector2array(
    rebel_method_bind* method_bind,
    const Object* object
) {
    PoolVector2Array result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector2Array rebel_icall_poolvector2array_poolvector2array(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0
) {
    PoolVector2Array result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector2Array rebel_icall_poolvector2array_vector2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1
) {
    PoolVector2Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector2Array rebel_icall_poolvector2array_vector2_vector2_vector2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    const Vector2& arg2,
    const Vector2& arg3
) {
    PoolVector2Array result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector2Array rebel_icall_poolvector2array_vector2_vector2_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    bool arg2
) {
    PoolVector2Array result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector2Array rebel_icall_poolvector2array_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    PoolVector2Array result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector2Array rebel_icall_poolvector2array_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1
) {
    PoolVector2Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector2Array rebel_icall_poolvector2array_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    PoolVector2Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector3Array rebel_icall_poolvector3array(
    rebel_method_bind* method_bind,
    const Object* object
) {
    PoolVector3Array result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector3Array rebel_icall_poolvector3array_poolvector3array_plane(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector3Array& arg0,
    const Plane& arg1
) {
    PoolVector3Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector3Array rebel_icall_poolvector3array_vector3_vector3_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    const Array& arg2
) {
    PoolVector3Array result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector3Array rebel_icall_poolvector3array_vector3_vector3_vector3_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    const Vector3& arg2,
    const Vector3& arg3
) {
    PoolVector3Array result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector3Array rebel_icall_poolvector3array_vector3_vector3_vector3_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    const Vector3& arg2,
    double arg3
) {
    PoolVector3Array result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector3Array rebel_icall_poolvector3array_vector3_vector3_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    bool arg2
) {
    PoolVector3Array result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector3Array rebel_icall_poolvector3array_vector3_vector3_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    double arg2,
    double arg3
) {
    PoolVector3Array result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector3Array rebel_icall_poolvector3array_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1
) {
    PoolVector3Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static PoolVector3Array rebel_icall_poolvector3array_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    PoolVector3Array result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Quat rebel_icall_quat(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Quat result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid(
    rebel_method_bind* method_bind,
    const Object* object
) {
    RID result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1
) {
    RID result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    RID result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_rid_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const RID& arg1
) {
    RID result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_rid_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const String& arg1
) {
    RID result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_rid_transform_rid_transform(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Transform& arg1,
    const RID& arg2,
    const Transform& arg3
) {
    RID result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_rid_vector3_rid_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Vector3& arg1,
    const RID& arg2,
    const Vector3& arg3
) {
    RID result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    RID result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_vector2_rid_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const RID& arg1,
    const RID& arg2
) {
    RID result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_vector2_vector2_rid_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    const RID& arg2,
    const RID& arg3
) {
    RID result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_vector2_vector2_vector2_rid_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    const Vector2& arg2,
    const RID& arg3,
    const RID& arg4
) {
    RID result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    RID result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    bool arg1
) {
    RID result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static RID rebel_icall_rid_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    double arg2
) {
    RID result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Rect2 rebel_icall_rect2(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Rect2 result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Rect2 rebel_icall_rect2_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1
) {
    Rect2 result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Rect2 rebel_icall_rect2_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    Rect2 result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Rect2 rebel_icall_rect2_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    Rect2 result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string(
    rebel_method_bind* method_bind,
    const Object* object
) {
    String result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_array_array_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Array& arg0,
    const Array& arg1,
    int64_t arg2,
    int64_t arg3
) {
    String result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_dictionary(
    rebel_method_bind* method_bind,
    const Object* object,
    const Dictionary& arg0
) {
    String result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0
) {
    String result;
    const void* args[1] = {
        (void*)(arg0) ? arg0->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1
) {
    String result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolByteArray& arg0
) {
    String result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    String result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    String result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_string_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1
) {
    String result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_string_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    bool arg2
) {
    String result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_string_string_bool_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    bool arg2,
    int64_t arg3,
    int64_t arg4
) {
    String result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1
) {
    String result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0
) {
    String result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_variant_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0,
    const String& arg1,
    bool arg2
) {
    String result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_variant_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0,
    bool arg1
) {
    String result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0
) {
    String result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0
) {
    String result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    String result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    bool arg1
) {
    String result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static String rebel_icall_string_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    String result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Transform rebel_icall_transform(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Transform result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Transform rebel_icall_transform_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    Transform result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Transform rebel_icall_transform_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    Transform result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Transform rebel_icall_transform_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0
) {
    Transform result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Transform rebel_icall_transform_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    Transform result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Transform2D rebel_icall_transform2d(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Transform2D result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Transform2D rebel_icall_transform2d_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0
) {
    Transform2D result;
    const void* args[1] = {
        (void*)(arg0) ? arg0->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Transform2D rebel_icall_transform2d_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    Transform2D result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Transform2D rebel_icall_transform2d_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    Transform2D result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Transform2D rebel_icall_transform2d_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    Transform2D result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Transform2D rebel_icall_transform2d_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    Transform2D result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Variant result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const Array& arg0
) {
    Variant result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_array_array_int_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const Array& arg0,
    const Array& arg1,
    int64_t arg2,
    const Array& arg3
) {
    Variant result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_array_object_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Array& arg0,
    const Object* arg1,
    bool arg2
) {
    Variant result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_nodepath(
    rebel_method_bind* method_bind,
    const Object* object,
    const NodePath& arg0
) {
    Variant result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_object_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1
) {
    Variant result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1
) {
    Variant result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    Variant result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_rid_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const String& arg1
) {
    Variant result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    Variant result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    Variant result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_string_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Array& arg1
) {
    Variant result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1
) {
    Variant result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_string_string_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const Array& arg2
) {
    Variant result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_string_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const Variant& arg2
) {
    Variant result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1
) {
    Variant result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0
) {
    Variant result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_variant_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0,
    bool arg1
) {
    Variant result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0
) {
    Variant result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_vector2_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Object* arg1
) {
    Variant result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_vector2_vector2_vector2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    const Vector2& arg2,
    const Vector2& arg3
) {
    Variant result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_vector3_vector3_vector3_vector3_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    const Vector3& arg2,
    const Vector3& arg3,
    const Vector3& arg4
) {
    Variant result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0
) {
    Variant result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    Variant result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_int_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1,
    const String& arg2
) {
    Variant result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1
) {
    Variant result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Variant rebel_icall_variant_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    Variant result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Vector2 result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    Vector2 result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_string_string_string_string_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const String& arg2,
    const String& arg3,
    double arg4
) {
    Vector2 result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_string_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    double arg1
) {
    Vector2 result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1
) {
    Vector2 result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0
) {
    Vector2 result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_vector2_vector2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    const Vector2& arg2
) {
    Vector2 result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_vector2_vector2_vector2_bool_int_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    const Vector2& arg2,
    bool arg3,
    int64_t arg4,
    double arg5,
    bool arg6
) {
    Vector2 result;
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_vector2_vector2_bool_int_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    bool arg2,
    int64_t arg3,
    double arg4,
    bool arg5
) {
    Vector2 result;
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_vector2_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    bool arg1
) {
    Vector2 result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0
) {
    Vector2 result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0
) {
    Vector2 result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    bool arg1
) {
    Vector2 result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_float_float_int(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    double arg1,
    int64_t arg2
) {
    Vector2 result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    Vector2 result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_int_object_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Object* arg1,
    const Vector2& arg2
) {
    Vector2 result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1
) {
    Vector2 result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    Vector2 result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector2 rebel_icall_vector2_int_int_object_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const Object* arg2,
    const Vector2& arg3
) {
    Vector2 result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3(
    rebel_method_bind* method_bind,
    const Object* object
) {
    Vector3 result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    Vector3 result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0
) {
    Vector3 result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_vector2_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    double arg1
) {
    Vector3 result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0
) {
    Vector3 result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_vector3_vector3_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    const Vector3& arg2
) {
    Vector3 result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_vector3_vector3_vector3_bool_int_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    const Vector3& arg2,
    bool arg3,
    int64_t arg4,
    double arg5,
    bool arg6
) {
    Vector3 result;
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_vector3_vector3_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    bool arg2
) {
    Vector3 result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_vector3_vector3_bool_int_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    bool arg2,
    int64_t arg3,
    double arg4,
    bool arg5
) {
    Vector3 result;
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0
) {
    Vector3 result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    bool arg1
) {
    Vector3 result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    Vector3 result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1
) {
    Vector3 result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static Vector3 rebel_icall_vector3_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    int64_t arg2
) {
    Vector3 result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool(
    rebel_method_bind* method_bind,
    const Object* object
) {
    bool result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_nodepath(
    rebel_method_bind* method_bind,
    const Object* object,
    const NodePath& arg0
) {
    bool result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0
) {
    bool result;
    const void* args[1] = {
        (void*)(arg0) ? arg0->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_nodepath_object_nodepath_variant_float_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const NodePath& arg1,
    const Object* arg2,
    const NodePath& arg3,
    const Variant& arg4,
    double arg5,
    int64_t arg6,
    int64_t arg7,
    double arg8
) {
    bool result;
    const void* args[9] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7,
        (void*)&arg8
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_nodepath_variant_object_nodepath_float_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const NodePath& arg1,
    const Variant& arg2,
    const Object* arg3,
    const NodePath& arg4,
    double arg5,
    int64_t arg6,
    int64_t arg7,
    double arg8
) {
    bool result;
    const void* args[9] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)(arg3) ? arg3->owner : nullptr,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7,
        (void*)&arg8
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_nodepath_variant_variant_float_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const NodePath& arg1,
    const Variant& arg2,
    const Variant& arg3,
    double arg4,
    int64_t arg5,
    int64_t arg6,
    double arg7
) {
    bool result;
    const void* args[8] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1
) {
    bool result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1
) {
    bool result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_string_object_string_variant_float_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    const Object* arg2,
    const String& arg3,
    const Variant& arg4,
    double arg5,
    int64_t arg6,
    int64_t arg7,
    double arg8
) {
    bool result;
    const void* args[9] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7,
        (void*)&arg8
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_string_variant_object_string_float_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    const Variant& arg2,
    const Object* arg3,
    const String& arg4,
    double arg5,
    int64_t arg6,
    int64_t arg7,
    double arg8
) {
    bool result;
    const void* args[9] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)(arg3) ? arg3->owner : nullptr,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7,
        (void*)&arg8
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_string_variant_variant_float_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    const Variant& arg2,
    const Variant& arg3,
    double arg4,
    int64_t arg5,
    int64_t arg6,
    double arg7
) {
    bool result;
    const void* args[8] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    bool arg2
) {
    bool result;
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    bool arg1
) {
    bool result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_float_string_variant_variant_variant_variant_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    double arg1,
    const String& arg2,
    const Variant& arg3,
    const Variant& arg4,
    const Variant& arg5,
    const Variant& arg6,
    const Variant& arg7
) {
    bool result;
    const void* args[8] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1
) {
    bool result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_object_int_string_int_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1,
    const String& arg2,
    int64_t arg3,
    const String& arg4,
    int64_t arg5
) {
    bool result;
    const void* args[6] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_poolbytearray_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolByteArray& arg0,
    const PoolByteArray& arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_poolvector2array(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0
) {
    bool result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    bool result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_rid_transform_vector3_bool_object_bool_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Transform& arg1,
    const Vector3& arg2,
    bool arg3,
    const Object* arg4,
    bool arg5,
    const Array& arg6
) {
    bool result;
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)(arg4) ? arg4->owner : nullptr,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_rid_transform2d_vector2_bool_float_object_bool_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Transform2D& arg1,
    const Vector2& arg2,
    bool arg3,
    double arg4,
    const Object* arg5,
    bool arg6,
    const Array& arg7
) {
    bool result;
    const void* args[8] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)(arg5) ? arg5->owner : nullptr,
        (void*)&arg6,
        (void*)&arg7
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_rid_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    int64_t arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    bool result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_dictionary(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Dictionary& arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_object_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    const String& arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    bool arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    int64_t arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Variant& arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1,
    bool arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_bool_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1,
    int64_t arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_int_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    const String& arg2,
    int64_t arg3
) {
    bool result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3
) {
    bool result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_string_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4
) {
    bool result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_transform_vector3_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Transform& arg0,
    const Vector3& arg1,
    bool arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_transform2d_object_transform2d(
    rebel_method_bind* method_bind,
    const Object* object,
    const Transform2D& arg0,
    const Object* arg1,
    const Transform2D& arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_transform2d_vector2_object_transform2d_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Transform2D& arg0,
    const Vector2& arg1,
    const Object* arg2,
    const Transform2D& arg3,
    const Vector2& arg4
) {
    bool result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_transform2d_vector2_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Transform2D& arg0,
    const Vector2& arg1,
    bool arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0
) {
    bool result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_vector2_poolvector2array(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const PoolVector2Array& arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_vector2_rect2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Rect2& arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_vector2_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Variant& arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_vector2_variant_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Variant& arg1,
    const Object* arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_vector2_vector2_vector2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    const Vector2& arg2,
    const Vector2& arg3
) {
    bool result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_vector2_vector2_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    double arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_vector2_bool_float_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    bool arg1,
    double arg2,
    const Object* arg3
) {
    bool result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)(arg3) ? arg3->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0
) {
    bool result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0
) {
    bool result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0
) {
    bool result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    bool result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_int_poolbytearray_poolbytearray_object(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const PoolByteArray& arg1,
    const PoolByteArray& arg2,
    const Object* arg3
) {
    bool result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)(arg3) ? arg3->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_int_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1,
    const String& arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    bool result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_int_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    bool arg2
) {
    bool result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static bool rebel_icall_bool_int_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4
) {
    bool result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float(
    rebel_method_bind* method_bind,
    const Object* object
) {
    double result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_object_vector2_string_string_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Vector2& arg1,
    const String& arg2,
    const String& arg3,
    const Color& arg4
) {
    double result;
    const void* args[5] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    double result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_rid_vector2_int_int_color_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Vector2& arg1,
    int64_t arg2,
    int64_t arg3,
    const Color& arg4,
    bool arg5
) {
    double result;
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    double result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_rid_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    int64_t arg2
) {
    double result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    double result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_string_object_float_bool_float_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    double arg2,
    bool arg3,
    double arg4,
    int64_t arg5,
    bool arg6
) {
    double result;
    const void* args[7] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1
) {
    double result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1
) {
    double result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0
) {
    double result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_vector2_vector2_vector2_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    const Vector2& arg2,
    double arg3
) {
    double result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0
) {
    double result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0
) {
    double result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    double arg1
) {
    double result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_float_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    double arg1,
    double arg2
) {
    double result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_float_float_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    double arg1,
    double arg2,
    double arg3
) {
    double result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    double result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1
) {
    double result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_int_float_bool_float_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    bool arg2,
    double arg3,
    int64_t arg4,
    bool arg5
) {
    double result;
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static double rebel_icall_float_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    double result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int(
    rebel_method_bind* method_bind,
    const Object* object
) {
    int64_t result;
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_dictionary(
    rebel_method_bind* method_bind,
    const Object* object,
    const Dictionary& arg0
) {
    int64_t result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_nodepath(
    rebel_method_bind* method_bind,
    const Object* object,
    const NodePath& arg0
) {
    int64_t result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0
) {
    int64_t result;
    const void* args[1] = {
        (void*)(arg0) ? arg0->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object_object_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1,
    const Object* arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object_object_object_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1,
    const Object* arg2,
    const Object* arg3
) {
    int64_t result;
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)(arg3) ? arg3->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    const Variant& arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object_string_variant_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    const Variant& arg2,
    int64_t arg3
) {
    int64_t result;
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object_string_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    int64_t arg2,
    double arg3
) {
    int64_t result;
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object_transform_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Transform& arg1,
    const Object* arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object_transform2d_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Transform2D& arg1,
    const Object* arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object_bool_string_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    bool arg1,
    const String& arg2,
    const Object* arg3
) {
    int64_t result;
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)(arg3) ? arg3->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_object_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1,
    int64_t arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolByteArray& arg0
) {
    int64_t result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_poolbytearray_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolByteArray& arg0,
    int64_t arg1,
    int64_t arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    int64_t result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    int64_t result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_object_string_array_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    const String& arg2,
    const Array& arg3,
    int64_t arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    int64_t arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const PoolByteArray& arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_poolstringarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const PoolStringArray& arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_poolstringarray_bool_array_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const PoolStringArray& arg1,
    bool arg2,
    const Array& arg3,
    bool arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_poolstringarray_bool_poolstringarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const PoolStringArray& arg1,
    bool arg2,
    const PoolStringArray& arg3
) {
    int64_t result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_poolstringarray_bool_int_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const PoolStringArray& arg1,
    bool arg2,
    int64_t arg3,
    const PoolByteArray& arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_poolstringarray_bool_int_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const PoolStringArray& arg1,
    bool arg2,
    int64_t arg3,
    const String& arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_string_dictionary_array_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const Dictionary& arg2,
    const Array& arg3,
    const Array& arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    int64_t arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_float_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    double arg1,
    const String& arg2,
    const String& arg3
) {
    int64_t result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_int_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    const PoolByteArray& arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_int_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    const String& arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_int_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    const String& arg2,
    int64_t arg3
) {
    int64_t result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_int_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    bool arg2,
    bool arg3
) {
    int64_t result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    int64_t arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_string_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_transform_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Transform& arg0,
    double arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0
) {
    int64_t result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_variant_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0,
    bool arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0
) {
    int64_t result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_vector2_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Object* arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_vector2_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    bool arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_vector2_float_float_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    double arg1,
    double arg2,
    int64_t arg3,
    int64_t arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0
) {
    int64_t result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_vector3_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    bool arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0
) {
    int64_t result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0,
    bool arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    int64_t result;
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const PoolByteArray& arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_poolbytearray_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const PoolByteArray& arg1,
    const PoolByteArray& arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_poolstringarray_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const PoolStringArray& arg1,
    bool arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_string_poolstringarray_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1,
    const PoolStringArray& arg2,
    const PoolByteArray& arg3
) {
    int64_t result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_string_poolstringarray_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1,
    const PoolStringArray& arg2,
    const String& arg3
) {
    int64_t result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1,
    int64_t arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Vector2& arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    bool arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_float_object_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    const Object* arg2,
    double arg3,
    double arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_float_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    const String& arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_float_vector3_quat_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    const Vector3& arg2,
    const Quat& arg3,
    const Vector3& arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    bool arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_float_float_vector2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    double arg2,
    const Vector2& arg3,
    const Vector2& arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    int64_t result;
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_int_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const String& arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_int_string_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const String& arg2,
    const String& arg3,
    int64_t arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    double arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    int64_t arg2
) {
    int64_t result;
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3
) {
    int64_t result;
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static int64_t rebel_icall_int_int_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4
) {
    int64_t result;
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, &result);
    return result;
}

inline static void rebel_icall_void(
    rebel_method_bind* method_bind,
    const Object* object
) {
    const void* args[1] {};
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_aabb(
    rebel_method_bind* method_bind,
    const Object* object,
    const AABB& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const Array& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_basis(
    rebel_method_bind* method_bind,
    const Object* object,
    const Basis& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const Color& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_dictionary(
    rebel_method_bind* method_bind,
    const Object* object,
    const Dictionary& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_nodepath(
    rebel_method_bind* method_bind,
    const Object* object,
    const NodePath& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_nodepath_object_int_rect2_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const NodePath& arg0,
    const Object* arg1,
    int64_t arg2,
    const Rect2& arg3,
    int64_t arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_nodepath_poolrealarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const NodePath& arg0,
    const PoolRealArray& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_nodepath_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const NodePath& arg0,
    const Variant& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_nodepath_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const NodePath& arg0,
    bool arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0
) {
    const void* args[1] = {
        (void*)(arg0) ? arg0->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_color_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Color& arg1,
    bool arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1
) {
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_object_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1,
    const Object* arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_object_object_transform2d_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1,
    const Object* arg2,
    const Transform2D& arg3,
    const Color& arg4
) {
    const void* args[5] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_object_rect2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1,
    const Rect2& arg2,
    const Vector2& arg3
) {
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_object_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1,
    const String& arg2,
    const Variant& arg3
) {
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_object_vector3_vector3_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1,
    const Vector3& arg2,
    const Vector3& arg3,
    int64_t arg4
) {
    const void* args[5] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_object_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_object_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Object* arg1,
    int64_t arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_rect2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Rect2& arg1
) {
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_rect2_rect2_color_bool_object_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Rect2& arg1,
    const Rect2& arg2,
    const Color& arg3,
    bool arg4,
    const Object* arg5,
    bool arg6
) {
    const void* args[7] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)(arg5) ? arg5->owner : nullptr,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_rect2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Rect2& arg1,
    const Vector2& arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_rect2_bool_color_bool_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Rect2& arg1,
    bool arg2,
    const Color& arg3,
    bool arg4,
    const Object* arg5
) {
    const void* args[6] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)(arg5) ? arg5->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1
) {
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_string_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    const Array& arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_string_poolstringarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    const PoolStringArray& arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    const Variant& arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_string_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const String& arg1,
    int64_t arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_vector2_color_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Vector2& arg1,
    const Color& arg2,
    const Object* arg3
) {
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)(arg3) ? arg3->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_vector2_string_color_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Vector2& arg1,
    const String& arg2,
    const Color& arg3,
    int64_t arg4
) {
    const void* args[5] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_vector2_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    const Vector2& arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    bool arg1
) {
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_bool_object_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    bool arg1,
    const Object* arg2,
    const Object* arg3
) {
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)(arg3) ? arg3->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    double arg1
) {
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_float_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    double arg1,
    const Color& arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_float_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    double arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1
) {
    const void* args[2] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_int_object_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1,
    const Object* arg2,
    const Vector2& arg3
) {
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_int_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1,
    const String& arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_int_transform(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1,
    const Transform& arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_int_variant_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1,
    const Variant& arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_int_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1,
    const Vector2& arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_int_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1,
    int64_t arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_object_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Object* arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4
) {
    const void* args[5] = {
        (void*)(arg0) ? arg0->owner : nullptr,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_plane(
    rebel_method_bind* method_bind,
    const Object* object,
    const Plane& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolByteArray& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolbytearray_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolByteArray& arg0,
    const String& arg1,
    const String& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolcolorarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolColorArray& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolintarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolIntArray& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolrealarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolRealArray& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolstringarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolStringArray& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolstringarray_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolStringArray& arg0,
    const Array& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolstringarray_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolStringArray& arg0,
    const String& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolstringarray_bool_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolStringArray& arg0,
    bool arg1,
    const String& arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolstringarray_bool_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolStringArray& arg0,
    bool arg1,
    bool arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolstringarray_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolStringArray& arg0,
    int64_t arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector2array(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector2array_color_poolvector2array_object_object_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0,
    const Color& arg1,
    const PoolVector2Array& arg2,
    const Object* arg3,
    const Object* arg4,
    bool arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)(arg3) ? arg3->owner : nullptr,
        (void*)(arg4) ? arg4->owner : nullptr,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector2array_color_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0,
    const Color& arg1,
    double arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector2array_poolcolorarray_poolvector2array_object_object_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0,
    const PoolColorArray& arg1,
    const PoolVector2Array& arg2,
    const Object* arg3,
    const Object* arg4,
    bool arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)(arg3) ? arg3->owner : nullptr,
        (void*)(arg4) ? arg4->owner : nullptr,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector2array_poolcolorarray_poolvector2array_object_float_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0,
    const PoolColorArray& arg1,
    const PoolVector2Array& arg2,
    const Object* arg3,
    double arg4,
    const Object* arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)(arg3) ? arg3->owner : nullptr,
        (void*)&arg4,
        (void*)(arg5) ? arg5->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector2array_poolcolorarray_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0,
    const PoolColorArray& arg1,
    double arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector2array_poolintarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0,
    const PoolIntArray& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector2array_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector2Array& arg0,
    int64_t arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector3array(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector3Array& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector3array_object_bool_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector3Array& arg0,
    const Object* arg1,
    bool arg2,
    const Color& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector3array_object_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector3Array& arg0,
    const Object* arg1,
    bool arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_poolvector3array_poolvector2array_poolcolorarray_poolvector2array_poolvector3array_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const PoolVector3Array& arg0,
    const PoolVector2Array& arg1,
    const PoolColorArray& arg2,
    const PoolVector2Array& arg3,
    const PoolVector3Array& arg4,
    const Array& arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_quat(
    rebel_method_bind* method_bind,
    const Object* object,
    const Quat& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_aabb(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const AABB& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_basis(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Basis& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Color& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_color_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Color& arg1,
    double arg2,
    double arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_object_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Object* arg1,
    const String& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_object_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Object* arg1,
    const String& arg2,
    const Variant& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Object* arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_object_int_int_int_int_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Object* arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4,
    int64_t arg5,
    int64_t arg6,
    int64_t arg7,
    int64_t arg8,
    int64_t arg9
) {
    const void* args[10] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7,
        (void*)&arg8,
        (void*)&arg9
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_plane(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Plane& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const PoolByteArray& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_poolintarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const PoolIntArray& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_poolintarray_poolvector2array_poolcolorarray_poolvector2array_poolintarray_poolrealarray_rid_int_rid_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const PoolIntArray& arg1,
    const PoolVector2Array& arg2,
    const PoolColorArray& arg3,
    const PoolVector2Array& arg4,
    const PoolIntArray& arg5,
    const PoolRealArray& arg6,
    const RID& arg7,
    int64_t arg8,
    const RID& arg9,
    bool arg10,
    bool arg11
) {
    const void* args[12] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7,
        (void*)&arg8,
        (void*)&arg9,
        (void*)&arg10,
        (void*)&arg11
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_poolrealarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const PoolRealArray& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_poolvector2array(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const PoolVector2Array& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_poolvector2array_poolcolorarray_poolvector2array_rid_rid_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const PoolVector2Array& arg1,
    const PoolColorArray& arg2,
    const PoolVector2Array& arg3,
    const RID& arg4,
    const RID& arg5,
    bool arg6
) {
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_poolvector2array_poolcolorarray_poolvector2array_rid_float_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const PoolVector2Array& arg1,
    const PoolColorArray& arg2,
    const PoolVector2Array& arg3,
    const RID& arg4,
    double arg5,
    const RID& arg6
) {
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_poolvector2array_poolcolorarray_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const PoolVector2Array& arg1,
    const PoolColorArray& arg2,
    double arg3,
    bool arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_poolvector2array_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const PoolVector2Array& arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const RID& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rid_rid_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const RID& arg1,
    const RID& arg2,
    const RID& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rid_rid_int_rect2(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const RID& arg1,
    const RID& arg2,
    int64_t arg3,
    const Rect2& arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rid_transform_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const RID& arg1,
    const Transform& arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rid_transform2d(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const RID& arg1,
    const Transform2D& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rid_transform2d_color_rid_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const RID& arg1,
    const Transform2D& arg2,
    const Color& arg3,
    const RID& arg4,
    const RID& arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rid_transform2d_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const RID& arg1,
    const Transform2D& arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rid_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const RID& arg1,
    const Vector2& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const RID& arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rid_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const RID& arg1,
    int64_t arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rect2(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Rect2& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rect2_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Rect2& arg1,
    const Color& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rect2_rid_rect2_color_bool_rid_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Rect2& arg1,
    const RID& arg2,
    const Rect2& arg3,
    const Color& arg4,
    bool arg5,
    const RID& arg6,
    bool arg7
) {
    const void* args[8] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rect2_rid_bool_color_bool_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Rect2& arg1,
    const RID& arg2,
    bool arg3,
    const Color& arg4,
    bool arg5,
    const RID& arg6
) {
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rect2_rect2_color_bool_object_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Rect2& arg1,
    const Rect2& arg2,
    const Color& arg3,
    bool arg4,
    const Object* arg5,
    bool arg6
) {
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)(arg5) ? arg5->owner : nullptr,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rect2_rect2_rid_vector2_vector2_int_int_bool_color_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Rect2& arg1,
    const Rect2& arg2,
    const RID& arg3,
    const Vector2& arg4,
    const Vector2& arg5,
    int64_t arg6,
    int64_t arg7,
    bool arg8,
    const Color& arg9,
    const RID& arg10
) {
    const void* args[11] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7,
        (void*)&arg8,
        (void*)&arg9,
        (void*)&arg10
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rect2_bool_color_bool_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Rect2& arg1,
    bool arg2,
    const Color& arg3,
    bool arg4,
    const Object* arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)(arg5) ? arg5->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_rect2_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Rect2& arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const String& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_string_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const String& arg1,
    const RID& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const String& arg1,
    const Variant& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_transform(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Transform& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_transform2d(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Transform2D& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Variant& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Vector2& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_vector2_color_bool_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Vector2& arg1,
    const Color& arg2,
    bool arg3,
    const Object* arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)(arg4) ? arg4->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_vector2_string_color_int_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Vector2& arg1,
    const String& arg2,
    const Color& arg3,
    int64_t arg4,
    const Color& arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_vector2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Vector2& arg1,
    const Vector2& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_vector2_vector2_color_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Vector2& arg1,
    const Vector2& arg2,
    const Color& arg3,
    double arg4,
    bool arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_vector2_float_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Vector2& arg1,
    double arg2,
    const Color& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Vector3& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_vector3_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    const Vector3& arg1,
    const Vector3& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    bool arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_bool_color_color_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    bool arg1,
    const Color& arg2,
    const Color& arg3,
    double arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_bool_rect2(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    bool arg1,
    const Rect2& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_bool_float_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    bool arg1,
    double arg2,
    double arg3,
    double arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_bool_float_float_float_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    bool arg1,
    double arg2,
    double arg3,
    double arg4,
    const RID& arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_bool_float_float_float_bool_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    bool arg1,
    double arg2,
    double arg3,
    double arg4,
    bool arg5,
    double arg6
) {
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_bool_float_float_float_float_float_float_float_color_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    bool arg1,
    double arg2,
    double arg3,
    double arg4,
    double arg5,
    double arg6,
    double arg7,
    double arg8,
    const Color& arg9,
    int64_t arg10,
    int64_t arg11,
    double arg12
) {
    const void* args[13] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7,
        (void*)&arg8,
        (void*)&arg9,
        (void*)&arg10,
        (void*)&arg11,
        (void*)&arg12
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_bool_float_float_float_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    bool arg1,
    double arg2,
    double arg3,
    double arg4,
    int64_t arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_bool_int_float_float_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    bool arg1,
    int64_t arg2,
    double arg3,
    double arg4,
    double arg5,
    bool arg6
) {
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_bool_int_float_float_float_int_float_float_float_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    bool arg1,
    int64_t arg2,
    double arg3,
    double arg4,
    double arg5,
    int64_t arg6,
    double arg7,
    double arg8,
    double arg9,
    bool arg10,
    bool arg11
) {
    const void* args[12] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7,
        (void*)&arg8,
        (void*)&arg9,
        (void*)&arg10,
        (void*)&arg11
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    double arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_float_vector2_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    double arg1,
    const Vector2& arg2,
    double arg3,
    double arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_float_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    double arg1,
    double arg2,
    double arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_float_float_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    double arg1,
    double arg2,
    double arg3,
    double arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_array_array_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    const Array& arg2,
    const Array& arg3,
    int64_t arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    const Color& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_rid(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    const RID& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_transform(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    const Transform& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_transform2d(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    const Transform2D& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    const Variant& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_bool_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    bool arg2,
    double arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    double arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_float_float_bool_float_float_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    double arg2,
    double arg3,
    bool arg4,
    double arg5,
    double arg6,
    double arg7,
    double arg8
) {
    const void* args[9] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7,
        (void*)&arg8
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_int_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    int64_t arg2,
    const PoolByteArray& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    int64_t arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    int64_t arg2,
    double arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rid_int_int_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const RID& arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4,
    int64_t arg5,
    int64_t arg6
) {
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rect2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Rect2& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rect2_color_bool_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Rect2& arg0,
    const Color& arg1,
    bool arg2,
    double arg3,
    bool arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_rect2_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Rect2& arg0,
    bool arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_array(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Array& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_array_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Array& arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Color& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_color_bool_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Color& arg1,
    bool arg2,
    bool arg3,
    bool arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_dictionary(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Dictionary& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_nodepath_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const NodePath& arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_object_object_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    const Object* arg2,
    const Variant& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_object_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    const Object* arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_object_object_int_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    const Object* arg2,
    int64_t arg3,
    const String& arg4,
    const Variant& arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_object_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    const String& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_object_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    const String& arg2,
    const Variant& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_object_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    const Vector2& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_object_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_object_bool_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    bool arg2,
    const Color& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Object* arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_poolbytearray_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const PoolByteArray& arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_poolstringarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const PoolStringArray& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_poolstringarray_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const PoolStringArray& arg1,
    const Object* arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const Color& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_color_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const Color& arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const Object* arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_object_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const Object* arg2,
    const Object* arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)(arg3) ? arg3->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_poolstringarray(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const PoolStringArray& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const String& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const Variant& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_variant_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    const Variant& arg2,
    const Variant& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    bool arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    double arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const String& arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Variant& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_variant_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Variant& arg1,
    const String& arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_variant_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Variant& arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    const Vector2& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_bool_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    bool arg1,
    const Object* arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    double arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_float_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    double arg1,
    double arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_float_float_bool_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    double arg1,
    double arg2,
    bool arg3,
    double arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    const Object* arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int_object_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    const Object* arg2,
    const Vector2& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int_string(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    const String& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    const String& arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int_string_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    const String& arg2,
    int64_t arg3,
    double arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    const Vector2& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int_float_int_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    double arg2,
    int64_t arg3,
    const Object* arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)(arg4) ? arg4->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_string_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const String& arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_transform(
    rebel_method_bind* method_bind,
    const Object* object,
    const Transform& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_transform2d(
    rebel_method_bind* method_bind,
    const Object* object,
    const Transform2D& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_transform2d_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Transform2D& arg0,
    const Vector2& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_variant_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0,
    const Object* arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_variant_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0,
    const Variant& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_variant_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Variant& arg0,
    bool arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Color& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_dictionary(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Dictionary& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Variant& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_variant_object(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Variant& arg1,
    const Object* arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_vector2_color_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    const Color& arg2,
    double arg3,
    bool arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_vector2_vector2_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    const Vector2& arg1,
    const Vector2& arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    bool arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    double arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_float_color(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    double arg1,
    const Color& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_float_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    double arg1,
    const Vector2& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_float_float_float_int_color_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    double arg1,
    double arg2,
    double arg3,
    int64_t arg4,
    const Color& arg5,
    double arg6,
    bool arg7
) {
    const void* args[8] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)&arg7
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    int64_t arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector2_int_bool_bool_bool_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector2& arg0,
    int64_t arg1,
    bool arg2,
    bool arg3,
    bool arg4,
    const Vector2& arg5
) {
    const void* args[6] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector3_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector3_vector3_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    const Vector3& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector3_vector3_vector3_int(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    const Vector3& arg1,
    const Vector3& arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_vector3_float(
    rebel_method_bind* method_bind,
    const Object* object,
    const Vector3& arg0,
    double arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_bool_vector2_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0,
    const Vector2& arg1,
    const Vector2& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0,
    bool arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_bool_bool_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0,
    bool arg1,
    int64_t arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_bool_float(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0,
    double arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_bool_int(
    rebel_method_bind* method_bind,
    const Object* object,
    bool arg0,
    int64_t arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_float_color(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    const Color& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_float_vector2_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    const Vector2& arg1,
    double arg2,
    double arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    bool arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_float_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    double arg1,
    double arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_float_float_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    double arg0,
    double arg1,
    double arg2,
    double arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0
) {
    const void* args[1] = {
        (void*)&arg0
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_array(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Array& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_array_array_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Array& arg1,
    const Array& arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_color(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Color& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_color_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Color& arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_nodepath(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const NodePath& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_object(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Object* arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_object_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Object* arg1,
    const String& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_object_transform2d_bool_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Object* arg1,
    const Transform2D& arg2,
    bool arg3,
    const Vector2& arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_object_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Object* arg1,
    const Vector2& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_object_vector2_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Object* arg1,
    const Vector2& arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_object_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Object* arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_object_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Object* arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_object_int_bool_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Object* arg1,
    int64_t arg2,
    bool arg3,
    const String& arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)(arg1) ? arg1->owner : nullptr,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_plane(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Plane& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_poolintarray(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const PoolIntArray& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_poolrealarray(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const PoolRealArray& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_poolvector2array(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const PoolVector2Array& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_rid_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const RID& arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_rect2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Rect2& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1,
    const String& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_string_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1,
    const String& arg2,
    const String& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_string_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1,
    const String& arg2,
    const Variant& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_string_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1,
    const Variant& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_string_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const String& arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_transform(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Transform& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_transform_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Transform& arg1,
    double arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_transform2d(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Transform2D& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Variant& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_variant_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Variant& arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Vector2& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_vector2_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Vector2& arg1,
    double arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_vector2_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Vector2& arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_vector3(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Vector3& arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_vector3_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    const Vector3& arg1,
    double arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    bool arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_bool_nodepath(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    bool arg1,
    const NodePath& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_bool_string_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    bool arg1,
    const String& arg2,
    const String& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_bool_bool_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    bool arg1,
    bool arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_bool_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    bool arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_bool_int_color_bool_int_color_object_object(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    bool arg1,
    int64_t arg2,
    const Color& arg3,
    bool arg4,
    int64_t arg5,
    const Color& arg6,
    const Object* arg7,
    const Object* arg8
) {
    const void* args[9] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6,
        (void*)(arg7) ? arg7->owner : nullptr,
        (void*)(arg8) ? arg8->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_float_variant_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    const Variant& arg2,
    double arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_float_bool_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    bool arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_float_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    double arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_float_float_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    double arg2,
    double arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_float_float_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    double arg1,
    double arg2,
    double arg3,
    bool arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1
) {
    const void* args[2] = {
        (void*)&arg0,
        (void*)&arg1
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_color(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const Color& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_object(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const Object* arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)(arg2) ? arg2->owner : nullptr
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const PoolByteArray& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_poolstringarray_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const PoolStringArray& arg2,
    const PoolByteArray& arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_rect2_vector2_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const Rect2& arg2,
    const Vector2& arg3,
    double arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_string(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const String& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_transform2d(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const Transform2D& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_variant(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const Variant& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const Vector2& arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_vector2_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    const Vector2& arg2,
    double arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    bool arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_bool_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    bool arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_bool_int_poolbytearray(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    bool arg2,
    int64_t arg3,
    const PoolByteArray& arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_float(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    double arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_float_bool(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    double arg2,
    bool arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    int64_t arg2
) {
    const void* args[3] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_int_bool_bool_bool_vector2(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    int64_t arg2,
    bool arg3,
    bool arg4,
    bool arg5,
    const Vector2& arg6
) {
    const void* args[7] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4,
        (void*)&arg5,
        (void*)&arg6
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3
) {
    const void* args[4] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}

inline static void rebel_icall_void_int_int_int_int_int(
    rebel_method_bind* method_bind,
    const Object* object,
    int64_t arg0,
    int64_t arg1,
    int64_t arg2,
    int64_t arg3,
    int64_t arg4
) {
    const void* args[5] = {
        (void*)&arg0,
        (void*)&arg1,
        (void*)&arg2,
        (void*)&arg3,
        (void*)&arg4
    };
    api->rebel_method_bind_ptrcall(method_bind, object->owner, args, nullptr);
}
} // namespace Rebel

#endif // REBEL_ICALLS_H
