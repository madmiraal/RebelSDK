// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CSGBOX_H
#define REBEL_CSGBOX_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/csgprimitive.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Material;

class CSGBox : public CSGPrimitive {
public:
    real_t get_depth() const;
    real_t get_height() const;
    Ref<Material> get_material() const;
    real_t get_width() const;
    void set_depth(const real_t depth);
    void set_height(const real_t height);
    void set_material(const Ref<Material> material);
    void set_width(const real_t width);

    static CSGBox* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CSGBox";
    }

    inline static const char* get_rebel_class_name() {
        return "CSGBox";
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
        rebel_method_bind* mb_get_depth;
        rebel_method_bind* mb_get_height;
        rebel_method_bind* mb_get_material;
        rebel_method_bind* mb_get_width;
        rebel_method_bind* mb_set_depth;
        rebel_method_bind* mb_set_height;
        rebel_method_bind* mb_set_material;
        rebel_method_bind* mb_set_width;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CSGBOX_H
