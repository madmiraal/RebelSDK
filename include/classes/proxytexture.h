// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PROXYTEXTURE_H
#define REBEL_PROXYTEXTURE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/texture.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class ProxyTexture : public Texture {
public:
    Ref<Texture> get_base() const;
    void set_base(const Ref<Texture> base);

    static ProxyTexture* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "ProxyTexture";
    }

    inline static const char* get_rebel_class_name() {
        return "ProxyTexture";
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
        rebel_method_bind* mb_get_base;
        rebel_method_bind* mb_set_base;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PROXYTEXTURE_H
