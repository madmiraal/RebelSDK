// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_AESCONTEXT_H
#define REBEL_AESCONTEXT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AESContext : public Reference {
public:
    enum Mode {
        MODE_ECB_ENCRYPT = 0,
        MODE_ECB_DECRYPT = 1,
        MODE_CBC_ENCRYPT = 2,
        MODE_CBC_DECRYPT = 3,
        MODE_MAX = 4,
    };

    void finish();
    PoolByteArray get_iv_state();
    Error start(const int64_t mode, const PoolByteArray key, const PoolByteArray iv = PoolByteArray());
    PoolByteArray update(const PoolByteArray src);

    static AESContext* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AESContext";
    }

    inline static const char* get_rebel_class_name() {
        return "AESContext";
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
        rebel_method_bind* mb_finish;
        rebel_method_bind* mb_get_iv_state;
        rebel_method_bind* mb_start;
        rebel_method_bind* mb_update;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_AESCONTEXT_H
