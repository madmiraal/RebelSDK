// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CRYPTOKEY_H
#define REBEL_CRYPTOKEY_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CryptoKey : public Resource {
public:
    bool is_public_only() const;
    Error load(const String path, const bool public_only = false);
    Error load_from_string(const String string_key, const bool public_only = false);
    Error save(const String path, const bool public_only = false);
    String save_to_string(const bool public_only = false);

    static CryptoKey* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CryptoKey";
    }

    inline static const char* get_rebel_class_name() {
        return "CryptoKey";
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
        rebel_method_bind* mb_is_public_only;
        rebel_method_bind* mb_load;
        rebel_method_bind* mb_load_from_string;
        rebel_method_bind* mb_save;
        rebel_method_bind* mb_save_to_string;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CRYPTOKEY_H
